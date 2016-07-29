#include <iostream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"

int main(int argc, char** argv)
{
  // Open input file(s)
  TFile* ttbarFile = new TFile("/lstore/cms/cbeiraod/Stop4Body/Frozen/TTJets_LO_bdt.root", "READ");

  // Get ttree(s) from input file(s)
  TTree* ttbarTree = static_cast<TTree*>(ttbarFile->Get("bdttree"));

  // Create histogram(s)
  TH1D* leptonPt = new TH1D("leptonPt", "The Pt of the lepton;p_{T}(l) [GeV];Evt.", 30, 0, 200);

  // Fill histogram(s)
  ttbarTree->Draw("LepPt>>leptonPt");


  // Continue...


  // The program finishes execution and immediately closes, so no plot is shown

  return 0;
}
