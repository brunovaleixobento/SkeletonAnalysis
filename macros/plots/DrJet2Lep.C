void DrJet2Lep()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:13:28 2016) by ROOT version6.02/13
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
   variable_1->Range(-0.7500001,-20.53406,6.75,184.8066);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *DrJet2Lep = new THStack();
   DrJet2Lep->SetName("DrJet2Lep");
   DrJet2Lep->SetTitle("DrJet2Lep;Dr Jet2 Lep;Evt.");
   DrJet2Lep->SetMaximum(156.45);
   
   TH1F *DrJet2Lep_stack_8 = new TH1F("DrJet2Lep_stack_8","DrJet2Lep",20,0,6);
   DrJet2Lep_stack_8->SetMinimum(0);
   DrJet2Lep_stack_8->SetMaximum(164.2725);
   DrJet2Lep_stack_8->SetDirectory(0);
   DrJet2Lep_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DrJet2Lep_stack_8->SetLineColor(ci);
   DrJet2Lep_stack_8->GetXaxis()->SetTitle("Dr Jet2 Lep");
   DrJet2Lep_stack_8->GetXaxis()->SetLabelFont(42);
   DrJet2Lep_stack_8->GetXaxis()->SetLabelSize(0.035);
   DrJet2Lep_stack_8->GetXaxis()->SetTitleSize(0.035);
   DrJet2Lep_stack_8->GetXaxis()->SetTitleFont(42);
   DrJet2Lep_stack_8->GetYaxis()->SetTitle("Evt.");
   DrJet2Lep_stack_8->GetYaxis()->SetLabelFont(42);
   DrJet2Lep_stack_8->GetYaxis()->SetLabelSize(0.035);
   DrJet2Lep_stack_8->GetYaxis()->SetTitleSize(0.035);
   DrJet2Lep_stack_8->GetYaxis()->SetTitleFont(42);
   DrJet2Lep_stack_8->GetZaxis()->SetLabelFont(42);
   DrJet2Lep_stack_8->GetZaxis()->SetLabelSize(0.035);
   DrJet2Lep_stack_8->GetZaxis()->SetTitleSize(0.035);
   DrJet2Lep_stack_8->GetZaxis()->SetTitleFont(42);
   DrJet2Lep->SetHistogram(DrJet2Lep_stack_8);
   
   
   TH1D *ttbarH743 = new TH1D("ttbarH743","ttbar",20,0,6);
   ttbarH743->SetBinContent(1,4.032615);
   ttbarH743->SetBinContent(2,2.932811);
   ttbarH743->SetBinContent(3,6.232223);
   ttbarH743->SetBinContent(4,28.22831);
   ttbarH743->SetBinContent(5,19.06327);
   ttbarH743->SetBinContent(6,10.26484);
   ttbarH743->SetBinContent(7,33.72733);
   ttbarH743->SetBinContent(8,26.7619);
   ttbarH743->SetBinContent(9,15.39726);
   ttbarH743->SetBinContent(10,8.431832);
   ttbarH743->SetBinContent(11,12.83105);
   ttbarH743->SetBinContent(12,7.332027);
   ttbarH743->SetBinContent(13,2.199608);
   ttbarH743->SetBinContent(14,1.466405);
   ttbarH743->SetBinContent(15,1.466405);
   ttbarH743->SetBinError(1,1.215879);
   ttbarH743->SetBinError(2,1.036905);
   ttbarH743->SetBinError(3,1.511536);
   ttbarH743->SetBinError(4,3.216914);
   ttbarH743->SetBinError(5,2.6436);
   ttbarH743->SetBinError(6,1.939872);
   ttbarH743->SetBinError(7,3.516317);
   ttbarH743->SetBinError(8,3.132244);
   ttbarH743->SetBinError(9,2.375848);
   ttbarH743->SetBinError(10,1.758158);
   ttbarH743->SetBinError(11,2.168843);
   ttbarH743->SetBinError(12,1.639491);
   ttbarH743->SetBinError(13,0.8979863);
   ttbarH743->SetBinError(14,0.7332027);
   ttbarH743->SetBinError(15,0.7332027);
   ttbarH743->SetEntries(492);
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
   DrJet2Lep->Add(ttbarH7,"");
   
   TH1D *wjetsH744 = new TH1D("wjetsH744","wjets",20,0,6);
   wjetsH744->SetBinContent(1,6.674537);
   wjetsH744->SetBinContent(2,16.83041);
   wjetsH744->SetBinContent(3,13.73708);
   wjetsH744->SetBinContent(4,80.04372);
   wjetsH744->SetBinContent(5,57.03482);
   wjetsH744->SetBinContent(6,40.22653);
   wjetsH744->SetBinContent(7,108.3252);
   wjetsH744->SetBinContent(8,72.93198);
   wjetsH744->SetBinContent(9,37.16182);
   wjetsH744->SetBinContent(10,24.53709);
   wjetsH744->SetBinContent(11,29.89015);
   wjetsH744->SetBinContent(12,11.19665);
   wjetsH744->SetBinContent(13,9.852114);
   wjetsH744->SetBinContent(14,5.994441);
   wjetsH744->SetBinContent(15,2.499625);
   wjetsH744->SetBinContent(16,0.9454702);
   wjetsH744->SetBinContent(17,1.251342);
   wjetsH744->SetBinError(1,1.185805);
   wjetsH744->SetBinError(2,2.013673);
   wjetsH744->SetBinError(3,1.692591);
   wjetsH744->SetBinError(4,4.609769);
   wjetsH744->SetBinError(5,3.834304);
   wjetsH744->SetBinError(6,3.269588);
   wjetsH744->SetBinError(7,5.5435);
   wjetsH744->SetBinError(8,4.295707);
   wjetsH744->SetBinError(9,3.132616);
   wjetsH744->SetBinError(10,2.527676);
   wjetsH744->SetBinError(11,2.826861);
   wjetsH744->SetBinError(12,1.624262);
   wjetsH744->SetBinError(13,1.558884);
   wjetsH744->SetBinError(14,1.450657);
   wjetsH744->SetBinError(15,0.7167391);
   wjetsH744->SetBinError(16,0.3659351);
   wjetsH744->SetBinError(17,0.7224624);
   wjetsH744->SetEntries(2588);
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
   DrJet2Lep->Add(wjetsH7,"");
   DrJet2Lep->Draw("hist goff");
   
   TH1D *stopH745 = new TH1D("stopH745","Signal",20,0,6);
   stopH745->SetBinContent(1,2.838717);
   stopH745->SetBinContent(2,3.548396);
   stopH745->SetBinContent(3,4.460841);
   stopH745->SetBinContent(4,14.80188);
   stopH745->SetBinContent(5,10.23966);
   stopH745->SetBinContent(6,8.110619);
   stopH745->SetBinContent(7,19.56687);
   stopH745->SetBinContent(8,18.35028);
   stopH745->SetBinContent(9,9.732743);
   stopH745->SetBinContent(10,6.995409);
   stopH745->SetBinContent(11,8.414768);
   stopH745->SetBinContent(12,2.9401);
   stopH745->SetBinContent(13,2.534569);
   stopH745->SetBinContent(14,1.317976);
   stopH745->SetBinContent(15,0.7096792);
   stopH745->SetBinContent(16,0.1013827);
   stopH745->SetBinContent(17,0.1013827);
   stopH745->SetBinError(1,0.5364671);
   stopH745->SetBinError(2,0.5997884);
   stopH745->SetBinError(3,0.672497);
   stopH745->SetBinError(4,1.225012);
   stopH745->SetBinError(5,1.018884);
   stopH745->SetBinError(6,0.9067948);
   stopH745->SetBinError(7,1.408454);
   stopH745->SetBinError(8,1.363965);
   stopH745->SetBinError(9,0.993344);
   stopH745->SetBinError(10,0.8421483);
   stopH745->SetBinError(11,0.9236408);
   stopH745->SetBinError(12,0.5459628);
   stopH745->SetBinError(13,0.5069137);
   stopH745->SetBinError(14,0.3655407);
   stopH745->SetBinError(15,0.2682335);
   stopH745->SetBinError(16,0.1013827);
   stopH745->SetBinError(17,0.1013827);
   stopH745->SetEntries(1132);
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
   
   TH1D *dataH746 = new TH1D("dataH746","Data",20,0,6);
   dataH746->SetBinContent(1,12);
   dataH746->SetBinContent(2,22);
   dataH746->SetBinContent(3,28);
   dataH746->SetBinContent(4,104);
   dataH746->SetBinContent(5,63);
   dataH746->SetBinContent(6,44);
   dataH746->SetBinContent(7,149);
   dataH746->SetBinContent(8,99);
   dataH746->SetBinContent(9,44);
   dataH746->SetBinContent(10,26);
   dataH746->SetBinContent(11,50);
   dataH746->SetBinContent(12,24);
   dataH746->SetBinContent(13,14);
   dataH746->SetBinContent(14,6);
   dataH746->SetBinContent(15,7);
   dataH746->SetBinContent(16,2);
   dataH746->SetBinContent(17,1);
   dataH746->SetBinError(1,3.464102);
   dataH746->SetBinError(2,4.690416);
   dataH746->SetBinError(3,5.291503);
   dataH746->SetBinError(4,10.19804);
   dataH746->SetBinError(5,7.937254);
   dataH746->SetBinError(6,6.63325);
   dataH746->SetBinError(7,12.20656);
   dataH746->SetBinError(8,9.949874);
   dataH746->SetBinError(9,6.63325);
   dataH746->SetBinError(10,5.09902);
   dataH746->SetBinError(11,7.071068);
   dataH746->SetBinError(12,4.898979);
   dataH746->SetBinError(13,3.741657);
   dataH746->SetBinError(14,2.44949);
   dataH746->SetBinError(15,2.645751);
   dataH746->SetBinError(16,1.414214);
   dataH746->SetBinError(17,1);
   dataH746->SetEntries(695);
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
   
   TPaveText *pt = new TPaveText(0.4182125,0.9341347,0.5817875,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("DrJet2Lep");
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
   
   TH1D *backgroundH747 = new TH1D("backgroundH747","",20,0,6);
   backgroundH747->SetMinimum(0.5);
   backgroundH747->SetMaximum(1.5);
   backgroundH747->SetEntries(3101);
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
   backgroundH747->GetYaxis()->SetTitleOffset(0.35);
   backgroundH747->GetYaxis()->SetTitleFont(42);
   backgroundH747->GetZaxis()->SetLabelFont(42);
   backgroundH747->GetZaxis()->SetLabelSize(0.035);
   backgroundH747->GetZaxis()->SetTitleSize(0.035);
   backgroundH747->GetZaxis()->SetTitleFont(42);
   backgroundH747->Draw("");
   
   Double_t Graph_from_backgroundH7_fx1008[20] = {
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
   Double_t Graph_from_backgroundH7_fy1008[20] = {
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
   Double_t Graph_from_backgroundH7_fex1008[20] = {
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
   Double_t Graph_from_backgroundH7_fey1008[20] = {
   0.1586211,
   0.1146049,
   0.1136381,
   0.05191789,
   0.06120137,
   0.07529507,
   0.04621298,
   0.05332719,
   0.07480456,
   0.09339112,
   0.08340141,
   0.1245554,
   0.1492755,
   0.2178601,
   0.258528,
   0.3870403,
   0.5773503,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH7_fx1008,Graph_from_backgroundH7_fy1008,Graph_from_backgroundH7_fex1008,Graph_from_backgroundH7_fey1008);
   gre->SetName("Graph_from_backgroundH7");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH71008 = new TH1F("Graph_Graph_from_backgroundH71008","",100,0,6.6);
   Graph_Graph_from_backgroundH71008->SetMinimum(0.3071797);
   Graph_Graph_from_backgroundH71008->SetMaximum(1.69282);
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
   
   TH1D *ratioH748 = new TH1D("ratioH748","",20,0,6);
   ratioH748->SetBinContent(1,1.120746);
   ratioH748->SetBinContent(2,1.113179);
   ratioH748->SetBinContent(3,1.402152);
   ratioH748->SetBinContent(4,0.9605436);
   ratioH748->SetBinContent(5,0.8278789);
   ratioH748->SetBinContent(6,0.8714361);
   ratioH748->SetBinContent(7,1.048908);
   ratioH748->SetBinContent(8,0.9930398);
   ratioH748->SetBinContent(9,0.8371531);
   ratioH748->SetBinContent(10,0.7886216);
   ratioH748->SetBinContent(11,1.170379);
   ratioH748->SetBinContent(12,1.295289);
   ratioH748->SetBinContent(13,1.16166);
   ratioH748->SetBinContent(14,0.8041982);
   ratioH748->SetBinContent(15,1.764989);
   ratioH748->SetBinContent(16,2.115349);
   ratioH748->SetBinContent(17,0.7991423);
   ratioH748->SetBinError(1,0.3691562);
   ratioH748->SetBinError(2,0.2694464);
   ratioH748->SetBinError(3,0.3091988);
   ratioH748->SetBinError(4,0.1065764);
   ratioH748->SetBinError(5,0.1159581);
   ratioH748->SetBinError(6,0.1468483);
   ratioH748->SetBinError(7,0.09865898);
   ratioH748->SetBinError(8,0.1129833);
   ratioH748->SetBinError(9,0.1408882);
   ratioH748->SetBinError(10,0.1713024);
   ratioH748->SetBinError(11,0.1921554);
   ratioH748->SetBinError(12,0.3097358);
   ratioH748->SetBinError(13,0.3556116);
   ratioH748->SetBinError(14,0.3721359);
   ratioH748->SetBinError(15,0.8082297);
   ratioH748->SetBinError(16,1.705187);
   ratioH748->SetBinError(17,0.9227701);
   ratioH748->SetEntries(69.53184);
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
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
