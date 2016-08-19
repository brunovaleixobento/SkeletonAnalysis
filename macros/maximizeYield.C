#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <sstream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h"
#include "TChain.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TGraphErrors.h"
#include "string"
#include "vector"

using std::string;

string fileName =  "PCA9303D";
string directory = "PCA9303/";
string basedirectory = "/home/t3cms/brucms16/CMSSW_8_0_14/src/UserCode/SkeletonAnalysis/macros/bdtFiles/" + fileName + "/";

string to_string_with_precision(double a_value, int n = 3)
  {
    std::ostringstream out;
    out << std::setprecision(n) << a_value;
    return out.str();
  }

class variable{

public:

  variable(string name="", string expression = "", int bins=30, double xmin=0, double xmax=100, string leg = "", int Logy=0, int Side=2);

  string GetName() {return fname;}
  string GetExpression() {return fexpression;}
  int GetBins() {return fbins;}
  double GetXMin() {return fxmin;}
  double GetXMax() {return fxmax;}
  string GetLeg() {return fleg;}
  int GetLogy() {return fLogy;}
  int GetSide() {return fSide;}

  void SetName(string name) {fname=name;}
  void SetExpression(string expression) {fexpression=expression;}
  void SetBins(int bins) {fbins=bins;}
  void SetXMin(double xmin) {fxmin=xmin;}
  void SetXMax(double xmax) {fxmax=xmax;}
  void SetLeg(string leg) {fleg=leg;}

private:

  string fname;
  string fexpression;
  int    fbins;
  double fxmin;
  double fxmax;
  string fleg;
  int fLogy;
  int fSide;
};

variable::variable(string name, string expression, int bins, double xmin, double xmax, string leg, int Logy, int Side): fname(name), fexpression(expression), fbins(bins), fxmin(xmin), fxmax(xmax), fleg(leg), fLogy(Logy), fSide(Side) {}

class process{
public:
  process(TChain* chain, string name=""):fchain(chain),fname(name),Nevt(0),Nexp_nosel(0),Nexp_sel(0)
  {fselection = "";}

  string GetName() {return fname;}
  TChain* GetChain() {return fchain;}
  int GetNevt() {return Nevt;}
  int GetNexp_nosel() {return Nexp_nosel;}
  int GetNexp_sel() {return Nexp_sel;}
  string GetSelection() {return fselection;}

  void SetNevt_nosel(int evt_nosel) {Nexp_nosel = evt_nosel;}
  void SetNevt_sel(int evt_sel) {Nexp_sel = evt_sel;}
  void SetSelection(string selection) {fselection = selection;}

private:
  TChain* fchain;
  string fname;
  string fselection;
  int Nevt;
  int Nexp_nosel;
  int Nexp_sel;
};

//// Monte Carlo

double countTotal(process &process)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  double Total = 0;
  process.GetChain()->Draw("Njet>>tmp", "XS*10000/Nevt", "goff");

  for(int i=0; i<=(tmp->GetNbinsX()+1); i++)
    Total += tmp->GetBinContent(i);

  delete tmp;
  process.SetNevt_nosel(Total);
  return Total;
}

double countEvt(process &process, TCut Cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  // Get number of events after a cut
  double Sel = 0;
  process.GetChain()->Draw("Njet>>tmp","XS*10000/Nevt"*Cut, "goff");

  for(int i=0; i<=(tmp->GetNbinsX()+1); i++)
    Sel += tmp->GetBinContent(i);

  delete tmp;
  process.SetSelection(Cut.GetName());
  process.SetNevt_sel(Sel);
  return Sel;
}

// ERROR

double countError(TChain* chain, TCut cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  double Error = 0;
  tmp->Sumw2();
  chain->Draw("Njet>>tmp", "XS*10000/Nevt"*cut, "goff");

  for(int i=0; i<=(tmp->GetNbinsX()+1); i++)
    Error += tmp->GetBinError(i);

  delete tmp;
  return Error;
}

