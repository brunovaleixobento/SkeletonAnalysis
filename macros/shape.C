#include <iostream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TLine.h"
#include "TStyle.h"
#include "TH1D.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TChain.h"
#include "THStack.h"
#include "TLegend.h"
#include "TPad.h"
#include "string"
#include "TAxis.h"
#include "TCut.h"

using std::string;

class variable{

public:

  variable(string name="", string expression = "", int bins=30, double xmin=0, double xmax=100, string leg = "", int Logy=0);

  string GetName() {return fname;}
  string GetExpression() {return fexpression;}
  int GetBins() {return fbins;}
  double GetXMin() {return fxmin;}
  double GetXMax() {return fxmax;}
  string GetLeg() {return fleg;}
  int GetLogy() {return fLogy;}

  void SetName(string name) {fname=name;}
  void SetExpression(string expression) {fexpression=expression;}
  void SetBins(int bins) {fbins=bins;}
  void SetXMin(double xmin) {fxmin=xmin;}
  void SetXMax(double xmax) {fxmax=xmax;}
  void SetLeg(string leg) {fleg=leg;}

private:

  string fname;
  string fexpression;
  int    fbins;
  double fxmin;
  double fxmax;
  string fleg;
  int fLogy;
};

variable::variable(string name, string expression, int bins, double xmin, double xmax, string leg, int Logy): fname(name), fexpression(expression), fbins(bins), fxmin(xmin), fxmax(xmax), fleg(leg), fLogy(Logy){}

