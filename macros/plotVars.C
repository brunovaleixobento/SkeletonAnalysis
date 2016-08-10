#include <iostream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TLine.h"
#include "TStyle.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TChain.h"
#include "THStack.h"
#include "TLegend.h"
#include "TPad.h"
#include "string"
#include "TAxis.h"
#include "TCut.h"

using std::string;

class variable{

public:

  variable(string name="", string expression = "", int bins=30, double xmin=0, double xmax=100, string leg = "", int Logy=0);

  string GetName() {return fname;}
  string GetExpression() {return fexpression;}
  int GetBins() {return fbins;}
  double GetXMin() {return fxmin;}
  double GetXMax() {return fxmax;}
  string GetLeg() {return fleg;}
  int GetLogy() {return fLogy;}

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
};

variable::variable(string name, string expression, int bins, double xmin, double xmax, string leg, int Logy): fname(name), fexpression(expression), fbins(bins), fxmin(xmin), fxmax(xmax), fleg(leg), fLogy(Logy){}

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

int countEvt(process &process, TCut Cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  // Get number of events after a cut
  int Sel = 0;
  process.GetChain()->Draw("Njet>>tmp","XS*5000/Nevt"*Cut, "goff");
  Sel = tmp->Integral();

  delete tmp;
  process.SetSelection(Cut.GetName());
  process.SetNevt_sel(Sel);
  return Sel;
}

TCut FindBestParameters(vector<process> vprocess, variable cosdeltaphi, variable q80, TCut initial_cut)
{
  double a = 0, b = 0;
  int intervals = 100;
  double f = 0.2;
  double BG = 0, signal = 0, tmp = 0, tmp_error = 0;
  double FOM_a = 0, eFOM_a = 0;

  //Find best a
  b=-1;
  double step_a = 1/intervals;
  TCut BestCut_a = "1";

  for(int i=0; i<intervals;i++)
    {
      TCut cut = (q80.GetExpression() + "<" + cosdeltaphi.GetExpression() + "-" +  std::to_string(i*step_a) + "||" + q80.GetExpression() + ">" + cosdeltaphi.GetExpression() + "+" +  std::to_string(i*step_a)).c_str();

        cut.SetName((q80.GetExpression() + "<" + cosdeltaphi.GetExpression() + "-" +  std::to_string(i*step_a) + "||" + q80.GetExpression() + ">" + cosdeltaphi.GetExpression() + "+" +  std::to_string(i*step_a)).c_str());

        BG = countEvt(vprocess[0],cut*initial_cut) + countEvt(vprocess[1],cut*initial_cut);
        signal = countEvt(vprocess[2],cut*initial_cut);
        tmp = signal/sqrt(BG+f*f*BG*BG);

        tmp_error = 1/(BG+f*f*BG*BG) + (signal*signal*(1+2*f*f*BG)*(1+2*f*f*BG))/(4*(BG+f*f*BG*BG)*(BG+f*f*BG*BG)*(BG+f*f*BG*BG));
        tmp_error = sqrt(abs(tmp_error));

	if(tmp>FOM_a)
	  {
	    FOM_a = tmp;
	    eFOM_a = tmp_error;
	    BestCut_a = cut;
	    a=i*step_a;
	  }
    }
  std::cout << FOM_a << std::endl;

  //Find best b
  TCut BestCut_b = "1";
  double FOM_b = 0, eFOM_b = 0;
  double step_b = 2/intervals;

  for(int i=0; i<intervals;i++)
    {
      TCut cut = BestCut_a || (q80.GetExpression() + "<-" + cosdeltaphi.GetExpression() + "+" +  std::to_string(i*step_b)).c_str();

      //cut.SetName((BestCut_a.GetName() + "||" + q80.GetExpression() + "<-" + cosdeltaphi.GetExpression() + "+" +  std::to_string(i*step_b)).c_str());

        BG = countEvt(vprocess[0],cut*initial_cut) + countEvt(vprocess[1],cut*initial_cut);
        signal = countEvt(vprocess[2],cut*initial_cut);
        tmp = signal/sqrt(BG+f*f*BG*BG);

        tmp_error = 1/(BG+f*f*BG*BG) + (signal*signal*(1+2*f*f*BG)*(1+2*f*f*BG))/(4*(BG+f*f*BG*BG)*(BG+f*f*BG*BG)*(BG+f*f*BG*BG));
        tmp_error = sqrt(abs(tmp_error));

	if(tmp>FOM_b)
	  {
	    FOM_b=tmp;
	    eFOM_b = tmp_error;
	    BestCut_b = cut;
	  }
    }
  std::cout << FOM_b << std::endl;

  return BestCut_b;
}