void YieldMaximize(vector<process> vprocess, variable variable, TCut initial_cut, ofstream &yieldFile, double* &xpointsR, double* &ypointsR, double* &errorR, double* xpointsL, double* &ypointsL, double* &errorL, int side)
{
  int max = variable.GetXMin();
  int intervals = variable.GetBins();
  double step = (variable.GetXMax() - variable.GetXMin())/intervals;
  TCut bestCut = "1";
  TCut bestCutL = "1";
  TCut bestCutR = "1";

  double BG = 0;
  double signal = 0;

  double BGfL = 0, BGfR = 0;
  double SfL = 0, SfR = 0;

  double ratio = 0;
  double ratioR = 0;
  double ratioL = 0;

  double ratio_Error = 0;
  double ratioR_Error = 0;
  double ratioL_Error = 0;

  double f = 0.2;
  double tmp = 0;
  double tmp1 = 0, tmp2 = 0;

  double wjets1, wjets2, wjets3, wjets4, ttbar;

  if(side == 0 || side == 2)
  {
    for(int i=0; i<intervals; i++)
    {
        BG = 0;
        TCut cut = (variable.GetExpression() + "<" + std::to_string(variable.GetXMin() + i*step)).c_str();
        cut.SetName((variable.GetExpression() + " $<$ " + to_string_with_precision(variable.GetXMin() + i*step, 3)).c_str());

        for(int i=0; i<vprocess.size()-1; i++)
           BG += countEvt(vprocess[i],cut*initial_cut);

        signal = countEvt(vprocess[5],cut*initial_cut);
//      tmp = signal/sqrt(BG+f*f*BG*BG);
        tmp1 = (signal + BG)*log(((signal+BG)*(BG+f*f*BG*BG))/(BG*BG+(signal + BG)*f*f*BG*BG));
        tmp2 = (1/(f*f))*log(1 + (f*f*BG*BG*signal)/(BG*(BG+f*f*BG*BG)));
        tmp = sqrt(2*(tmp1-tmp2));

        double tmp_error = 0, nB1, nB21, nB22, nB23, nB, d, eB, eS, Log1, Log2;
//      tmp_error = 1/(BG+f*f*BG*BG) + (signal*signal*(1+2*f*f*BG)*(1+2*f*f*BG))/(4*(BG+f*f*BG*BG)*(BG+f*f*BG*BG)*(BG+f*f*BG*BG));
        Log1 = log(((1+0.04*BG)*(BG+signal))/(BG+0.04*BG*(BG+signal)));
        Log2 = -25*log(1+(0.04*signal)/(1+0.04*BG));
        d = sqrt(Log2 + (BG*signal)*Log1);
        eS = signal*Log1/(sqrt(2)*d);

        nB1 = (0.04*signal)/(pow(1+0.04*BG,2)*(1+0.04*signal/(1+0.04*BG)));
        nB21 = -((1+0.04*BG)*(BG+signal)*(1+0.04*BG+0.04*(BG+signal)))/pow(BG+0.04*BG*(BG+signal),2);
        nB22 = (1+0.04*BG)/(BG+0.04*BG*(BG+signal));
        nB23 = (0.04*(BG+signal))/(BG+0.04*BG*(BG+signal));
        nB = nB1+((BG+0.04*BG*(BG+signal))*(nB21+nB22+nB23))/(1+0.04*BG)+Log1;
        eB = BG*nB/d;

        tmp_error = eS*eS + eB*eB;
        tmp_error = sqrt(tmp_error);

        xpointsL[i] = variable.GetXMin() + i*step;

        if(BG != 0)
        {
            ypointsL[i] = tmp;
            errorL[i] = tmp_error;
        }
        else
        {
            ypointsL[i] = 0;
            errorL[i] = 0;
        }

        if(ypointsL[i] > ratio)
        	{
        	  BGfL = BG;
        	  SfL = signal;
	          ratioL = tmp;
	          bestCutL = cut;
	          ratioL_Error = tmp_error;
        	}
      }
    }

  if(side == 1 || side == 2)
  {
    for(int i=0; i<intervals; i++)
    {
        BG = 0;
        TCut cut = (variable.GetExpression() + ">" + std::to_string(variable.GetXMin() + i*step)).c_str();
        cut.SetName((variable.GetExpression() + " $>$ " + to_string_with_precision(variable.GetXMin() + i*step, 3)).c_str());

        for(int i=0; i<vprocess.size()-1; i++)
           BG += countEvt(vprocess[i],cut*initial_cut);

        signal = countEvt(vprocess[5],cut*initial_cut);
//        tmp = signal/sqrt(BG+0.2*0.2*BG*BG);
        tmp1 = (signal + BG)*log(((signal+BG)*(BG+f*f*BG*BG))/(BG*BG+(signal + BG)*f*f*BG*BG));
        tmp2 = (1/(f*f))*log(1 + (f*f*BG*BG*signal)/(BG*(BG+f*f*BG*BG)));
        tmp = sqrt(2*(tmp1-tmp2));


       // double tmp_error = 0;
       // tmp_error = 1/(BG+f*f*BG*BG) + (signal*signal*(1+2*f*f*BG)*(1+2*f*f*BG))/(4*(BG+f*f*BG*BG)*(BG+f*f*BG*BG)*(BG+f*f*BG*BG));
       // tmp_error = sqrt(abs(tmp_error));

        double tmp_error = 0, nB1, nB21, nB22, nB23, nB, d, eB, eS, Log1, Log2;
     //        tmp_error = 1/(BG+f*f*BG*BG) + (signal*signal*(1+2*f*f*BG)*(1+2*f*f*BG))/(4*(BG+f*f*BG*BG)*(BG+f*f*BG*BG)*(BG+f*f*BG*BG));
      Log1 = log(((1+0.04*BG)*(BG+signal))/(BG+0.04*BG*(BG+signal)));
      Log2 = -25*log(1+(0.04*signal)/(1+0.04*BG));
      d = sqrt(Log2 + (BG*signal)*Log1);
      eS = signal*Log1/(sqrt(2)*d);

      nB1 = (0.04*signal)/(pow(1+0.04*BG,2)*(1+0.04*signal/(1+0.04*BG)));
      nB21 = -((1+0.04*BG)*(BG+signal)*(1+0.04*BG+0.04*(BG+signal)))/pow(BG+0.04*BG*(BG+signal),2);
      nB22 = (1+0.04*BG)/(BG+0.04*BG*(BG+signal));
      nB23 = (0.04*(BG+signal))/(BG+0.04*BG*(BG+signal));
      nB = nB1+((BG+0.04*BG*(BG+signal))*(nB21+nB22+nB23))/(1+0.04*BG)+Log1;
      eB = BG*nB/d;

      tmp_error = eS*eS + eB*eB;
      tmp_error = sqrt(tmp_error);



        xpointsR[i] = variable.GetXMin() + i*step;

        if(BG != 0)
        {
            ypointsR[i] = tmp;
            errorR[i] = tmp_error;
        }
        else
        {
            ypointsR[i] = 0;
            errorR[i] = 0;
        }

        if(ypointsR[i] > ratioR)
        	{
        	  BGfR = BG;
        	  SfR = signal;
	          ratioR = tmp;
	          bestCutR = cut;
            ratioR_Error = tmp_error;
        	}
      }
  }

  if(ratioR > ratioL)
    {
      BG = BGfR;
      signal = SfR;
      bestCut = bestCutR;
      ratio = ratioR;
      ratio_Error = ratioR_Error;
    }
  else
    {
      BG = BGfL;
      signal = SfL;
      bestCut = bestCutL;
      ratio = ratioL;
      ratio_Error = ratioL_Error;
    }

      wjets1 = countEvt(vprocess[0],bestCut);
      wjets2 = countEvt(vprocess[1],bestCut);
      wjets3 = countEvt(vprocess[2],bestCut);
      wjets4 = countEvt(vprocess[3],bestCut);
      ttbar = countEvt(vprocess[4], bestCut);

  std::cout << bestCut << std::endl;
  yieldFile << variable.GetName() << " & " << bestCut.GetName() << " & " << std::setprecision(3) << ratio << " $\\pm$ " << std::setprecision(3) << abs(ratio_Error) << "&" << signal << "&" << wjets1 << "&" << wjets2 << "&" << wjets3 << "&" << wjets4 << "&" << ttbar << "\\\\" << std::endl;
}

