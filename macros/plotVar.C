#include <iostream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TChain.h"
#include "THStack.h"
#include "TLegend.h"

int plotVar()
{
  // Open input file(s)
  TFile* ttbarFile = new TFile("~cbeiraod/public/4Students/TTJets_LO_bdt.root", "READ");

  TFile* stopFile = new TFile("~cbeiraod/public/4Students/T2DegStop_300_270_bdt.root", "READ");

  TChain wjetsTree("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsTree.Add("~cbeiraod/public/4Students/Wjets100to200_bdt.root");
  wjetsTree.Add("~cbeiraod/public/4Students/Wjets200to400_bdt.root");
  wjetsTree.Add("~cbeiraod/public/4Students/Wjets400to600_bdt.root");
  wjetsTree.Add("~cbeiraod/public/4Students/Wjets600toInf_bdt.root");

  // Get ttree(s) from input file(s)
  TTree* ttbarTree = static_cast<TTree*>(ttbarFile->Get("bdttree"));
  TTree* stopTree = static_cast<TTree*>(stopFile->Get("bdttree"));

  // Create histogram(s)
  TH1D* ttbarleptonPt = new TH1D("ttbarleptonPt", "ttbar;p_{T}(l) [GeV];Evt.", 30, 0, 200);
  TH1D* wjetsleptonPt = new TH1D("wjetsleptonPt", "wjets;p_{T}(l) [GeV];Evt.", 30, 0, 200);
  TH1D* stopleptonPt = new TH1D("stopleptonPt", "Signal;p_{T}(l) [GeV];Evt.", 30, 0, 200);

 ttbarleptonPt->SetFillColor(kGreen);
 ttbarleptonPt->SetLineColor(kGreen);

 wjetsleptonPt->SetFillColor(kBlue);
 wjetsleptonPt->SetLineColor(kBlue);

 stopleptonPt->SetLineColor(kRed);

  TCanvas * c1 = new TCanvas("lepton Pt", "lepton Pt", 800, 600);
  //TCanvas * c2 = new TCanvas("wjets", "wjets", 800, 600);

 // Fill histogram(s)
 //c1->cd();
  ttbarTree->Draw("LepPt>>ttbarleptonPt","XS*10000/Nevt","goff");

 //c2->cd();
  wjetsTree.Draw("LepPt>>wjetsleptonPt","XS*10000/Nevt","goff");


 THStack *Stack = new THStack("leptonPt","leptonPt");
 Stack->Add(ttbarleptonPt);
 Stack->Add(wjetsleptonPt);

 Stack->Draw();
 stopTree->Draw("LepPt>>stopleptonPt","XS*10000/Nevt","same");

 TLegend * legenda = c1->BuildLegend(0.895,0.69,0.65,0.89,"NDC");

  // Continue...


  return 0;
}
