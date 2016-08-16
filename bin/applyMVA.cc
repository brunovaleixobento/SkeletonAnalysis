#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include <TH1D.h>
#include <TChain.h>
#include <TCut.h>
#include <TString.h>
#include <TObject.h>
#include <TRandom3.h>
#include <TDirectory.h>
#include <TBranch.h>

#include "TMVA/Reader.h"
#include "TMVA/Factory.h"
#include "TMVA/Tools.h"

#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <fstream>

void printHelp();
bool fileExists(std::string);

int main(int argc, char** argv)
{
  std::string inputdirectory = "";
  std::string outputdirectory = "";

  if(argc < 2)
  {
    std::cout << "You did not pass enough parameters" << std::endl;
    printHelp();
    return 0;
  }

  for(int i = 1; i < argc; ++i)
  {
    std::string argument = argv[i];

    if(argument == "--inputdirectory")
      inputdirectory = argv[++i];

    if(argument == "--outputdirectory")
      outputdirectory = argv[++i];

  }

  if(inputdirectory=="" || outputdirectory == "")
   {
    std::cout << "You did not define the directories" << std::endl;
    printHelp();
    return 0;
   }

  std::vector<std::string> FileNames {"T2DegStop_300_270_bdt.root","TTJets_LO_bdt.root","Wjets_100to200_bdt.root","Wjets_200to400_bdt.root","Wjets_400to600_bdt.root","Wjets_600toInf_bdt.root"};

  for(auto & File : FileNames)
  {
   if(!fileExists(inputdirectory + File))
   {
    std::cout << "This file doesn't exist:" << File << std::endl;
    return 0;
   }
  }

  TMVA::Tools::Instance();
  TMVA::Reader *reader = new TMVA::Reader("!Color:!Silent");

  float Jet1Pt, LepPt, LepEta, Met, mt, HT20, LepChg, Nbloose30;
  float Njet, DrJetHBLep, JetHBpt;
  float Jet1Eta;

  reader->AddVariable("Jet1Pt", &Jet1Pt);
  reader->AddVariable("LepPt", &LepPt);
  reader->AddVariable("LepChg", &LepChg);
  reader->AddVariable("LepEta", &LepEta);
  reader->AddVariable("Met", &Met);
  reader->AddVariable("mt", &mt);
  reader->AddVariable("HT20", &HT20);
  reader->AddVariable("NbLoose30", &Nbloose30);

  reader->AddVariable("Njet", &Njet);
  reader->AddVariable("JetHBpt", &JetHBpt);
  reader->AddVariable("DrJetHBLep", &DrJetHBLep);

  reader->AddVariable("Jet1Eta", &Jet1Eta);

  reader->BookMVA("BDT method", "weights/TMVAClassification_BDT.weights.xml");

  for(auto & File : FileNames)
  {
    TFile oldFile((inputdirectory + File).c_str(),"READ");
    TFile newFile((outputdirectory + File).c_str(),"RECREATE");

    TTree* tree = static_cast<TTree*>(oldFile.Get("bdttree"))->CloneTree();

    float bdt = -10000;
    tree->SetBranchAddress("Jet1Pt",&Jet1Pt);
    tree->SetBranchAddress("LepPt", &LepPt);
    tree->SetBranchAddress("LepChg", &LepChg);
    tree->SetBranchAddress("LepEta", &LepEta);
    tree->SetBranchAddress("Met", &Met);
    tree->SetBranchAddress("mt", &mt);
    tree->SetBranchAddress("HT20", &HT20);
    tree->SetBranchAddress("NbLoose30", &Nbloose30);

    tree->SetBranchAddress("Njet", &Njet);
    tree->SetBranchAddress("JetHBpt", &JetHBpt);
    tree->SetBranchAddress("DrJetHBLep", &DrJetHBLep);

    tree->SetBranchAddress("Jet1Eta", &Jet1Eta);

    TBranch * branch = tree->Branch("BDT",&bdt);

    for(Long64_t i=0;i < tree->GetEntries();++i)
    {
      tree->GetEntry(i);
      bdt = reader->EvaluateMVA("BDT method");
      branch->Fill();
    }

    tree->Write();
  }

  return 0;
}


void printHelp()
{
  std::cout << "The program has the following parameters:" << std::endl;
  std::cout << "\t--help\t- Print this message" << std::endl;

  return;
}

bool fileExists(std::string fileName)
{
  std::ifstream infile(fileName);
  return infile.good();
}
