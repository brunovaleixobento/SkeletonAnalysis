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
  std::string signalFileName = "signal.root";
  std::string backgroundFileName = "background.root";
  int nTree = 400;

  if(argc < 2)
  {
    std::cout << "You did not pass enough parameters" << std::endl;
    printHelp();
    return 0;
  }

  for(int i = 1; i < argc; ++i)
  {
    std::string argument = argv[i];

    if(argument == "--help")
    {
      printHelp();
      return 0;
    }

    if(argument == "--signalFile")
      signalFileName = argv[++i];

    if(argument == "--backgroundFile")
      backgroundFileName = argv[++i];

    if(argument == "--nTree")
    {
      std::stringstream converter;
      converter << argv[++i];
      converter >> nTree;
    }
  }

  std::cout << "==> Start TMVAClassification" << std::endl;
  std::cout << "\tProcessing files:" << std::endl;
  std::cout << "\t  - Signal: " << signalFileName << std::endl;
  std::cout << "\t  - Background: " << backgroundFileName << std::endl;

  // Create a ROOT output file where TMVA will store ntuples, histograms, etc.
  TString outfileName( "TMVA.root" );
  TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

  TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                              "!V:!Silent:Color:DrawProgressBar:Transformations=I:AnalysisType=Classification" );

  // Base BDT
  factory->AddVariable("Jet1Pt",'F');
  factory->AddVariable("LepPt",'F');
  factory->AddVariable("LepChg",'F');
  factory->AddVariable("LepEta",'F');
  factory->AddVariable("Met",'F');
  factory->AddVariable("mt",'F');
  factory->AddVariable("HT20",'F');
  factory->AddVariable("NbLoose30",'F');

  factory->AddVariable("Njet",'F');
  factory->AddVariable("JetHBpt",'F');
  factory->AddVariable("DrJetHBLep",'F');

  factory->AddVariable("Jet1Eta",'F');

  TFile *inputsignal = TFile::Open( signalFileName.c_str() );
  TFile *inputbkg= TFile::Open( backgroundFileName.c_str() );

  TTree *signal     = (TTree*)inputsignal->Get("bdttree");
  TTree *background = (TTree*)inputbkg->Get("bdttree");

  Double_t signalWeight     = 1.0;
  Double_t backgroundWeight = 1.0;

  factory->AddSignalTree    ( signal,     signalWeight     );
  factory->AddBackgroundTree( background, backgroundWeight );
  factory->SetBackgroundWeightExpression( "XS" );
  factory->SetSignalWeightExpression("XS");

  // Preselection
  TCut mycuts = "Met > 100";
  TCut mycutb = "Met > 100";

  factory->PrepareTrainingAndTestTree( mycuts, mycutb, "nTrain_Signal=0:nTrain_Background=0:nTest_Signal=0:nTest_Background=0:SplitMode=Random:NormMode=EqualNumEvents" );

  std::stringstream converter;
  converter << "!H:!V:";
  converter << "NTrees=" << nTree << ":VarTransform=D:MaxDepth=3:BoostType=AdaBoost:SeparationType=GiniIndex:nCuts=20:PruneMethod=NoPruning:MinNodeSize=1.5%";

  factory->BookMethod( TMVA::Types::kBDT, "BDT",
                       converter.str().c_str());
                       //"!H:!V:NTrees=10:MaxDepth=3:BoostType=AdaBoost:SeparationType=GiniIndex:nCuts=20:PruneMethod=NoPruning" );

  factory->TrainAllMethods();
  factory->TestAllMethods();
  factory->EvaluateAllMethods();

  outputFile->Close();

  std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
  std::cout << "==> TMVAClassification is done!" << std::endl;

  delete factory;

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