int plotVars()
{
  vector<variable> vvariable;

  variable LepPt("LepPt","LepPt",20,0,35,"p_{T} (l) [GeV]");
  variable LepEta("LepEta","LepEta",20,-3,3,"#eta (l)");
  variable Njet("Njet","Njet",11,-0.5,10.5,"Njet");
  variable Jet1Pt("Jet1Pt","Jet1Pt",20,100,500,"p_{T} (Jet1) [GeV]");
  variable Jet1Eta("Jet1Eta","Jet1Eta",20,-3,3,"Eta (Jet1)");
  variable Met("Met","Met",20,300,600,"Met [GeV]");
  variable CosDPhi("CosDeltaPhi","CosDeltaPhi",20,-1,1,"Cos(#Delta #Phi)");
  variable DrJet1Lep("DrJet1Lep","DrJet1Lep",20,0,6,"Dr Jet1 Lep");
  variable DrJet2Lep("DrJet2Lep","DrJet2Lep",20,0,6,"Dr Jet2 Lep");
  variable Jet2Pt("Jet2Pt","Jet2Pt",20,0,500,"p_{T} (Jet2) [GeV]",1);
  variable mt("mt","mt",20,0,150,"mt [GeV]");
  variable HT20("HT20","HT20",20,0,1400,"HT20 [GeV]");
  variable HT30("HT30","HT30",20,0,1400,"HT30 [GeV]");
  variable Q80("Q80","Q80",40,-1,1,"Q80 [GeV]");
  variable JetLepMass("JetLepMass","JetLepMass",20,0,250,"M_{Jet+Lep}");
  variable JetHBPt("JetHBpt","JetHBpt",20,0,500,"p_{T} (JetHB)");
  variable Nbloose("NbLoose30","NbLoose30",10,0,8,"N_b loose");

//  vvariable.push_back(LepPt);
//  vvariable.push_back(LepEta);
//  vvariable.push_back(Njet);
  vvariable.push_back(Jet1Pt);
//  vvariable.push_back(Jet2Pt);
//  vvariable.push_back(Jet1Eta);
//  vvariable.push_back(Nbloose);
  vvariable.push_back(Met);
//  vvariable.push_back(DrJet1Lep);
//  vvariable.push_back(DrJet2Lep);
//  vvariable.push_back(mt);
//  vvariable.push_back(HT20);
//  vvariable.push_back(CosDPhi);
//  vvariable.push_back(Q80);
//  vvariable.push_back(HT30);
//  vvariable.push_back(JetLepMass);
//  vvariable.push_back(JetHBPt);

  // Open input file(s)
  string basedirectory = "/lstore/cms/cbeiraod/Stop4Body/LepFix/";

  TFile* ttbarFile = new TFile((basedirectory + "TTJets_LO_bdt.root").c_str(), "READ");

  TFile* stopFile = new TFile((basedirectory + "T2DegStop_300_270_bdt.root").c_str(), "READ");

  TChain* wjetsChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsChain->Add((basedirectory + "Wjets_100to200_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets_200to400_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets_400to600_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets_600toInf_bdt.root").c_str());

  // Data
  TFile* dataFile = new TFile((basedirectory + "PseudoData_bdt.root").c_str());

  // Get ttree(s) from input file(s)
  TChain* ttbarChain = new TChain("bdttree");
  ttbarChain->Add((basedirectory + "TTJets_LO_bdt.root").c_str());

  TChain* stopChain = new TChain("bdttree");
  stopChain->Add((basedirectory + "T2DegStop_300_270_bdt.root").c_str());

  //vector of processes
  vector<process> vprocess;

  process pwjets(wjetsChain,"wjets");
  process pttbar(ttbarChain,"ttbar");
  process psignal(stopChain,"signal");

  vprocess.push_back(pwjets);
  vprocess.push_back(pttbar);
  vprocess.push_back(psignal);

  // Create canvas
  TCanvas * c1 = new TCanvas("Stop","Stop", 800, 600);

  c1->Divide(2,2);

  // TH2 plot

  string sttbarH =  "ttbarH";
  string swjetsH =  "wjetsH";
  string sstopH =  "stopH";
  string sbackgroundH = "backgroundH";

  TH2D *ttbarH = new TH2D(sttbarH.c_str(), "ttbar", vvariable[0].GetBins(), vvariable[0].GetXMin(), vvariable[0].GetXMax(), vvariable[1].GetBins(), vvariable[1].GetXMin(), vvariable[1].GetXMax());
  TH2D *wjetsH = new TH2D(swjetsH.c_str(), "wjets", vvariable[0].GetBins(), vvariable[0].GetXMin(), vvariable[0].GetXMax(), vvariable[1].GetBins(), vvariable[1].GetXMin(), vvariable[1].GetXMax());
  TH2D *stopH = new TH2D(sstopH.c_str(), "Signal", vvariable[0].GetBins(), vvariable[0].GetXMin(), vvariable[0].GetXMax(), vvariable[1].GetBins(), vvariable[1].GetXMin(), vvariable[1].GetXMax());
  TH2D *backgroundH = new TH2D(sbackgroundH.c_str(), "Background", vvariable[0].GetBins(), vvariable[0].GetXMin(), vvariable[0].GetXMax(), vvariable[1].GetBins(), vvariable[1].GetXMin(), vvariable[1].GetXMax());

  ttbarH->SetFillColor(kGreen-7);
  ttbarH->SetLineColor(kGreen-7);

  wjetsH->SetFillColor(kAzure+5);
  wjetsH->SetLineColor(kAzure+5);

  stopH->SetLineColor(kRed);

  backgroundH->SetFillColor(kBlue);
  backgroundH->SetLineColor(kBlue);

  // Create Cuts

  TCut muon = "(abs(LepID)==13)&&(LepIso03<0.2)";
  TCut electron = "(abs(LepID)==11)&&(LepIso03<0.2)";
  TCut emu = muon||electron;
  TCut ISRjet = "Jet1Pt > 110";
  TCut met = "Met > 300";

  TCut MetFOM = "Met > 540";
  TCut cosDeltaPhi = "CosDeltaPhi < 0.8";
  TCut mtFOM = "mt > 100";

  TCut preSel = emu && ISRjet && met;
  preSel.SetName("PreSelection");

  TCut selection = preSel;
  selection.SetName("Selection");

  // Fill Histograms

  ttbarChain->Draw((vvariable[1].GetExpression() + ":" + vvariable[0].GetExpression() +">>"+sttbarH).c_str(),"XS*5000/Nevt"*(selection),"goff");
  wjetsChain->Draw((vvariable[1].GetExpression() + ":" + vvariable[0].GetExpression() +">>"+swjetsH).c_str(),"XS*5000/Nevt"*(selection),"goff");
  stopChain->Draw((vvariable[1].GetExpression() + ":" + vvariable[0].GetExpression() +">>"+sstopH).c_str(),"XS*5000/Nevt"*(selection),"goff");

  backgroundH->Add(ttbarH, wjetsH);

  // Draw plots
  gStyle->SetOptStat(0);

  c1->cd(1);
//  backgroundH->Draw("COLZ");
  wjetsH->Draw("COLZ");
  c1->cd(2);
  ttbarH->Draw("COLZ");
  c1->cd(3);
  stopH->Draw("COLZ");


  string Xlabel = vvariable[0].GetLeg();
  string Ylabel = vvariable[1].GetLeg();

  backgroundH->GetXaxis()->SetTitle(Xlabel.c_str());
  backgroundH->GetYaxis()->SetTitle(Ylabel.c_str());
  backgroundH->GetZaxis()->SetTitle("Evt.");
  backgroundH->GetZaxis()->SetLabelSize(0.03);
  backgroundH->GetZaxis()->SetTitleOffset(0.5);

  ttbarH->GetXaxis()->SetTitle(Xlabel.c_str());
  ttbarH->GetYaxis()->SetTitle(Ylabel.c_str());
  ttbarH->GetZaxis()->SetTitle("Evt.");
  ttbarH->GetZaxis()->SetLabelSize(0.03);
  ttbarH->GetZaxis()->SetTitleOffset(0.5);

  wjetsH->GetXaxis()->SetTitle(Xlabel.c_str());
  wjetsH->GetYaxis()->SetTitle(Ylabel.c_str());
  wjetsH->GetZaxis()->SetTitle("Evt.");
  wjetsH->GetZaxis()->SetLabelSize(0.03);
  wjetsH->GetZaxis()->SetTitleOffset(0.5);

  stopH->GetXaxis()->SetTitle(Xlabel.c_str());
  stopH->GetYaxis()->SetTitle(Ylabel.c_str());
  stopH->GetZaxis()->SetTitle("Evt.");
  stopH->GetZaxis()->SetLabelSize(0.03);
  stopH->GetZaxis()->SetTitleOffset(0.5);

  // Save file with all the plots
  c1->SaveAs(("plots/plots2D/plot2D_" + vvariable[0].GetName() + "_" + vvariable[1].GetName() + ".png").c_str());
  c1->SaveAs(("plots/plots2D/plot2D_" + vvariable[0].GetName() + "_" + vvariable[1].GetName() + ".C").c_str());

  return 0;
}

