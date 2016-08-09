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

int plotVar()
{
  vector<variable> vvariable;

  variable LepPt("LepPt","LepPt",20,0,35,"p_{T} (l) [GeV]");
  variable LepEta("LepEta","LepEta",20,-3,3,"#eta (l)");
  variable Njet("Njet","Njet",11,-0.5,10.5,"Njet");
  variable Jet1Pt("Jet1Pt","Jet1Pt",20,100,500,"p_{T} (Jet1) [GeV]");
  variable Jet1Eta("Jet1Eta","Jet1Eta",20,-3,3,"Eta (Jet1)");
  variable Met("Met","Met",20,300,600,"Met [GeV]");
  variable CosDPhi("CosDeltaPhi","CosDeltaPhi",20,-1.2,1.2,"Cos(#Delta #Phi)");
  variable DrJet1Lep("DrJet1Lep","DrJet1Lep",20,0,6,"Dr Jet1 Lep");
  variable DrJet2Lep("DrJet2Lep","DrJet2Lep",20,0,6,"Dr Jet2 Lep");
  variable Jet2Pt("Jet2Pt","Jet2Pt",20,0,500,"p_{T} (Jet2) [GeV]",1);
  variable mt("mt","mt",20,0,150,"mt [GeV]");
  variable HT20("HT20","HT20",20,0,1400,"HT20 [GeV]");
  variable HT30("HT30","HT30",20,0,1400,"HT30 [GeV]");
  variable Q80("Q80","Q80",20,-2,1,"Q80 [GeV]");
  variable JetLepMass("JetLepMass","JetLepMass",20,0,250,"M_{Jet+Lep}");
  variable JetHBPt("JetHBpt","JetHBpt",20,0,500,"p_{T} (JetHB)");

//  vvariable.push_back(LepPt);
//  vvariable.push_back(LepEta);
  vvariable.push_back(Njet);
  vvariable.push_back(Jet1Pt);
//  vvariable.push_back(Jet2Pt);
//  vvariable.push_back(Jet1Eta);
  vvariable.push_back(Met);
  vvariable.push_back(CosDPhi);
//  vvariable.push_back(DrJet1Lep);
//  vvariable.push_back(DrJet2Lep);
  vvariable.push_back(mt);
  vvariable.push_back(HT20);
  vvariable.push_back(Q80);
//  vvariable.push_back(HT30);
//  vvariable.push_back(JetLepMass);
//  vvariable.push_back(JetHBPt);

  // Open input file(s)
  string basedirectory = "/lstore/cms/cbeiraod/Stop4Body/nTuples_v2016-07-12/";

  TFile* ttbarFile = new TFile((basedirectory + "TTJets_LO_bdt.root").c_str(), "READ");

  TFile* stopFile = new TFile((basedirectory + "T2DegStop_300_270_bdt.root").c_str(), "READ");

  TFile* wjetsFile1 = new TFile((basedirectory + "Wjets_100to200_bdt.root").c_str(), "READ");
  TFile* wjetsFile2 = new TFile((basedirectory + "Wjets_200to400_bdt.root").c_str(), "READ");
  TFile* wjetsFile3 = new TFile((basedirectory + "Wjets_400to600_bdt.root").c_str(), "READ");
  TFile* wjetsFile4 = new TFile((basedirectory + "Wjets_600toInf_bdt.root").c_str(), "READ");

  TChain* wjetsTree = new TChain("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsTree->Add((basedirectory + "Wjets_100to200_bdt.root").c_str());
  wjetsTree->Add((basedirectory + "Wjets_200to400_bdt.root").c_str());
  wjetsTree->Add((basedirectory + "Wjets_400to600_bdt.root").c_str());
  wjetsTree->Add((basedirectory + "Wjets_600toInf_bdt.root").c_str());

  // Data
  TFile* dataFile = new TFile((basedirectory + "PseudoData_bdt.root").c_str());

  // Get ttree(s) from input file(s)
  TTree* ttbarTree = static_cast<TTree*>(ttbarFile->Get("bdttree"));
  TTree* stopTree = static_cast<TTree*>(stopFile->Get("bdttree"));

  TTree* wjetsTree1 = static_cast<TTree*>(wjetsFile1->Get("bdttree"));
  TTree* wjetsTree2 = static_cast<TTree*>(wjetsFile2->Get("bdttree"));
  TTree* wjetsTree3 = static_cast<TTree*>(wjetsFile3->Get("bdttree"));
  TTree* wjetsTree4 = static_cast<TTree*>(wjetsFile4->Get("bdttree"));

  TTree* dataTree = static_cast<TTree*>(dataFile->Get("bdttree"));

  float ttbarXS = 0;
    ttbarTree->SetBranchAddress("XS", &ttbarXS);
      ttbarTree->GetEntry(0);
        std::cout << "ttbar cross section: " << ttbarXS << std::endl;

  float signalXS = 0;
    stopTree->SetBranchAddress("XS", &signalXS);
      stopTree->GetEntry(0);
        std::cout << "signal cross section: " << signalXS << std::endl;

  float wjetsXS1 = 0;
    wjetsTree1->SetBranchAddress("XS", &wjetsXS1);
      wjetsTree1->GetEntry(0);
        std::cout << "wjets cross section 100-200: " << wjetsXS1 << std::endl;

  float wjetsXS2 = 0;
    wjetsTree2->SetBranchAddress("XS", &wjetsXS2);
      wjetsTree2->GetEntry(0);
        std::cout << "wjets cross section 200-400: " << wjetsXS2 << std::endl;
 
  float wjetsXS3 = 0;
    wjetsTree3->SetBranchAddress("XS", &wjetsXS3);
      wjetsTree3->GetEntry(0);
        std::cout << "wjets cross section 400-600: " << wjetsXS3 << std::endl;
 
  float wjetsXS4 = 0;
    wjetsTree4->SetBranchAddress("XS", &wjetsXS4);
      wjetsTree4->GetEntry(0);
        std::cout << "wjets cross section 600-Inf: " << wjetsXS4 << std::endl;


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
    vector<TH1D*> dataH;
    vector<TH1D*> backgroundH;
    vector<TH1D*> ratioH;
    vector<TH1D*> emptyH;

    double xlow1, xup1, ylow1, yup1;
    double xlow2, xup2, ylow2, yup2;

  // Plots
  for(int i=0;i<int(vvariable.size());i++)
    {
      TCanvas * c2 = new TCanvas("variable","variable", 800, 600);

      string sttbarH =  "ttbarH"+std::to_string(i);
      string swjetsH =  "wjetsH"+std::to_string(i);
      string sstopH =  "stopH"+std::to_string(i);
      string sdataH = "dataH"+std::to_string(i);
      string sbackgroundH = "backgroundH"+std::to_string(i);
      string sratioH = "ratioH"+std::to_string(i);
      //string semptyH = "empty"+std::to_string(i);

      // Create histogram(s)
      ttbarH.push_back(new TH1D(sttbarH.c_str(), "ttbar", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      wjetsH.push_back(new TH1D(swjetsH.c_str(), "wjets", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      stopH.push_back(new TH1D(sstopH.c_str(), "Signal", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      dataH.push_back(new TH1D(sdataH.c_str(), "Data", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      backgroundH.push_back(new TH1D(sbackgroundH.c_str(), "", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      ratioH.push_back(new TH1D(sratioH.c_str(), "", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax()));
      //emptyH.push_back(new TH1D(semptyH.c_str(),"",vvariable[i].GetBins(),vvariable[i].GetXMin(), vvariable[i].GetXMax()));

      ttbarH[i]->SetFillColor(kGreen-7);
      ttbarH[i]->SetLineColor(kGreen-7);

      wjetsH[i]->SetFillColor(kAzure+5);
      wjetsH[i]->SetLineColor(kAzure+5);

      //stopH->SetFillColor(kRed);
      stopH[i]->SetLineColor(kRed);

      dataH[i]->SetLineColor(kBlack);
      dataH[i]->Sumw2();

      backgroundH[i]->SetMaximum(ratioH[i]->GetMaximum()*1.5);
      backgroundH[i]->SetMinimum(ratioH[i]->GetMinimum()*0.5);

      TLine *line1 = new TLine(vvariable[i].GetXMin(),1,vvariable[i].GetXMax(),1);

      if(vvariable.size()!=1)
	      c1->cd(i+1);
      else
	      c1->cd();

      // Divide Pads in Canvas c1

      xup1 = 0.99;
      yup1 = 0.99;
      xlow1 = 0.01;
      ylow1 = 0.2;

      xup2 = 0.99;
      yup2 = ylow1;
      xlow2 = 0.01;
      ylow2 = 0.01;

      gPad->Divide(1,2);
      gPad->cd(2);
      gPad->SetPad(xlow2,ylow2,xup2,yup2);

      if(vvariable.size()!=1)
	      c1->cd(i+1);
      else
	      c1->cd();

      gPad->cd(1);
      gPad->SetPad(xlow1,ylow1,xup1,yup1);

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

//      TCut selection = emu && ISRjet && met;
      TCut selection = "1";

      // Fill histogram(s) signal & BACKGROUND & DATA
      ttbarTree->Draw((vvariable[i].GetExpression()+">>"+sttbarH).c_str(),"XS*5000/Nevt"*(selection),"goff");
      wjetsTree->Draw((vvariable[i].GetExpression()+">>"+swjetsH).c_str(),"XS*5000/Nevt"*(selection),"goff");
      stopTree->Draw((vvariable[i].GetExpression()+">>"+sstopH).c_str(),"XS*5000/Nevt"*(selection),"goff");  //MULTIPLICAR O SINAL
      dataTree->Draw((vvariable[i].GetExpression()+">>"+sdataH).c_str(),selection,"goff");

      THStack *Stack = new THStack(vvariable[i].GetName().c_str(), (vvariable[i].GetName()+";"+vvariable[i].GetLeg().c_str()+";Evt.").c_str());
      Stack->Add(ttbarH[i]);
      Stack->Add(wjetsH[i]);

      gPad->SetLogy(vvariable[i].GetLogy());

      backgroundH[i]->Add(ttbarH[i],wjetsH[i]);
      ratioH[i]->Divide(dataH[i],backgroundH[i]);
      ratioH[i]->Sumw2();

      for(int j=0; j< backgroundH[i]->GetNbinsX()+1; j++)
      {
        if(backgroundH[i]->GetBinContent(j)<1e-8)
          backgroundH[i]->SetBinError(j,0);
        else
          backgroundH[i]->SetBinError(j, backgroundH[i]->GetBinError(j)/backgroundH[i]->GetBinContent(j));
        backgroundH[i]->SetBinContent(j,1);
      }

      TGraphErrors *gError = new TGraphErrors(backgroundH[i]);

      // Draw plots
      gStyle->SetOptStat(0);

      Stack->Draw("HIST");
      stopH[i]->Draw("HIST same");
      dataH[i]->Draw("E same");

      if(Stack->GetMaximum() > stopH[i]->GetMaximum() && Stack->GetMaximum() > dataH[i]->GetMaximum())
	      {
	        Stack->SetMaximum(Stack->GetMaximum()*1.05);
	    	}
      else if(stopH[i]->GetMaximum() > dataH[i]->GetMaximum())
	      {
	        Stack->SetMaximum(stopH[i]->GetMaximum()*1.05);
	      }
	    else 
	      {
	        Stack->SetMaximum(dataH[i]->GetMaximum()*1.05);
	      }

      TLegend * legenda = gPad->BuildLegend(0.895,0.69,0.65,0.89,"NDC");

      if(vvariable.size()!=1)
	      c1->cd(i+1);
      else
	      c1->cd();

      gPad->cd(2);
      backgroundH[i]->Draw();
      gError->Draw("3");

      ratioH[i]->Draw("E same");

      line1->Draw("same");
      gError->SetFillColor(kOrange+7);
      gError->SetFillStyle(3144);
      backgroundH[i]->GetYaxis()->SetNdivisions(5);
      backgroundH[i]->GetYaxis()->SetRangeUser(0.5,1.5);
      backgroundH[i]->GetYaxis()->SetTickSize(0.01);
      backgroundH[i]->GetYaxis()->SetLabelSize(0.15);
      backgroundH[i]->GetXaxis()->SetLabelSize(0.15);
      backgroundH[i]->GetYaxis()->SetTitle("Data/ #Sigma MC");
      backgroundH[i]->GetYaxis()->SetTitleSize(0.15);
      backgroundH[i]->GetYaxis()->SetTitleOffset(0.35);
      gError->GetXaxis()->SetRangeUser(vvariable[i].GetXMin(),vvariable[i].GetXMax());

      // Divide Canvas c2

      c2->cd();

      gPad->Divide(1,2);
      gPad->cd(2);
      gPad->SetPad(xlow2, ylow2, xup2, yup2);

      c2->cd();
      gPad->cd(1);
      gPad->SetPad(xlow1, ylow1, xup1, yup1);

      // Draw in Canvas c2 - Pad1

      gPad->SetLogy(vvariable[i].GetLogy());

      Stack->Draw("HIST goff");
      stopH[i]->Draw("HIST same goff");
      dataH[i]->Draw("E same goff");

      TLegend * legenda2 = gPad->BuildLegend(0.895,0.69,0.65,0.89,"NDC");

      //Draw in Canvas c2 - Pad2
      c2->cd();
      gPad->cd(2);

      gStyle->SetOptStat(0);

      backgroundH[i]->Reset("ICE");
      backgroundH[i]->SetTitle(";;Data/ #Sigma MC");

      backgroundH[i]->Draw();
      gError->Draw("3");

      ratioH[i]->Draw("E same");

      line1->Draw("same");
      gError->SetFillColor(kOrange+7);
      gError->SetFillStyle(3144);
      backgroundH[i]->GetYaxis()->SetTickSize(0.01);
      backgroundH[i]->GetYaxis()->SetNdivisions(5);
      backgroundH[i]->GetYaxis()->SetLabelSize(0.15);
      backgroundH[i]->GetXaxis()->SetLabelSize(0.15);
      backgroundH[i]->GetYaxis()->SetTitleSize(0.15);
      backgroundH[i]->GetYaxis()->SetTitleOffset(0.35);
      gError->GetXaxis()->SetRangeUser(vvariable[i].GetXMin(),vvariable[i].GetXMax());

      // Save individual plots as .pdf and .C
      //c2->SaveAs(("plots/"+vvariable[i].GetName()+".png").c_str());
      //c2->SaveAs(("plots/"+vvariable[i].GetName()+".C").c_str());

      delete c2;
    }
  //delete the vectors

  //Save file with all the plots
  c1->SaveAs("plots/plot_noPreSel.png");
  c1->SaveAs("plots/plot_noPreSel.C");

  return 0;
}

