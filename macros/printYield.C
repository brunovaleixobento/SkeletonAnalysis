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

  // Background
  for(int i=0; i<int(vprocess.size()-1); i++)
  {
    string line = vprocess[i].GetName();
    for(int j=0; j<int(vcut.size()+1); j++)
    {
      line += " & " + to_string(matrix[i][j]) + " $\\pm$ " + to_string(matrixError[i][j]);
    }
    line += " \\\\";
    yieldFile << line << std::endl;
  }

  string lineTB = "Total Background";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
    lineTB += " & " + to_string(matrix[vprocess.size()][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()][j]);
  }
  lineTB += " \\\\";
  yieldFile << lineTB << std::endl;
  yieldFile << "\\hline" << std::endl;

  // Signal
  string lineS = "Signal";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
    lineS += " & " + to_string(matrix[vprocess.size()-1][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()-1][j]);;
  }
  lineS += " \\\\";
  yieldFile << lineS << std::endl;
  yieldFile << "\\hline" << std::endl;

  // Signal + Background
  string lineT = "Signal + Background";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
    lineT += " & " + to_string(matrix[vprocess.size()+1][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()+1][j]);
  }
  lineT += " \\\\";
  yieldFile << lineT << std::endl;
  yieldFile << "\\hline" << std::endl;
  yieldFile << "\\hline" << std::endl;

  // Data
  string lineD = "Data";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
    lineD += " & " + to_string(matrix[vprocess.size()+2][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()+2][j]);
  }
  lineD += " \\\\";
  yieldFile << lineD << std::endl;
  yieldFile << "\\hline" << std::endl;


  // End document
  yieldFile << "\\end{tabular}" << std::endl;
  yieldFile << "\\caption{Yields}" << std::endl;
  yieldFile << "\\end{table}" << std::endl;
  yieldFile << "\\end{document}" << std::endl;
  
  system("pdflatex yield.tex");
  system("gnome-open yield.pdf");
}

int printYield(){
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

  //Create TCuts
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

  // Create matrix
  int** matrix = new int*[vprocess.size()+3];
  for(int i=0; i<int(vprocess.size()+3); i++)
    matrix[i] = new int[vcut.size()+1];

  int** matrixError = new int*[vprocess.size()+3];
  for(int i=0; i<int(vprocess.size()+3); i++)
    matrixError[i] = new int[vcut.size()+1];

  // Total
  for(int i=0;i<int(vprocess.size());i++)
    {
      matrix[i][0] = countTotal(vprocess[i]);
      matrixError[i][0] = countError(vprocess[i].GetChain(), null);
    }

  // Processes
  for(int i=0; i<int(vprocess.size()); i++)
    {
      for(int j=0;j<int(vcut.size());j++)
      {
        matrix[i][j+1] = countEvt(vprocess[i],vcut[j]);
        matrixError[i][j+1] = countError(vprocess[i].GetChain(),vcut[j]);
      }
    }

  // Total Background & Signal + Background
  for(int j=0; j<int(vcut.size()+1); j++)
    {
      matrix[vprocess.size()][j] = 0;
      matrix[vprocess.size()+1][j] = 0;

      matrixError[vprocess.size()][j] = 0;
      matrixError[vprocess.size()+1][j] = 0;

      double tmp=0;

      for(int i=0; i<int(vprocess.size()-1); i++)
      {
        matrix[vprocess.size()][j] += matrix[i][j];
        tmp += matrixError[i][j]*matrixError[i][j];
      }

      matrixError[vprocess.size()][j] = sqrt(tmp);

      double tmp1 = matrixError[vprocess.size()][j];
      double tmp2 = matrixError[vprocess.size()-1][j];

      matrix[vprocess.size()+1][j] = matrix[vprocess.size()][j] + matrix[vprocess.size()-1][j];
      matrixError[vprocess.size()+1][j] = sqrt(tmp1*tmp1 + tmp2*tmp2);
    }

  // Data
  matrix[vprocess.size()+2][0] = countDataTotal(dataChain);
  matrixError[vprocess.size()+2][0] = countDataError(dataChain, null);
  for(int j=0; j<int(vcut.size()); j++)
    {
      matrix[vprocess.size()+2][j+1] = countDataEvt(dataChain, vcut[j]);
      matrixError[vprocess.size()+2][j+1] = countDataError(dataChain, vcut[j]);
    }

  // Print
  Print(vprocess,vcut,matrix,matrixError);

  return 0;
}
