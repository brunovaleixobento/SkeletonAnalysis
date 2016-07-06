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
  {}

  string GetName() {return fname;}
  TChain* GetChain() {return fchain;}
  int GetNevt() {return Nevt;}
  int GetNexp_nosel() {return Nexp_nosel;}
  int GetNexp_sel() {return Nexp_sel;}

private:
  TChain* fchain;
  string fname;
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

  std::cout << Nexp_nosel << " expected events without selection" << std::endl;
  std::cout << Nexp_sel << " expected events after requiring " + selection << std::endl;
}

/*void Print()
{
  ofstream yieldFile;
  yieldFile.open ("yield.tex");
  yieldFile << "\documentclass{article}" << std::endl;
  yieldFile << "\usepackage[utf8]{inputenc}" << std::endl;
  yieldFile << "\title{Cms2016}" << std::endl;
  yieldFile << "\author{Bia Bruno}" << std::endl;
  yieldFile << "\date{July 2016}" << std::endl;
  yieldFile << "\begin{document}" << std::endl;
  yieldFile << "\maketitle" << std::endl;

  yieldFile << "\begin{table}[]" << std::endl;
  yieldFile << "\centering" << std::endl;
  yieldFile << "\caption{My caption}" << std::endl;
  yieldFile << "\begin{tabular}{ll}" << std::endl;
  yieldFile << "\toprule" << std::endl;
  yieldFile << "Process & Yield \\" << std::endl;
  yieldFile << "\middlerule" << std::endl;

  for(int k=0; k<int(vprocess.size()); k++)
    {
      yieldFile <<  + " & " +  << std::endl;
    }

  yieldFile << "\bottomrule" << std::endl;
  yieldFile << "\end{tabular}" << std::endl;
  yieldFile << "\end{table}" << std::endl;

  yieldFile << "\end{document}" << std::endl;
}
*/
int printYield()
{
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

  // Continue...

  return 0;
}
