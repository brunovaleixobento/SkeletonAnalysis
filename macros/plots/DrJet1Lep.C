void DrJet1Lep()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:13:21 2016) by ROOT version6.02/13
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
   variable_1->Range(-0.7500001,-21.04742,6.75,189.4268);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *DrJet1Lep = new THStack();
   DrJet1Lep->SetName("DrJet1Lep");
   DrJet1Lep->SetTitle("DrJet1Lep;Dr Jet1 Lep;Evt.");
   DrJet1Lep->SetMaximum(160.3613);
   
   TH1F *DrJet1Lep_stack_7 = new TH1F("DrJet1Lep_stack_7","DrJet1Lep",20,0,6);
   DrJet1Lep_stack_7->SetMinimum(0);
   DrJet1Lep_stack_7->SetMaximum(168.3794);
   DrJet1Lep_stack_7->SetDirectory(0);
   DrJet1Lep_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DrJet1Lep_stack_7->SetLineColor(ci);
   DrJet1Lep_stack_7->GetXaxis()->SetTitle("Dr Jet1 Lep");
   DrJet1Lep_stack_7->GetXaxis()->SetLabelFont(42);
   DrJet1Lep_stack_7->GetXaxis()->SetLabelSize(0.035);
   DrJet1Lep_stack_7->GetXaxis()->SetTitleSize(0.035);
   DrJet1Lep_stack_7->GetXaxis()->SetTitleFont(42);
   DrJet1Lep_stack_7->GetYaxis()->SetTitle("Evt.");
   DrJet1Lep_stack_7->GetYaxis()->SetLabelFont(42);
   DrJet1Lep_stack_7->GetYaxis()->SetLabelSize(0.035);
   DrJet1Lep_stack_7->GetYaxis()->SetTitleSize(0.035);
   DrJet1Lep_stack_7->GetYaxis()->SetTitleFont(42);
   DrJet1Lep_stack_7->GetZaxis()->SetLabelFont(42);
   DrJet1Lep_stack_7->GetZaxis()->SetLabelSize(0.035);
   DrJet1Lep_stack_7->GetZaxis()->SetTitleSize(0.035);
   DrJet1Lep_stack_7->GetZaxis()->SetTitleFont(42);
   DrJet1Lep->SetHistogram(DrJet1Lep_stack_7);
   
   
   TH1D *ttbarH637 = new TH1D("ttbarH637","ttbar",20,0,6);
   ttbarH637->SetBinContent(1,1.833007);
   ttbarH637->SetBinContent(2,1.466405);
   ttbarH637->SetBinContent(3,2.932811);
   ttbarH637->SetBinContent(4,19.42987);
   ttbarH637->SetBinContent(5,12.46445);
   ttbarH637->SetBinContent(6,8.798433);
   ttbarH637->SetBinContent(7,37.02674);
   ttbarH637->SetBinContent(8,36.66014);
   ttbarH637->SetBinContent(9,17.96347);
   ttbarH637->SetBinContent(10,10.63144);
   ttbarH637->SetBinContent(11,15.39726);
   ttbarH637->SetBinContent(12,8.431832);
   ttbarH637->SetBinContent(13,2.932811);
   ttbarH637->SetBinContent(14,2.199608);
   ttbarH637->SetBinContent(15,0.7332027);
   ttbarH637->SetBinContent(16,1.099804);
   ttbarH637->SetBinContent(18,0.3666014);
   ttbarH637->SetBinError(1,0.8197456);
   ttbarH637->SetBinError(2,0.7332027);
   ttbarH637->SetBinError(3,1.036905);
   ttbarH637->SetBinError(4,2.668898);
   ttbarH637->SetBinError(5,2.137635);
   ttbarH637->SetBinError(6,1.795973);
   ttbarH637->SetBinError(7,3.684298);
   ttbarH637->SetBinError(8,3.666014);
   ttbarH637->SetBinError(9,2.56621);
   ttbarH637->SetBinError(10,1.974209);
   ttbarH637->SetBinError(11,2.375848);
   ttbarH637->SetBinError(12,1.758158);
   ttbarH637->SetBinError(13,1.036905);
   ttbarH637->SetBinError(14,0.8979863);
   ttbarH637->SetBinError(15,0.5184526);
   ttbarH637->SetBinError(16,0.6349722);
   ttbarH637->SetBinError(18,0.3666014);
   ttbarH637->SetEntries(492);
   ttbarH637->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH637->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH637->SetLineColor(ci);
   ttbarH637->GetXaxis()->SetLabelFont(42);
   ttbarH637->GetXaxis()->SetLabelSize(0.035);
   ttbarH637->GetXaxis()->SetTitleSize(0.035);
   ttbarH637->GetXaxis()->SetTitleFont(42);
   ttbarH637->GetYaxis()->SetLabelFont(42);
   ttbarH637->GetYaxis()->SetLabelSize(0.035);
   ttbarH637->GetYaxis()->SetTitleSize(0.035);
   ttbarH637->GetYaxis()->SetTitleFont(42);
   ttbarH637->GetZaxis()->SetLabelFont(42);
   ttbarH637->GetZaxis()->SetLabelSize(0.035);
   ttbarH637->GetZaxis()->SetTitleSize(0.035);
   ttbarH637->GetZaxis()->SetTitleFont(42);
   DrJet1Lep->Add(ttbarH6,"");
   
   TH1D *wjetsH638 = new TH1D("wjetsH638","wjets",20,0,6);
   wjetsH638->SetBinContent(1,3.909356);
   wjetsH638->SetBinContent(2,5.098565);
   wjetsH638->SetBinContent(3,5.04232);
   wjetsH638->SetBinContent(4,71.47931);
   wjetsH638->SetBinContent(5,39.42571);
   wjetsH638->SetBinContent(6,18.26532);
   wjetsH638->SetBinContent(7,115.6983);
   wjetsH638->SetBinContent(8,102.6225);
   wjetsH638->SetBinContent(9,47.01136);
   wjetsH638->SetBinContent(10,24.88572);
   wjetsH638->SetBinContent(11,49.86888);
   wjetsH638->SetBinContent(12,18.72346);
   wjetsH638->SetBinContent(13,8.815256);
   wjetsH638->SetBinContent(14,3.989533);
   wjetsH638->SetBinContent(15,1.980214);
   wjetsH638->SetBinContent(16,1.222238);
   wjetsH638->SetBinContent(17,0.7560141);
   wjetsH638->SetBinContent(18,0.3389002);
   wjetsH638->SetBinError(1,1.021166);
   wjetsH638->SetBinError(2,1.331902);
   wjetsH638->SetBinError(3,1.142448);
   wjetsH638->SetBinError(4,4.659417);
   wjetsH638->SetBinError(5,3.485028);
   wjetsH638->SetBinError(6,2.270977);
   wjetsH638->SetBinError(7,5.400578);
   wjetsH638->SetBinError(8,5.053509);
   wjetsH638->SetBinError(9,3.394335);
   wjetsH638->SetBinError(10,2.502821);
   wjetsH638->SetBinError(11,3.543051);
   wjetsH638->SetBinError(12,2.119461);
   wjetsH638->SetBinError(13,1.410191);
   wjetsH638->SetBinError(14,0.9660929);
   wjetsH638->SetBinError(15,0.6371613);
   wjetsH638->SetBinError(16,0.6329024);
   wjetsH638->SetBinError(17,0.4810516);
   wjetsH638->SetBinError(18,0.2396387);
   wjetsH638->SetEntries(2588);
   wjetsH638->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH638->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH638->SetLineColor(ci);
   wjetsH638->GetXaxis()->SetLabelFont(42);
   wjetsH638->GetXaxis()->SetLabelSize(0.035);
   wjetsH638->GetXaxis()->SetTitleSize(0.035);
   wjetsH638->GetXaxis()->SetTitleFont(42);
   wjetsH638->GetYaxis()->SetLabelFont(42);
   wjetsH638->GetYaxis()->SetLabelSize(0.035);
   wjetsH638->GetYaxis()->SetTitleSize(0.035);
   wjetsH638->GetYaxis()->SetTitleFont(42);
   wjetsH638->GetZaxis()->SetLabelFont(42);
   wjetsH638->GetZaxis()->SetLabelSize(0.035);
   wjetsH638->GetZaxis()->SetTitleSize(0.035);
   wjetsH638->GetZaxis()->SetTitleFont(42);
   DrJet1Lep->Add(wjetsH6,"");
   DrJet1Lep->Draw("hist goff");
   
   TH1D *stopH639 = new TH1D("stopH639","Signal",20,0,6);
   stopH639->SetBinContent(1,1.11521);
   stopH639->SetBinContent(2,0.9124447);
   stopH639->SetBinContent(3,1.926272);
   stopH639->SetBinContent(4,14.49773);
   stopH639->SetBinContent(5,6.082965);
   stopH639->SetBinContent(6,5.576051);
   stopH639->SetBinContent(7,23.21665);
   stopH639->SetBinContent(8,19.87102);
   stopH639->SetBinContent(9,11.45625);
   stopH639->SetBinContent(10,8.820299);
   stopH639->SetBinContent(11,12.36869);
   stopH639->SetBinContent(12,4.05531);
   stopH639->SetBinContent(13,2.737334);
   stopH639->SetBinContent(14,0.8110619);
   stopH639->SetBinContent(15,0.9124447);
   stopH639->SetBinContent(16,0.3041482);
   stopH639->SetBinContent(19,0.1013827);
   stopH639->SetBinError(1,0.3362485);
   stopH639->SetBinError(2,0.3041482);
   stopH639->SetBinError(3,0.4419171);
   stopH639->SetBinError(4,1.212361);
   stopH639->SetBinError(5,0.7853074);
   stopH639->SetBinError(6,0.7518746);
   stopH639->SetBinError(7,1.534199);
   stopH639->SetBinError(8,1.419358);
   stopH639->SetBinError(9,1.077713);
   stopH639->SetBinError(10,0.9456353);
   stopH639->SetBinError(11,1.119809);
   stopH639->SetBinError(12,0.6412008);
   stopH639->SetBinError(13,0.5268002);
   stopH639->SetBinError(14,0.2867537);
   stopH639->SetBinError(15,0.3041482);
   stopH639->SetBinError(16,0.1756001);
   stopH639->SetBinError(19,0.1013827);
   stopH639->SetEntries(1132);
   stopH639->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH639->SetLineColor(ci);
   stopH639->GetXaxis()->SetLabelFont(42);
   stopH639->GetXaxis()->SetLabelSize(0.035);
   stopH639->GetXaxis()->SetTitleSize(0.035);
   stopH639->GetXaxis()->SetTitleFont(42);
   stopH639->GetYaxis()->SetLabelFont(42);
   stopH639->GetYaxis()->SetLabelSize(0.035);
   stopH639->GetYaxis()->SetTitleSize(0.035);
   stopH639->GetYaxis()->SetTitleFont(42);
   stopH639->GetZaxis()->SetLabelFont(42);
   stopH639->GetZaxis()->SetLabelSize(0.035);
   stopH639->GetZaxis()->SetTitleSize(0.035);
   stopH639->GetZaxis()->SetTitleFont(42);
   stopH639->Draw("HIST same goff");
   
   TH1D *dataH640 = new TH1D("dataH640","Data",20,0,6);
   dataH640->SetBinContent(1,7);
   dataH640->SetBinContent(2,7);
   dataH640->SetBinContent(3,8);
   dataH640->SetBinContent(4,96);
   dataH640->SetBinContent(5,46);
   dataH640->SetBinContent(6,29);
   dataH640->SetBinContent(7,148);
   dataH640->SetBinContent(8,135);
   dataH640->SetBinContent(9,61);
   dataH640->SetBinContent(10,48);
   dataH640->SetBinContent(11,58);
   dataH640->SetBinContent(12,30);
   dataH640->SetBinContent(13,12);
   dataH640->SetBinContent(14,2);
   dataH640->SetBinContent(15,4);
   dataH640->SetBinContent(16,1);
   dataH640->SetBinContent(17,1);
   dataH640->SetBinContent(18,2);
   dataH640->SetBinError(1,2.645751);
   dataH640->SetBinError(2,2.645751);
   dataH640->SetBinError(3,2.828427);
   dataH640->SetBinError(4,9.797959);
   dataH640->SetBinError(5,6.78233);
   dataH640->SetBinError(6,5.385165);
   dataH640->SetBinError(7,12.16553);
   dataH640->SetBinError(8,11.61895);
   dataH640->SetBinError(9,7.81025);
   dataH640->SetBinError(10,6.928203);
   dataH640->SetBinError(11,7.615773);
   dataH640->SetBinError(12,5.477226);
   dataH640->SetBinError(13,3.464102);
   dataH640->SetBinError(14,1.414214);
   dataH640->SetBinError(15,2);
   dataH640->SetBinError(16,1);
   dataH640->SetBinError(17,1);
   dataH640->SetBinError(18,1.414214);
   dataH640->SetEntries(695);
   dataH640->SetStats(0);
   dataH640->GetXaxis()->SetLabelFont(42);
   dataH640->GetXaxis()->SetLabelSize(0.035);
   dataH640->GetXaxis()->SetTitleSize(0.035);
   dataH640->GetXaxis()->SetTitleFont(42);
   dataH640->GetYaxis()->SetLabelFont(42);
   dataH640->GetYaxis()->SetLabelSize(0.035);
   dataH640->GetYaxis()->SetTitleSize(0.035);
   dataH640->GetYaxis()->SetTitleFont(42);
   dataH640->GetZaxis()->SetLabelFont(42);
   dataH640->GetZaxis()->SetLabelSize(0.035);
   dataH640->GetZaxis()->SetTitleSize(0.035);
   dataH640->GetZaxis()->SetTitleFont(42);
   dataH640->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH6","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH6","wjets","lpf");

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
   entry=leg->AddEntry("stopH6","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH6","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4182125,0.9341347,0.5817875,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("DrJet1Lep");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-0.7500001,0.375,6.75,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH641 = new TH1D("backgroundH641","",20,0,6);
   backgroundH641->SetMinimum(0.5);
   backgroundH641->SetMaximum(1.5);
   backgroundH641->SetEntries(3101);
   backgroundH641->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH641->SetLineColor(ci);
   backgroundH641->GetXaxis()->SetLabelFont(42);
   backgroundH641->GetXaxis()->SetLabelSize(0.15);
   backgroundH641->GetXaxis()->SetTitleSize(0.035);
   backgroundH641->GetXaxis()->SetTitleFont(42);
   backgroundH641->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH641->GetYaxis()->SetNdivisions(5);
   backgroundH641->GetYaxis()->SetLabelFont(42);
   backgroundH641->GetYaxis()->SetLabelSize(0.15);
   backgroundH641->GetYaxis()->SetTitleSize(0.15);
   backgroundH641->GetYaxis()->SetTickLength(0.01);
   backgroundH641->GetYaxis()->SetTitleOffset(0.35);
   backgroundH641->GetYaxis()->SetTitleFont(42);
   backgroundH641->GetZaxis()->SetLabelFont(42);
   backgroundH641->GetZaxis()->SetLabelSize(0.035);
   backgroundH641->GetZaxis()->SetTitleSize(0.035);
   backgroundH641->GetZaxis()->SetTitleFont(42);
   backgroundH641->Draw("");
   
   Double_t Graph_from_backgroundH6_fx1007[20] = {
   0.15,
   0.45,
   0.75,
   1.05,
   1.35,
   1.65,
   1.95,
   2.25,
   2.55,
   2.85,
   3.15,
   3.45,
   3.75,
   4.05,
   4.35,
   4.65,
   4.95,
   5.25,
   5.55,
   5.85};
   Double_t Graph_from_backgroundH6_fy1007[20] = {
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
   Double_t Graph_from_backgroundH6_fex1007[20] = {
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15,
   0.15};
   Double_t Graph_from_backgroundH6_fey1007[20] = {
   0.2280402,
   0.2315894,
   0.1934566,
   0.05906614,
   0.07878925,
   0.1069813,
   0.04280638,
   0.04482401,
   0.06549036,
   0.08975177,
   0.06536155,
   0.1014081,
   0.1489925,
   0.2131124,
   0.3027336,
   0.3860929,
   0.6362998,
   0.6208013,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH6_fx1007,Graph_from_backgroundH6_fy1007,Graph_from_backgroundH6_fex1007,Graph_from_backgroundH6_fey1007);
   gre->SetName("Graph_from_backgroundH6");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH61007 = new TH1F("Graph_Graph_from_backgroundH61007","",100,0,6.6);
   Graph_Graph_from_backgroundH61007->SetMinimum(0.2364402);
   Graph_Graph_from_backgroundH61007->SetMaximum(1.76356);
   Graph_Graph_from_backgroundH61007->SetDirectory(0);
   Graph_Graph_from_backgroundH61007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH61007->SetLineColor(ci);
   Graph_Graph_from_backgroundH61007->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH61007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH61007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH61007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH61007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH61007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH61007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH61007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH61007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH61007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH61007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH61007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH61007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH61007);
   
   gre->Draw("3");
   
   TH1D *ratioH642 = new TH1D("ratioH642","",20,0,6);
   ratioH642->SetBinContent(1,1.21901);
   ratioH642->SetBinContent(2,1.066265);
   ratioH642->SetBinContent(3,1.003118);
   ratioH642->SetBinContent(4,1.055999);
   ratioH642->SetBinContent(5,0.886488);
   ratioH642->SetBinContent(6,1.071544);
   ratioH642->SetBinContent(7,0.9690618);
   ratioH642->SetBinContent(8,0.9692523);
   ratioH642->SetBinContent(9,0.9388251);
   ratioH642->SetBinContent(10,1.351459);
   ratioH642->SetBinContent(11,0.8886692);
   ratioH642->SetBinContent(12,1.104757);
   ratioH642->SetBinContent(13,1.021445);
   ratioH642->SetBinContent(14,0.3231466);
   ratioH642->SetBinContent(15,1.474156);
   ratioH642->SetBinContent(16,0.4306555);
   ratioH642->SetBinContent(17,1.322727);
   ratioH642->SetBinContent(18,2.834862);
   ratioH642->SetBinError(1,0.5381064);
   ratioH642->SetBinError(2,0.4726464);
   ratioH642->SetBinError(3,0.4042771);
   ratioH642->SetBinError(4,0.124525);
   ratioH642->SetBinError(5,0.148197);
   ratioH642->SetBinError(6,0.2296401);
   ratioH642->SetBinError(7,0.08981035);
   ratioH642->SetBinError(8,0.09405543);
   ratioH642->SetBinError(9,0.1350161);
   ratioH642->SetBinError(10,0.2297032);
   ratioH642->SetBinError(11,0.1303454);
   ratioH642->SetBinError(12,0.2307248);
   ratioH642->SetBinError(13,0.3318235);
   ratioH642->SetBinError(14,0.2386514);
   ratioH642->SetBinError(15,0.8616534);
   ratioH642->SetBinError(16,0.4616393);
   ratioH642->SetBinError(17,1.567795);
   ratioH642->SetBinError(18,2.667475);
   ratioH642->SetEntries(34.18561);
   ratioH642->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH642->SetLineColor(ci);
   ratioH642->GetXaxis()->SetLabelFont(42);
   ratioH642->GetXaxis()->SetLabelSize(0.035);
   ratioH642->GetXaxis()->SetTitleSize(0.035);
   ratioH642->GetXaxis()->SetTitleFont(42);
   ratioH642->GetYaxis()->SetLabelFont(42);
   ratioH642->GetYaxis()->SetLabelSize(0.035);
   ratioH642->GetYaxis()->SetTitleSize(0.035);
   ratioH642->GetYaxis()->SetTitleFont(42);
   ratioH642->GetZaxis()->SetLabelFont(42);
   ratioH642->GetZaxis()->SetLabelSize(0.035);
   ratioH642->GetZaxis()->SetTitleSize(0.035);
   ratioH642->GetZaxis()->SetTitleFont(42);
   ratioH642->Draw("E same");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