void GetFOM(vector<process> vprocess, TCut cut)
{
  cout.setf(ios::floatfield, ios::fixed);
  cout << setprecision(2);

  double wjets1, wjets2, wjets3, wjets4, ttbar;

      wjets1 = countEvt(vprocess[0],cut);
      wjets2 = countEvt(vprocess[1],cut);
      wjets3 = countEvt(vprocess[2],cut);
      wjets4 = countEvt(vprocess[3],cut);
      ttbar = countEvt(vprocess[4], cut);

  double f = 0.2;
  double BG = wjets1 + wjets2 + wjets3 + wjets4 + ttbar;
  double signal = countEvt(vprocess[5],cut);

  double tmp = 0, tmp1 = 0, tmp2 = 0;

  if(BG==0)
    std::cout << "B = 0 and S = " << signal << std::endl;
  else
  {

//  double tmp = signal/sqrt(BG+f*f*BG*BG);
//  double tmp = 2*(sqrt(signal+BG)-sqrt(BG));
    tmp1 = (signal + BG)*log(((signal+BG)*(BG+f*f*BG*BG))/(BG*BG+(signal + BG)*f*f*BG*BG));
    tmp2 = (1/(f*f))*log(1 + (f*f*BG*BG*signal)/(BG*(BG+f*f*BG*BG)));
    tmp = sqrt(2*(tmp1-tmp2));

    std::cout << "BG: " << BG << std::endl;
    std::cout << "signal: " << signal << std::endl;

//  double tmp_error = 0;
//  tmp_error = signal/(signal + BG) + (1/sqrt(signal + BG) - 1/sqrt(BG))*(1/sqrt(signal + BG) - 1/sqrt(BG))*BG;
//  tmp_error = 1/(BG+f*f*BG*BG) + (signal*signal*(1+2*f*f*BG)*(1+2*f*f*BG))/(4*(BG+f*f*BG*BG)*(BG+f*f*BG*BG)*(BG+f*f*BG*BG));
//  tmp_error = sqrt(abs(tmp_error));

     double tmp_error = 0, nB1, nB21, nB22, nB23, nB, d, eB, eS, Log1, Log2;
     //        tmp_error = 1/(BG+f*f*BG*BG) + (signal*signal*(1+2*f*f*BG)*(1+2*f*f*BG))/(4*(BG+f*f*BG*BG)*(BG+f*f*BG*BG)*(BG+f*f*BG*BG));
     Log1 = log(((1+0.04*BG)*(BG+signal))/(BG+0.04*BG*(BG+signal)));
     Log2 = -25*log(1+(0.04*signal)/(1+0.04*BG));
     d = sqrt(Log2 + (BG*signal)*Log1);
     eS = signal*Log1/(sqrt(2)*d);

     nB1 = (0.04*signal)/(pow(1+0.04*BG,2)*(1+0.04*signal/(1+0.04*BG)));
     nB21 = -((1+0.04*BG)*(BG+signal)*(1+0.04*BG+0.04*(BG+signal)))/pow(BG+0.04*BG*(BG+signal),2);
     nB22 = (1+0.04*BG)/(BG+0.04*BG*(BG+signal));
     nB23 = (0.04*(BG+signal))/(BG+0.04*BG*(BG+signal));
     nB = nB1+((BG+0.04*BG*(BG+signal))*(nB21+nB22+nB23))/(1+0.04*BG)+Log1;
     eB = BG*nB/d;

     tmp_error = eS*eS + eB*eB;
     tmp_error = sqrt(tmp_error);

     std::cout << tmp << " +/- " << tmp_error << std::endl;
     std::cout << wjets1 << "   " << wjets2 << "   " << wjets3 << "   " << wjets4 <<  std::endl;
     std::cout << ttbar << std::endl;
  }
}

