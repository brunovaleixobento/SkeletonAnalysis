#include <iostream>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TChain.h"
#include "THStack.h"
#include "TLegend.h"
#include "TPad.h"
#include "string"
#include "TAxis.h"

using std::string;

class variable{

public:

  variable(string name="", string expression = "", int bins=30, double xmin=0, double xmax=100, string leg = "");

  string GetName() {return fname;}
  string GetExpression() {return fexpression;}
  int GetBins() {return fbins;}
  double GetXMin() {return fxmin;}
  double GetXMax() {return fxmax;}
  string GetLeg() {return fleg;}

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
};

variable::variable(string name, string expression, int bins, double xmin, double xmax, string leg): fname(name), fexpression(expression), fbins(bins), fxmin(xmin), fxmax(xmax), fleg(leg){}

int plotVar()
{
  vector<variable> vvariable;
  
  variable LepPt("LepPt","LepPt",30,0,200,"p_{T} (l) [GeV]");
  variable LepEta("LepEta","LepEta",100,-3,3,"#eta (l)");
  variable Njet("Njet","Njet",11,-0.5,10.5,"Njet");
  variable Jet1Pt("Jet1Pt","Jet1Pt",100,0,400,"p_{T} (Jet1) [GeV]");
  variable Jet1Eta("Jet1Eta","Jet1Eta",100,-3,3,"Eta (Jet1)");
  variable Met("Met","Met",30,100,300,"Met [GeV]");
  variable CosDPhi("CosDeltaPhi","CosDeltaPhi",30,-1.2,1.2,"Cos(#Delta #Phi)");
  variable DrJet1Lep("DrJet1Lep","DrJet1Lep",30,0,6,"Dr Jet1 Lep");
  variable DrJet2Lep("DrJet2Lep","DrJet2Lep",30,0,6,"Dr Jet2 Lep");
  variable Jet2Pt("Jet2Pt","Jet2Pt",100,0,400,"p_{T} (Jet2) [GeV]");
  variable mt("mt","mt",100,0,250,"mt [GeV]");
  variable HT20("HT20","HT20",100,0,2000,"HT20 [GeV]");
  variable HT30("HT30","HT30",100,0,2000,"HT30 [GeV]");

  /*vvariable.push_back(LepPt);
  vvariable.push_back(LepEta);
  vvariable.push_back(Njet);
  vvariable.push_back(Jet1Pt);
  vvariable.push_back(Jet1Eta);
  vvariable.push_back(Met);
  vvariable.push_back(CosDPhi);*/
  //vvariable.push_back(DrJet1Lep);
  //vvariable.push_back(DrJet2Lep);
  //vvariable.push_back(Jet2Pt);
  //vvariable.push_back(mt);
  vvariable.push_back(HT20);
  vvariable.push_back(HT30);

  // Open input file(s)
  string basedirectory = "/lstore/cms/cbeiraod/Stop4Body/Frozen/";

  TFile* ttbarFile = new TFile((basedirectory + "TTJets_LO_bdt.root").c_str(), "READ");

  TFile* stopFile = new TFile((basedirectory + "T2DegStop_300_270_bdt.root").c_str(), "READ");

  TChain wjetsTree("bdttree"); //creates a chain to process a Tree called "bdttree"
  wjetsTree.Add((basedirectory + "Wjets100to200_bdt.root").c_str());
  wjetsTree.Add((basedirectory + "Wjets200to400_bdt.root").c_str());
  wjetsTree.Add((basedirectory + "Wjets400to600_bdt.root").c_str());
  wjetsTree.Add((basedirectory + "Wjets600toInf_bdt.root").c_str());

  // Get ttree(s) from input file(s)
  TTree* ttbarTree = static_cast<TTree*>(ttbarFile->Get("bdttree"));
  TTree* stopTree = static_cast<TTree*>(stopFile->Get("bdttree"));


  // Create canvas
  TCanvas * c1 = new TCanvas("Stop","Stop", 800, 600);
  TCanvas * c2 = new TCanvas("variable","variable", 800, 600);

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

  // Plots
  for(int i=0;i<vvariable.size();i++)
    {
      // Create histogram(s)
      TH1D* ttbarH= new TH1D("ttbarH", "ttbar", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax());
      TH1D* wjetsH = new TH1D("wjetsH", "wjets", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax());
      TH1D* stopH = new TH1D("stopH", "Signal*100", vvariable[i].GetBins(), vvariable[i].GetXMin(), vvariable[i].GetXMax());
      
      ttbarH->SetFillColor(kGreen);
      ttbarH->SetLineColor(kGreen);
      
      wjetsH->SetFillColor(kBlue);
      wjetsH->SetLineColor(kBlue);

      stopH->SetLineColor(kRed);
      
      if(vvariable.size()!=1)
	c1->cd(i+1);
      else
	c1->cd();

      // Fill histogram(s)
      ttbarTree->Draw((vvariable[i].GetExpression()+">>ttbarH").c_str(),"XS*10000/Nevt","goff");
      wjetsTree.Draw((vvariable[i].GetExpression()+">>wjetsH").c_str(),"XS*10000/Nevt","goff");
      stopTree->Draw((vvariable[i].GetExpression()+">>stopH").c_str(),"XS*10000/Nevt*100","goff");  //MULTIPLICAR O SINAL


      THStack *Stack = new THStack(vvariable[i].GetName().c_str(), (vvariable[i].GetName()+";"+vvariable[i].GetLeg().c_str()+";Evt.").c_str());
      Stack->Add(ttbarH);
      Stack->Add(wjetsH);
      
      // Draw plots
      Stack->Draw("HIST");
      stopH->Draw("HIST same");

      if(Stack->GetMaximum() > stopH->GetMaximum())
	{
	  Stack->SetMaximum(Stack->GetMaximum()*1.05);
	}
      else
	{
	  Stack->SetMaximum(stopH->GetMaximum()*1.05);
	}
      
      TLegend * legenda = gPad->BuildLegend(0.895,0.69,0.65,0.89,"NDC");
      
      c2->cd();
      Stack->Draw("HIST goff");
      stopH->Draw("HIST same goff");
 
      TLegend * legenda2 = c2->BuildLegend(0.895,0.69,0.65,0.89,"NDC");

      // Save individual plots as .pdf and .C
      c2->SaveAs(("plots/"+vvariable[i].GetName()+".pdf").c_str());
      c2->SaveAs(("plots/"+vvariable[i].GetName()+".C").c_str());
    }
  delete c2;

  //Save file with all the plots
  c1->SaveAs("plots/plot.pdf");
  c1->SaveAs("plots/plot.C");

  return 0;
}
