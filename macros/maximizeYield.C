#include <iostream>
#include <fstream>
#include <cmath>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h"
#include "TChain.h"
#include "TH1D.h"
#include "string"
#include "vector"

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

//// Monte Carlo

int countTotal(process &process)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  int Total = 0;
  process.GetChain()->Draw("Njet>>tmp", "XS*5000/Nevt", "goff");
  Total = int(tmp->Integral());

  delete tmp;
  process.SetNevt_nosel(Total);
  return Total;
}

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

// ERROR

int countError(TChain* chain, TCut cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  int Error = 0;
  tmp->Sumw2();
  chain->Draw("Njet>>tmp", "XS*5000/Nevt"*cut, "goff");

  for(int i=0; i<=(tmp->GetNbinsX()+1); i++)
    Error += tmp->GetBinError(i);

  delete tmp;
  return Error;
}

int countDataError(TChain* chain, TCut cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  int DataError = 0;
  tmp->Sumw2();
  chain->Draw("Njet>>tmp", cut, "goff");

  for(int i=0; i<=(tmp->GetNbinsX()+1); i++)
    DataError += tmp->GetBinError(i);

  delete tmp;
  return DataError;
}

//// Data

int countDataTotal(TChain* chain)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  // Get number of events after a cut
  int Total = 0;
  chain->Draw("Njet>>tmp","", "goff");
  Total = tmp->Integral();

  delete tmp;
  return Total;
}

int countDataEvt(TChain* chain, TCut Cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  // Get number of events after a cut
  int Evt = 0;
  chain->Draw("Njet>>tmp",Cut, "goff");
  Evt = tmp->Integral();

  delete tmp;
  return Evt;
}

int YieldMaximize(vector<process> vprocess, variable variable)
{
  int max = variable.GetXMin();
  int intervals = 10;
  double step = (variable.GetXMax() - variable.GetXMin())/intervals;
  TCut bestCut = "1";

  int BG = 0;
  int signal = 0;
  double ratio = 0;
  double tmp = 0;
  for(int i=0; i<intervals; i++)
    {
      for(int j=0; j<i; j++)
      {
        TCut cut = (variable.GetName() + ">" + std::to_string(variable.GetXMin() + j*step) + " && " + variable.GetName() + "<" + std::to_string(variable.GetXMin() + i*step)).c_str();
        cut.SetName((std::to_string(variable.GetXMin() + j*step) + "<" + variable.GetName() + "<" + std::to_string(variable.GetXMin() + i*step)).c_str());

        BG = countEvt(vprocess[0],cut) + countEvt(vprocess[1],cut);
        signal = countEvt(vprocess[2],cut);
        tmp = signal/sqrt(BG);

        if(tmp > ratio)
        	{
	          ratio = tmp;
	          bestCut = cut;
        	}
      }
    }
  std::cout << ratio << std::endl;
  std::cout << bestCut.GetName() << std::endl;
  return 0;
}


void Print(vector<process> vprocess, vector<TCut> vcut, int** matrix, int** matrixError)
{
  ofstream yieldFile;

  // Begin document
  yieldFile.open ("yield.tex");
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

  string col = "ll";
  string l1 = "Process & Total";

  for(int i=0;i<int(vcut.size());i++)
    {
     col+= "l";
     l1+= "& ";
     l1+= vcut[i].GetName();
    }

  yieldFile << "\\begin{tabular}{" << col << "}" << std::endl;
  yieldFile << "\\hline" << std::endl;

  yieldFile << l1 << "\\\\" << std::endl;
  yieldFile << "\\hline" << std::endl;

  // End document
  yieldFile << "\\end{tabular}" << std::endl;
  yieldFile << "\\caption{Yields}" << std::endl;
  yieldFile << "\\end{table}" << std::endl;
  yieldFile << "\\end{document}" << std::endl;
  
  system("pdflatex yield.tex");
  system("gnome-open yield.pdf");
}