void StartPrint(vector<process> vprocess, ofstream &yieldFile)
{
  yieldFile.open((fileName + ".tex").c_str());
  yieldFile << "\\documentclass{article}" << std::endl;
//  yieldFile << "\\usepackage[utf8]{inputenc}" << std::endl;
  yieldFile << "\\usepackage{cancel}" << std::endl;
  yieldFile << "\\title{CMS SUMMER 2016}" << std::endl;
  yieldFile << "\\author{Beatriz Lopes &  Bruno Valeixo Bento}" << std::endl;
  yieldFile << "\\date{July 2016}" << std::endl;
  yieldFile << "\\begin{document}" << std::endl;
  yieldFile << "\\maketitle" << std::endl;

  // Create table
  yieldFile << "\\begin{table}[!h]" << std::endl;
  yieldFile << "\\centering" << std::endl;

  string col = "lllllllll";
  string l1 = "Variable & Cut & FOM & Signal & Wjets1 & Wjets2 & Wjets3 & Wjets4 & ttbar";

//  yieldFile << "\\scalebox{0.5}{" << std::endl;
  yieldFile << "\\begin{tabular}{" << col << "}" << std::endl;
  yieldFile << "\\hline" << std::endl;

  yieldFile << l1 << "\\\\" << std::endl;
  yieldFile << "\\hline" << std::endl;
}

void EndPrint(ofstream &yieldFile)
{
  yieldFile << "\\hline" << std::endl;

  // End document
  yieldFile << "\\end{tabular}" << std::endl;
  yieldFile << "\\caption{FOM}" << std::endl;
  yieldFile << "\\end{table}" << std::endl;
  yieldFile << "\\end{document}" << std::endl;

  system(("pdflatex " + fileName + ".tex").c_str());
  system(("gnome-open " + fileName + ".pdf").c_str());
}

