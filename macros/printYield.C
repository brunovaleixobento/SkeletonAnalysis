#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <sstream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h"
#include "TChain.h"
#include "TH1D.h"
#include "string"
#include "vector"

using std::string;

string to_string_with_precision(double a_value, int n = 3)
  {
    std::ostringstream out;
    out << std::setprecision(n) << a_value;
    return out.str();
  }

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
  process.GetChain()->Draw("Njet>>tmp", "XS*5000/Nevt", "goff");
  Total = int(tmp->Integral());

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
  process.GetChain()->Draw("Njet>>tmp","XS*5000/Nevt"*Cut, "goff");
  Sel = tmp->Integral();

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
  chain->Draw("Njet>>tmp", "XS*5000/Nevt"*cut, "goff");

  for(int i=0; i<=(tmp->GetNbinsX()+1); i++)
    Error += tmp->GetBinError(i);

  delete tmp;
  return Error;
}

double countDataError(TChain* chain, TCut cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  double DataError = 0;
  tmp->Sumw2();
  chain->Draw("Njet>>tmp", cut, "goff");

  for(int i=0; i<=(tmp->GetNbinsX()+1); i++)
    DataError += tmp->GetBinError(i);

  delete tmp;
  return DataError;
}

//// Data

double countDataTotal(TChain* chain)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  // Get number of events after a cut
  double Total = 0;
  chain->Draw("Njet>>tmp","", "goff");
  Total = tmp->Integral();

  delete tmp;
  return Total;
}

double countDataEvt(TChain* chain, TCut Cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  // Get number of events after a cut
  double Evt = 0;
  chain->Draw("Njet>>tmp",Cut, "goff");
  Evt = tmp->Integral();

  delete tmp;
  return Evt;
}


void Print(vector<process> vprocess, vector<TCut> vcut, double** matrix, double** matrixError)
{
  ofstream yieldFile;

  string filename = "case1New";

  // Begin document
  yieldFile.open (filename + ".tex");
  yieldFile << "\\documentclass{article}" << std::endl;
//  yieldFile << "\\usepackage[utf8]{inputenc}" << std::endl;
  yieldFile << "\\usepackage{cancel}" << std::endl;
  yieldFile << "\\usepackage{geometry}" << std::endl;
  yieldFile << "\\geometry{a4paper, total={170mm,257mm}, left=20mm, top=20mm,}" << std::endl;

  yieldFile << "\\title{CMS SUMMER 2016}" << std::endl;
  yieldFile << "\\author{Beatriz Lopes &  Bruno Valeixo Bento}" << std::endl;
  yieldFile << "\\date{July 2016}" << std::endl;
  yieldFile << "\\begin{document}" << std::endl;
  yieldFile << "\\maketitle" << std::endl;

  // Create table
  yieldFile << "\\begin{table}[!h]" << std::endl;
 // yieldFile << "\\centering" << std::endl;

  string col = "ll";
  string l1 = "Process & No cut";

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

  yieldFile.setf(ios::floatfield,ios::fixed);
  yieldFile<<setprecision(2);

  // Background
  for(int i=0; i<int(vprocess.size()-1); i++)
  {
    yieldFile << vprocess[i].GetName();
    for(int j=0; j<int(vcut.size()+1); j++)
    {
      yieldFile << " & " << matrix[i][j] << " $\\pm$" << matrixError[i][j];
    }
      yieldFile << " \\\\" << std::endl;
  }

  yieldFile << "Total Background";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
//    lineTB += " & " + to_string(matrix[vprocess.size()][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()][j]);
    yieldFile << " & " << matrix[vprocess.size()][j] << " $\\pm$ " << matrixError[vprocess.size()][j];
  }
//  lineTB += " \\\\";
//  yieldFile << lineTB << std::endl;
    yieldFile << " \\\\" << std::endl;
    yieldFile << "\\hline" << std::endl;

  // Signal
//  string lineS = "Signal";
  yieldFile << "Signal";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
