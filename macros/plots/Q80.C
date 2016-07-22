void Q80()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:13:53 2016) by ROOT version6.02/13
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
   variable_1->Range(-2.375,-21.36094,1.375,192.2484);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *Q80 = new THStack();
   Q80->SetName("Q80");
   Q80->SetTitle("Q80;Q80 [GeV];Evt.");
   Q80->SetMaximum(162.75);
   
   TH1F *Q80_stack_11 = new TH1F("Q80_stack_11","Q80",20,-2,1);
   Q80_stack_11->SetMinimum(0);
   Q80_stack_11->SetMaximum(170.8875);
   Q80_stack_11->SetDirectory(0);
   Q80_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Q80_stack_11->SetLineColor(ci);
   Q80_stack_11->GetXaxis()->SetTitle("Q80 [GeV]");
   Q80_stack_11->GetXaxis()->SetLabelFont(42);
   Q80_stack_11->GetXaxis()->SetLabelSize(0.035);
   Q80_stack_11->GetXaxis()->SetTitleSize(0.035);
   Q80_stack_11->GetXaxis()->SetTitleFont(42);
   Q80_stack_11->GetYaxis()->SetTitle("Evt.");
   Q80_stack_11->GetYaxis()->SetLabelFont(42);
   Q80_stack_11->GetYaxis()->SetLabelSize(0.035);
   Q80_stack_11->GetYaxis()->SetTitleSize(0.035);
   Q80_stack_11->GetYaxis()->SetTitleFont(42);
   Q80_stack_11->GetZaxis()->SetLabelFont(42);
   Q80_stack_11->GetZaxis()->SetLabelSize(0.035);
   Q80_stack_11->GetZaxis()->SetTitleSize(0.035);
   Q80_stack_11->GetZaxis()->SetTitleFont(42);
   Q80->SetHistogram(Q80_stack_11);
   
   
   TH1D *ttbarH1061 = new TH1D("ttbarH1061","ttbar",20,-2,1);
   ttbarH1061->SetBinContent(8,4.399216);
   ttbarH1061->SetBinContent(9,9.165034);
   ttbarH1061->SetBinContent(10,7.332027);
   ttbarH1061->SetBinContent(11,16.13046);
   ttbarH1061->SetBinContent(12,13.19765);
   ttbarH1061->SetBinContent(13,15.76386);
   ttbarH1061->SetBinContent(14,22.36268);
   ttbarH1061->SetBinContent(15,27.8617);
   ttbarH1061->SetBinContent(16,43.25896);
   ttbarH1061->SetBinContent(17,19.06327);
   ttbarH1061->SetBinContent(18,1.833007);
   ttbarH1061->SetBinError(8,1.269944);
   ttbarH1061->SetBinError(9,1.833007);
   ttbarH1061->SetBinError(10,1.639491);
   ttbarH1061->SetBinError(11,2.431758);
   ttbarH1061->SetBinError(12,2.199608);
   ttbarH1061->SetBinError(13,2.403966);
   ttbarH1061->SetBinError(14,2.863248);
   ttbarH1061->SetBinError(15,3.195957);
   ttbarH1061->SetBinError(16,3.98231);
   ttbarH1061->SetBinError(17,2.6436);
   ttbarH1061->SetBinError(18,0.8197456);
   ttbarH1061->SetEntries(492);
   ttbarH1061->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH1061->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH1061->SetLineColor(ci);
   ttbarH1061->GetXaxis()->SetLabelFont(42);
   ttbarH1061->GetXaxis()->SetLabelSize(0.035);
   ttbarH1061->GetXaxis()->SetTitleSize(0.035);
   ttbarH1061->GetXaxis()->SetTitleFont(42);
   ttbarH1061->GetYaxis()->SetLabelFont(42);
   ttbarH1061->GetYaxis()->SetLabelSize(0.035);
   ttbarH1061->GetYaxis()->SetTitleSize(0.035);
   ttbarH1061->GetYaxis()->SetTitleFont(42);
   ttbarH1061->GetZaxis()->SetLabelFont(42);
   ttbarH1061->GetZaxis()->SetLabelSize(0.035);
   ttbarH1061->GetZaxis()->SetTitleSize(0.035);
   ttbarH1061->GetZaxis()->SetTitleFont(42);
   Q80->Add(ttbarH10,"");
   
   TH1D *wjetsH1062 = new TH1D("wjetsH1062","wjets",20,-2,1);
   wjetsH1062->SetBinContent(7,4.21719);
   wjetsH1062->SetBinContent(8,8.951829);
   wjetsH1062->SetBinContent(9,19.87783);
   wjetsH1062->SetBinContent(10,27.0859);
   wjetsH1062->SetBinContent(11,35.73491);
   wjetsH1062->SetBinContent(12,33.13488);
   wjetsH1062->SetBinContent(13,51.58234);
   wjetsH1062->SetBinContent(14,69.79212);
   wjetsH1062->SetBinContent(15,85.62826);
   wjetsH1062->SetBinContent(16,100.9882);
   wjetsH1062->SetBinContent(17,63.77299);
   wjetsH1062->SetBinContent(18,16.29023);
   wjetsH1062->SetBinContent(19,2.076319);
   wjetsH1062->SetBinError(7,1.097644);
   wjetsH1062->SetBinError(8,1.656317);
   wjetsH1062->SetBinError(9,2.485022);
   wjetsH1062->SetBinError(10,2.870713);
   wjetsH1062->SetBinError(11,3.335645);
   wjetsH1062->SetBinError(12,3.018292);
   wjetsH1062->SetBinError(13,3.8313);
   wjetsH1062->SetBinError(14,4.573193);
   wjetsH1062->SetBinError(15,4.765128);
   wjetsH1062->SetBinError(16,5.026688);
   wjetsH1062->SetBinError(17,3.492281);
   wjetsH1062->SetBinError(18,1.447849);
   wjetsH1062->SetBinError(19,0.4763404);
   wjetsH1062->SetEntries(2588);
   wjetsH1062->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH1062->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH1062->SetLineColor(ci);
   wjetsH1062->GetXaxis()->SetLabelFont(42);
   wjetsH1062->GetXaxis()->SetLabelSize(0.035);
   wjetsH1062->GetXaxis()->SetTitleSize(0.035);
   wjetsH1062->GetXaxis()->SetTitleFont(42);
   wjetsH1062->GetYaxis()->SetLabelFont(42);
   wjetsH1062->GetYaxis()->SetLabelSize(0.035);
   wjetsH1062->GetYaxis()->SetTitleSize(0.035);
   wjetsH1062->GetYaxis()->SetTitleFont(42);
   wjetsH1062->GetZaxis()->SetLabelFont(42);
   wjetsH1062->GetZaxis()->SetLabelSize(0.035);
   wjetsH1062->GetZaxis()->SetTitleSize(0.035);
   wjetsH1062->GetZaxis()->SetTitleFont(42);
   Q80->Add(wjetsH10,"");
   Q80->Draw("hist goff");
   
   TH1D *stopH1063 = new TH1D("stopH1063","Signal",20,-2,1);
   stopH1063->SetBinContent(6,0.1013827);
   stopH1063->SetBinContent(7,1.013827);
   stopH1063->SetBinContent(8,2.129038);
   stopH1063->SetBinContent(9,3.751162);
   stopH1063->SetBinContent(10,5.778816);
   stopH1063->SetBinContent(11,6.792644);
   stopH1063->SetBinContent(12,11.05072);
   stopH1063->SetBinContent(13,10.03689);
   stopH1063->SetBinContent(14,14.39635);
   stopH1063->SetBinContent(15,18.85719);
   stopH1063->SetBinContent(16,18.45166);
   stopH1063->SetBinContent(17,14.29497);
   stopH1063->SetBinContent(18,7.198175);
   stopH1063->SetBinContent(19,0.9124447);
   stopH1063->SetBinError(6,0.1013827);
   stopH1063->SetBinError(7,0.3206004);
   stopH1063->SetBinError(8,0.4645941);
   stopH1063->SetBinError(9,0.6166872);
   stopH1063->SetBinError(10,0.7654229);
   stopH1063->SetBinError(11,0.8298535);
   stopH1063->SetBinError(12,1.058467);
   stopH1063->SetBinError(13,1.008746);
   stopH1063->SetBinError(14,1.208115);
   stopH1063->SetBinError(15,1.382676);
   stopH1063->SetBinError(16,1.367728);
   stopH1063->SetBinError(17,1.203853);
   stopH1063->SetBinError(18,0.8542662);
   stopH1063->SetBinError(19,0.3041482);
   stopH1063->SetEntries(1132);
   stopH1063->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH1063->SetLineColor(ci);
   stopH1063->GetXaxis()->SetLabelFont(42);
   stopH1063->GetXaxis()->SetLabelSize(0.035);
   stopH1063->GetXaxis()->SetTitleSize(0.035);
   stopH1063->GetXaxis()->SetTitleFont(42);
   stopH1063->GetYaxis()->SetLabelFont(42);
   stopH1063->GetYaxis()->SetLabelSize(0.035);
   stopH1063->GetYaxis()->SetTitleSize(0.035);
   stopH1063->GetYaxis()->SetTitleFont(42);
   stopH1063->GetZaxis()->SetLabelFont(42);
   stopH1063->GetZaxis()->SetLabelSize(0.035);
   stopH1063->GetZaxis()->SetTitleSize(0.035);
   stopH1063->GetZaxis()->SetTitleFont(42);
   stopH1063->Draw("HIST same goff");
   
   TH1D *dataH1064 = new TH1D("dataH1064","Data",20,-2,1);
   dataH1064->SetBinContent(7,4);
   dataH1064->SetBinContent(8,15);
   dataH1064->SetBinContent(9,24);
   dataH1064->SetBinContent(10,34);
   dataH1064->SetBinContent(11,60);
   dataH1064->SetBinContent(12,41);
   dataH1064->SetBinContent(13,55);
   dataH1064->SetBinContent(14,90);
   dataH1064->SetBinContent(15,117);
   dataH1064->SetBinContent(16,155);
   dataH1064->SetBinContent(17,79);
   dataH1064->SetBinContent(18,20);
   dataH1064->SetBinContent(19,1);
   dataH1064->SetBinError(7,2);
   dataH1064->SetBinError(8,3.872983);
   dataH1064->SetBinError(9,4.898979);
   dataH1064->SetBinError(10,5.830952);
   dataH1064->SetBinError(11,7.745967);
   dataH1064->SetBinError(12,6.403124);
   dataH1064->SetBinError(13,7.416198);
   dataH1064->SetBinError(14,9.486833);
   dataH1064->SetBinError(15,10.81665);
   dataH1064->SetBinError(16,12.4499);
   dataH1064->SetBinError(17,8.888194);
   dataH1064->SetBinError(18,4.472136);
   dataH1064->SetBinError(19,1);
   dataH1064->SetEntries(695);
   dataH1064->SetStats(0);
   dataH1064->GetXaxis()->SetLabelFont(42);
   dataH1064->GetXaxis()->SetLabelSize(0.035);
   dataH1064->GetXaxis()->SetTitleSize(0.035);
   dataH1064->GetXaxis()->SetTitleFont(42);
   dataH1064->GetYaxis()->SetLabelFont(42);
   dataH1064->GetYaxis()->SetLabelSize(0.035);
   dataH1064->GetYaxis()->SetTitleSize(0.035);
   dataH1064->GetYaxis()->SetTitleFont(42);
   dataH1064->GetZaxis()->SetLabelFont(42);
   dataH1064->GetZaxis()->SetLabelSize(0.035);
   dataH1064->GetZaxis()->SetTitleSize(0.035);
   dataH1064->GetZaxis()->SetTitleFont(42);
   dataH1064->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH10","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH10","wjets","lpf");

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
   entry=leg->AddEntry("stopH10","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH10","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4624387,0.94,0.5375613,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Q80");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-2.375,0.375,1.375,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH1065 = new TH1D("backgroundH1065","",20,-2,1);
   backgroundH1065->SetMinimum(0.5);
   backgroundH1065->SetMaximum(1.5);
   backgroundH1065->SetEntries(3101);
   backgroundH1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH1065->SetLineColor(ci);
   backgroundH1065->GetXaxis()->SetLabelFont(42);
   backgroundH1065->GetXaxis()->SetLabelSize(0.15);
   backgroundH1065->GetXaxis()->SetTitleSize(0.035);
   backgroundH1065->GetXaxis()->SetTitleFont(42);
   backgroundH1065->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH1065->GetYaxis()->SetNdivisions(5);
   backgroundH1065->GetYaxis()->SetLabelFont(42);
   backgroundH1065->GetYaxis()->SetLabelSize(0.15);
   backgroundH1065->GetYaxis()->SetTitleSize(0.15);
   backgroundH1065->GetYaxis()->SetTickLength(0.01);
   backgroundH1065->GetYaxis()->SetTitleOffset(0.35);
   backgroundH1065->GetYaxis()->SetTitleFont(42);
   backgroundH1065->GetZaxis()->SetLabelFont(42);
   backgroundH1065->GetZaxis()->SetLabelSize(0.035);
   backgroundH1065->GetZaxis()->SetTitleSize(0.035);
   backgroundH1065->GetZaxis()->SetTitleFont(42);
   backgroundH1065->Draw("");
   
   Double_t Graph_from_backgroundH10_fx1011[20] = {
   -1.925,
   -1.775,
   -1.625,
   -1.475,
   -1.325,
   -1.175,
   -1.025,
   -0.875,
   -0.725,
   -0.575,
   -0.425,
   -0.275,
   -0.125,
   0.025,
   0.175,
   0.325,
   0.475,
   0.625,
   0.775,
   0.925};
   Double_t Graph_from_backgroundH10_fy1011[20] = {
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
   Double_t Graph_from_backgroundH10_fex1011[20] = {
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075};
   Double_t Graph_from_backgroundH10_fey1011[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2602784,
   0.1563277,
   0.1063228,
   0.09605148,
   0.07958972,
   0.08060754,
   0.06716107,
   0.05854909,
   0.05055642,
   0.04445833,
   0.05287573,
   0.09180511,
   0.2294157,
   0};
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH10_fx1011,Graph_from_backgroundH10_fy1011,Graph_from_backgroundH10_fex1011,Graph_from_backgroundH10_fey1011);
   gre->SetName("Graph_from_backgroundH10");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH101011 = new TH1F("Graph_Graph_from_backgroundH101011","",100,-2.3,1.3);
   Graph_Graph_from_backgroundH101011->SetMinimum(0.6876659);
   Graph_Graph_from_backgroundH101011->SetMaximum(1.312334);
   Graph_Graph_from_backgroundH101011->SetDirectory(0);
   Graph_Graph_from_backgroundH101011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH101011->SetLineColor(ci);
   Graph_Graph_from_backgroundH101011->GetXaxis()->SetRange(9,92);
   Graph_Graph_from_backgroundH101011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH101011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH101011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH101011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH101011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH101011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH101011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH101011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH101011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH101011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH101011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH101011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH101011);
   
   gre->Draw("3");
   
   TH1D *ratioH1066 = new TH1D("ratioH1066","",20,-2,1);
   ratioH1066->SetBinContent(7,0.9484988);
   ratioH1066->SetBinContent(8,1.123508);
   ratioH1066->SetBinContent(9,0.8263647);
   ratioH1066->SetBinContent(10,0.9878573);
   ratioH1066->SetBinContent(11,1.156841);
   ratioH1066->SetBinContent(12,0.8849075);
   ratioH1066->SetBinContent(13,0.8166757);
   ratioH1066->SetBinContent(14,0.9766175);
   ratioH1066->SetBinContent(15,1.030928);
   ratioH1066->SetBinContent(16,1.074545);
   ratioH1066->SetBinContent(17,0.9536886);
   ratioH1066->SetBinContent(18,1.103556);
   ratioH1066->SetBinContent(19,0.4816215);
   ratioH1066->SetBinError(7,0.534658);
   ratioH1066->SetBinError(8,0.3391151);
   ratioH1066->SetBinError(9,0.1901918);
   ratioH1066->SetBinError(10,0.1941778);
   ratioH1066->SetBinError(11,0.1754482);
   ratioH1066->SetBinError(12,0.1555219);
   ratioH1066->SetBinError(13,0.1230241);
   ratioH1066->SetBinError(14,0.1177588);
   ratioH1066->SetBinError(15,0.1086295);
   ratioH1066->SetBinError(16,0.09864858);
   ratioH1066->SetBinError(17,0.1185572);
   ratioH1066->SetBinError(18,0.2667506);
   ratioH1066->SetBinError(19,0.4941332);
   ratioH1066->SetEntries(168.1016);
   ratioH1066->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH1066->SetLineColor(ci);
   ratioH1066->GetXaxis()->SetLabelFont(42);
   ratioH1066->GetXaxis()->SetLabelSize(0.035);
   ratioH1066->GetXaxis()->SetTitleSize(0.035);
   ratioH1066->GetXaxis()->SetTitleFont(42);
   ratioH1066->GetYaxis()->SetLabelFont(42);
   ratioH1066->GetYaxis()->SetLabelSize(0.035);
   ratioH1066->GetYaxis()->SetTitleSize(0.035);
   ratioH1066->GetYaxis()->SetTitleFont(42);
   ratioH1066->GetZaxis()->SetLabelFont(42);
   ratioH1066->GetZaxis()->SetLabelSize(0.035);
   ratioH1066->GetZaxis()->SetTitleSize(0.035);
   ratioH1066->GetZaxis()->SetTitleFont(42);
   ratioH1066->Draw("E same");
   TLine *line = new TLine(-2,1,1,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
