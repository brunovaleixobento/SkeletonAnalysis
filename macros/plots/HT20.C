void HT20()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:13:44 2016) by ROOT version6.02/13
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
   variable_1->Range(-175,-22.05,1575,198.45);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *HT20 = new THStack();
   HT20->SetName("HT20");
   HT20->SetTitle("HT20;HT20 [GeV];Evt.");
   HT20->SetMaximum(168);
   
   TH1F *HT20_stack_10 = new TH1F("HT20_stack_10","HT20",20,0,1400);
   HT20_stack_10->SetMinimum(0);
   HT20_stack_10->SetMaximum(176.4);
   HT20_stack_10->SetDirectory(0);
   HT20_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HT20_stack_10->SetLineColor(ci);
   HT20_stack_10->GetXaxis()->SetTitle("HT20 [GeV]");
   HT20_stack_10->GetXaxis()->SetLabelFont(42);
   HT20_stack_10->GetXaxis()->SetLabelSize(0.035);
   HT20_stack_10->GetXaxis()->SetTitleSize(0.035);
   HT20_stack_10->GetXaxis()->SetTitleFont(42);
   HT20_stack_10->GetYaxis()->SetTitle("Evt.");
   HT20_stack_10->GetYaxis()->SetLabelFont(42);
   HT20_stack_10->GetYaxis()->SetLabelSize(0.035);
   HT20_stack_10->GetYaxis()->SetTitleSize(0.035);
   HT20_stack_10->GetYaxis()->SetTitleFont(42);
   HT20_stack_10->GetZaxis()->SetLabelFont(42);
   HT20_stack_10->GetZaxis()->SetLabelSize(0.035);
   HT20_stack_10->GetZaxis()->SetTitleSize(0.035);
   HT20_stack_10->GetZaxis()->SetTitleFont(42);
   HT20->SetHistogram(HT20_stack_10);
   
   
   TH1D *ttbarH955 = new TH1D("ttbarH955","ttbar",20,0,1400);
   ttbarH955->SetBinContent(3,1.099804);
   ttbarH955->SetBinContent(4,3.299412);
   ttbarH955->SetBinContent(5,13.19765);
   ttbarH955->SetBinContent(6,29.69471);
   ttbarH955->SetBinContent(7,33.72733);
   ttbarH955->SetBinContent(8,35.56033);
   ttbarH955->SetBinContent(9,20.52968);
   ttbarH955->SetBinContent(10,12.83105);
   ttbarH955->SetBinContent(11,10.63144);
   ttbarH955->SetBinContent(12,4.032615);
   ttbarH955->SetBinContent(13,4.399216);
   ttbarH955->SetBinContent(14,4.765818);
   ttbarH955->SetBinContent(15,0.7332027);
   ttbarH955->SetBinContent(16,1.833007);
   ttbarH955->SetBinContent(17,1.099804);
   ttbarH955->SetBinContent(18,0.7332027);
   ttbarH955->SetBinContent(19,0.7332027);
   ttbarH955->SetBinContent(20,0.7332027);
   ttbarH955->SetBinContent(21,0.7332027);
   ttbarH955->SetBinError(3,0.6349722);
   ttbarH955->SetBinError(4,1.099804);
   ttbarH955->SetBinError(5,2.199608);
   ttbarH955->SetBinError(6,3.299412);
   ttbarH955->SetBinError(7,3.516317);
   ttbarH955->SetBinError(8,3.610605);
   ttbarH955->SetBinError(9,2.743393);
   ttbarH955->SetBinError(10,2.168843);
   ttbarH955->SetBinError(11,1.974209);
   ttbarH955->SetBinError(12,1.215879);
   ttbarH955->SetBinError(13,1.269944);
   ttbarH955->SetBinError(14,1.3218);
   ttbarH955->SetBinError(15,0.5184526);
   ttbarH955->SetBinError(16,0.8197456);
   ttbarH955->SetBinError(17,0.6349722);
   ttbarH955->SetBinError(18,0.5184526);
   ttbarH955->SetBinError(19,0.5184526);
   ttbarH955->SetBinError(20,0.5184526);
   ttbarH955->SetBinError(21,0.5184526);
   ttbarH955->SetEntries(492);
   ttbarH955->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH955->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH955->SetLineColor(ci);
   ttbarH955->GetXaxis()->SetLabelFont(42);
   ttbarH955->GetXaxis()->SetLabelSize(0.035);
   ttbarH955->GetXaxis()->SetTitleSize(0.035);
   ttbarH955->GetXaxis()->SetTitleFont(42);
   ttbarH955->GetYaxis()->SetLabelFont(42);
   ttbarH955->GetYaxis()->SetLabelSize(0.035);
   ttbarH955->GetYaxis()->SetTitleSize(0.035);
   ttbarH955->GetYaxis()->SetTitleFont(42);
   ttbarH955->GetZaxis()->SetLabelFont(42);
   ttbarH955->GetZaxis()->SetLabelSize(0.035);
   ttbarH955->GetZaxis()->SetTitleSize(0.035);
   ttbarH955->GetZaxis()->SetTitleFont(42);
   HT20->Add(ttbarH9,"");
   
   TH1D *wjetsH956 = new TH1D("wjetsH956","wjets",20,0,1400);
   wjetsH956->SetBinContent(2,0.1694501);
   wjetsH956->SetBinContent(3,2.854606);
   wjetsH956->SetBinContent(4,23.16979);
   wjetsH956->SetBinContent(5,113.1876);
   wjetsH956->SetBinContent(6,129.1436);
   wjetsH956->SetBinContent(7,89.17485);
   wjetsH956->SetBinContent(8,58.44885);
   wjetsH956->SetBinContent(9,33.46973);
   wjetsH956->SetBinContent(10,20.91185);
   wjetsH956->SetBinContent(11,14.38691);
   wjetsH956->SetBinContent(12,10.44177);
   wjetsH956->SetBinContent(13,6.835528);
   wjetsH956->SetBinContent(14,2.950559);
   wjetsH956->SetBinContent(15,4.917599);
   wjetsH956->SetBinContent(16,1.85776);
   wjetsH956->SetBinContent(17,1.20208);
   wjetsH956->SetBinContent(18,1.52992);
   wjetsH956->SetBinContent(19,1.42064);
   wjetsH956->SetBinContent(20,0.8742398);
   wjetsH956->SetBinContent(21,2.185599);
   wjetsH956->SetBinError(2,0.1694501);
   wjetsH956->SetBinError(3,0.9470635);
   wjetsH956->SetBinError(4,2.976309);
   wjetsH956->SetBinError(5,6.720947);
   wjetsH956->SetBinError(6,6.470203);
   wjetsH956->SetBinError(7,4.133366);
   wjetsH956->SetBinError(8,3.168787);
   wjetsH956->SetBinError(9,2.218525);
   wjetsH956->SetBinError(10,1.567984);
   wjetsH956->SetBinError(11,1.266013);
   wjetsH956->SetBinError(12,1.072973);
   wjetsH956->SetBinError(13,0.8701622);
   wjetsH956->SetBinError(14,0.5678354);
   wjetsH956->SetBinError(15,0.7330723);
   wjetsH956->SetBinError(16,0.4505729);
   wjetsH956->SetBinError(17,0.3624407);
   wjetsH956->SetBinError(18,0.4088882);
   wjetsH956->SetBinError(19,0.3940145);
   wjetsH956->SetBinError(20,0.3090904);
   wjetsH956->SetBinError(21,0.4887149);
   wjetsH956->SetEntries(2588);
   wjetsH956->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH956->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH956->SetLineColor(ci);
   wjetsH956->GetXaxis()->SetLabelFont(42);
   wjetsH956->GetXaxis()->SetLabelSize(0.035);
   wjetsH956->GetXaxis()->SetTitleSize(0.035);
   wjetsH956->GetXaxis()->SetTitleFont(42);
   wjetsH956->GetYaxis()->SetLabelFont(42);
   wjetsH956->GetYaxis()->SetLabelSize(0.035);
   wjetsH956->GetYaxis()->SetTitleSize(0.035);
   wjetsH956->GetYaxis()->SetTitleFont(42);
   wjetsH956->GetZaxis()->SetLabelFont(42);
   wjetsH956->GetZaxis()->SetLabelSize(0.035);
   wjetsH956->GetZaxis()->SetTitleSize(0.035);
   wjetsH956->GetZaxis()->SetTitleFont(42);
   HT20->Add(wjetsH9,"");
   HT20->Draw("hist goff");
   
   TH1D *stopH957 = new TH1D("stopH957","Signal",20,0,1400);
   stopH957->SetBinContent(3,0.3041482);
   stopH957->SetBinContent(4,3.041482);
   stopH957->SetBinContent(5,9.22583);
   stopH957->SetBinContent(6,18.14751);
   stopH957->SetBinContent(7,19.3641);
   stopH957->SetBinContent(8,16.62677);
   stopH957->SetBinContent(9,15.20741);
   stopH957->SetBinContent(10,8.110619);
   stopH957->SetBinContent(11,6.488496);
   stopH957->SetBinContent(12,5.778816);
   stopH957->SetBinContent(13,3.244248);
   stopH957->SetBinContent(14,2.838717);
   stopH957->SetBinContent(15,2.331803);
   stopH957->SetBinContent(16,1.216593);
   stopH957->SetBinContent(17,0.8110619);
   stopH957->SetBinContent(18,0.7096792);
   stopH957->SetBinContent(19,0.2027655);
   stopH957->SetBinContent(20,0.1013827);
   stopH957->SetBinContent(21,1.013827);
   stopH957->SetBinError(3,0.1756001);
   stopH957->SetBinError(4,0.5552962);
   stopH957->SetBinError(5,0.9671297);
   stopH957->SetBinError(6,1.356409);
   stopH957->SetBinError(7,1.401137);
   stopH957->SetBinError(8,1.298333);
   stopH957->SetBinError(9,1.24168);
   stopH957->SetBinError(10,0.9067948);
   stopH957->SetBinError(11,0.8110619);
   stopH957->SetBinError(12,0.7654229);
   stopH957->SetBinError(13,0.5735074);
   stopH957->SetBinError(14,0.5364671);
   stopH957->SetBinError(15,0.4862146);
   stopH957->SetBinError(16,0.3512001);
   stopH957->SetBinError(17,0.2867537);
   stopH957->SetBinError(18,0.2682335);
   stopH957->SetBinError(19,0.1433769);
   stopH957->SetBinError(20,0.1013827);
   stopH957->SetBinError(21,0.3206004);
   stopH957->SetEntries(1132);
   stopH957->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH957->SetLineColor(ci);
   stopH957->GetXaxis()->SetLabelFont(42);
   stopH957->GetXaxis()->SetLabelSize(0.035);
   stopH957->GetXaxis()->SetTitleSize(0.035);
   stopH957->GetXaxis()->SetTitleFont(42);
   stopH957->GetYaxis()->SetLabelFont(42);
   stopH957->GetYaxis()->SetLabelSize(0.035);
   stopH957->GetYaxis()->SetTitleSize(0.035);
   stopH957->GetYaxis()->SetTitleFont(42);
   stopH957->GetZaxis()->SetLabelFont(42);
   stopH957->GetZaxis()->SetLabelSize(0.035);
   stopH957->GetZaxis()->SetTitleSize(0.035);
   stopH957->GetZaxis()->SetTitleFont(42);
   stopH957->Draw("HIST same goff");
   
   TH1D *dataH958 = new TH1D("dataH958","Data",20,0,1400);
   dataH958->SetBinContent(3,2);
   dataH958->SetBinContent(4,20);
   dataH958->SetBinContent(5,117);
   dataH958->SetBinContent(6,160);
   dataH958->SetBinContent(7,135);
   dataH958->SetBinContent(8,77);
   dataH958->SetBinContent(9,64);
   dataH958->SetBinContent(10,36);
   dataH958->SetBinContent(11,26);
   dataH958->SetBinContent(12,16);
   dataH958->SetBinContent(13,11);
   dataH958->SetBinContent(14,10);
   dataH958->SetBinContent(15,6);
   dataH958->SetBinContent(16,3);
   dataH958->SetBinContent(17,3);
   dataH958->SetBinContent(18,1);
   dataH958->SetBinContent(19,2);
   dataH958->SetBinContent(20,1);
   dataH958->SetBinContent(21,5);
   dataH958->SetBinError(3,1.414214);
   dataH958->SetBinError(4,4.472136);
   dataH958->SetBinError(5,10.81665);
   dataH958->SetBinError(6,12.64911);
   dataH958->SetBinError(7,11.61895);
   dataH958->SetBinError(8,8.774964);
   dataH958->SetBinError(9,8);
   dataH958->SetBinError(10,6);
   dataH958->SetBinError(11,5.09902);
   dataH958->SetBinError(12,4);
   dataH958->SetBinError(13,3.316625);
   dataH958->SetBinError(14,3.162278);
   dataH958->SetBinError(15,2.44949);
   dataH958->SetBinError(16,1.732051);
   dataH958->SetBinError(17,1.732051);
   dataH958->SetBinError(18,1);
   dataH958->SetBinError(19,1.414214);
   dataH958->SetBinError(20,1);
   dataH958->SetBinError(21,2.236068);
   dataH958->SetEntries(695);
   dataH958->SetStats(0);
   dataH958->GetXaxis()->SetLabelFont(42);
   dataH958->GetXaxis()->SetLabelSize(0.035);
   dataH958->GetXaxis()->SetTitleSize(0.035);
   dataH958->GetXaxis()->SetTitleFont(42);
   dataH958->GetYaxis()->SetLabelFont(42);
   dataH958->GetYaxis()->SetLabelSize(0.035);
   dataH958->GetYaxis()->SetTitleSize(0.035);
   dataH958->GetYaxis()->SetTitleFont(42);
   dataH958->GetZaxis()->SetLabelFont(42);
   dataH958->GetZaxis()->SetLabelSize(0.035);
   dataH958->GetZaxis()->SetTitleSize(0.035);
   dataH958->GetZaxis()->SetTitleFont(42);
   dataH958->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH9","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH9","wjets","lpf");

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
   entry=leg->AddEntry("stopH9","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH9","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4541062,0.94,0.5458938,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("HT20");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-175,0.375,1575,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH959 = new TH1D("backgroundH959","",20,0,1400);
   backgroundH959->SetMinimum(0.5);
   backgroundH959->SetMaximum(1.5);
   backgroundH959->SetEntries(3101);
   backgroundH959->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH959->SetLineColor(ci);
   backgroundH959->GetXaxis()->SetLabelFont(42);
   backgroundH959->GetXaxis()->SetLabelSize(0.15);
   backgroundH959->GetXaxis()->SetTitleSize(0.035);
   backgroundH959->GetXaxis()->SetTitleFont(42);
   backgroundH959->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH959->GetYaxis()->SetNdivisions(5);
   backgroundH959->GetYaxis()->SetLabelFont(42);
   backgroundH959->GetYaxis()->SetLabelSize(0.15);
   backgroundH959->GetYaxis()->SetTitleSize(0.15);
   backgroundH959->GetYaxis()->SetTickLength(0.01);
   backgroundH959->GetYaxis()->SetTitleOffset(0.35);
   backgroundH959->GetYaxis()->SetTitleFont(42);
   backgroundH959->GetZaxis()->SetLabelFont(42);
   backgroundH959->GetZaxis()->SetLabelSize(0.035);
   backgroundH959->GetZaxis()->SetTitleSize(0.035);
   backgroundH959->GetZaxis()->SetTitleFont(42);
   backgroundH959->Draw("");
   
   Double_t Graph_from_backgroundH9_fx1010[20] = {
   35,
   105,
   175,
   245,
   315,
   385,
   455,
   525,
   595,
   665,
   735,
   805,
   875,
   945,
   1015,
   1085,
   1155,
   1225,
   1295,
   1365};
   Double_t Graph_from_backgroundH9_fy1010[20] = {
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
   Double_t Graph_from_backgroundH9_fex1010[20] = {
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35,
   35};
   Double_t Graph_from_backgroundH9_fey1010[20] = {
   0,
   1,
   0.2883433,
   0.1198755,
   0.05595378,
   0.04572508,
   0.04415472,
   0.05110058,
   0.06533741,
   0.07931377,
   0.09374198,
   0.1120334,
   0.1370268,
   0.1864357,
   0.1588942,
   0.253447,
   0.317623,
   0.2917606,
   0.302336,
   0.3755018};
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH9_fx1010,Graph_from_backgroundH9_fy1010,Graph_from_backgroundH9_fex1010,Graph_from_backgroundH9_fey1010);
   gre->SetName("Graph_from_backgroundH9");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH91010 = new TH1F("Graph_Graph_from_backgroundH91010","",100,0,1540);
   Graph_Graph_from_backgroundH91010->SetMinimum(0);
   Graph_Graph_from_backgroundH91010->SetMaximum(2.2);
   Graph_Graph_from_backgroundH91010->SetDirectory(0);
   Graph_Graph_from_backgroundH91010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH91010->SetLineColor(ci);
   Graph_Graph_from_backgroundH91010->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH91010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH91010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH91010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH91010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH91010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH91010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH91010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH91010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH91010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH91010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH91010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH91010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH91010);
   
   gre->Draw("3");
   
   TH1D *ratioH960 = new TH1D("ratioH960","",20,0,1400);
   ratioH960->SetBinContent(3,0.5057644);
   ratioH960->SetBinContent(4,0.7555952);
   ratioH960->SetBinContent(5,0.9257409);
   ratioH960->SetBinContent(6,1.007314);
   ratioH960->SetBinContent(7,1.098435);
   ratioH960->SetBinContent(8,0.8190689);
   ratioH960->SetBinContent(9,1.185198);
   ratioH960->SetBinContent(10,1.066891);
   ratioH960->SetBinContent(11,1.039237);
   ratioH960->SetBinContent(12,1.105401);
   ratioH960->SetBinContent(13,0.9791054);
   ratioH960->SetBinContent(14,1.295945);
   ratioH960->SetBinContent(15,1.061796);
   ratioH960->SetBinContent(16,0.8128393);
   ratioH960->SetBinContent(17,1.30328);
   ratioH960->SetBinContent(18,0.4418674);
   ratioH960->SetBinContent(19,0.928573);
   ratioH960->SetBinContent(20,0.6221062);
   ratioH960->SetBinContent(21,1.713031);
   ratioH960->SetBinError(3,0.3862205);
   ratioH960->SetBinError(4,0.1917041);
   ratioH960->SetBinError(5,0.1000393);
   ratioH960->SetBinError(6,0.09199582);
   ratioH960->SetBinError(7,0.1062536);
   ratioH960->SetBinError(8,0.102296);
   ratioH960->SetBinError(9,0.1671675);
   ratioH960->SetBinError(10,0.196923);
   ratioH960->SetBinError(11,0.2258975);
   ratioH960->SetBinError(12,0.3028305);
   ratioH960->SetBinError(13,0.3242679);
   ratioH960->SetBinError(14,0.4757341);
   ratioH960->SetBinError(15,0.4651517);
   ratioH960->SetBinError(16,0.51252);
   ratioH960->SetBinError(17,0.8587992);
   ratioH960->SetBinError(18,0.4602902);
   ratioH960->SetBinError(19,0.7141005);
   ratioH960->SetBinError(20,0.6645194);
   ratioH960->SetBinError(21,0.872782);
   ratioH960->SetEntries(91.33756);
   ratioH960->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH960->SetLineColor(ci);
   ratioH960->GetXaxis()->SetLabelFont(42);
   ratioH960->GetXaxis()->SetLabelSize(0.035);
   ratioH960->GetXaxis()->SetTitleSize(0.035);
   ratioH960->GetXaxis()->SetTitleFont(42);
   ratioH960->GetYaxis()->SetLabelFont(42);
   ratioH960->GetYaxis()->SetLabelSize(0.035);
   ratioH960->GetYaxis()->SetTitleSize(0.035);
   ratioH960->GetYaxis()->SetTitleFont(42);
   ratioH960->GetZaxis()->SetLabelFont(42);
   ratioH960->GetZaxis()->SetLabelSize(0.035);
   ratioH960->GetZaxis()->SetTitleSize(0.035);
   ratioH960->GetZaxis()->SetTitleFont(42);
   ratioH960->Draw("E same");
   TLine *line = new TLine(0,1,1400,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