int shape()
{
  vector<variable> vvariable;

  variable LepPt("LepPt","LepPt",20,0,35,"p_{T} (l) [GeV]");
  variable LepEta("LepEta","LepEta",20,-3,3,"#eta (l)");
  variable Njet("Njet","Njet",11,-0.5,10.5,"Njet");
  variable Jet1Pt("Jet1Pt","Jet1Pt",20,100,500,"p_{T} (Jet1) [GeV]");
  variable Jet1Eta("Jet1Eta","Jet1Eta",20,-3,3,"Eta (Jet1)");
  variable Met("Met","Met",20,300,600,"Met [GeV]",1);
  variable CosDPhi("CosDeltaPhi","CosDeltaPhi",20,-1.2,1.2,"Cos(#Delta #Phi)");
  variable DrJet1Lep("DrJet1Lep","DrJet1Lep",10,0,6,"Dr Jet1 Lep");
  variable DrJet2Lep("DrJet2Lep","DrJet2Lep",10,0,6,"Dr Jet2 Lep");
  variable Jet2Pt("Jet2Pt","Jet2Pt",20,0,400,"p_{T} (Jet2) [GeV]",1);
  variable mt("mt","mt",15,0,150,"mt [GeV]");
  variable HT20("HT20","HT20",20,0,1400,"HT20 [GeV]");
  variable HT30("HT30","HT30",20,0,1400,"HT30 [GeV]");
  variable Q80("Q80","Q80",20,-2,1,"Q80 [GeV]");
  variable JetLepMass("JetLepMass","JetLepMass",20,0,250,"M_{Jet+Lep}");
  variable JetHBPt("JetHBpt","JetHBpt",20,0,200,"p_{T} (JetHB)");


//  vvariable.push_back(LepPt);
//  vvariable.push_back(LepEta);
//  vvariable.push_back(Njet);
//  vvariable.push_back(Jet1Pt);
//  vvariable.push_back(Jet2Pt);
//  vvariable.push_back(Jet1Eta);
  vvariable.push_back(Met);
  vvariable.push_back(CosDPhi);
//  vvariable.push_back(DrJet1Lep);
//  vvariable.push_back(DrJet2Lep);
  vvariable.push_back(mt);
//  vvariable.push_back(HT20);
  vvariable.push_back(Q80);
//  vvariable.push_back(HT30);
//  vvariable.push_back(JetLepMass);
//  vvariable.push_back(JetHBPt);

  // Open input file(s)
  string basedirectory = "/lstore/cms/cbeiraod/Stop4Body/nTuples_v2016-07-12/";

  TFile* ttbarFile = new TFile((basedirectory + "TTJets_LO_bdt.root").c_str(), "READ");

  TFile* stopFile = new TFile((basedirectory + "T2DegStop_300_270_bdt.root").c_str(), "READ");

  TChain* wjetsTree = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsTree->Add((basedirectory + "Wjets_100to200_bdt.root").c_str());
  wjetsTree->Add((basedirectory + "Wjets_200to400_bdt.root").c_str());
  wjetsTree->Add((basedirectory + "Wjets_400to600_bdt.root").c_str());
  wjetsTree->Add((basedirectory + "Wjets_600toInf_bdt.root").c_str());

  // Get ttree(s) from input file(s)
  TTree* ttbarTree = static_cast<TTree*>(ttbarFile->Get("bdttree"));
  TTree* stopTree = static_cast<TTree*>(stopFile->Get("bdttree"));

  // Create canvas
  TCanvas * c1 = new TCanvas("Stop","Stop", 800, 600);

  if(vvariable.size()!=1)
    {
      if(vvariable.size()==2)
	c1->Divide(2,1);
      else
	{
	  if(vvariable.size()%2==0)
	    c1->Divide(vvariable.size()/2,2);
	  else
	    c1->Divide((vvariable.size()+1)/2,2);
	}
    }

    vector<TH1D*> ttbarH;
    vector<TH1D*> wjetsH;
    vector<TH1D*> stopH;
    vector<TH1D*> backgroundH;

  // Plots
  for(int i=0;i<int(vvariable.size());i++)
    {
      TCanvas * c2 = new TCanvas("variable","variable", 800, 600);

      string sttbarH =  "ttbarH"+std::to_string(i);
      string swjetsH =  "wjetsH"+std::to_string(i);
      string sstopH =  "stopH"+std::to_string(i);
      string sbackgroundH = "background"+std::to_string(i);

      // Create histogram(s)
      ttbarH.push_back(new TH1D(sttbarH.c_str(), "ttbar", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      wjetsH.push_back(new TH1D(swjetsH.c_str(), "wjets", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      stopH.push_back(new TH1D(sstopH.c_str(), "Signal", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      backgroundH.push_back(new TH1D(sbackgroundH.c_str(), "Background", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));

      ttbarH[i]->SetFillColor(kGreen-7);
      ttbarH[i]->SetLineColor(kGreen-7);

      wjetsH[i]->SetFillColor(kAzure+5);
      wjetsH[i]->SetLineColor(kAzure+5);

      //stopH->SetFillColor(kRed);
      stopH[i]->SetLineColor(kRed);

      if(vvariable.size()!=1)
	      c1->cd(i+1);
      else
	      c1->cd();

      //Create TCuts
      TCut muon = "(abs(LepID)==13)&&(LepIso03<0.2)";
      TCut electron = "(abs(LepID)==11)&&(LepIso03<0.2)";
      TCut emu = muon||electron;
      TCut ISRjet = "Jet1Pt > 110";
      TCut met = "Met > 300";
      TCut jetLepMass = "JetLepMass < 100";
      //TCut njets = "Njet > 1";
      TCut lepPt = "LepPt < 17";
      //TCut ht30 = "HT30 > 300";
      //TCut ht20 = "HT20 > 450";
      //TCut mt = "mt < 70";
      TCut jethbpt = "JetHBpt < 80";

      TCut selection = emu && ISRjet && met;

      // Fill histogram(s) signal & BACKGROUND & DATA
      ttbarTree->Draw((vvariable[i].GetExpression()+">>"+sttbarH).c_str(),"XS*5000/Nevt"*(selection),"goff");
      wjetsTree->Draw((vvariable[i].GetExpression()+">>"+swjetsH).c_str(),"XS*5000/Nevt"*(selection),"goff");
      stopTree->Draw((vvariable[i].GetExpression()+">>"+sstopH).c_str(),"XS*5000/Nevt"*(selection),"goff");  //MULTIPLICAR O SINAL

      // Normalize

      double BGIntegral = ttbarH[i]->Integral(0,ttbarH[i]->GetNbinsX()+2) + wjetsH[i]->Integral(0,wjetsH[i]->GetNbinsX()+2);
      double stopIntegral = stopH[i]->Integral(0,stopH[i]->GetNbinsX()+2);

      for(int j=0; j < stopH[i]->GetNbinsX()+2; j++)
        {
          stopH[i]->SetBinContent(j, stopH[i]->GetBinContent(j)/stopIntegral);
          ttbarH[i]->SetBinContent(j, ttbarH[i]->GetBinContent(j)/BGIntegral);
          wjetsH[i]->SetBinContent(j, wjetsH[i]->GetBinContent(j)/BGIntegral);
        }

      THStack *Stack = new THStack(vvariable[i].GetName().c_str(), (vvariable[i].GetName()+";"+vvariable[i].GetLeg().c_str()+";Evt.").c_str());
      Stack->Add(ttbarH[i]);
      Stack->Add(wjetsH[i]);

      gPad->SetLogy(vvariable[i].GetLogy());

      // Draw plots
      gStyle->SetOptStat(0);

      Stack->Draw("HIST");
      stopH[i]->Draw("HIST same");

      if(Stack->GetMaximum() > stopH[i]->GetMaximum())
	      {
	        Stack->SetMaximum(Stack->GetMaximum()*1.05);
	    	}
      else
	      {
	        Stack->SetMaximum(stopH[i]->GetMaximum()*1.05);
	      }

     // TLegend * legenda = gPad->BuildLegend(0.895,0.69,0.65,0.89,"NDC");

      // Draw in Canvas c2 - Pad1

      c2->cd();

      gPad->SetLogy(vvariable[i].GetLogy());

      Stack->Draw("HIST goff");
      stopH[i]->Draw("HIST same goff");

      //TLegend * legenda2 = gPad->BuildLegend(0.8,0.69,0.65,0.89,"NDC");

      // Save individual plots as .pdf and .C
      //c2->SaveAs(("plots/"+vvariable[i].GetName()+".pdf").c_str());
      //c2->SaveAs(("plots/"+vvariable[i].GetName()+".C").c_str());

      delete c2;
    }
  //delete the vectors

  //Save file with all the plots
  c1->SaveAs("plots/shape.png");
  c1->SaveAs("plots/shape.C");

  return 0;
}

