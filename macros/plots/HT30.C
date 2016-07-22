void HT30()
{
//=========Macro generated from canvas: variable/variable
//=========  (Fri Jul 15 17:05:15 2016) by ROOT version6.02/13
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
   variable_1->Range(-175,-9.416535,1575,84.74881);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *HT30 = new THStack();
   HT30->SetName("HT30");
   HT30->SetTitle("HT30;HT30 [GeV];Evt.");
   HT30->SetMaximum(71.74503);
   
   TH1F *HT30_stack_8 = new TH1F("HT30_stack_8","HT30",30,0,1400);
   HT30_stack_8->SetMinimum(0);
   HT30_stack_8->SetMaximum(75.33228);
   HT30_stack_8->SetDirectory(0);
   HT30_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HT30_stack_8->SetLineColor(ci);
   HT30_stack_8->GetXaxis()->SetTitle("HT30 [GeV]");
   HT30_stack_8->GetXaxis()->SetLabelFont(42);
   HT30_stack_8->GetXaxis()->SetLabelSize(0.035);
   HT30_stack_8->GetXaxis()->SetTitleSize(0.035);
   HT30_stack_8->GetXaxis()->SetTitleFont(42);
   HT30_stack_8->GetYaxis()->SetTitle("Evt.");
   HT30_stack_8->GetYaxis()->SetLabelFont(42);
   HT30_stack_8->GetYaxis()->SetLabelSize(0.035);
   HT30_stack_8->GetYaxis()->SetTitleSize(0.035);
   HT30_stack_8->GetYaxis()->SetTitleFont(42);
   HT30_stack_8->GetZaxis()->SetLabelFont(42);
   HT30_stack_8->GetZaxis()->SetLabelSize(0.035);
   HT30_stack_8->GetZaxis()->SetTitleSize(0.035);
   HT30_stack_8->GetZaxis()->SetTitleFont(42);
   HT30->SetHistogram(HT30_stack_8);
   
   
   TH1D *ttbarH743 = new TH1D("ttbarH743","ttbar",30,0,1400);
   ttbarH743->SetBinContent(8,1.466405);
   ttbarH743->SetBinContent(9,5.132419);
   ttbarH743->SetBinContent(10,4.399216);
   ttbarH743->SetBinContent(11,10.26484);
   ttbarH743->SetBinContent(12,11.73124);
   ttbarH743->SetBinContent(13,8.798433);
   ttbarH743->SetBinContent(14,7.332027);
   ttbarH743->SetBinContent(15,8.431832);
   ttbarH743->SetBinContent(16,4.032615);
   ttbarH743->SetBinContent(17,4.399216);
   ttbarH743->SetBinContent(18,2.199608);
   ttbarH743->SetBinContent(19,2.932811);
   ttbarH743->SetBinContent(20,2.56621);
   ttbarH743->SetBinContent(21,1.099804);
   ttbarH743->SetBinContent(22,0.7332027);
   ttbarH743->SetBinContent(23,1.466405);
   ttbarH743->SetBinContent(24,2.199608);
   ttbarH743->SetBinContent(25,0.3666014);
   ttbarH743->SetBinContent(26,0.7332027);
   ttbarH743->SetBinContent(27,0.3666014);
   ttbarH743->SetBinContent(28,0.3666014);
   ttbarH743->SetBinContent(29,0.7332027);
   ttbarH743->SetBinContent(30,0.3666014);
   ttbarH743->SetBinContent(31,2.199608);
   ttbarH743->SetBinError(8,0.7332027);
   ttbarH743->SetBinError(9,1.371697);
   ttbarH743->SetBinError(10,1.269944);
   ttbarH743->SetBinError(11,1.939872);
   ttbarH743->SetBinError(12,2.073811);
   ttbarH743->SetBinError(13,1.795973);
   ttbarH743->SetBinError(14,1.639491);
   ttbarH743->SetBinError(15,1.758158);
   ttbarH743->SetBinError(16,1.215879);
   ttbarH743->SetBinError(17,1.269944);
   ttbarH743->SetBinError(18,0.8979863);
   ttbarH743->SetBinError(19,1.036905);
   ttbarH743->SetBinError(20,0.9699361);
   ttbarH743->SetBinError(21,0.6349722);
   ttbarH743->SetBinError(22,0.5184526);
   ttbarH743->SetBinError(23,0.7332027);
   ttbarH743->SetBinError(24,0.8979863);
   ttbarH743->SetBinError(25,0.3666014);
   ttbarH743->SetBinError(26,0.5184526);
   ttbarH743->SetBinError(27,0.3666014);
   ttbarH743->SetBinError(28,0.3666014);
   ttbarH743->SetBinError(29,0.5184526);
   ttbarH743->SetBinError(30,0.3666014);
   ttbarH743->SetBinError(31,0.8979863);
   ttbarH743->SetEntries(230);
   ttbarH743->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH743->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH743->SetLineColor(ci);
   ttbarH743->GetXaxis()->SetLabelFont(42);
   ttbarH743->GetXaxis()->SetLabelSize(0.035);
   ttbarH743->GetXaxis()->SetTitleSize(0.035);
   ttbarH743->GetXaxis()->SetTitleFont(42);
   ttbarH743->GetYaxis()->SetLabelFont(42);
   ttbarH743->GetYaxis()->SetLabelSize(0.035);
   ttbarH743->GetYaxis()->SetTitleSize(0.035);
   ttbarH743->GetYaxis()->SetTitleFont(42);
   ttbarH743->GetZaxis()->SetLabelFont(42);
   ttbarH743->GetZaxis()->SetLabelSize(0.035);
   ttbarH743->GetZaxis()->SetTitleSize(0.035);
   ttbarH743->GetZaxis()->SetTitleFont(42);
   HT30->Add(ttbarH7,"");
   
   TH1D *wjetsH744 = new TH1D("wjetsH744","wjets",30,0,1400);
   wjetsH744->SetBinContent(7,21.22064);
   wjetsH744->SetBinContent(8,51.3098);
   wjetsH744->SetBinContent(9,63.19618);
   wjetsH744->SetBinContent(10,49.38718);
   wjetsH744->SetBinContent(11,38.67347);
   wjetsH744->SetBinContent(12,30.09444);
   wjetsH744->SetBinContent(13,21.88828);
   wjetsH744->SetBinContent(14,18.33824);
   wjetsH744->SetBinContent(15,14.02102);
   wjetsH744->SetBinContent(16,10.11393);
   wjetsH744->SetBinContent(17,8.584008);
   wjetsH744->SetBinContent(18,7.103198);
   wjetsH744->SetBinContent(19,5.245439);
   wjetsH744->SetBinContent(20,2.841279);
   wjetsH744->SetBinContent(21,4.371199);
   wjetsH744->SetBinContent(22,2.404159);
   wjetsH744->SetBinContent(23,2.513439);
   wjetsH744->SetBinContent(24,1.42064);
   wjetsH744->SetBinContent(25,0.8742398);
   wjetsH744->SetBinContent(26,1.42064);
   wjetsH744->SetBinContent(27,1.42064);
   wjetsH744->SetBinContent(28,0.9835198);
   wjetsH744->SetBinContent(29,0.5463999);
   wjetsH744->SetBinContent(30,0.3278399);
   wjetsH744->SetBinContent(31,3.169119);
   wjetsH744->SetBinError(7,2.88926);
   wjetsH744->SetBinError(8,4.204203);
   wjetsH744->SetBinError(9,4.14455);
   wjetsH744->SetBinError(10,3.009803);
   wjetsH744->SetBinError(11,2.546678);
   wjetsH744->SetBinError(12,2.185706);
   wjetsH744->SetBinError(13,1.776693);
   wjetsH744->SetBinError(14,1.472119);
   wjetsH744->SetBinError(15,1.262296);
   wjetsH744->SetBinError(16,1.056147);
   wjetsH744->SetBinError(17,0.9737844);
   wjetsH744->SetBinError(18,0.8810433);
   wjetsH744->SetBinError(19,0.7571139);
   wjetsH744->SetBinError(20,0.5572207);
   wjetsH744->SetBinError(21,0.6911472);
   wjetsH744->SetBinError(22,0.5125685);
   wjetsH744->SetBinError(23,0.5240883);
   wjetsH744->SetBinError(24,0.3940145);
   wjetsH744->SetBinError(25,0.3090904);
   wjetsH744->SetBinError(26,0.3940145);
   wjetsH744->SetBinError(27,0.3940145);
   wjetsH744->SetBinError(28,0.3278399);
   wjetsH744->SetBinError(29,0.2443574);
   wjetsH744->SetBinError(30,0.1892785);
   wjetsH744->SetBinError(31,0.5884907);
   wjetsH744->SetEntries(2161);
   wjetsH744->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH744->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH744->SetLineColor(ci);
   wjetsH744->GetXaxis()->SetLabelFont(42);
   wjetsH744->GetXaxis()->SetLabelSize(0.035);
   wjetsH744->GetXaxis()->SetTitleSize(0.035);
   wjetsH744->GetXaxis()->SetTitleFont(42);
   wjetsH744->GetYaxis()->SetLabelFont(42);
   wjetsH744->GetYaxis()->SetLabelSize(0.035);
   wjetsH744->GetYaxis()->SetTitleSize(0.035);
   wjetsH744->GetYaxis()->SetTitleFont(42);
   wjetsH744->GetZaxis()->SetLabelFont(42);
   wjetsH744->GetZaxis()->SetLabelSize(0.035);
   wjetsH744->GetZaxis()->SetTitleSize(0.035);
   wjetsH744->GetZaxis()->SetTitleFont(42);
   HT30->Add(wjetsH7,"");
   HT30->Draw("hist goff");
   
   TH1D *stopH745 = new TH1D("stopH745","Signal",30,0,1400);
   stopH745->SetBinContent(7,1.11521);
   stopH745->SetBinContent(8,5.069137);
   stopH745->SetBinContent(9,8.110619);
   stopH745->SetBinContent(10,8.414768);
   stopH745->SetBinContent(11,9.327212);
   stopH745->SetBinContent(12,7.502323);
   stopH745->SetBinContent(13,5.474668);
   stopH745->SetBinContent(14,5.576051);
   stopH745->SetBinContent(15,5.373285);
   stopH745->SetBinContent(16,4.258075);
   stopH745->SetBinContent(17,3.852544);
   stopH745->SetBinContent(18,2.838717);
   stopH745->SetBinContent(19,1.723507);
   stopH745->SetBinContent(20,2.737334);
   stopH745->SetBinContent(21,1.723507);
   stopH745->SetBinContent(22,1.926272);
   stopH745->SetBinContent(23,1.11521);
   stopH745->SetBinContent(24,0.5069137);
   stopH745->SetBinContent(25,0.7096792);
   stopH745->SetBinContent(26,0.5069137);
   stopH745->SetBinContent(27,0.3041482);
   stopH745->SetBinContent(28,0.2027655);
   stopH745->SetBinContent(29,0.2027655);
   stopH745->SetBinContent(30,0.1013827);
   stopH745->SetBinContent(31,1.216593);
   stopH745->SetBinError(7,0.3362485);
   stopH745->SetBinError(8,0.7168843);
   stopH745->SetBinError(9,0.9067948);
   stopH745->SetBinError(10,0.9236408);
   stopH745->SetBinError(11,0.9724291);
   stopH745->SetBinError(12,0.8721273);
   stopH745->SetBinError(13,0.745008);
   stopH745->SetBinError(14,0.7518746);
   stopH745->SetBinError(15,0.7380775);
   stopH745->SetBinError(16,0.6570353);
   stopH745->SetBinError(17,0.6249652);
   stopH745->SetBinError(18,0.5364671);
   stopH745->SetBinError(19,0.4180118);
   stopH745->SetBinError(20,0.5268002);
   stopH745->SetBinError(21,0.4180118);
   stopH745->SetBinError(22,0.4419171);
   stopH745->SetBinError(23,0.3362485);
   stopH745->SetBinError(24,0.2266987);
   stopH745->SetBinError(25,0.2682335);
   stopH745->SetBinError(26,0.2266987);
   stopH745->SetBinError(27,0.1756001);
   stopH745->SetBinError(28,0.1433769);
   stopH745->SetBinError(29,0.1433769);
   stopH745->SetBinError(30,0.1013827);
   stopH745->SetBinError(31,0.3512001);
   stopH745->SetEntries(788);
   stopH745->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH745->SetLineColor(ci);
   stopH745->GetXaxis()->SetLabelFont(42);
   stopH745->GetXaxis()->SetLabelSize(0.035);
   stopH745->GetXaxis()->SetTitleSize(0.035);
   stopH745->GetXaxis()->SetTitleFont(42);
   stopH745->GetYaxis()->SetLabelFont(42);
   stopH745->GetYaxis()->SetLabelSize(0.035);
   stopH745->GetYaxis()->SetTitleSize(0.035);
   stopH745->GetYaxis()->SetTitleFont(42);
   stopH745->GetZaxis()->SetLabelFont(42);
   stopH745->GetZaxis()->SetLabelSize(0.035);
   stopH745->GetZaxis()->SetTitleSize(0.035);
   stopH745->GetZaxis()->SetTitleFont(42);
   stopH745->Draw("HIST same goff");
   
   TH1D *dataH746 = new TH1D("dataH746","Data",30,0,1400);
   dataH746->SetBinContent(7,23);
   dataH746->SetBinContent(8,48);
   dataH746->SetBinContent(9,82);
   dataH746->SetBinContent(10,57);
   dataH746->SetBinContent(11,48);
   dataH746->SetBinContent(12,40);
   dataH746->SetBinContent(13,40);
   dataH746->SetBinContent(14,30);
   dataH746->SetBinContent(15,20);
   dataH746->SetBinContent(16,17);
   dataH746->SetBinContent(17,16);
   dataH746->SetBinContent(18,6);
   dataH746->SetBinContent(19,11);
   dataH746->SetBinContent(20,6);
   dataH746->SetBinContent(21,5);
   dataH746->SetBinContent(22,3);
   dataH746->SetBinContent(23,5);
   dataH746->SetBinContent(24,3);
   dataH746->SetBinContent(25,1);
   dataH746->SetBinContent(26,2);
   dataH746->SetBinContent(27,2);
   dataH746->SetBinContent(30,1);
   dataH746->SetBinContent(31,6);
   dataH746->SetBinError(7,4.795832);
   dataH746->SetBinError(8,6.928203);
   dataH746->SetBinError(9,9.055385);
   dataH746->SetBinError(10,7.549834);
   dataH746->SetBinError(11,6.928203);
   dataH746->SetBinError(12,6.324555);
   dataH746->SetBinError(13,6.324555);
   dataH746->SetBinError(14,5.477226);
   dataH746->SetBinError(15,4.472136);
   dataH746->SetBinError(16,4.123106);
   dataH746->SetBinError(17,4);
   dataH746->SetBinError(18,2.44949);
   dataH746->SetBinError(19,3.316625);
   dataH746->SetBinError(20,2.44949);
   dataH746->SetBinError(21,2.236068);
   dataH746->SetBinError(22,1.732051);
   dataH746->SetBinError(23,2.236068);
   dataH746->SetBinError(24,1.732051);
   dataH746->SetBinError(25,1);
   dataH746->SetBinError(26,1.414214);
   dataH746->SetBinError(27,1.414214);
   dataH746->SetBinError(30,1);
   dataH746->SetBinError(31,2.44949);
   dataH746->SetEntries(472);
   dataH746->SetStats(0);
   dataH746->GetXaxis()->SetLabelFont(42);
   dataH746->GetXaxis()->SetLabelSize(0.035);
   dataH746->GetXaxis()->SetTitleSize(0.035);
   dataH746->GetXaxis()->SetTitleFont(42);
   dataH746->GetYaxis()->SetLabelFont(42);
   dataH746->GetYaxis()->SetLabelSize(0.035);
   dataH746->GetYaxis()->SetTitleSize(0.035);
   dataH746->GetYaxis()->SetTitleFont(42);
   dataH746->GetZaxis()->SetLabelFont(42);
   dataH746->GetZaxis()->SetLabelSize(0.035);
   dataH746->GetZaxis()->SetTitleSize(0.035);
   dataH746->GetZaxis()->SetTitleFont(42);
   dataH746->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH7","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH7","wjets","lpf");

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
   entry=leg->AddEntry("stopH7","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH7","Data","lpf");
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
   TText *AText = pt->AddText("HT30");
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
   
   TH1D *backgroundH747 = new TH1D("backgroundH747","",30,0,1400);
   backgroundH747->SetMinimum(0.5);
   backgroundH747->SetMaximum(1.5);
   backgroundH747->SetEntries(2422);
   backgroundH747->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH747->SetLineColor(ci);
   backgroundH747->GetXaxis()->SetLabelFont(42);
   backgroundH747->GetXaxis()->SetLabelSize(0.15);
   backgroundH747->GetXaxis()->SetTitleSize(0.035);
   backgroundH747->GetXaxis()->SetTitleFont(42);
   backgroundH747->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH747->GetYaxis()->SetNdivisions(5);
   backgroundH747->GetYaxis()->SetLabelFont(42);
   backgroundH747->GetYaxis()->SetLabelSize(0.15);
   backgroundH747->GetYaxis()->SetTitleSize(0.15);
   backgroundH747->GetYaxis()->SetTickLength(0.01);
   backgroundH747->GetYaxis()->SetTitleOffset(0.15);
   backgroundH747->GetYaxis()->SetTitleFont(42);
   backgroundH747->GetZaxis()->SetLabelFont(42);
   backgroundH747->GetZaxis()->SetLabelSize(0.035);
   backgroundH747->GetZaxis()->SetTitleSize(0.035);
   backgroundH747->GetZaxis()->SetTitleFont(42);
   backgroundH747->Draw("");
   
   Double_t Graph_from_backgroundH7_fx1008[30] = {
   23.33333,
   70,
   116.6667,
   163.3333,
   210,
   256.6667,
   303.3333,
   350,
   396.6667,
   443.3333,
   490,
   536.6667,
   583.3333,
   630,
   676.6667,
   723.3333,
   770,
   816.6667,
   863.3333,
   910,
   956.6667,
   1003.333,
   1050,
   1096.667,
   1143.333,
   1190,
   1236.667,
   1283.333,
   1330,
   1376.667};
   Double_t Graph_from_backgroundH7_fy1008[30] = {
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
   Double_t Graph_from_backgroundH7_fex1008[30] = {
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333};
   Double_t Graph_from_backgroundH7_fey1008[30] = {
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   -nan,
   0.1361533,
   0.08086331,
   0.06389191,
   0.06073567,
   0.06541613,
   0.07203642,
   0.08232531,
   0.08583556,
   0.09639638,
   0.1138462,
   0.1232604,
   0.1352303,
   0.1569893,
   0.2068617,
   0.1715497,
   0.232378,
   0.226454,
   0.2708725,
   0.3864425,
   0.302336,
   0.3011266,
   0.3642699,
   0.4479144,
   0.594119};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_backgroundH7_fx1008,Graph_from_backgroundH7_fy1008,Graph_from_backgroundH7_fex1008,Graph_from_backgroundH7_fey1008);
   gre->SetName("Graph_from_backgroundH7");
   gre->SetTitle("");
   gre->SetFillColor(6);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH71008 = new TH1F("Graph_Graph_from_backgroundH71008","",100,0,1540);
   Graph_Graph_from_backgroundH71008->SetMinimum(0.2870572);
   Graph_Graph_from_backgroundH71008->SetMaximum(1.712943);
   Graph_Graph_from_backgroundH71008->SetDirectory(0);
   Graph_Graph_from_backgroundH71008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH71008->SetLineColor(ci);
   Graph_Graph_from_backgroundH71008->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH71008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH71008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH71008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH71008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH71008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH71008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH71008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH71008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH71008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH71008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH71008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH71008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH71008);
   
   gre->Draw("3");
   
   TH1D *ratioH748 = new TH1D("ratioH748","",30,0,1400);
   ratioH748->SetBinContent(7,1.083851);
   ratioH748->SetBinContent(8,0.9095009);
   ratioH748->SetBinContent(9,1.200083);
   ratioH748->SetBinContent(10,1.059748);
   ratioH748->SetBinContent(11,0.9808268);
   ratioH748->SetBinContent(12,0.9563503);
   ratioH748->SetBinContent(13,1.303496);
   ratioH748->SetBinContent(14,1.168667);
   ratioH748->SetBinContent(15,0.8907556);
   ratioH748->SetBinContent(16,1.201707);
   ratioH748->SetBinContent(17,1.232359);
   ratioH748->SetBinContent(18,0.6449667);
   ratioH748->SetBinContent(19,1.345031);
   ratioH748->SetBinContent(20,1.109572);
   ratioH748->SetBinContent(21,0.9139092);
   ratioH748->SetBinContent(22,0.9562173);
   ratioH748->SetBinContent(23,1.25633);
   ratioH748->SetBinContent(24,0.8286725);
   ratioH748->SetBinContent(25,0.8059049);
   ratioH748->SetBinContent(26,0.928573);
   ratioH748->SetBinContent(27,1.119043);
   ratioH748->SetBinContent(30,1.440007);
   ratioH748->SetBinContent(31,1.117583);
   ratioH748->SetBinError(7,0.2699114);
   ratioH748->SetBinError(8,0.1504728);
   ratioH748->SetBinError(9,0.1531096);
   ratioH748->SetBinError(10,0.1544205);
   ratioH748->SetBinError(11,0.1554312);
   ratioH748->SetBinError(12,0.1661664);
   ratioH748->SetBinError(13,0.2323642);
   ratioH748->SetBinError(14,0.2357729);
   ratioH748->SetBinError(15,0.216899);
   ratioH748->SetBinError(16,0.3219689);
   ratioH748->SetBinError(17,0.3435015);
   ratioH748->SetBinError(18,0.2773761);
   ratioH748->SetBinError(19,0.457221);
   ratioH748->SetBinError(20,0.5078138);
   ratioH748->SetBinError(21,0.4377513);
   ratioH748->SetBinError(22,0.5951121);
   ratioH748->SetBinError(23,0.629773);
   ratioH748->SetBinError(24,0.528473);
   ratioH748->SetBinError(25,0.8639879);
   ratioH748->SetBinError(26,0.7141005);
   ratioH748->SetBinError(27,0.8600466);
   ratioH748->SetBinError(30,1.67498);
   ratioH748->SetBinError(31,0.5080504);
   ratioH748->SetEntries(76.26696);
   ratioH748->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH748->SetLineColor(ci);
   ratioH748->GetXaxis()->SetLabelFont(42);
   ratioH748->GetXaxis()->SetLabelSize(0.035);
   ratioH748->GetXaxis()->SetTitleSize(0.035);
   ratioH748->GetXaxis()->SetTitleFont(42);
   ratioH748->GetYaxis()->SetLabelFont(42);
   ratioH748->GetYaxis()->SetLabelSize(0.035);
   ratioH748->GetYaxis()->SetTitleSize(0.035);
   ratioH748->GetYaxis()->SetTitleFont(42);
   ratioH748->GetZaxis()->SetLabelFont(42);
   ratioH748->GetZaxis()->SetLabelSize(0.035);
   ratioH748->GetZaxis()->SetTitleSize(0.035);
   ratioH748->GetZaxis()->SetTitleFont(42);
   ratioH748->Draw("E same");
   TLine *line = new TLine(0,1,1400,1);
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