int maximizeYield(){
  // Open input file(s)
//  string basedirectory = "~cbeiraod/local-area/Stop4Body/NodeSizeScan/SET9003/";

  // Create chains
  TChain* wjetsChain1 = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsChain1->Add((basedirectory + "Wjets_100to200_bdt.root").c_str());

  TChain* wjetsChain2 = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsChain2->Add((basedirectory + "Wjets_200to400_bdt.root").c_str());

  TChain* wjetsChain3 = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsChain3->Add((basedirectory + "Wjets_400to600_bdt.root").c_str());

  TChain* wjetsChain4 = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsChain4->Add((basedirectory + "Wjets_600toInf_bdt.root").c_str());

  TChain* ttbarChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  ttbarChain->Add((basedirectory + "TTJets_LO_bdt.root").c_str());

  TChain* stopChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  stopChain->Add((basedirectory + "T2DegStop_300_270_bdt.root").c_str());

  TChain* dataChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  dataChain->Add((basedirectory + "PseudoData_bdt.root").c_str());

  vector<process> vprocess;

  process pwjets1(wjetsChain1,"wjets1");
  process pwjets2(wjetsChain2,"wjets2");
  process pwjets3(wjetsChain3,"wjets3");
  process pwjets4(wjetsChain4,"wjets4");

  process pttbar(ttbarChain,"ttbar");
  process psignal(stopChain,"signal");

  vprocess.push_back(pwjets1);
  vprocess.push_back(pwjets2);
  vprocess.push_back(pwjets3);
  vprocess.push_back(pwjets4);
  vprocess.push_back(pttbar);
  vprocess.push_back(psignal);

  // Create Variables

  vector<variable> vvariable;

  variable LepPt("$p_{T}$ (Lep)","LepPt",20,0,35,"p_{T} (l) [GeV]",0,0);
  variable LepEta("LepEta","LepEta",20,-3,3,"#eta (l)");
  variable Njet("Njet","Njet",11,-0.5,10.5,"Njet");
  variable Jet1Pt("$p_{T} (Jet1)$","Jet1Pt",20,300,1000,"p_{T} (Jet1) [GeV]",0,1);
  variable Jet1Eta("Jet1Eta","Jet1Eta",20,-3,3,"Eta (Jet1)");
  variable Met("$\\cancel{E_T}$","Met",20,300, 1000,"Met [GeV]",0,1);
  variable CosDPhi("$\\cos(\\Delta\\phi)$","CosDeltaPhi",20,-1.2,1.2,"Cos(#Delta #Phi)",0,0);
  variable DrJet1Lep("$\\Delta R$ (Jet1Lep)","DrJet1Lep",10,0,6,"Dr Jet1 Lep");
  variable DrJet2Lep("$\\Delta R$ (Jet2Lep)","DrJet2Lep",10,0,6,"Dr Jet2 Lep");
  variable Jet2Pt("$p_{T}$ (Jet2)","Jet2Pt",20,0,400,"p_{T} (Jet2) [GeV]",1);
  variable mt("$m_T$","mt",20,0,300,"mt [GeV]",0,2);
  variable HT20("$H_{T}$ (20)","HT20",20,0,1400,"HT20 [GeV]",0,1);
  variable HT30("HT30","HT30",20,0,1400,"HT30 [GeV]");
  variable JetLepMass("JetLepMass","JetLepMass",20,0,250,"M_{Jet+Lep}");
  variable JetHBPt("$p_{T}$ (JetHB)","JetHBpt",20,0,1000,"p_{T} (JetHB)");
  variable Q80("$Q_{80}$","Q80",20,-2,1,"Q80 [GeV]");
  variable BDToutput("BDT output", "BDT", 200, -1, 1, "BDT output",0,1);

//  vvariable.push_back(LepPt);
//  vvariable.push_back(Jet1Pt);
//  vvariable.push_back(Jet2Pt);
//  vvariable.push_back(JetHBPt);
//  vvariable.push_back(HT20);
//  vvariable.push_back(Met);
//  vvariable.push_back(mt);
//  vvariable.push_back(Q80);
//  vvariable.push_back(DrJet1Lep);
//  vvariable.push_back(DrJet2Lep);
//  vvariable.push_back(CosDPhi);
  vvariable.push_back(BDToutput);

  // Create TCuts
  TCut null = "1";
  TCut muon = "nGoodMu == 1";
  TCut electron = "nGoodEl == 1";
  TCut emu = muon||electron;
  TCut ISRjet = "Jet1Pt > 110";
  TCut met = "Met > 300";
  TCut preSel = met && ISRjet && emu;

  TCut Met540 = "Met>540";
  TCut CosDeltaPhi = "CosDeltaPhi < 0.25";
  TCut mt100 = "mt > 100";
  TCut jet1Pt550 = "Jet1Pt > 550";
  TCut ht20700 = "HT20 > 700";

  //Set names of TCuts
  emu.SetName("emu");
  ISRjet.SetName("$p_T$(Jet1)$ > 110$");
  met.SetName("$\\cancel{E_T} > 300$");
  preSel.SetName("PreSelection");

  Met540.SetName("$\\cancel{E_T} > 540$");
  CosDeltaPhi.SetName("Cos($\\Delta \\phi$) < 0.25");
  mt100.SetName("$m_T$ > 100");
  jet1Pt550.SetName("$p_T$(Jet1)$ > 550");
  ht20700.SetName("$H_T$ (20) $>$ 700");

//  Create VCut
//  vector<TCut> vcut;

  TCut selection = preSel && "BDT > 0.23";
  selection.SetName("Selection");

  // Maximize

  vector<double*> xFOMR;
  vector<double*> yFOMR;
  vector<double*> eFOMR;
  vector<double*> xFOML;
  vector<double*> yFOML;
  vector<double*> eFOML;

/*  ofstream BestCuts;
  StartPrint(vprocess, BestCuts);
  for(int i=0; i<int(vvariable.size()); i++)
    {
      TCanvas *c1 = new TCanvas("FOM","FOM",800,600);
      if(vvariable[i].GetSide() == 2)
        c1->Divide(2,1);

      xFOMR.push_back(new double[vvariable[i].GetBins()]);
      yFOMR.push_back(new double[vvariable[i].GetBins()]);
      eFOMR.push_back(new double[vvariable[i].GetBins()]);
      xFOML.push_back(new double[vvariable[i].GetBins()]);
      yFOML.push_back(new double[vvariable[i].GetBins()]);
      eFOML.push_back(new double[vvariable[i].GetBins()]);

      YieldMaximize(vprocess, vvariable[i], selection, BestCuts, xFOMR[i], yFOMR[i], eFOMR[i], xFOML[i], yFOML[i], eFOML[i], vvariable[i].GetSide());

      TGraphErrors *graphL = new TGraphErrors(vvariable[i].GetBins(), xFOML[i], yFOML[i], 0, eFOML[i]);
      TGraphErrors *graphR = new TGraphErrors(vvariable[i].GetBins(), xFOMR[i], yFOMR[i], 0, eFOMR[i]);

      if(vvariable[i].GetSide() == 0 || vvariable[i].GetSide() == 2)
      {
        graphL->SetTitle((vvariable[i].GetExpression() + " < x").c_str());
        graphL->GetXaxis()->SetTitle((vvariable[i].GetExpression()).c_str());
        graphL->GetYaxis()->SetTitle("FOM");
        graphL->SetMarkerStyle(kStar);
        graphL->SetMarkerColor(4);
        gPad->SetGridy(kTRUE);
        gPad->SetGridx(kTRUE);
      }


      if(vvariable[i].GetSide() == 1 || vvariable[i].GetSide() == 2)
      {
        graphR->SetTitle((vvariable[i].GetExpression() + " > x").c_str());
        graphR->GetXaxis()->SetTitle((vvariable[i].GetExpression()).c_str());
        graphR->GetYaxis()->SetTitle("FOM");
        graphR->SetMarkerStyle(kStar);
        graphR->SetMarkerColor(4);
        gPad->SetGridy(kTRUE);
        gPad->SetGridx(kTRUE);
      }

      if(vvariable[i].GetSide() == 0)
        graphL->Draw();
      if(vvariable[i].GetSide() == 1)
        graphR->Draw();

      if(vvariable[i].GetSide() == 2)
      {
        c1->cd(1);
        graphL->Draw();
        c1->cd(2);
        graphR->Draw();
      }

      c1->SaveAs((directory + vvariable[i].GetExpression() + "_" + fileName + ".png").c_str());
      c1->SaveAs((directory + vvariable[i].GetExpression() + "_" + fileName + ".C").c_str());
//      delete c1;
//      delete graphR;
//      delete graphL;
    }
  EndPrint(BestCuts);// */

  GetFOM(vprocess, selection);

  return 0;
}

