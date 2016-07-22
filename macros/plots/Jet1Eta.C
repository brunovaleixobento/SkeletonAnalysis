void Jet1Eta()
{
//=========Macro generated from canvas: variable/variable
//=========  (Fri Jul 15 15:10:35 2016) by ROOT version6.02/13
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
   variable_1->Range(-3.75,-21.90069,3.75,197.1062);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *Jet1Eta = new THStack();
   Jet1Eta->SetName("Jet1Eta");
   Jet1Eta->SetTitle("Jet1Eta;Eta (Jet1);Evt.");
   Jet1Eta->SetMaximum(166.8624);
   
   TH1F *Jet1Eta_stack_5 = new TH1F("Jet1Eta_stack_5","Jet1Eta",30,-3,3);
   Jet1Eta_stack_5->SetMinimum(0);
   Jet1Eta_stack_5->SetMaximum(175.2055);
   Jet1Eta_stack_5->SetDirectory(0);
   Jet1Eta_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jet1Eta_stack_5->SetLineColor(ci);
   Jet1Eta_stack_5->GetXaxis()->SetTitle("Eta (Jet1)");
   Jet1Eta_stack_5->GetXaxis()->SetLabelFont(42);
   Jet1Eta_stack_5->GetXaxis()->SetLabelSize(0.035);
   Jet1Eta_stack_5->GetXaxis()->SetTitleSize(0.035);
   Jet1Eta_stack_5->GetXaxis()->SetTitleFont(42);
   Jet1Eta_stack_5->GetYaxis()->SetTitle("Evt.");
   Jet1Eta_stack_5->GetYaxis()->SetLabelFont(42);
   Jet1Eta_stack_5->GetYaxis()->SetLabelSize(0.035);
   Jet1Eta_stack_5->GetYaxis()->SetTitleSize(0.035);
   Jet1Eta_stack_5->GetYaxis()->SetTitleFont(42);
   Jet1Eta_stack_5->GetZaxis()->SetLabelFont(42);
   Jet1Eta_stack_5->GetZaxis()->SetLabelSize(0.035);
   Jet1Eta_stack_5->GetZaxis()->SetTitleSize(0.035);
   Jet1Eta_stack_5->GetZaxis()->SetTitleFont(42);
   Jet1Eta->SetHistogram(Jet1Eta_stack_5);
   
   
   TH1D *ttbarH425 = new TH1D("ttbarH425","ttbar",30,-3,3);
   ttbarH425->SetBinContent(4,5.499021);
   ttbarH425->SetBinContent(5,13.93085);
   ttbarH425->SetBinContent(6,11.36464);
   ttbarH425->SetBinContent(7,21.62948);
   ttbarH425->SetBinContent(8,19.42987);
   ttbarH425->SetBinContent(9,22.72929);
   ttbarH425->SetBinContent(10,28.96151);
   ttbarH425->SetBinContent(11,32.99412);
   ttbarH425->SetBinContent(12,34.09393);
   ttbarH425->SetBinContent(13,37.02674);
   ttbarH425->SetBinContent(14,36.29354);
   ttbarH425->SetBinContent(15,36.66014);
   ttbarH425->SetBinContent(16,39.59295);
   ttbarH425->SetBinContent(17,36.29354);
   ttbarH425->SetBinContent(18,35.19373);
   ttbarH425->SetBinContent(19,33.36073);
   ttbarH425->SetBinContent(20,31.89432);
   ttbarH425->SetBinContent(21,32.26092);
   ttbarH425->SetBinContent(22,26.3953);
   ttbarH425->SetBinContent(23,22.72929);
   ttbarH425->SetBinContent(24,19.79647);
   ttbarH425->SetBinContent(25,10.99804);
   ttbarH425->SetBinContent(26,9.531636);
   ttbarH425->SetBinContent(27,9.165034);
   ttbarH425->SetBinError(4,1.419841);
   ttbarH425->SetBinError(5,2.259883);
   ttbarH425->SetBinError(6,2.04115);
   ttbarH425->SetBinError(7,2.815919);
   ttbarH425->SetBinError(8,2.668898);
   ttbarH425->SetBinError(9,2.886622);
   ttbarH425->SetBinError(10,3.258424);
   ttbarH425->SetBinError(11,3.477886);
   ttbarH425->SetBinError(12,3.535376);
   ttbarH425->SetBinError(13,3.684298);
   ttbarH425->SetBinError(14,3.647638);
   ttbarH425->SetBinError(15,3.666014);
   ttbarH425->SetBinError(16,3.809833);
   ttbarH425->SetBinError(17,3.647638);
   ttbarH425->SetBinError(18,3.591945);
   ttbarH425->SetBinError(19,3.497154);
   ttbarH425->SetBinError(20,3.41943);
   ttbarH425->SetBinError(21,3.439026);
   ttbarH425->SetBinError(22,3.110716);
   ttbarH425->SetBinError(23,2.886622);
   ttbarH425->SetBinError(24,2.693959);
   ttbarH425->SetBinError(25,2.007958);
   ttbarH425->SetBinError(26,1.869308);
   ttbarH425->SetBinError(27,1.833007);
   ttbarH425->SetEntries(1658);
   ttbarH425->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH425->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH425->SetLineColor(ci);
   ttbarH425->GetXaxis()->SetLabelFont(42);
   ttbarH425->GetXaxis()->SetLabelSize(0.035);
   ttbarH425->GetXaxis()->SetTitleSize(0.035);
   ttbarH425->GetXaxis()->SetTitleFont(42);
   ttbarH425->GetYaxis()->SetLabelFont(42);
   ttbarH425->GetYaxis()->SetLabelSize(0.035);
   ttbarH425->GetYaxis()->SetTitleSize(0.035);
   ttbarH425->GetYaxis()->SetTitleFont(42);
   ttbarH425->GetZaxis()->SetLabelFont(42);
   ttbarH425->GetZaxis()->SetLabelSize(0.035);
   ttbarH425->GetZaxis()->SetTitleSize(0.035);
   ttbarH425->GetZaxis()->SetTitleFont(42);
   Jet1Eta->Add(ttbarH4,"");
   
   TH1D *wjetsH426 = new TH1D("wjetsH426","wjets",30,-3,3);
   wjetsH426->SetBinContent(4,23.20651);
   wjetsH426->SetBinContent(5,29.08895);
   wjetsH426->SetBinContent(6,40.89414);
   wjetsH426->SetBinContent(7,59.34993);
   wjetsH426->SetBinContent(8,76.89445);
   wjetsH426->SetBinContent(9,81.10522);
   wjetsH426->SetBinContent(10,93.73743);
   wjetsH426->SetBinContent(11,108.3642);
   wjetsH426->SetBinContent(12,107.2934);
   wjetsH426->SetBinContent(13,112.3932);
   wjetsH426->SetBinContent(14,104.1356);
   wjetsH426->SetBinContent(15,122.2565);
   wjetsH426->SetBinContent(16,117.0266);
   wjetsH426->SetBinContent(17,112.5496);
   wjetsH426->SetBinContent(18,110.8883);
   wjetsH426->SetBinContent(19,106.7847);
   wjetsH426->SetBinContent(20,95.62995);
   wjetsH426->SetBinContent(21,86.76879);
   wjetsH426->SetBinContent(22,75.2876);
   wjetsH426->SetBinContent(23,69.95069);
   wjetsH426->SetBinContent(24,55.1296);
   wjetsH426->SetBinContent(25,42.42908);
   wjetsH426->SetBinContent(26,35.61401);
   wjetsH426->SetBinContent(27,24.39266);
   wjetsH426->SetBinError(4,2.517421);
   wjetsH426->SetBinError(5,2.704175);
   wjetsH426->SetBinError(6,3.130698);
   wjetsH426->SetBinError(7,3.778138);
   wjetsH426->SetBinError(8,4.514644);
   wjetsH426->SetBinError(9,4.442479);
   wjetsH426->SetBinError(10,4.80065);
   wjetsH426->SetBinError(11,5.173248);
   wjetsH426->SetBinError(12,5.127461);
   wjetsH426->SetBinError(13,4.991411);
   wjetsH426->SetBinError(14,4.837589);
   wjetsH426->SetBinError(15,5.358065);
   wjetsH426->SetBinError(16,5.222564);
   wjetsH426->SetBinError(17,5.108311);
   wjetsH426->SetBinError(18,4.992491);
   wjetsH426->SetBinError(19,5.041218);
   wjetsH426->SetBinError(20,4.577582);
   wjetsH426->SetBinError(21,4.460499);
   wjetsH426->SetBinError(22,4.11675);
   wjetsH426->SetBinError(23,4.124849);
   wjetsH426->SetBinError(24,3.672446);
   wjetsH426->SetBinError(25,3.205097);
   wjetsH426->SetBinError(26,3.15305);
   wjetsH426->SetBinError(27,2.55703);
   wjetsH426->SetEntries(10375);
   wjetsH426->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH426->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH426->SetLineColor(ci);
   wjetsH426->GetXaxis()->SetLabelFont(42);
   wjetsH426->GetXaxis()->SetLabelSize(0.035);
   wjetsH426->GetXaxis()->SetTitleSize(0.035);
   wjetsH426->GetXaxis()->SetTitleFont(42);
   wjetsH426->GetYaxis()->SetLabelFont(42);
   wjetsH426->GetYaxis()->SetLabelSize(0.035);
   wjetsH426->GetYaxis()->SetTitleSize(0.035);
   wjetsH426->GetYaxis()->SetTitleFont(42);
   wjetsH426->GetZaxis()->SetLabelFont(42);
   wjetsH426->GetZaxis()->SetLabelSize(0.035);
   wjetsH426->GetZaxis()->SetTitleSize(0.035);
   wjetsH426->GetZaxis()->SetTitleFont(42);
   Jet1Eta->Add(wjetsH4,"");
   Jet1Eta->Draw("hist goff");
   
   TH1D *stopH427 = new TH1D("stopH427","Signal",30,-3,3);
   stopH427->SetBinContent(4,3.345631);
   stopH427->SetBinContent(5,4.562223);
   stopH427->SetBinContent(6,6.387113);
   stopH427->SetBinContent(7,4.866372);
   stopH427->SetBinContent(8,8.009237);
   stopH427->SetBinContent(9,7.806471);
   stopH427->SetBinContent(10,7.806471);
   stopH427->SetBinContent(11,8.820299);
   stopH427->SetBinContent(12,7.299558);
   stopH427->SetBinContent(13,9.935509);
   stopH427->SetBinContent(14,10.64519);
   stopH427->SetBinContent(15,10.03689);
   stopH427->SetBinContent(16,9.732743);
   stopH427->SetBinContent(17,9.732743);
   stopH427->SetBinContent(18,10.94934);
   stopH427->SetBinContent(19,10.34104);
   stopH427->SetBinContent(20,8.921681);
   stopH427->SetBinContent(21,7.603706);
   stopH427->SetBinContent(22,8.212002);
   stopH427->SetBinContent(23,7.198175);
   stopH427->SetBinContent(24,7.198175);
   stopH427->SetBinContent(25,5.17052);
   stopH427->SetBinContent(26,4.05531);
   stopH427->SetBinContent(27,4.156692);
   stopH427->SetBinError(4,0.5823995);
   stopH427->SetBinError(5,0.6800961);
   stopH427->SetBinError(6,0.8047006);
   stopH427->SetBinError(7,0.7024003);
   stopH427->SetBinError(8,0.9011095);
   stopH427->SetBinError(9,0.88963);
   stopH427->SetBinError(10,0.88963);
   stopH427->SetBinError(11,0.9456353);
   stopH427->SetBinError(12,0.8602611);
   stopH427->SetBinError(13,1.003638);
   stopH427->SetBinError(14,1.038864);
   stopH427->SetBinError(15,1.008746);
   stopH427->SetBinError(16,0.993344);
   stopH427->SetBinError(17,0.993344);
   stopH427->SetBinError(18,1.0536);
   stopH427->SetBinError(19,1.023916);
   stopH427->SetBinError(20,0.9510544);
   stopH427->SetBinError(21,0.8780003);
   stopH427->SetBinError(22,0.9124447);
   stopH427->SetBinError(23,0.8542662);
   stopH427->SetBinError(24,0.8542662);
   stopH427->SetBinError(25,0.7240176);
   stopH427->SetBinError(26,0.6412008);
   stopH427->SetBinError(27,0.6491663);
   stopH427->SetEntries(1803);
   stopH427->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH427->SetLineColor(ci);
   stopH427->GetXaxis()->SetLabelFont(42);
   stopH427->GetXaxis()->SetLabelSize(0.035);
   stopH427->GetXaxis()->SetTitleSize(0.035);
   stopH427->GetXaxis()->SetTitleFont(42);
   stopH427->GetYaxis()->SetLabelFont(42);
   stopH427->GetYaxis()->SetLabelSize(0.035);
   stopH427->GetYaxis()->SetTitleSize(0.035);
   stopH427->GetYaxis()->SetTitleFont(42);
   stopH427->GetZaxis()->SetLabelFont(42);
   stopH427->GetZaxis()->SetLabelSize(0.035);
   stopH427->GetZaxis()->SetTitleSize(0.035);
   stopH427->GetZaxis()->SetTitleFont(42);
   stopH427->Draw("HIST same goff");
   
   TH1D *dataH428 = new TH1D("dataH428","Data",30,-3,3);
   dataH428->SetBinContent(4,28);
   dataH428->SetBinContent(5,47);
   dataH428->SetBinContent(6,53);
   dataH428->SetBinContent(7,90);
   dataH428->SetBinContent(8,103);
   dataH428->SetBinContent(9,115);
   dataH428->SetBinContent(10,133);
   dataH428->SetBinContent(11,156);
   dataH428->SetBinContent(12,140);
   dataH428->SetBinContent(13,140);
   dataH428->SetBinContent(14,148);
   dataH428->SetBinContent(15,174);
   dataH428->SetBinContent(16,167);
   dataH428->SetBinContent(17,142);
   dataH428->SetBinContent(18,139);
   dataH428->SetBinContent(19,146);
   dataH428->SetBinContent(20,135);
   dataH428->SetBinContent(21,129);
   dataH428->SetBinContent(22,92);
   dataH428->SetBinContent(23,89);
   dataH428->SetBinContent(24,80);
   dataH428->SetBinContent(25,53);
   dataH428->SetBinContent(26,45);
   dataH428->SetBinContent(27,38);
   dataH428->SetBinError(4,5.291503);
   dataH428->SetBinError(5,6.855655);
   dataH428->SetBinError(6,7.28011);
   dataH428->SetBinError(7,9.486833);
   dataH428->SetBinError(8,10.14889);
   dataH428->SetBinError(9,10.72381);
   dataH428->SetBinError(10,11.53256);
   dataH428->SetBinError(11,12.49);
   dataH428->SetBinError(12,11.83216);
   dataH428->SetBinError(13,11.83216);
   dataH428->SetBinError(14,12.16553);
   dataH428->SetBinError(15,13.19091);
   dataH428->SetBinError(16,12.92285);
   dataH428->SetBinError(17,11.91638);
   dataH428->SetBinError(18,11.78983);
   dataH428->SetBinError(19,12.08305);
   dataH428->SetBinError(20,11.61895);
   dataH428->SetBinError(21,11.35782);
   dataH428->SetBinError(22,9.591663);
   dataH428->SetBinError(23,9.433981);
   dataH428->SetBinError(24,8.944272);
   dataH428->SetBinError(25,7.28011);
   dataH428->SetBinError(26,6.708204);
   dataH428->SetBinError(27,6.164414);
   dataH428->SetEntries(2582);
   dataH428->SetStats(0);
   dataH428->GetXaxis()->SetLabelFont(42);
   dataH428->GetXaxis()->SetLabelSize(0.035);
   dataH428->GetXaxis()->SetTitleSize(0.035);
   dataH428->GetXaxis()->SetTitleFont(42);
   dataH428->GetYaxis()->SetLabelFont(42);
   dataH428->GetYaxis()->SetLabelSize(0.035);
   dataH428->GetYaxis()->SetTitleSize(0.035);
   dataH428->GetYaxis()->SetTitleFont(42);
   dataH428->GetZaxis()->SetLabelFont(42);
   dataH428->GetZaxis()->SetLabelSize(0.035);
   dataH428->GetZaxis()->SetTitleSize(0.035);
   dataH428->GetZaxis()->SetTitleFont(42);
   dataH428->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH4","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH4","wjets","lpf");

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
   entry=leg->AddEntry("stopH4","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH4","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4374413,0.94,0.5625587,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Jet1Eta");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-3.75,0.375,3.75,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH429 = new TH1D("backgroundH429","",30,-3,3);
   backgroundH429->SetMinimum(0.5);
   backgroundH429->SetMaximum(1.5);
   backgroundH429->SetEntries(12064);
   backgroundH429->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH429->SetLineColor(ci);
   backgroundH429->GetXaxis()->SetLabelFont(42);
   backgroundH429->GetXaxis()->SetLabelSize(0.15);
   backgroundH429->GetXaxis()->SetTitleSize(0.035);
   backgroundH429->GetXaxis()->SetTitleFont(42);
   backgroundH429->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH429->GetYaxis()->SetNdivisions(5);
   backgroundH429->GetYaxis()->SetLabelFont(42);
   backgroundH429->GetYaxis()->SetLabelSize(0.15);
   backgroundH429->GetYaxis()->SetTitleSize(0.15);
   backgroundH429->GetYaxis()->SetTickLength(0.01);
   backgroundH429->GetYaxis()->SetTitleOffset(0.15);
   backgroundH429->GetYaxis()->SetTitleFont(42);
   backgroundH429->GetZaxis()->SetLabelFont(42);
   backgroundH429->GetZaxis()->SetLabelSize(0.035);
   backgroundH429->GetZaxis()->SetTitleSize(0.035);
   backgroundH429->GetZaxis()->SetTitleFont(42);
   backgroundH429->Draw("");
   
   Double_t Graph_from_backgroundH4_fx1005[30] = {
   -2.9,
   -2.7,
   -2.5,
   -2.3,
   -2.1,
   -1.9,
   -1.7,
   -1.5,
   -1.3,
   -1.1,
   -0.9,
   -0.7,
   -0.5,
   -0.3,
   -0.1,
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9};
   Double_t Graph_from_backgroundH4_fy1005[30] = {
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
   Double_t Graph_from_backgroundH4_fex1005[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_backgroundH4_fey1005[30] = {
   -nan,
   -nan,
   -nan,
   0.100685,
   0.08191925,
   0.07151564,
   0.05818865,
   0.05444652,
   0.05102296,
   0.04728673,
   0.0440981,
   0.04405022,
   0.04151982,
   0.04314401,
   0.04085281,
   0.04127529,
   0.04217159,
   0.04210215,
   0.04377929,
   0.04480507,
   0.04731855,
   0.05074465,
   0.05432217,
   0.06078776,
   0.07079054,
   0.08119321,
   0.09375373,
   -nan,
   -nan,
   -nan};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_backgroundH4_fx1005,Graph_from_backgroundH4_fy1005,Graph_from_backgroundH4_fex1005,Graph_from_backgroundH4_fey1005);
   gre->SetName("Graph_from_backgroundH4");
   gre->SetTitle("");
   gre->SetFillColor(6);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH41005 = new TH1F("Graph_Graph_from_backgroundH41005","",100,-3.6,3.6);
   Graph_Graph_from_backgroundH41005->SetMinimum(0.879178);
   Graph_Graph_from_backgroundH41005->SetMaximum(1.120822);
   Graph_Graph_from_backgroundH41005->SetDirectory(0);
   Graph_Graph_from_backgroundH41005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH41005->SetLineColor(ci);
   Graph_Graph_from_backgroundH41005->GetXaxis()->SetRange(9,92);
   Graph_Graph_from_backgroundH41005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH41005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH41005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH41005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH41005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH41005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH41005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH41005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH41005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH41005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH41005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH41005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH41005);
   
   gre->Draw("3");
   
   TH1D *ratioH430 = new TH1D("ratioH430","",30,-3,3);
   ratioH430->SetBinContent(4,0.9754217);
   ratioH430->SetBinContent(5,1.09252);
   ratioH430->SetBinContent(6,1.014184);
   ratioH430->SetBinContent(7,1.111394);
   ratioH430->SetBinContent(8,1.069304);
   ratioH430->SetBinContent(9,1.107532);
   ratioH430->SetBinContent(10,1.083954);
   ratioH430->SetBinContent(11,1.103579);
   ratioH430->SetBinContent(12,0.990188);
   ratioH430->SetBinContent(13,0.9369566);
   ratioH430->SetBinContent(14,1.053913);
   ratioH430->SetBinContent(15,1.094914);
   ratioH430->SetBinContent(16,1.066278);
   ratioH430->SetBinContent(17,0.9540248);
   ratioH430->SetBinContent(18,0.9515201);
   ratioH430->SetBinContent(19,1.041775);
   ratioH430->SetBinContent(20,1.058622);
   ratioH430->SetBinContent(21,1.083763);
   ratioH430->SetBinContent(22,0.9047736);
   ratioH430->SetBinContent(23,0.9602937);
   ratioH430->SetBinContent(24,1.067719);
   ratioH430->SetBinContent(25,0.9920056);
   ratioH430->SetBinContent(26,0.9967738);
   ratioH430->SetBinContent(27,1.132378);
   ratioH430->SetBinError(4,0.2088673);
   ratioH430->SetBinError(5,0.1827723);
   ratioH430->SetBinError(6,0.1570591);
   ratioH430->SetBinError(7,0.1338158);
   ratioH430->SetBinError(8,0.1203771);
   ratioH430->SetBinError(9,0.117727);
   ratioH430->SetBinError(10,0.1070584);
   ratioH430->SetBinError(11,0.1008727);
   ratioH430->SetBinError(12,0.09437109);
   ratioH430->SetBinError(13,0.08822705);
   ratioH430->SetBinError(14,0.09783899);
   ratioH430->SetBinError(15,0.09429033);
   ratioH430->SetBinError(16,0.0935149);
   ratioH430->SetBinError(17,0.08960064);
   ratioH430->SetBinError(18,0.09010265);
   ratioH430->SetBinError(19,0.09753785);
   ratioH430->SetBinError(20,0.1027185);
   ratioH430->SetBinError(21,0.1083274);
   ratioH430->SetBinError(22,0.1049092);
   ratioH430->SetBinError(23,0.1143792);
   ratioH430->SetBinError(24,0.1358781);
   ratioH430->SetBinError(25,0.1532937);
   ratioH430->SetBinError(26,0.1692009);
   ratioH430->SetBinError(27,0.2121677);
   ratioH430->SetEntries(1538.682);
   ratioH430->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH430->SetLineColor(ci);
   ratioH430->GetXaxis()->SetLabelFont(42);
   ratioH430->GetXaxis()->SetLabelSize(0.035);
   ratioH430->GetXaxis()->SetTitleSize(0.035);
   ratioH430->GetXaxis()->SetTitleFont(42);
   ratioH430->GetYaxis()->SetLabelFont(42);
   ratioH430->GetYaxis()->SetLabelSize(0.035);
   ratioH430->GetYaxis()->SetTitleSize(0.035);
   ratioH430->GetYaxis()->SetTitleFont(42);
   ratioH430->GetZaxis()->SetLabelFont(42);
   ratioH430->GetZaxis()->SetLabelSize(0.035);
   ratioH430->GetZaxis()->SetTitleSize(0.035);
   ratioH430->GetZaxis()->SetTitleFont(42);
   ratioH430->Draw("E same");
   TLine *line = new TLine(-3,1,3,1);
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
