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
  variable var1("LepPt","LepPt",30,0,200,"p_{T} (l) [GeV]");
  variable var2("LepEta","LepEta",100,-3,3,"#eta (l)");
  variable var3("Njet","Njet",11,-0.5,10.5,"Njet");
  variable var4("Jet1Pt","Jet1Pt",100,0,400,"p_{T} (Jet1) [GeV]");
  variable var5("Jet1Eta","Jet1Eta",100,-3,3,"Eta (Jet1)");
  variable var6("Met","Met",30,100,300,"Met [GeV]");
  variable var7("CosDeltaPhi","CosDeltaPhi",30,-1.2,1.2,"Cos(#Delta #Phi)");
  variable var8("Jet1Pt+Met","Jet1Pt+Met",30,200,600,"Met+Jet1Pt");
  variable var9("Jet2Pt","Jet2Pt",30,200,600,"p_{T} (jet2) [MeV]");

  vvariable.push_back(var1);
  vvariable.push_back(var2);
  vvariable.push_back(var3);
  vvariable.push_back(var4);
  vvariable.push_back(var5);
  vvariable.push_back(var6);
  vvariable.push_back(var7);
  vvariable.push_back(var8);
  vvariable.push_back(var9);

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

  TCanvas * c1 = new TCanvas("Stop","Stop", 800, 600);

 //divide canvas
  if(vvariable.size()!=1)
    {
      if(vvariable.size()%2==0)
	c1->Divide(vvariable.size()/2,2);
      else
	c1->Divide((vvariable.size()+1)/2,2);
    }

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

 c1->cd(i+1);

 // Fill histogram(s)
 ttbarTree->Draw((vvariable[i].GetExpression()+">>ttbarH").c_str(),"XS*10000/Nevt","goff");
 wjetsTree.Draw((vvariable[i].GetExpression()+">>wjetsH").c_str(),"XS*10000/Nevt","goff");
 stopTree->Draw((vvariable[i].GetExpression()+">>stopH").c_str(),"XS*10000/Nevt*100","goff");


 THStack *Stack = new THStack(vvariable[i].GetName().c_str(), (vvariable[i].GetName()+";"+vvariable[i].GetLeg().c_str()+";Evt.").c_str());
 Stack->Add(ttbarH);
 Stack->Add(wjetsH);

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

 c1->SaveAs(("plots/" + vvariable[i].GetName() + ".pdf").c_str());
 c1->SaveAs(("plots/" + vvariable[i].GetName() + ".C").c_str());

 }

 // Continue...

  return 0;
}
