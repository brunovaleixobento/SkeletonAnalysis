
#include <iostream>
#include <fstream>

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
  int Nexp_nosel;
  int Nexp_sel;
};

int countTotal(process &process)
{
    // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  int Nexp_nosel = 0;
  process.GetChain()->Draw("Njet>>tmp", "XS*10000/Nevt", "goff");
  Nexp_nosel = int(tmp->Integral());

    process.SetNevt_nosel(Nexp_nosel);
}

int countEvt(process &process, TCut cut)
{
  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);

  // Get the total initial number of events from the ttree
  /*int Nevt = 0;
    vprocess[i].GetvTree()->SetBranchAddress("Nevt", &Nevt);
    float XS = 0;
    double L = 10000;
    vprocess[i].GetvTree()->SetBranchAddress("XS", &XS);
    vprocess[i].GetvTree()->GetEntry(0);*/

  // Get number of events after a cut
  double Nexp_sel = 0.0;
  process.GetChain()->Draw("Njet>>tmp","XS*10000/Nevt"*cut, "goff");
  Nexp_sel = tmp->Integral();

  process.SetSelection(cut.GetName());
  process.SetNevt_sel(Nexp_sel);

  //std::cout << Nexp_nosel << " expected events without selection" << std::endl;
  //std::cout << Nexp_sel << " expected events after requiring stuff" << std::endl;

  return Nexp_sel;
}

void Print(vector<process> vprocess, vector<TCut> vcut, double** matrix)
{
  ofstream yieldFile;
  yieldFile.open ("yield.tex");
  yieldFile << "\\documentclass{article}" << std::endl;
  yieldFile << "\\usepackage[utf8]{inputenc}" << std::endl;
  yieldFile << "\\title{CMS SUMMER 2016}" << std::endl;
  yieldFile << "\\author{Beatriz Lopes &  Bruno Valeixo Bento}" << std::endl;
  yieldFile << "\\date{July 2016}" << std::endl;
  yieldFile << "\\begin{document}" << std::endl;
  yieldFile << "\\maketitle" << std::endl;

  yieldFile << "\\begin{table}[!h]" << std::endl;
  yieldFile << "\\centering" << std::endl;

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


  for(int k=0; k<int(vprocess.size()-1); k++)
    {
      yieldFile << vprocess[k].GetName() << " & " << vprocess[k].GetNexp_nosel();
      for(int j=0;j<int(vcut.size());j++)
       yieldFile << "& " << vprocess[k].GetNexp_sel();

       yieldFile << " \\\\" << std::endl;

      Nevt_bg_nosel += vprocess[k].GetNexp_nosel();
      Nevt_bg_sel += vprocess[k].GetNexp_sel();
    }

  yieldFile << "Total Background & " << Nevt_bg_nosel << " & " << Nevt_bg_sel << " \\\\" << std::endl;

  yieldFile << "\\hline" << std::endl;

  yieldFile << "Signal & " << vprocess[vprocess.size()-1].GetNexp_nosel() << " & " << vprocess[vprocess.size()-1].GetNexp_sel() << " & " << double(vprocess[vprocess.size()-1].GetNexp_sel())/double(vprocess[vprocess.size()-1].GetNexp_nosel()) << " \\\\" << std::endl;

  yieldFile << "\\hline" << std::endl;

  yieldFile << "Signal + Background & & & & &" << std::endl;
  
  yieldFile << "\\hline" << std::endl;
  yieldFile << "\\end{tabular}" << std::endl;
  yieldFile << "\\caption{Yields}" << std::endl;
  yieldFile << "\\end{table}" << std::endl;

  yieldFile << "\\end{document}" << std::endl;
}

int printYield(){
  // Open input file(s)
  string basedirectory = "/lstore/cms/cbeiraod/Stop4Body/Frozen/";

  // Create chains
  TChain* wjetsChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsChain->Add((basedirectory + "Wjets100to200_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets200to400_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets400to600_bdt.root").c_str());
  wjetsChain->Add((basedirectory + "Wjets600toInf_bdt.root").c_str());

  TChain* ttbarChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  ttbarChain->Add((basedirectory + "TTJets_LO_bdt.root").c_str());

  TChain* stopChain = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  stopChain->Add((basedirectory + "T2DegStop_300_270_bdt.root").c_str());

  vector<process> vprocess;

  process pwjets(wjetsChain,"wjets");
  process pttbar(ttbarChain,"ttbar");
  process psignal(stopChain,"signal");

  vprocess.push_back(pwjets);
  vprocess.push_back(pttbar);
  vprocess.push_back(psignal);

  //Create TCuts
  TCut muon = "(abs(LepID)==13)&&(LepIso03<0.2)";
  TCut electron = "(abs(LepID)==11)&&(LepIso03<0.2)";
  TCut emu = muon||electron;
  TCut ISRjet = "Jet1Pt > 110";
  TCut met = "Met > 160";

  //Set names of TCuts
  emu.SetName("emu");
  ISRjet.SetName("ISRjet");
  met.SetName("Met");

  // Create VCut
  vector<TCut> vcut;
  vcut.push_back(emu);
  vcut.push_back(ISRjet);
  vcut.push_back(met);

  //Create matrix
  double matrix[vprocess.size()+2][vcut.size()];

  for(int i=0;i<int(vprocess.size());i++)
  {matrix[i][0]=countTotal(vprocess[i]);}

  for(int i=0; i<int(vprocess.size()); i++)
    {
    for(int j=1;j<int(vcut.size()+1);j++)
     {
      matrix[i][j]=countEvt(vprocess[i],vcut[j]);
      std::cout << "\n" << matrix[i][j] << " ";
     }
    }

  for(int j=0;j<int(vcut.size());j++)
    {
    matrix[vprocess.size()][j]=0;
    matrix[vprocess.size()+1][j]=0;
    for(int i=0;i<int(vprocess.size()-1);i++)
      {
      matrix[vprocess.size()][j]+=matrix[i][j];
      matrix[vprocess.size()+1][j]+=matrix[vprocess.size()][j]+matrix[vprocess.size()-1][j];
      std::cout << matrix[vprocess.size()][j] << "   " << matrix[vprocess.size()+1][j] << std::endl;
      }
    }

  Print(vprocess,vcut,matrix);

  // Continue...

  return 0;
}
