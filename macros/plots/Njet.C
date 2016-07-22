void Njet()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:12:44 2016) by ROOT version6.02/13
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
   variable_1->Range(-1.875,-25.3575,11.875,228.2175);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *Njet = new THStack();
   Njet->SetName("Njet");
   Njet->SetTitle("Njet;Njet;Evt.");
   Njet->SetMaximum(193.2);
   
   TH1F *Njet_stack_2 = new TH1F("Njet_stack_2","Njet",11,-0.5,10.5);
   Njet_stack_2->SetMinimum(0);
   Njet_stack_2->SetMaximum(202.86);
   Njet_stack_2->SetDirectory(0);
   Njet_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Njet_stack_2->SetLineColor(ci);
   Njet_stack_2->GetXaxis()->SetTitle("Njet");
   Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Njet_stack_2->GetYaxis()->SetTitle("Evt.");
   Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Njet_stack_2->GetZaxis()->SetTitleFont(42);
   Njet->SetHistogram(Njet_stack_2);
   
   
   TH1D *ttbarH17 = new TH1D("ttbarH17","ttbar",11,-0.5,10.5);
   ttbarH17->SetBinContent(3,5.499021);
   ttbarH17->SetBinContent(4,18.69667);
   ttbarH17->SetBinContent(5,43.62556);
   ttbarH17->SetBinContent(6,42.52576);
   ttbarH17->SetBinContent(7,33.72733);
   ttbarH17->SetBinContent(8,18.33007);
   ttbarH17->SetBinContent(9,9.898237);
   ttbarH17->SetBinContent(10,4.032615);
   ttbarH17->SetBinContent(11,3.299412);
   ttbarH17->SetBinContent(12,0.7332027);
   ttbarH17->SetBinError(3,1.419841);
   ttbarH17->SetBinError(4,2.618057);
   ttbarH17->SetBinError(5,3.999149);
   ttbarH17->SetBinError(6,3.948418);
   ttbarH17->SetBinError(7,3.516317);
   ttbarH17->SetBinError(8,2.592263);
   ttbarH17->SetBinError(9,1.904917);
   ttbarH17->SetBinError(10,1.215879);
   ttbarH17->SetBinError(11,1.099804);
   ttbarH17->SetBinError(12,0.5184526);
   ttbarH17->SetEntries(492);
   ttbarH17->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH17->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH17->SetLineColor(ci);
   ttbarH17->GetXaxis()->SetLabelFont(42);
   ttbarH17->GetXaxis()->SetLabelSize(0.035);
   ttbarH17->GetXaxis()->SetTitleSize(0.035);
   ttbarH17->GetXaxis()->SetTitleFont(42);
   ttbarH17->GetYaxis()->SetLabelFont(42);
   ttbarH17->GetYaxis()->SetLabelSize(0.035);
   ttbarH17->GetYaxis()->SetTitleSize(0.035);
   ttbarH17->GetYaxis()->SetTitleFont(42);
   ttbarH17->GetZaxis()->SetLabelFont(42);
   ttbarH17->GetZaxis()->SetLabelSize(0.035);
   ttbarH17->GetZaxis()->SetTitleSize(0.035);
   ttbarH17->GetZaxis()->SetTitleFont(42);
   Njet->Add(ttbarH1,"");
   
   TH1D *wjetsH18 = new TH1D("wjetsH18","wjets",11,-0.5,10.5);
   wjetsH18->SetBinContent(3,120.9075);
   wjetsH18->SetBinContent(4,162.5009);
   wjetsH18->SetBinContent(5,123.6116);
   wjetsH18->SetBinContent(6,63.0668);
   wjetsH18->SetBinContent(7,31.47336);
   wjetsH18->SetBinContent(8,10.86036);
   wjetsH18->SetBinContent(9,4.952894);
   wjetsH18->SetBinContent(10,0.9344099);
   wjetsH18->SetBinContent(11,0.2787301);
   wjetsH18->SetBinContent(12,0.5463999);
   wjetsH18->SetBinError(3,6.411214);
   wjetsH18->SetBinError(4,6.771103);
   wjetsH18->SetBinError(5,5.368101);
   wjetsH18->SetBinError(6,3.587852);
   wjetsH18->SetBinError(7,2.266636);
   wjetsH18->SetBinError(8,1.387348);
   wjetsH18->SetBinError(9,0.8784147);
   wjetsH18->SetBinError(10,0.3351241);
   wjetsH18->SetBinError(11,0.201632);
   wjetsH18->SetBinError(12,0.2443574);
   wjetsH18->SetEntries(2588);
   wjetsH18->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH18->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH18->SetLineColor(ci);
   wjetsH18->GetXaxis()->SetLabelFont(42);
   wjetsH18->GetXaxis()->SetLabelSize(0.035);
   wjetsH18->GetXaxis()->SetTitleSize(0.035);
   wjetsH18->GetXaxis()->SetTitleFont(42);
   wjetsH18->GetYaxis()->SetLabelFont(42);
   wjetsH18->GetYaxis()->SetLabelSize(0.035);
   wjetsH18->GetYaxis()->SetTitleSize(0.035);
   wjetsH18->GetYaxis()->SetTitleFont(42);
   wjetsH18->GetZaxis()->SetLabelFont(42);
   wjetsH18->GetZaxis()->SetLabelSize(0.035);
   wjetsH18->GetZaxis()->SetTitleSize(0.035);
   wjetsH18->GetZaxis()->SetTitleFont(42);
   Njet->Add(wjetsH1,"");
   Njet->Draw("hist goff");
   
   TH1D *stopH19 = new TH1D("stopH19","Signal",11,-0.5,10.5);
   stopH19->SetBinContent(3,10.23966);
   stopH19->SetBinContent(4,22.00006);
   stopH19->SetBinContent(5,26.86643);
   stopH19->SetBinContent(6,24.53462);
   stopH19->SetBinContent(7,16.62677);
   stopH19->SetBinContent(8,8.313385);
   stopH19->SetBinContent(9,4.05531);
   stopH19->SetBinContent(10,1.216593);
   stopH19->SetBinContent(11,0.8110619);
   stopH19->SetBinContent(12,0.1013827);
   stopH19->SetBinError(3,1.018884);
   stopH19->SetBinError(4,1.493461);
   stopH19->SetBinError(5,1.650391);
   stopH19->SetBinError(6,1.577145);
   stopH19->SetBinError(7,1.298333);
   stopH19->SetBinError(8,0.9180598);
   stopH19->SetBinError(9,0.6412008);
   stopH19->SetBinError(10,0.3512001);
   stopH19->SetBinError(11,0.2867537);
   stopH19->SetBinError(12,0.1013827);
   stopH19->SetEntries(1132);
   stopH19->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH19->SetLineColor(ci);
   stopH19->GetXaxis()->SetLabelFont(42);
   stopH19->GetXaxis()->SetLabelSize(0.035);
   stopH19->GetXaxis()->SetTitleSize(0.035);
   stopH19->GetXaxis()->SetTitleFont(42);
   stopH19->GetYaxis()->SetLabelFont(42);
   stopH19->GetYaxis()->SetLabelSize(0.035);
   stopH19->GetYaxis()->SetTitleSize(0.035);
   stopH19->GetYaxis()->SetTitleFont(42);
   stopH19->GetZaxis()->SetLabelFont(42);
   stopH19->GetZaxis()->SetLabelSize(0.035);
   stopH19->GetZaxis()->SetTitleSize(0.035);
   stopH19->GetZaxis()->SetTitleFont(42);
   stopH19->Draw("HIST same goff");
   
   TH1D *dataH110 = new TH1D("dataH110","Data",11,-0.5,10.5);
   dataH110->SetBinContent(3,118);
   dataH110->SetBinContent(4,184);
   dataH110->SetBinContent(5,175);
   dataH110->SetBinContent(6,99);
   dataH110->SetBinContent(7,58);
   dataH110->SetBinContent(8,25);
   dataH110->SetBinContent(9,22);
   dataH110->SetBinContent(10,5);
   dataH110->SetBinContent(11,7);
   dataH110->SetBinContent(12,2);
   dataH110->SetBinError(3,10.86278);
   dataH110->SetBinError(4,13.56466);
   dataH110->SetBinError(5,13.22876);
   dataH110->SetBinError(6,9.949874);
   dataH110->SetBinError(7,7.615773);
   dataH110->SetBinError(8,5);
   dataH110->SetBinError(9,4.690416);
   dataH110->SetBinError(10,2.236068);
   dataH110->SetBinError(11,2.645751);
   dataH110->SetBinError(12,1.414214);
   dataH110->SetEntries(695);
   dataH110->SetStats(0);
   dataH110->GetXaxis()->SetLabelFont(42);
   dataH110->GetXaxis()->SetLabelSize(0.035);
   dataH110->GetXaxis()->SetTitleSize(0.035);
   dataH110->GetXaxis()->SetTitleFont(42);
   dataH110->GetYaxis()->SetLabelFont(42);
   dataH110->GetYaxis()->SetLabelSize(0.035);
   dataH110->GetYaxis()->SetTitleSize(0.035);
   dataH110->GetYaxis()->SetTitleFont(42);
   dataH110->GetZaxis()->SetLabelFont(42);
   dataH110->GetZaxis()->SetLabelSize(0.035);
   dataH110->GetZaxis()->SetTitleSize(0.035);
   dataH110->GetZaxis()->SetTitleFont(42);
   dataH110->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH1","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH1","wjets","lpf");

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
   entry=leg->AddEntry("stopH1","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH1","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4624387,0.9341347,0.5375613,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Njet");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-1.875,0.375,11.875,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH111 = new TH1D("backgroundH111","",11,-0.5,10.5);
   backgroundH111->SetMinimum(0.5);
   backgroundH111->SetMaximum(1.5);
   backgroundH111->SetEntries(3092);
   backgroundH111->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH111->SetLineColor(ci);
   backgroundH111->GetXaxis()->SetLabelFont(42);
   backgroundH111->GetXaxis()->SetLabelSize(0.15);
   backgroundH111->GetXaxis()->SetTitleSize(0.035);
   backgroundH111->GetXaxis()->SetTitleFont(42);
   backgroundH111->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH111->GetYaxis()->SetNdivisions(5);
   backgroundH111->GetYaxis()->SetLabelFont(42);
   backgroundH111->GetYaxis()->SetLabelSize(0.15);
   backgroundH111->GetYaxis()->SetTitleSize(0.15);
   backgroundH111->GetYaxis()->SetTickLength(0.01);
   backgroundH111->GetYaxis()->SetTitleOffset(0.35);
   backgroundH111->GetYaxis()->SetTitleFont(42);
   backgroundH111->GetZaxis()->SetLabelFont(42);
   backgroundH111->GetZaxis()->SetLabelSize(0.035);
   backgroundH111->GetZaxis()->SetTitleSize(0.035);
   backgroundH111->GetZaxis()->SetTitleFont(42);
   backgroundH111->Draw("");
   
   Double_t Graph_from_backgroundH1_fx1002[11] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10};
   Double_t Graph_from_backgroundH1_fy1002[11] = {
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
   Double_t Graph_from_backgroundH1_fex1002[11] = {
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
   Double_t Graph_from_backgroundH1_fey1002[11] = {
   0,
   0,
   0.0519479,
   0.04006466,
   0.04002701,
   0.0505248,
   0.06416426,
   0.1007236,
   0.1412481,
   0.2539182,
   0.3124902};
   TGraphErrors *gre = new TGraphErrors(11,Graph_from_backgroundH1_fx1002,Graph_from_backgroundH1_fy1002,Graph_from_backgroundH1_fex1002,Graph_from_backgroundH1_fey1002);
   gre->SetName("Graph_from_backgroundH1");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH11002 = new TH1F("Graph_Graph_from_backgroundH11002","",100,-1.6,11.6);
   Graph_Graph_from_backgroundH11002->SetMinimum(0.6250118);
   Graph_Graph_from_backgroundH11002->SetMaximum(1.374988);
   Graph_Graph_from_backgroundH11002->SetDirectory(0);
   Graph_Graph_from_backgroundH11002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH11002->SetLineColor(ci);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetRange(9,92);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH11002);
   
   gre->Draw("3");
   
   TH1D *ratioH112 = new TH1D("ratioH112","",11,-0.5,10.5);
   ratioH112->SetBinContent(3,0.9334962);
   ratioH112->SetBinContent(4,1.015466);
   ratioH112->SetBinContent(5,1.046418);
   ratioH112->SetBinContent(6,0.937566);
   ratioH112->SetBinContent(7,0.8895612);
   ratioH112->SetBinContent(8,0.8564452);
   ratioH112->SetBinContent(9,1.481369);
   ratioH112->SetBinContent(10,1.006639);
   ratioH112->SetBinContent(11,1.956322);
   ratioH112->SetBinContent(12,1.562985);
   ratioH112->SetBinError(3,0.09867351);
   ratioH112->SetBinError(4,0.08520217);
   ratioH112->SetBinError(5,0.08950664);
   ratioH112->SetBinError(6,0.1054658);
   ratioH112->SetBinError(7,0.1300051);
   ratioH112->SetBinError(8,0.1917849);
   ratioH112->SetBinError(9,0.3788528);
   ratioH112->SetBinError(10,0.5176849);
   ratioH112->SetBinError(11,0.9594106);
   ratioH112->SetBinError(12,1.308273);
   ratioH112->SetEntries(72.07779);
   ratioH112->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH112->SetLineColor(ci);
   ratioH112->GetXaxis()->SetLabelFont(42);
   ratioH112->GetXaxis()->SetLabelSize(0.035);
   ratioH112->GetXaxis()->SetTitleSize(0.035);
   ratioH112->GetXaxis()->SetTitleFont(42);
   ratioH112->GetYaxis()->SetLabelFont(42);
   ratioH112->GetYaxis()->SetLabelSize(0.035);
   ratioH112->GetYaxis()->SetTitleSize(0.035);
   ratioH112->GetYaxis()->SetTitleFont(42);
   ratioH112->GetZaxis()->SetLabelFont(42);
   ratioH112->GetZaxis()->SetLabelSize(0.035);
   ratioH112->GetZaxis()->SetTitleSize(0.035);
   ratioH112->GetZaxis()->SetTitleFont(42);
   ratioH112->Draw("E same");
   TLine *line = new TLine(-0.5,1,10.5,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