//    lineS += " & " + to_string(matrix[vprocess.size()-1][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()-1][j]);
      yieldFile << " & " << matrix[vprocess.size()-1][j] << " $\\pm$ " << matrixError[vprocess.size()-1][j];
  }
//  lineS += " \\\\";

  yieldFile << " \\\\" << std::endl;
  yieldFile << "\\hline" << std::endl;

  // Signal + Background
//  string lineT = "Signal + Background";
  yieldFile << "Signal + Background";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
//    lineT += " & " + to_string(matrix[vprocess.size()+1][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()+1][j]);
    yieldFile << " & " << matrix[vprocess.size()+1][j] << " $\\pm$ " << matrixError[vprocess.size()+1][j];
  }
//  lineT += " \\\\";
  yieldFile << " \\\\" << std::endl;
  yieldFile << "\\hline" << std::endl;
  yieldFile << "\\hline" << std::endl;

  // Data
//  string lineD = "Data";
  yieldFile << "Data";
  for(int j=0; j<int(vcut.size()+1); j++)
  {
//    lineD += " & " + to_string(matrix[vprocess.size()+2][j]) + " $\\pm$ " + to_string(matrixError[vprocess.size()+2][j]);
    yieldFile << " & " << matrix[vprocess.size()+2][j] << " $\\pm$ " << matrixError[vprocess.size()+2][j];
  }
//  lineD += " \\\\";
  yieldFile << " \\\\" << std::endl;
  yieldFile << "\\hline" << std::endl;


  // End document
  yieldFile << "\\end{tabular}" << std::endl;
  yieldFile << "\\caption{Yields for " << filename << "}" << std::endl;
  yieldFile << "\\end{table}" << std::endl;
  yieldFile << "\\end{document}" << std::endl;

  system(("pdflatex " + filename + ".tex").c_str());
  system(("gnome-open " + filename + ".pdf").c_str());
}

int printYield(){
  // Open input file(s)
  string basedirectory = "/lstore/cms/cbeiraod/Stop4Body/LepFix/";

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
//  TCut mt = "mt < 135";
  TCut preSel = met && emu && ISRjet;

  TCut selection = preSel;

  TCut Met540 = "Met>540";
  TCut mt100 = "mt > 100";
  TCut jet1Pt550 = "Jet1Pt > 550";
  TCut CosDeltaPhi025 = "CosDeltaPhi < 0.25";
  TCut ht20700 = "HT20 > 700";

  //Set names of TCuts
  emu.SetName("emu");
  ISRjet.SetName("$p_T$(Jet1)$ > 110$");
  electron.SetName("electron");
  preSel.SetName("PreSelection");
  selection.SetName("Selection FOM");

  // Create VCut
  vector<TCut> vcut;
  //vcut.push_back(emu);
  //vcut.push_back(ISRjet*emu);
  //vcut.push_back(met*ISRjet*emu);
  vcut.push_back(preSel);
  vcut.push_back(Met540*preSel);
  vcut.push_back(mt100*Met540*preSel);
  vcut.push_back(jet1Pt550*mt100*Met540*preSel);
//  vcut.push_back(CosDeltaPhi025*Met540*preSel);
//  vcut.push_back(ht20700*CosDeltaPhi025*Met540*preSel);

  vcut[1].SetName("Met $>$ 540");
//  vcut[2].SetName("$Cos(\\Delta \\phi)$ $<$ 0.25");
  vcut[2].SetName("$m_T >$ 100");
//  vcut[3].SetName("$H_T$ (20) $>$ 700");
  vcut[3].SetName("$p_T$ (Jet) $>$ 550");

  // Create matrix
  double** matrix = new double*[vprocess.size()+3];
  for(int i=0; i<int(vprocess.size()+3); i++)
    matrix[i] = new double[vcut.size()+1];

  double** matrixError = new double*[vprocess.size()+3];
  for(int i=0; i<int(vprocess.size()+3); i++)
    matrixError[i] = new double[vcut.size()+1];

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
