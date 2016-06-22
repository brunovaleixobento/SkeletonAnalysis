#include <iostream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"

int printYield()
{
  // Open input file(s)
  TFile* ttbarFile = new TFile("/lstore/cms/cbeiraod/Stop4Body/Frozen/TTJets_LO_bdt.root", "READ");

  // Get ttree(s) from input file(s)
  TTree* ttbarTree = static_cast<TTree*>(ttbarFile->Get("bdttree"));

  // Create temporary histogram
  TH1D* tmp = new TH1D("tmp", "tmp", 30, 0, 1000);



  // Get the total initial number of events from the ttree
  int Nevt = 0;
  ttbarTree->SetBranchAddress("Nevt", &Nevt);
  ttbarTree->GetEntry(0);
  std::cout << "The total number of initial events: " << Nevt << std::endl;

  double tmpDouble = 0.0;
  // Get number of events from TTree
  // In principle the `GetEntries()` method from the TTree, however, for a more general result
  //it is sometimes better to do this way:
  ttbarTree->Draw("Njet>>tmp", "", "goff");
  tmpDouble = tmp->Integral();
  std::cout << tmpDouble << " events were read from the ttbar file." << std::endl;

  // Get number of events after a cut
  ttbarTree->Draw("Njet>>tmp", "Met>110", "goff");
  tmpDouble = tmp->Integral();
  std::cout << tmpDouble << " events are left after requiring \"MET > 110 GeV.\"" << std::endl;


  // Continue...


  return 0;
}
