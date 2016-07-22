void LepPt()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:12:37 2016) by ROOT version6.02/13
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
   variable_1->Range(-4.375,-17.49806,39.375,157.4825);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *LepPt = new THStack();
   LepPt->SetName("LepPt");
   LepPt->SetTitle("LepPt;p_{T} (l) [GeV];Evt.");
   LepPt->SetMaximum(133.3185);
   
   TH1F *LepPt_stack_1 = new TH1F("LepPt_stack_1","LepPt",20,0,35);
   LepPt_stack_1->SetMinimum(0);
   LepPt_stack_1->SetMaximum(139.9845);
   LepPt_stack_1->SetDirectory(0);
   LepPt_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   LepPt_stack_1->SetLineColor(ci);
   LepPt_stack_1->GetXaxis()->SetTitle("p_{T} (l) [GeV]");
   LepPt_stack_1->GetXaxis()->SetLabelFont(42);
   LepPt_stack_1->GetXaxis()->SetLabelSize(0.035);
   LepPt_stack_1->GetXaxis()->SetTitleSize(0.035);
   LepPt_stack_1->GetXaxis()->SetTitleFont(42);
   LepPt_stack_1->GetYaxis()->SetTitle("Evt.");
   LepPt_stack_1->GetYaxis()->SetLabelFont(42);
   LepPt_stack_1->GetYaxis()->SetLabelSize(0.035);
   LepPt_stack_1->GetYaxis()->SetTitleSize(0.035);
   LepPt_stack_1->GetYaxis()->SetTitleFont(42);
   LepPt_stack_1->GetZaxis()->SetLabelFont(42);
   LepPt_stack_1->GetZaxis()->SetLabelSize(0.035);
   LepPt_stack_1->GetZaxis()->SetTitleSize(0.035);
   LepPt_stack_1->GetZaxis()->SetTitleFont(42);
   LepPt->SetHistogram(LepPt_stack_1);
   
   
   TH1D *ttbarH01 = new TH1D("ttbarH01","ttbar",20,0,35);
   ttbarH01->SetBinContent(3,2.56621);
   ttbarH01->SetBinContent(4,31.16112);
   ttbarH01->SetBinContent(5,23.82909);
   ttbarH01->SetBinContent(6,26.7619);
   ttbarH01->SetBinContent(7,27.4951);
   ttbarH01->SetBinContent(8,27.4951);
   ttbarH01->SetBinContent(9,25.29549);
   ttbarH01->SetBinContent(10,15.76386);
   ttbarH01->SetBinError(3,0.9699361);
   ttbarH01->SetBinError(4,3.379898);
   ttbarH01->SetBinError(5,2.955635);
   ttbarH01->SetBinError(6,3.132244);
   ttbarH01->SetBinError(7,3.174861);
   ttbarH01->SetBinError(8,3.174861);
   ttbarH01->SetBinError(9,3.04522);
   ttbarH01->SetBinError(10,2.403966);
   ttbarH01->SetEntries(492);

   ci = TColor::GetColor("#66ff66");
   ttbarH01->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH01->SetLineColor(ci);
   ttbarH01->GetXaxis()->SetLabelFont(42);
   ttbarH01->GetXaxis()->SetLabelSize(0.035);
   ttbarH01->GetXaxis()->SetTitleSize(0.035);
   ttbarH01->GetXaxis()->SetTitleFont(42);
   ttbarH01->GetYaxis()->SetLabelFont(42);
   ttbarH01->GetYaxis()->SetLabelSize(0.035);
   ttbarH01->GetYaxis()->SetTitleSize(0.035);
   ttbarH01->GetYaxis()->SetTitleFont(42);
   ttbarH01->GetZaxis()->SetLabelFont(42);
   ttbarH01->GetZaxis()->SetLabelSize(0.035);
   ttbarH01->GetZaxis()->SetTitleSize(0.035);
   ttbarH01->GetZaxis()->SetTitleFont(42);
   LepPt->Add(ttbarH0,"");
   
   TH1D *wjetsH02 = new TH1D("wjetsH02","wjets",20,0,35);
   wjetsH02->SetBinContent(3,10.27817);
   wjetsH02->SetBinContent(4,95.80892);
   wjetsH02->SetBinContent(5,80.47416);
   wjetsH02->SetBinContent(6,82.03576);
   wjetsH02->SetBinContent(7,75.62458);
   wjetsH02->SetBinContent(8,68.02382);
   wjetsH02->SetBinContent(9,61.39228);
   wjetsH02->SetBinContent(10,45.49526);
   wjetsH02->SetBinError(3,1.567255);
   wjetsH02->SetBinError(4,5.169049);
   wjetsH02->SetBinError(5,4.691523);
   wjetsH02->SetBinError(6,4.798006);
   wjetsH02->SetBinError(7,4.466764);
   wjetsH02->SetBinError(8,4.116116);
   wjetsH02->SetBinError(9,3.804086);
   wjetsH02->SetBinError(10,3.333957);
   wjetsH02->SetEntries(2588);

   ci = TColor::GetColor("#3399cc");
   wjetsH02->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH02->SetLineColor(ci);
   wjetsH02->GetXaxis()->SetLabelFont(42);
   wjetsH02->GetXaxis()->SetLabelSize(0.035);
   wjetsH02->GetXaxis()->SetTitleSize(0.035);
   wjetsH02->GetXaxis()->SetTitleFont(42);
   wjetsH02->GetYaxis()->SetLabelFont(42);
   wjetsH02->GetYaxis()->SetLabelSize(0.035);
   wjetsH02->GetYaxis()->SetTitleSize(0.035);
   wjetsH02->GetYaxis()->SetTitleFont(42);
   wjetsH02->GetZaxis()->SetLabelFont(42);
   wjetsH02->GetZaxis()->SetLabelSize(0.035);
   wjetsH02->GetZaxis()->SetTitleSize(0.035);
   wjetsH02->GetZaxis()->SetTitleFont(42);
   LepPt->Add(wjetsH0,"");
   LepPt->Draw("hist goff");
   
   TH1D *stopH03 = new TH1D("stopH03","Signal",20,0,35);
   stopH03->SetBinContent(3,4.258075);
   stopH03->SetBinContent(4,24.83877);
   stopH03->SetBinContent(5,20.47931);
   stopH03->SetBinContent(6,17.94475);
   stopH03->SetBinContent(7,14.49773);
   stopH03->SetBinContent(8,15.20741);
   stopH03->SetBinContent(9,11.65902);
   stopH03->SetBinContent(10,5.880199);
   stopH03->SetBinError(3,0.6570353);
   stopH03->SetBinError(4,1.586891);
   stopH03->SetBinError(5,1.44092);
   stopH03->SetBinError(6,1.34881);
   stopH03->SetBinError(7,1.212361);
   stopH03->SetBinError(8,1.24168);
   stopH03->SetBinError(9,1.087209);
   stopH03->SetBinError(10,0.772108);
   stopH03->SetEntries(1132);

   ci = TColor::GetColor("#ff0000");
   stopH03->SetLineColor(ci);
   stopH03->GetXaxis()->SetLabelFont(42);
   stopH03->GetXaxis()->SetLabelSize(0.035);
   stopH03->GetXaxis()->SetTitleSize(0.035);
   stopH03->GetXaxis()->SetTitleFont(42);
   stopH03->GetYaxis()->SetLabelFont(42);
   stopH03->GetYaxis()->SetLabelSize(0.035);
   stopH03->GetYaxis()->SetTitleSize(0.035);
   stopH03->GetYaxis()->SetTitleFont(42);
   stopH03->GetZaxis()->SetLabelFont(42);
   stopH03->GetZaxis()->SetLabelSize(0.035);
   stopH03->GetZaxis()->SetTitleSize(0.035);
   stopH03->GetZaxis()->SetTitleFont(42);
   stopH03->Draw("HIST same goff");
   
   TH1D *dataH04 = new TH1D("dataH04","Data",20,0,35);
   dataH04->SetBinContent(3,13);
   dataH04->SetBinContent(4,125);
   dataH04->SetBinContent(5,100);
   dataH04->SetBinContent(6,100);
   dataH04->SetBinContent(7,107);
   dataH04->SetBinContent(8,101);
   dataH04->SetBinContent(9,89);
   dataH04->SetBinContent(10,60);
   dataH04->SetBinError(3,3.605551);
   dataH04->SetBinError(4,11.18034);
   dataH04->SetBinError(5,10);
   dataH04->SetBinError(6,10);
   dataH04->SetBinError(7,10.34408);
   dataH04->SetBinError(8,10.04988);
   dataH04->SetBinError(9,9.433981);
   dataH04->SetBinError(10,7.745967);
   dataH04->SetEntries(695);
   dataH04->GetXaxis()->SetLabelFont(42);
   dataH04->GetXaxis()->SetLabelSize(0.035);
   dataH04->GetXaxis()->SetTitleSize(0.035);
   dataH04->GetXaxis()->SetTitleFont(42);
   dataH04->GetYaxis()->SetLabelFont(42);
   dataH04->GetYaxis()->SetLabelSize(0.035);
   dataH04->GetYaxis()->SetTitleSize(0.035);
   dataH04->GetYaxis()->SetTitleFont(42);
   dataH04->GetZaxis()->SetLabelFont(42);
   dataH04->GetZaxis()->SetLabelSize(0.035);
   dataH04->GetZaxis()->SetTitleSize(0.035);
   dataH04->GetZaxis()->SetTitleFont(42);
   dataH04->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH0","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH0","wjets","lpf");

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
   entry=leg->AddEntry("stopH0","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH0","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4489786,0.9341347,0.5510214,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("LepPt");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-4.375,0.375,39.375,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH05 = new TH1D("backgroundH05","",20,0,35);
   backgroundH05->SetMinimum(0.5);
   backgroundH05->SetMaximum(1.5);
   backgroundH05->SetEntries(3101);

   ci = TColor::GetColor("#000099");
   backgroundH05->SetLineColor(ci);
   backgroundH05->GetXaxis()->SetLabelFont(42);
   backgroundH05->GetXaxis()->SetLabelSize(0.15);
   backgroundH05->GetXaxis()->SetTitleSize(0.035);
   backgroundH05->GetXaxis()->SetTitleFont(42);
   backgroundH05->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH05->GetYaxis()->SetNdivisions(5);
   backgroundH05->GetYaxis()->SetLabelFont(42);
   backgroundH05->GetYaxis()->SetLabelSize(0.15);
   backgroundH05->GetYaxis()->SetTitleSize(0.15);
   backgroundH05->GetYaxis()->SetTickLength(0.01);
   backgroundH05->GetYaxis()->SetTitleOffset(0.35);
   backgroundH05->GetYaxis()->SetTitleFont(42);
   backgroundH05->GetZaxis()->SetLabelFont(42);
   backgroundH05->GetZaxis()->SetLabelSize(0.035);
   backgroundH05->GetZaxis()->SetTitleSize(0.035);
   backgroundH05->GetZaxis()->SetTitleFont(42);
   backgroundH05->Draw("");
   
   Double_t Graph_from_backgroundH0_fx1001[20] = {
   0.875,
   2.625,
   4.375,
   6.125,
   7.875,
   9.625,
   11.375,
   13.125,
   14.875,
   16.625,
   18.375,
   20.125,
   21.875,
   23.625,
   25.375,
   27.125,
   28.875,
   30.625,
   32.375,
   34.125};
   Double_t Graph_from_backgroundH0_fy1001[20] = {
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
   Double_t Graph_from_backgroundH0_fex1001[20] = {
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875,
   0.875};
   Double_t Graph_from_backgroundH0_fey1001[20] = {
   0,
   0,
   0.1434956,
   0.04864127,
   0.05316155,
   0.0526657,
   0.05314331,
   0.05442151,
   0.05621123,
   0.06709647,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH0_fx1001,Graph_from_backgroundH0_fy1001,Graph_from_backgroundH0_fex1001,Graph_from_backgroundH0_fey1001);
   gre->SetName("Graph_from_backgroundH0");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH01001 = new TH1F("Graph_Graph_from_backgroundH01001","",100,0,38.5);
   Graph_Graph_from_backgroundH01001->SetMinimum(0.8278053);
   Graph_Graph_from_backgroundH01001->SetMaximum(1.172195);
   Graph_Graph_from_backgroundH01001->SetDirectory(0);
   Graph_Graph_from_backgroundH01001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH01001->SetLineColor(ci);
   Graph_Graph_from_backgroundH01001->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH01001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH01001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH01001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH01001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH01001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH01001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH01001);
   
   gre->Draw("3");
   
   TH1D *ratioH06 = new TH1D("ratioH06","",20,0,35);
   ratioH06->SetBinContent(3,1.012116);
   ratioH06->SetBinContent(4,0.9844842);
   ratioH06->SetBinContent(5,0.9587429);
   ratioH06->SetBinContent(6,0.9191375);
   ratioH06->SetBinContent(7,1.037629);
   ratioH06->SetBinContent(8,1.057382);
   ratioH06->SetBinContent(9,1.026673);
   ratioH06->SetBinContent(10,0.979446);
   ratioH06->SetBinError(3,0.3160558);
   ratioH06->SetBinError(4,0.1002337);
   ratioH06->SetBinError(5,0.1085801);
   ratioH06->SetBinError(6,0.1038815);
   ratioH06->SetBinError(7,0.1144689);
   ratioH06->SetBinError(8,0.1199217);
   ratioH06->SetBinError(9,0.1231822);
   ratioH06->SetBinError(10,0.1425039);
   ratioH06->SetEntries(325.3983);

   ci = TColor::GetColor("#000099");
   ratioH06->SetLineColor(ci);
   ratioH06->GetXaxis()->SetLabelFont(42);
   ratioH06->GetXaxis()->SetLabelSize(0.035);
   ratioH06->GetXaxis()->SetTitleSize(0.035);
   ratioH06->GetXaxis()->SetTitleFont(42);
   ratioH06->GetYaxis()->SetLabelFont(42);
   ratioH06->GetYaxis()->SetLabelSize(0.035);
   ratioH06->GetYaxis()->SetTitleSize(0.035);
   ratioH06->GetYaxis()->SetTitleFont(42);
   ratioH06->GetZaxis()->SetLabelFont(42);
   ratioH06->GetZaxis()->SetLabelSize(0.035);
   ratioH06->GetZaxis()->SetTitleSize(0.035);
   ratioH06->GetZaxis()->SetTitleFont(42);
   ratioH06->Draw("E same");
   TLine *line = new TLine(0,1,35,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
