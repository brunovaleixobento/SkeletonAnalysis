void JetHBPt()
{
//=========Macro generated from canvas: variable/variable
//=========  (Fri Jul 15 16:07:38 2016) by ROOT version6.02/13
   TCanvas *variable = new TCanvas("variable", "variable",566,168,800,600);
   gStyle->SetOptStat(0);
   variable->Range(0,0,1,1);
   variable->SetFillColor(0);
   variable->SetBorderMode(0);
   variable->SetBorderSize(2);
   variable->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.2,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(-6.25,-0.125,56.25,1.125);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *JetHBPt = new THStack();
   JetHBPt->SetName("JetHBPt");
   JetHBPt->SetTitle("JetHBPt;p_{T} (JetHB);Evt.");
   JetHBPt->SetMaximum(0);
   
   TH1F *JetHBPt_stack_4 = new TH1F("JetHBPt_stack_4","JetHBPt",50,0,50);
   JetHBPt_stack_4->SetMinimum(0);
   JetHBPt_stack_4->SetMaximum(0);
   JetHBPt_stack_4->SetDirectory(0);
   JetHBPt_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   JetHBPt_stack_4->SetLineColor(ci);
   JetHBPt_stack_4->GetXaxis()->SetTitle("p_{T} (JetHB)");
   JetHBPt_stack_4->GetXaxis()->SetLabelFont(42);
   JetHBPt_stack_4->GetXaxis()->SetLabelSize(0.035);
   JetHBPt_stack_4->GetXaxis()->SetTitleSize(0.035);
   JetHBPt_stack_4->GetXaxis()->SetTitleFont(42);
   JetHBPt_stack_4->GetYaxis()->SetTitle("Evt.");
   JetHBPt_stack_4->GetYaxis()->SetLabelFont(42);
   JetHBPt_stack_4->GetYaxis()->SetLabelSize(0.035);
   JetHBPt_stack_4->GetYaxis()->SetTitleSize(0.035);
   JetHBPt_stack_4->GetYaxis()->SetTitleFont(42);
   JetHBPt_stack_4->GetZaxis()->SetLabelFont(42);
   JetHBPt_stack_4->GetZaxis()->SetLabelSize(0.035);
   JetHBPt_stack_4->GetZaxis()->SetTitleSize(0.035);
   JetHBPt_stack_4->GetZaxis()->SetTitleFont(42);
   JetHBPt->SetHistogram(JetHBPt_stack_4);
   
   
   TH1D *ttbarH319 = new TH1D("ttbarH319","ttbar",50,0,50);
   ttbarH319->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH319->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH319->SetLineColor(ci);
   ttbarH319->GetXaxis()->SetLabelFont(42);
   ttbarH319->GetXaxis()->SetLabelSize(0.035);
   ttbarH319->GetXaxis()->SetTitleSize(0.035);
   ttbarH319->GetXaxis()->SetTitleFont(42);
   ttbarH319->GetYaxis()->SetLabelFont(42);
   ttbarH319->GetYaxis()->SetLabelSize(0.035);
   ttbarH319->GetYaxis()->SetTitleSize(0.035);
   ttbarH319->GetYaxis()->SetTitleFont(42);
   ttbarH319->GetZaxis()->SetLabelFont(42);
   ttbarH319->GetZaxis()->SetLabelSize(0.035);
   ttbarH319->GetZaxis()->SetTitleSize(0.035);
   ttbarH319->GetZaxis()->SetTitleFont(42);
   JetHBPt->Add(ttbarH3,"");
   
   TH1D *wjetsH320 = new TH1D("wjetsH320","wjets",50,0,50);
   wjetsH320->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH320->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH320->SetLineColor(ci);
   wjetsH320->GetXaxis()->SetLabelFont(42);
   wjetsH320->GetXaxis()->SetLabelSize(0.035);
   wjetsH320->GetXaxis()->SetTitleSize(0.035);
   wjetsH320->GetXaxis()->SetTitleFont(42);
   wjetsH320->GetYaxis()->SetLabelFont(42);
   wjetsH320->GetYaxis()->SetLabelSize(0.035);
   wjetsH320->GetYaxis()->SetTitleSize(0.035);
   wjetsH320->GetYaxis()->SetTitleFont(42);
   wjetsH320->GetZaxis()->SetLabelFont(42);
   wjetsH320->GetZaxis()->SetLabelSize(0.035);
   wjetsH320->GetZaxis()->SetTitleSize(0.035);
   wjetsH320->GetZaxis()->SetTitleFont(42);
   JetHBPt->Add(wjetsH3,"");
   JetHBPt->Draw("hist goff");
   
   TH1D *stopH321 = new TH1D("stopH321","Signal",50,0,50);
   stopH321->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH321->SetLineColor(ci);
   stopH321->GetXaxis()->SetLabelFont(42);
   stopH321->GetXaxis()->SetLabelSize(0.035);
   stopH321->GetXaxis()->SetTitleSize(0.035);
   stopH321->GetXaxis()->SetTitleFont(42);
   stopH321->GetYaxis()->SetLabelFont(42);
   stopH321->GetYaxis()->SetLabelSize(0.035);
   stopH321->GetYaxis()->SetTitleSize(0.035);
   stopH321->GetYaxis()->SetTitleFont(42);
   stopH321->GetZaxis()->SetLabelFont(42);
   stopH321->GetZaxis()->SetLabelSize(0.035);
   stopH321->GetZaxis()->SetTitleSize(0.035);
   stopH321->GetZaxis()->SetTitleFont(42);
   stopH321->Draw("HIST same goff");
   
   TH1D *dataH322 = new TH1D("dataH322","Data",50,0,50);
   dataH322->SetStats(0);
   dataH322->GetXaxis()->SetLabelFont(42);
   dataH322->GetXaxis()->SetLabelSize(0.035);
   dataH322->GetXaxis()->SetTitleSize(0.035);
   dataH322->GetXaxis()->SetTitleFont(42);
   dataH322->GetYaxis()->SetLabelFont(42);
   dataH322->GetYaxis()->SetLabelSize(0.035);
   dataH322->GetYaxis()->SetTitleSize(0.035);
   dataH322->GetYaxis()->SetTitleFont(42);
   dataH322->GetZaxis()->SetLabelFont(42);
   dataH322->GetZaxis()->SetLabelSize(0.035);
   dataH322->GetZaxis()->SetTitleSize(0.035);
   dataH322->GetZaxis()->SetTitleFont(42);
   dataH322->Draw("E same goff");
   
   TLegend *leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","NDC","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ttbarH3","ttbar","lpf");

   ci = TColor::GetColor("#66ff66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#66ff66");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("wjetsH3","wjets","lpf");

   ci = TColor::GetColor("#3399cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#3399cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("stopH3","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH3","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4329546,0.94,0.5670454,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("JetHBPt");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-6.25,0.375,56.25,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH323 = new TH1D("backgroundH323","",50,0,50);
   backgroundH323->SetMinimum(0.5);
   backgroundH323->SetMaximum(1.5);
   backgroundH323->SetEntries(51);
   backgroundH323->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH323->SetLineColor(ci);
   backgroundH323->GetXaxis()->SetLabelFont(42);
   backgroundH323->GetXaxis()->SetLabelSize(0.15);
   backgroundH323->GetXaxis()->SetTitleSize(0.035);
   backgroundH323->GetXaxis()->SetTitleFont(42);
   backgroundH323->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH323->GetYaxis()->SetNdivisions(5);
   backgroundH323->GetYaxis()->SetLabelFont(42);
   backgroundH323->GetYaxis()->SetLabelSize(0.15);
   backgroundH323->GetYaxis()->SetTitleSize(0.15);
   backgroundH323->GetYaxis()->SetTickLength(0.01);
   backgroundH323->GetYaxis()->SetTitleOffset(0.15);
   backgroundH323->GetYaxis()->SetTitleFont(42);
   backgroundH323->GetZaxis()->SetLabelFont(42);
   backgroundH323->GetZaxis()->SetLabelSize(0.035);
   backgroundH323->GetZaxis()->SetTitleSize(0.035);
   backgroundH323->GetZaxis()->SetTitleFont(42);
   backgroundH323->Draw("");
   
   Double_t Graph_from_backgroundH3_fx1004[50] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5,
   40.5,
   41.5,
   42.5,
   43.5,
   44.5,
   45.5,
   46.5,
   47.5,
   48.5,
   49.5};
   Double_t Graph_from_backgroundH3_fy1004[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_backgroundH3_fex1004[50] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_backgroundH3_fey1004[50] = {
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_backgroundH3_fx1004,Graph_from_backgroundH3_fy1004,Graph_from_backgroundH3_fex1004,Graph_from_backgroundH3_fey1004);
   gre->SetName("Graph_from_backgroundH3");
   gre->SetTitle("");
   gre->SetFillColor(6);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH31004 = new TH1F("Graph_Graph_from_backgroundH31004","",100,0,55);
   Graph_Graph_from_backgroundH31004->SetMinimum(0.9);
   Graph_Graph_from_backgroundH31004->SetMaximum(2.1);
   Graph_Graph_from_backgroundH31004->SetDirectory(0);
   Graph_Graph_from_backgroundH31004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH31004->SetLineColor(ci);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH31004);
   
   gre->Draw("3");
   
   TH1D *ratioH324 = new TH1D("ratioH324","",50,0,50);
   ratioH324->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH324->SetLineColor(ci);
   ratioH324->GetXaxis()->SetLabelFont(42);
   ratioH324->GetXaxis()->SetLabelSize(0.035);
   ratioH324->GetXaxis()->SetTitleSize(0.035);
   ratioH324->GetXaxis()->SetTitleFont(42);
   ratioH324->GetYaxis()->SetLabelFont(42);
   ratioH324->GetYaxis()->SetLabelSize(0.035);
   ratioH324->GetYaxis()->SetTitleSize(0.035);
   ratioH324->GetYaxis()->SetTitleFont(42);
   ratioH324->GetZaxis()->SetLabelFont(42);
   ratioH324->GetZaxis()->SetLabelSize(0.035);
   ratioH324->GetZaxis()->SetTitleSize(0.035);
   ratioH324->GetZaxis()->SetTitleFont(42);
   ratioH324->Draw("E same");
   TLine *line = new TLine(0,1,50,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
