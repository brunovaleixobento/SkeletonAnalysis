#include <iostream>
#include <fstream> 

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
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

void countEvt(process &process, string selection="")
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

  double Nexp_nosel = 0.0;
  // Get number of events from TTree
  // In principle the `GetEntries()` method from the TTree, however, for a more general result
  //it is sometimes better to do this way:
  // Get yield
  process.GetChain()->Draw("Njet>>tmp", "XS*10000/Nevt", "goff");
  Nexp_nosel = tmp->Integral();

  // Get number of events after a cut
  double Nexp_sel = 0.0;
  process.GetChain()->Draw("Njet>>tmp", ("XS*10000/Nevt*(" + selection + ")").c_str(), "goff");
  Nexp_sel = tmp->Integral();

  process.SetSelection(selection);
  process.SetNevt_nosel(Nexp_nosel);
  process.SetNevt_sel(Nexp_sel);

  std::cout << Nexp_nosel << " expected events without selection" << std::endl;
  std::cout << Nexp_sel << " expected events after requiring " + selection << std::endl;
}

void Print(vector<process> vprocess, string selection)
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
  yieldFile << "\\begin{tabular}{lll}" << std::endl;
  yieldFile << "\\hline" << std::endl;
 
  yieldFile << "Process & Total & Yield ($" << selection <<  "$) \\\\" << std::endl;
  yieldFile << "\\hline" << std::endl;

  int Nevt_bg_nosel = 0;
  int Nevt_bg_sel = 0;
  for(int k=0; k<int(vprocess.size()-1); k++)
    {
      yieldFile << vprocess[k].GetName() << " & " << vprocess[k].GetNexp_nosel() << " & " << vprocess[k].GetNexp_sel() << " \\\\" << std::endl;
      Nevt_bg_nosel += vprocess[k].GetNexp_nosel();
      Nevt_bg_sel += vprocess[k].GetNexp_sel();
    }

  yieldFile << "Total Background & " << Nevt_bg_nosel << " & " << Nevt_bg_sel << " \\\\" << std::endl;

  yieldFile << "\\hline" << std::endl;

  yieldFile << "Signal & " << vprocess[vprocess.size()-1].GetNexp_nosel() << " & " << vprocess[vprocess.size()-1].GetNexp_sel() << " \\\\" << std::endl;
  
  yieldFile << "\\hline" << std::endl;

  yieldFile << "Signal + Background & " << vprocess[vprocess.size()-1].GetNexp_nosel()+Nevt_bg_nosel << " & " << vprocess[vprocess.size()-1].GetNexp_sel()+Nevt_bg_sel << " \\\\" << std::endl;

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

  // Get yields

  string cut = "Met > 110";

  for(int j=0; j<int(vprocess.size()); j++)
    {
      std::cout << vprocess[j].GetName() + " Events\n" << std::endl;
      countEvt(vprocess[j],cut);
    }

  Print(vprocess,cut);

  // Continue...

  return 0;
}