int maximizeYield(){
  // Open input file(s)
  string basedirectory = "/lstore/cms/cbeiraod/Stop4Body/nTuples_v2016-07-12/";

  // Create chains
  TChain* wjetsChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsChain->Add((basedirectory + "Wjets_100to200_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets_200to400_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets_400to600_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets_600toInf_bdt.root").c_str());

  TChain* ttbarChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  ttbarChain->Add((basedirectory + "TTJets_LO_bdt.root").c_str());

  TChain* stopChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  stopChain->Add((basedirectory + "T2DegStop_300_270_bdt.root").c_str());

  TChain* dataChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  dataChain->Add((basedirectory + "PseudoData_bdt.root").c_str());

  vector<process> vprocess;

  process pwjets(wjetsChain,"wjets");
  process pttbar(ttbarChain,"ttbar");
  process psignal(stopChain,"signal");

  vprocess.push_back(pwjets);
  vprocess.push_back(pttbar);
  vprocess.push_back(psignal);

  // Create Variables

  variable LepPt("LepPt","LepPt",20,0,35,"p_{T} (l) [GeV]");
  variable LepEta("LepEta","LepEta",20,-3,3,"#eta (l)");
  variable Njet("Njet","Njet",11,-0.5,10.5,"Njet");
  variable Jet1Pt("Jet1Pt","Jet1Pt",20,300,500,"p_{T} (Jet1) [GeV]");
  variable Jet1Eta("Jet1Eta","Jet1Eta",20,-3,3,"Eta (Jet1)");
  variable Met("Met","Met",20,300,600,"Met [GeV]");
  variable CosDPhi("CosDeltaPhi","CosDeltaPhi",20,-1.2,1.2,"Cos(#Delta #Phi)");
  variable DrJet1Lep("DrJet1Lep","DrJet1Lep",20,0,6,"Dr Jet1 Lep");
  variable DrJet2Lep("DrJet2Lep","DrJet2Lep",20,0,6,"Dr Jet2 Lep");
  variable Jet2Pt("Jet2Pt","Jet2Pt",20,0,400,"p_{T} (Jet2) [GeV]",1);
  variable mt("mt","mt",20,0,150,"mt [GeV]");
  variable HT20("HT20","HT20",20,0,1400,"HT20 [GeV]");
  variable HT30("HT30","HT30",20,0,1400,"HT30 [GeV]");
  variable JetLepMass("JetLepMass","JetLepMass",20,0,250,"M_{Jet+Lep}");
  variable JetHBPt("JetHBpt","JetHBpt",20,0,200,"p_{T} (JetHB)");

  // Create TCuts
  TCut null = "1";
  TCut muon = "(abs(LepID)==13)&&(LepIso03<0.2)";
  TCut electron = "(abs(LepID)==11)&&(LepIso03<0.2)";
  TCut emu = muon||electron;
  TCut ISRjet = "Jet1Pt > 110";
  TCut met = "Met > 300";
  TCut njets = "Njet > 2";
  TCut lepPt = "LepPt < 17";
  TCut jethbpt = "JetHBpt < 75";

  //Set names of TCuts
  emu.SetName("emu");
  ISRjet.SetName("$p_T$(Jet1)$ > 110$");
  met.SetName("$\\cancel{E_T} > 300$");
  electron.SetName("electron");
  njets.SetName("$Njet > 2$");
  lepPt.SetName("$p_{T} (Lep) < 17$");
  jethbpt.SetName("$p_{T}$ (JetHB)");

  // Create VCut
  vector<TCut> vcut;
  //vcut.push_back(emu);
  //vcut.push_back(ISRjet*emu);
  vcut.push_back(met*ISRjet*emu);
  vcut.push_back(jethbpt*met*ISRjet*emu);
  vcut.push_back(lepPt*met*ISRjet*emu);

  int a = YieldMaximize(vprocess,mt);

  // Print
//  Print(vprocess,vcut,matrix,matrixError);

  return 0;
}
