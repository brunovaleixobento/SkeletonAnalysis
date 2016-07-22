void plot()
{
//=========Macro generated from canvas: Stop/Stop
//=========  (Wed Jul 20 23:14:18 2016) by ROOT version6.02/13
   TCanvas *Stop = new TCanvas("Stop", "Stop",53,24,800,600);
   gStyle->SetOptStat(0);
   Stop->Range(0,0,1,1);
   Stop->SetFillColor(0);
   Stop->SetBorderMode(0);
   Stop->SetBorderSize(2);
   Stop->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_1
   TPad *Stop_1 = new TPad("Stop_1", "Stop_1",0.01,0.51,0.1566667,0.99);
   Stop_1->Draw();
   Stop_1->cd();
   Stop_1->Range(0,0,1,1);
   Stop_1->SetFillColor(0);
   Stop_1->SetBorderMode(0);
   Stop_1->SetBorderSize(2);
   Stop_1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_1_1
   TPad *Stop_1_1 = new TPad("Stop_1_1", "Stop_1_1",0.01,0.2,0.99,0.99);
   Stop_1_1->Draw();
   Stop_1_1->cd();
   Stop_1_1->Range(-4.375,-17.49806,39.375,157.4825);
   Stop_1_1->SetFillColor(0);
   Stop_1_1->SetBorderMode(0);
   Stop_1_1->SetBorderSize(2);
   Stop_1_1->SetFrameBorderMode(0);
   Stop_1_1->SetFrameBorderMode(0);
   
   THStack *LepPt = new THStack();
   LepPt->SetName("LepPt");
   LepPt->SetTitle("LepPt;p_{T} (l) [GeV];Evt.");
   LepPt->SetMaximum(133.3185);
   
   TH1F *LepPt_stack_1_stack_12 = new TH1F("LepPt_stack_1_stack_12","LepPt",20,0,35);
   LepPt_stack_1_stack_12->SetMinimum(0);
   LepPt_stack_1_stack_12->SetMaximum(139.9845);
   LepPt_stack_1_stack_12->SetDirectory(0);
   LepPt_stack_1_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   LepPt_stack_1_stack_12->SetLineColor(ci);
   LepPt_stack_1_stack_12->GetXaxis()->SetTitle("p_{T} (l) [GeV]");
   LepPt_stack_1_stack_12->GetXaxis()->SetLabelFont(42);
   LepPt_stack_1_stack_12->GetXaxis()->SetLabelSize(0.035);
   LepPt_stack_1_stack_12->GetXaxis()->SetTitleSize(0.035);
   LepPt_stack_1_stack_12->GetXaxis()->SetTitleFont(42);
   LepPt_stack_1_stack_12->GetYaxis()->SetTitle("Evt.");
   LepPt_stack_1_stack_12->GetYaxis()->SetLabelFont(42);
   LepPt_stack_1_stack_12->GetYaxis()->SetLabelSize(0.035);
   LepPt_stack_1_stack_12->GetYaxis()->SetTitleSize(0.035);
   LepPt_stack_1_stack_12->GetYaxis()->SetTitleFont(42);
   LepPt_stack_1_stack_12->GetZaxis()->SetLabelFont(42);
   LepPt_stack_1_stack_12->GetZaxis()->SetLabelSize(0.035);
   LepPt_stack_1_stack_12->GetZaxis()->SetTitleSize(0.035);
   LepPt_stack_1_stack_12->GetZaxis()->SetTitleFont(42);
   LepPt->SetHistogram(LepPt_stack_1_stack_12);
   
   
   TH1D *ttbarH067 = new TH1D("ttbarH067","ttbar",20,0,35);
   ttbarH067->SetBinContent(3,2.56621);
   ttbarH067->SetBinContent(4,31.16112);
   ttbarH067->SetBinContent(5,23.82909);
   ttbarH067->SetBinContent(6,26.7619);
   ttbarH067->SetBinContent(7,27.4951);
   ttbarH067->SetBinContent(8,27.4951);
   ttbarH067->SetBinContent(9,25.29549);
   ttbarH067->SetBinContent(10,15.76386);
   ttbarH067->SetBinError(3,0.9699361);
   ttbarH067->SetBinError(4,3.379898);
   ttbarH067->SetBinError(5,2.955635);
   ttbarH067->SetBinError(6,3.132244);
   ttbarH067->SetBinError(7,3.174861);
   ttbarH067->SetBinError(8,3.174861);
   ttbarH067->SetBinError(9,3.04522);
   ttbarH067->SetBinError(10,2.403966);
   ttbarH067->SetEntries(492);

   ci = TColor::GetColor("#66ff66");
   ttbarH067->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH067->SetLineColor(ci);
   ttbarH067->GetXaxis()->SetLabelFont(42);
   ttbarH067->GetXaxis()->SetLabelSize(0.035);
   ttbarH067->GetXaxis()->SetTitleSize(0.035);
   ttbarH067->GetXaxis()->SetTitleFont(42);
   ttbarH067->GetYaxis()->SetLabelFont(42);
   ttbarH067->GetYaxis()->SetLabelSize(0.035);
   ttbarH067->GetYaxis()->SetTitleSize(0.035);
   ttbarH067->GetYaxis()->SetTitleFont(42);
   ttbarH067->GetZaxis()->SetLabelFont(42);
   ttbarH067->GetZaxis()->SetLabelSize(0.035);
   ttbarH067->GetZaxis()->SetTitleSize(0.035);
   ttbarH067->GetZaxis()->SetTitleFont(42);
   LepPt->Add(ttbarH0,"");
   
   TH1D *wjetsH068 = new TH1D("wjetsH068","wjets",20,0,35);
   wjetsH068->SetBinContent(3,10.27817);
   wjetsH068->SetBinContent(4,95.80892);
   wjetsH068->SetBinContent(5,80.47416);
   wjetsH068->SetBinContent(6,82.03576);
   wjetsH068->SetBinContent(7,75.62458);
   wjetsH068->SetBinContent(8,68.02382);
   wjetsH068->SetBinContent(9,61.39228);
   wjetsH068->SetBinContent(10,45.49526);
   wjetsH068->SetBinError(3,1.567255);
   wjetsH068->SetBinError(4,5.169049);
   wjetsH068->SetBinError(5,4.691523);
   wjetsH068->SetBinError(6,4.798006);
   wjetsH068->SetBinError(7,4.466764);
   wjetsH068->SetBinError(8,4.116116);
   wjetsH068->SetBinError(9,3.804086);
   wjetsH068->SetBinError(10,3.333957);
   wjetsH068->SetEntries(2588);

   ci = TColor::GetColor("#3399cc");
   wjetsH068->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH068->SetLineColor(ci);
   wjetsH068->GetXaxis()->SetLabelFont(42);
   wjetsH068->GetXaxis()->SetLabelSize(0.035);
   wjetsH068->GetXaxis()->SetTitleSize(0.035);
   wjetsH068->GetXaxis()->SetTitleFont(42);
   wjetsH068->GetYaxis()->SetLabelFont(42);
   wjetsH068->GetYaxis()->SetLabelSize(0.035);
   wjetsH068->GetYaxis()->SetTitleSize(0.035);
   wjetsH068->GetYaxis()->SetTitleFont(42);
   wjetsH068->GetZaxis()->SetLabelFont(42);
   wjetsH068->GetZaxis()->SetLabelSize(0.035);
   wjetsH068->GetZaxis()->SetTitleSize(0.035);
   wjetsH068->GetZaxis()->SetTitleFont(42);
   LepPt->Add(wjetsH0,"");
   LepPt->Draw("hist");
   
   TH1D *stopH069 = new TH1D("stopH069","Signal",20,0,35);
   stopH069->SetBinContent(3,4.258075);
   stopH069->SetBinContent(4,24.83877);
   stopH069->SetBinContent(5,20.47931);
   stopH069->SetBinContent(6,17.94475);
   stopH069->SetBinContent(7,14.49773);
   stopH069->SetBinContent(8,15.20741);
   stopH069->SetBinContent(9,11.65902);
   stopH069->SetBinContent(10,5.880199);
   stopH069->SetBinError(3,0.6570353);
   stopH069->SetBinError(4,1.586891);
   stopH069->SetBinError(5,1.44092);
   stopH069->SetBinError(6,1.34881);
   stopH069->SetBinError(7,1.212361);
   stopH069->SetBinError(8,1.24168);
   stopH069->SetBinError(9,1.087209);
   stopH069->SetBinError(10,0.772108);
   stopH069->SetEntries(1132);

   ci = TColor::GetColor("#ff0000");
   stopH069->SetLineColor(ci);
   stopH069->GetXaxis()->SetLabelFont(42);
   stopH069->GetXaxis()->SetLabelSize(0.035);
   stopH069->GetXaxis()->SetTitleSize(0.035);
   stopH069->GetXaxis()->SetTitleFont(42);
   stopH069->GetYaxis()->SetLabelFont(42);
   stopH069->GetYaxis()->SetLabelSize(0.035);
   stopH069->GetYaxis()->SetTitleSize(0.035);
   stopH069->GetYaxis()->SetTitleFont(42);
   stopH069->GetZaxis()->SetLabelFont(42);
   stopH069->GetZaxis()->SetLabelSize(0.035);
   stopH069->GetZaxis()->SetTitleSize(0.035);
   stopH069->GetZaxis()->SetTitleFont(42);
   stopH069->Draw("HIST same");
   
   TH1D *dataH070 = new TH1D("dataH070","Data",20,0,35);
   dataH070->SetBinContent(3,13);
   dataH070->SetBinContent(4,125);
   dataH070->SetBinContent(5,100);
   dataH070->SetBinContent(6,100);
   dataH070->SetBinContent(7,107);
   dataH070->SetBinContent(8,101);
   dataH070->SetBinContent(9,89);
   dataH070->SetBinContent(10,60);
   dataH070->SetBinError(3,3.605551);
   dataH070->SetBinError(4,11.18034);
   dataH070->SetBinError(5,10);
   dataH070->SetBinError(6,10);
   dataH070->SetBinError(7,10.34408);
   dataH070->SetBinError(8,10.04988);
   dataH070->SetBinError(9,9.433981);
   dataH070->SetBinError(10,7.745967);
   dataH070->SetEntries(695);
   dataH070->GetXaxis()->SetLabelFont(42);
   dataH070->GetXaxis()->SetLabelSize(0.035);
   dataH070->GetXaxis()->SetTitleSize(0.035);
   dataH070->GetXaxis()->SetTitleFont(42);
   dataH070->GetYaxis()->SetLabelFont(42);
   dataH070->GetYaxis()->SetLabelSize(0.035);
   dataH070->GetYaxis()->SetTitleSize(0.035);
   dataH070->GetYaxis()->SetTitleFont(42);
   dataH070->GetZaxis()->SetLabelFont(42);
   dataH070->GetZaxis()->SetLabelSize(0.035);
   dataH070->GetZaxis()->SetTitleSize(0.035);
   dataH070->GetZaxis()->SetTitleFont(42);
   dataH070->Draw("E same");
   
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
   
   TPaveText *pt = new TPaveText(0.4157069,0.94,0.5842931,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("LepPt");
   pt->Draw();
   Stop_1_1->Modified();
   Stop_1->cd();
  
// ------------>Primitives in pad: Stop_1_2
   TPad *Stop_1_2 = new TPad("Stop_1_2", "Stop_1_2",0.01,0.01,0.99,0.2);
   Stop_1_2->Draw();
   Stop_1_2->cd();
   Stop_1_2->Range(-4.375,0.375,39.375,1.625);
   Stop_1_2->SetFillColor(0);
   Stop_1_2->SetBorderMode(0);
   Stop_1_2->SetBorderSize(2);
   Stop_1_2->SetFrameBorderMode(0);
   Stop_1_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH071 = new TH1D("backgroundH071","",20,0,35);
   backgroundH071->SetMinimum(0.5);
   backgroundH071->SetMaximum(1.5);
   backgroundH071->SetEntries(3101);

   ci = TColor::GetColor("#000099");
   backgroundH071->SetLineColor(ci);
   backgroundH071->GetXaxis()->SetLabelFont(42);
   backgroundH071->GetXaxis()->SetLabelSize(0.15);
   backgroundH071->GetXaxis()->SetTitleSize(0.035);
   backgroundH071->GetXaxis()->SetTitleFont(42);
   backgroundH071->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH071->GetYaxis()->SetNdivisions(5);
   backgroundH071->GetYaxis()->SetLabelFont(42);
   backgroundH071->GetYaxis()->SetLabelSize(0.15);
   backgroundH071->GetYaxis()->SetTitleSize(0.15);
   backgroundH071->GetYaxis()->SetTickLength(0.01);
   backgroundH071->GetYaxis()->SetTitleOffset(0.35);
   backgroundH071->GetYaxis()->SetTitleFont(42);
   backgroundH071->GetZaxis()->SetLabelFont(42);
   backgroundH071->GetZaxis()->SetLabelSize(0.035);
   backgroundH071->GetZaxis()->SetTitleSize(0.035);
   backgroundH071->GetZaxis()->SetTitleFont(42);
   backgroundH071->Draw("");
   
   Double_t Graph_from_backgroundH0_fx1012[20] = {
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
   Double_t Graph_from_backgroundH0_fy1012[20] = {
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
   Double_t Graph_from_backgroundH0_fex1012[20] = {
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
   Double_t Graph_from_backgroundH0_fey1012[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH0_fx1012,Graph_from_backgroundH0_fy1012,Graph_from_backgroundH0_fex1012,Graph_from_backgroundH0_fey1012);
   gre->SetName("Graph_from_backgroundH0");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH010011012 = new TH1F("Graph_Graph_Graph_from_backgroundH010011012","",100,0,38.5);
   Graph_Graph_Graph_from_backgroundH010011012->SetMinimum(0.8278053);
   Graph_Graph_Graph_from_backgroundH010011012->SetMaximum(1.172195);
   Graph_Graph_Graph_from_backgroundH010011012->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH010011012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH010011012->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH010011012->GetXaxis()->SetRange(1,91);
   Graph_Graph_Graph_from_backgroundH010011012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH010011012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH010011012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH010011012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH010011012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH010011012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH010011012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH010011012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH010011012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH010011012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH010011012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH010011012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH010011012);
   
   gre->Draw("3");
   
   TH1D *ratioH072 = new TH1D("ratioH072","",20,0,35);
   ratioH072->SetBinContent(3,1.012116);
   ratioH072->SetBinContent(4,0.9844842);
   ratioH072->SetBinContent(5,0.9587429);
   ratioH072->SetBinContent(6,0.9191375);
   ratioH072->SetBinContent(7,1.037629);
   ratioH072->SetBinContent(8,1.057382);
   ratioH072->SetBinContent(9,1.026673);
   ratioH072->SetBinContent(10,0.979446);
   ratioH072->SetBinError(3,0.3160558);
   ratioH072->SetBinError(4,0.1002337);
   ratioH072->SetBinError(5,0.1085801);
   ratioH072->SetBinError(6,0.1038815);
   ratioH072->SetBinError(7,0.1144689);
   ratioH072->SetBinError(8,0.1199217);
   ratioH072->SetBinError(9,0.1231822);
   ratioH072->SetBinError(10,0.1425039);
   ratioH072->SetEntries(325.3983);

   ci = TColor::GetColor("#000099");
   ratioH072->SetLineColor(ci);
   ratioH072->GetXaxis()->SetLabelFont(42);
   ratioH072->GetXaxis()->SetLabelSize(0.035);
   ratioH072->GetXaxis()->SetTitleSize(0.035);
   ratioH072->GetXaxis()->SetTitleFont(42);
   ratioH072->GetYaxis()->SetLabelFont(42);
   ratioH072->GetYaxis()->SetLabelSize(0.035);
   ratioH072->GetYaxis()->SetTitleSize(0.035);
   ratioH072->GetYaxis()->SetTitleFont(42);
   ratioH072->GetZaxis()->SetLabelFont(42);
   ratioH072->GetZaxis()->SetLabelSize(0.035);
   ratioH072->GetZaxis()->SetTitleSize(0.035);
   ratioH072->GetZaxis()->SetTitleFont(42);
   ratioH072->Draw("E same");
   TLine *line = new TLine(0,1,35,1);
   line->Draw();
   Stop_1_2->Modified();
   Stop_1->cd();
   Stop_1->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_2
   TPad *Stop_2 = new TPad("Stop_2", "Stop_2",0.1766667,0.51,0.3233333,0.99);
   Stop_2->Draw();
   Stop_2->cd();
   Stop_2->Range(0,0,1,1);
   Stop_2->SetFillColor(0);
   Stop_2->SetBorderMode(0);
   Stop_2->SetBorderSize(2);
   Stop_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_2_1
   TPad *Stop_2_1 = new TPad("Stop_2_1", "Stop_2_1",0.01,0.2,0.99,0.99);
   Stop_2_1->Draw();
   Stop_2_1->cd();
   Stop_2_1->Range(-1.875,-25.3575,11.875,228.2175);
   Stop_2_1->SetFillColor(0);
   Stop_2_1->SetBorderMode(0);
   Stop_2_1->SetBorderSize(2);
   Stop_2_1->SetFrameBorderMode(0);
   Stop_2_1->SetFrameBorderMode(0);
   
   Njet = new THStack();
   Njet->SetName("Njet");
   Njet->SetTitle("Njet;Njet;Evt.");
   Njet->SetMaximum(193.2);
   
   TH1F *Njet_stack_2_stack_13 = new TH1F("Njet_stack_2_stack_13","Njet",11,-0.5,10.5);
   Njet_stack_2_stack_13->SetMinimum(0);
   Njet_stack_2_stack_13->SetMaximum(202.86);
   Njet_stack_2_stack_13->SetDirectory(0);
   Njet_stack_2_stack_13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Njet_stack_2_stack_13->SetLineColor(ci);
   Njet_stack_2_stack_13->GetXaxis()->SetTitle("Njet");
   Njet_stack_2_stack_13->GetXaxis()->SetLabelFont(42);
   Njet_stack_2_stack_13->GetXaxis()->SetLabelSize(0.035);
   Njet_stack_2_stack_13->GetXaxis()->SetTitleSize(0.035);
   Njet_stack_2_stack_13->GetXaxis()->SetTitleFont(42);
   Njet_stack_2_stack_13->GetYaxis()->SetTitle("Evt.");
   Njet_stack_2_stack_13->GetYaxis()->SetLabelFont(42);
   Njet_stack_2_stack_13->GetYaxis()->SetLabelSize(0.035);
   Njet_stack_2_stack_13->GetYaxis()->SetTitleSize(0.035);
   Njet_stack_2_stack_13->GetYaxis()->SetTitleFont(42);
   Njet_stack_2_stack_13->GetZaxis()->SetLabelFont(42);
   Njet_stack_2_stack_13->GetZaxis()->SetLabelSize(0.035);
   Njet_stack_2_stack_13->GetZaxis()->SetTitleSize(0.035);
   Njet_stack_2_stack_13->GetZaxis()->SetTitleFont(42);
   Njet->SetHistogram(Njet_stack_2_stack_13);
   
   
   TH1D *ttbarH173 = new TH1D("ttbarH173","ttbar",11,-0.5,10.5);
   ttbarH173->SetBinContent(3,5.499021);
   ttbarH173->SetBinContent(4,18.69667);
   ttbarH173->SetBinContent(5,43.62556);
   ttbarH173->SetBinContent(6,42.52576);
   ttbarH173->SetBinContent(7,33.72733);
   ttbarH173->SetBinContent(8,18.33007);
   ttbarH173->SetBinContent(9,9.898237);
   ttbarH173->SetBinContent(10,4.032615);
   ttbarH173->SetBinContent(11,3.299412);
   ttbarH173->SetBinContent(12,0.7332027);
   ttbarH173->SetBinError(3,1.419841);
   ttbarH173->SetBinError(4,2.618057);
   ttbarH173->SetBinError(5,3.999149);
   ttbarH173->SetBinError(6,3.948418);
   ttbarH173->SetBinError(7,3.516317);
   ttbarH173->SetBinError(8,2.592263);
   ttbarH173->SetBinError(9,1.904917);
   ttbarH173->SetBinError(10,1.215879);
   ttbarH173->SetBinError(11,1.099804);
   ttbarH173->SetBinError(12,0.5184526);
   ttbarH173->SetEntries(492);
   ttbarH173->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH173->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH173->SetLineColor(ci);
   ttbarH173->GetXaxis()->SetLabelFont(42);
   ttbarH173->GetXaxis()->SetLabelSize(0.035);
   ttbarH173->GetXaxis()->SetTitleSize(0.035);
   ttbarH173->GetXaxis()->SetTitleFont(42);
   ttbarH173->GetYaxis()->SetLabelFont(42);
   ttbarH173->GetYaxis()->SetLabelSize(0.035);
   ttbarH173->GetYaxis()->SetTitleSize(0.035);
   ttbarH173->GetYaxis()->SetTitleFont(42);
   ttbarH173->GetZaxis()->SetLabelFont(42);
   ttbarH173->GetZaxis()->SetLabelSize(0.035);
   ttbarH173->GetZaxis()->SetTitleSize(0.035);
   ttbarH173->GetZaxis()->SetTitleFont(42);
   Njet->Add(ttbarH1,"");
   
   TH1D *wjetsH174 = new TH1D("wjetsH174","wjets",11,-0.5,10.5);
   wjetsH174->SetBinContent(3,120.9075);
   wjetsH174->SetBinContent(4,162.5009);
   wjetsH174->SetBinContent(5,123.6116);
   wjetsH174->SetBinContent(6,63.0668);
   wjetsH174->SetBinContent(7,31.47336);
   wjetsH174->SetBinContent(8,10.86036);
   wjetsH174->SetBinContent(9,4.952894);
   wjetsH174->SetBinContent(10,0.9344099);
   wjetsH174->SetBinContent(11,0.2787301);
   wjetsH174->SetBinContent(12,0.5463999);
   wjetsH174->SetBinError(3,6.411214);
   wjetsH174->SetBinError(4,6.771103);
   wjetsH174->SetBinError(5,5.368101);
   wjetsH174->SetBinError(6,3.587852);
   wjetsH174->SetBinError(7,2.266636);
   wjetsH174->SetBinError(8,1.387348);
   wjetsH174->SetBinError(9,0.8784147);
   wjetsH174->SetBinError(10,0.3351241);
   wjetsH174->SetBinError(11,0.201632);
   wjetsH174->SetBinError(12,0.2443574);
   wjetsH174->SetEntries(2588);
   wjetsH174->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH174->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH174->SetLineColor(ci);
   wjetsH174->GetXaxis()->SetLabelFont(42);
   wjetsH174->GetXaxis()->SetLabelSize(0.035);
   wjetsH174->GetXaxis()->SetTitleSize(0.035);
   wjetsH174->GetXaxis()->SetTitleFont(42);
   wjetsH174->GetYaxis()->SetLabelFont(42);
   wjetsH174->GetYaxis()->SetLabelSize(0.035);
   wjetsH174->GetYaxis()->SetTitleSize(0.035);
   wjetsH174->GetYaxis()->SetTitleFont(42);
   wjetsH174->GetZaxis()->SetLabelFont(42);
   wjetsH174->GetZaxis()->SetLabelSize(0.035);
   wjetsH174->GetZaxis()->SetTitleSize(0.035);
   wjetsH174->GetZaxis()->SetTitleFont(42);
   Njet->Add(wjetsH1,"");
   Njet->Draw("hist");
   
   TH1D *stopH175 = new TH1D("stopH175","Signal",11,-0.5,10.5);
   stopH175->SetBinContent(3,10.23966);
   stopH175->SetBinContent(4,22.00006);
   stopH175->SetBinContent(5,26.86643);
   stopH175->SetBinContent(6,24.53462);
   stopH175->SetBinContent(7,16.62677);
   stopH175->SetBinContent(8,8.313385);
   stopH175->SetBinContent(9,4.05531);
   stopH175->SetBinContent(10,1.216593);
   stopH175->SetBinContent(11,0.8110619);
   stopH175->SetBinContent(12,0.1013827);
   stopH175->SetBinError(3,1.018884);
   stopH175->SetBinError(4,1.493461);
   stopH175->SetBinError(5,1.650391);
   stopH175->SetBinError(6,1.577145);
   stopH175->SetBinError(7,1.298333);
   stopH175->SetBinError(8,0.9180598);
   stopH175->SetBinError(9,0.6412008);
   stopH175->SetBinError(10,0.3512001);
   stopH175->SetBinError(11,0.2867537);
   stopH175->SetBinError(12,0.1013827);
   stopH175->SetEntries(1132);
   stopH175->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH175->SetLineColor(ci);
   stopH175->GetXaxis()->SetLabelFont(42);
   stopH175->GetXaxis()->SetLabelSize(0.035);
   stopH175->GetXaxis()->SetTitleSize(0.035);
   stopH175->GetXaxis()->SetTitleFont(42);
   stopH175->GetYaxis()->SetLabelFont(42);
   stopH175->GetYaxis()->SetLabelSize(0.035);
   stopH175->GetYaxis()->SetTitleSize(0.035);
   stopH175->GetYaxis()->SetTitleFont(42);
   stopH175->GetZaxis()->SetLabelFont(42);
   stopH175->GetZaxis()->SetLabelSize(0.035);
   stopH175->GetZaxis()->SetTitleSize(0.035);
   stopH175->GetZaxis()->SetTitleFont(42);
   stopH175->Draw("HIST same");
   
   TH1D *dataH176 = new TH1D("dataH176","Data",11,-0.5,10.5);
   dataH176->SetBinContent(3,118);
   dataH176->SetBinContent(4,184);
   dataH176->SetBinContent(5,175);
   dataH176->SetBinContent(6,99);
   dataH176->SetBinContent(7,58);
   dataH176->SetBinContent(8,25);
   dataH176->SetBinContent(9,22);
   dataH176->SetBinContent(10,5);
   dataH176->SetBinContent(11,7);
   dataH176->SetBinContent(12,2);
   dataH176->SetBinError(3,10.86278);
   dataH176->SetBinError(4,13.56466);
   dataH176->SetBinError(5,13.22876);
   dataH176->SetBinError(6,9.949874);
   dataH176->SetBinError(7,7.615773);
   dataH176->SetBinError(8,5);
   dataH176->SetBinError(9,4.690416);
   dataH176->SetBinError(10,2.236068);
   dataH176->SetBinError(11,2.645751);
   dataH176->SetBinError(12,1.414214);
   dataH176->SetEntries(695);
   dataH176->SetStats(0);
   dataH176->GetXaxis()->SetLabelFont(42);
   dataH176->GetXaxis()->SetLabelSize(0.035);
   dataH176->GetXaxis()->SetTitleSize(0.035);
   dataH176->GetXaxis()->SetTitleFont(42);
   dataH176->GetYaxis()->SetLabelFont(42);
   dataH176->GetYaxis()->SetLabelSize(0.035);
   dataH176->GetYaxis()->SetTitleSize(0.035);
   dataH176->GetYaxis()->SetTitleFont(42);
   dataH176->GetZaxis()->SetLabelFont(42);
   dataH176->GetZaxis()->SetLabelSize(0.035);
   dataH176->GetZaxis()->SetTitleSize(0.035);
   dataH176->GetZaxis()->SetTitleFont(42);
   dataH176->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
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
   
   pt = new TPaveText(0.4375578,0.94,0.5624422,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Njet");
   pt->Draw();
   Stop_2_1->Modified();
   Stop_2->cd();
  
// ------------>Primitives in pad: Stop_2_2
   TPad *Stop_2_2 = new TPad("Stop_2_2", "Stop_2_2",0.01,0.01,0.99,0.2);
   Stop_2_2->Draw();
   Stop_2_2->cd();
   Stop_2_2->Range(-1.875,0.375,11.875,1.625);
   Stop_2_2->SetFillColor(0);
   Stop_2_2->SetBorderMode(0);
   Stop_2_2->SetBorderSize(2);
   Stop_2_2->SetFrameBorderMode(0);
   Stop_2_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH177 = new TH1D("backgroundH177","",11,-0.5,10.5);
   backgroundH177->SetMinimum(0.5);
   backgroundH177->SetMaximum(1.5);
   backgroundH177->SetEntries(3092);
   backgroundH177->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH177->SetLineColor(ci);
   backgroundH177->GetXaxis()->SetLabelFont(42);
   backgroundH177->GetXaxis()->SetLabelSize(0.15);
   backgroundH177->GetXaxis()->SetTitleSize(0.035);
   backgroundH177->GetXaxis()->SetTitleFont(42);
   backgroundH177->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH177->GetYaxis()->SetNdivisions(5);
   backgroundH177->GetYaxis()->SetLabelFont(42);
   backgroundH177->GetYaxis()->SetLabelSize(0.15);
   backgroundH177->GetYaxis()->SetTitleSize(0.15);
   backgroundH177->GetYaxis()->SetTickLength(0.01);
   backgroundH177->GetYaxis()->SetTitleOffset(0.35);
   backgroundH177->GetYaxis()->SetTitleFont(42);
   backgroundH177->GetZaxis()->SetLabelFont(42);
   backgroundH177->GetZaxis()->SetLabelSize(0.035);
   backgroundH177->GetZaxis()->SetTitleSize(0.035);
   backgroundH177->GetZaxis()->SetTitleFont(42);
   backgroundH177->Draw("");
   
   Double_t Graph_from_backgroundH1_fx1013[11] = {
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
   Double_t Graph_from_backgroundH1_fy1013[11] = {
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
   Double_t Graph_from_backgroundH1_fex1013[11] = {
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
   Double_t Graph_from_backgroundH1_fey1013[11] = {
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
   gre = new TGraphErrors(11,Graph_from_backgroundH1_fx1013,Graph_from_backgroundH1_fy1013,Graph_from_backgroundH1_fex1013,Graph_from_backgroundH1_fey1013);
   gre->SetName("Graph_from_backgroundH1");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH110021013 = new TH1F("Graph_Graph_Graph_from_backgroundH110021013","",100,-1.6,11.6);
   Graph_Graph_Graph_from_backgroundH110021013->SetMinimum(0.6250118);
   Graph_Graph_Graph_from_backgroundH110021013->SetMaximum(1.374988);
   Graph_Graph_Graph_from_backgroundH110021013->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH110021013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH110021013->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH110021013->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph_from_backgroundH110021013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH110021013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH110021013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH110021013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH110021013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH110021013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH110021013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH110021013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH110021013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH110021013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH110021013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH110021013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH110021013);
   
   gre->Draw("3");
   
   TH1D *ratioH178 = new TH1D("ratioH178","",11,-0.5,10.5);
   ratioH178->SetBinContent(3,0.9334962);
   ratioH178->SetBinContent(4,1.015466);
   ratioH178->SetBinContent(5,1.046418);
   ratioH178->SetBinContent(6,0.937566);
   ratioH178->SetBinContent(7,0.8895612);
   ratioH178->SetBinContent(8,0.8564452);
   ratioH178->SetBinContent(9,1.481369);
   ratioH178->SetBinContent(10,1.006639);
   ratioH178->SetBinContent(11,1.956322);
   ratioH178->SetBinContent(12,1.562985);
   ratioH178->SetBinError(3,0.09867351);
   ratioH178->SetBinError(4,0.08520217);
   ratioH178->SetBinError(5,0.08950664);
   ratioH178->SetBinError(6,0.1054658);
   ratioH178->SetBinError(7,0.1300051);
   ratioH178->SetBinError(8,0.1917849);
   ratioH178->SetBinError(9,0.3788528);
   ratioH178->SetBinError(10,0.5176849);
   ratioH178->SetBinError(11,0.9594106);
   ratioH178->SetBinError(12,1.308273);
   ratioH178->SetEntries(72.07779);
   ratioH178->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH178->SetLineColor(ci);
   ratioH178->GetXaxis()->SetLabelFont(42);
   ratioH178->GetXaxis()->SetLabelSize(0.035);
   ratioH178->GetXaxis()->SetTitleSize(0.035);
   ratioH178->GetXaxis()->SetTitleFont(42);
   ratioH178->GetYaxis()->SetLabelFont(42);
   ratioH178->GetYaxis()->SetLabelSize(0.035);
   ratioH178->GetYaxis()->SetTitleSize(0.035);
   ratioH178->GetYaxis()->SetTitleFont(42);
   ratioH178->GetZaxis()->SetLabelFont(42);
   ratioH178->GetZaxis()->SetLabelSize(0.035);
   ratioH178->GetZaxis()->SetTitleSize(0.035);
   ratioH178->GetZaxis()->SetTitleFont(42);
   ratioH178->Draw("E same");
   line = new TLine(-0.5,1,10.5,1);
   line->Draw();
   Stop_2_2->Modified();
   Stop_2->cd();
   Stop_2->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_3
   TPad *Stop_3 = new TPad("Stop_3", "Stop_3",0.3433333,0.51,0.49,0.99);
   Stop_3->Draw();
   Stop_3->cd();
   Stop_3->Range(0,0,1,1);
   Stop_3->SetFillColor(0);
   Stop_3->SetBorderMode(0);
   Stop_3->SetBorderSize(2);
   Stop_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_3_1
   TPad *Stop_3_1 = new TPad("Stop_3_1", "Stop_3_1",0.01,0.2,0.99,0.99);
   Stop_3_1->Draw();
   Stop_3_1->cd();
   Stop_3_1->Range(50,-8.280487,550,74.52437);
   Stop_3_1->SetFillColor(0);
   Stop_3_1->SetBorderMode(0);
   Stop_3_1->SetBorderSize(2);
   Stop_3_1->SetFrameBorderMode(0);
   Stop_3_1->SetFrameBorderMode(0);
   
   Jet1Pt = new THStack();
   Jet1Pt->SetName("Jet1Pt");
   Jet1Pt->SetTitle("Jet1Pt;p_{T} (Jet1) [GeV];Evt.");
   Jet1Pt->SetMaximum(63.08942);
   
   TH1F *Jet1Pt_stack_3_stack_14 = new TH1F("Jet1Pt_stack_3_stack_14","Jet1Pt",20,100,500);
   Jet1Pt_stack_3_stack_14->SetMinimum(0);
   Jet1Pt_stack_3_stack_14->SetMaximum(66.24389);
   Jet1Pt_stack_3_stack_14->SetDirectory(0);
   Jet1Pt_stack_3_stack_14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Jet1Pt_stack_3_stack_14->SetLineColor(ci);
   Jet1Pt_stack_3_stack_14->GetXaxis()->SetTitle("p_{T} (Jet1) [GeV]");
   Jet1Pt_stack_3_stack_14->GetXaxis()->SetLabelFont(42);
   Jet1Pt_stack_3_stack_14->GetXaxis()->SetLabelSize(0.035);
   Jet1Pt_stack_3_stack_14->GetXaxis()->SetTitleSize(0.035);
   Jet1Pt_stack_3_stack_14->GetXaxis()->SetTitleFont(42);
   Jet1Pt_stack_3_stack_14->GetYaxis()->SetTitle("Evt.");
   Jet1Pt_stack_3_stack_14->GetYaxis()->SetLabelFont(42);
   Jet1Pt_stack_3_stack_14->GetYaxis()->SetLabelSize(0.035);
   Jet1Pt_stack_3_stack_14->GetYaxis()->SetTitleSize(0.035);
   Jet1Pt_stack_3_stack_14->GetYaxis()->SetTitleFont(42);
   Jet1Pt_stack_3_stack_14->GetZaxis()->SetLabelFont(42);
   Jet1Pt_stack_3_stack_14->GetZaxis()->SetLabelSize(0.035);
   Jet1Pt_stack_3_stack_14->GetZaxis()->SetTitleSize(0.035);
   Jet1Pt_stack_3_stack_14->GetZaxis()->SetTitleFont(42);
   Jet1Pt->SetHistogram(Jet1Pt_stack_3_stack_14);
   
   
   TH1D *ttbarH279 = new TH1D("ttbarH279","ttbar",20,100,500);
   ttbarH279->SetBinContent(1,2.199608);
   ttbarH279->SetBinContent(2,9.898237);
   ttbarH279->SetBinContent(3,12.09785);
   ttbarH279->SetBinContent(4,14.29745);
   ttbarH279->SetBinContent(5,18.69667);
   ttbarH279->SetBinContent(6,12.46445);
   ttbarH279->SetBinContent(7,13.19765);
   ttbarH279->SetBinContent(8,14.29745);
   ttbarH279->SetBinContent(9,12.09785);
   ttbarH279->SetBinContent(10,11.36464);
   ttbarH279->SetBinContent(11,8.431832);
   ttbarH279->SetBinContent(12,8.798433);
   ttbarH279->SetBinContent(13,8.431832);
   ttbarH279->SetBinContent(14,7.332027);
   ttbarH279->SetBinContent(15,5.499021);
   ttbarH279->SetBinContent(16,3.299412);
   ttbarH279->SetBinContent(17,2.932811);
   ttbarH279->SetBinContent(18,2.932811);
   ttbarH279->SetBinContent(19,1.833007);
   ttbarH279->SetBinContent(20,2.932811);
   ttbarH279->SetBinContent(21,7.332027);
   ttbarH279->SetBinError(1,0.8979863);
   ttbarH279->SetBinError(2,1.904917);
   ttbarH279->SetBinError(3,2.105965);
   ttbarH279->SetBinError(4,2.289425);
   ttbarH279->SetBinError(5,2.618057);
   ttbarH279->SetBinError(6,2.137635);
   ttbarH279->SetBinError(7,2.199608);
   ttbarH279->SetBinError(8,2.289425);
   ttbarH279->SetBinError(9,2.105965);
   ttbarH279->SetBinError(10,2.04115);
   ttbarH279->SetBinError(11,1.758158);
   ttbarH279->SetBinError(12,1.795973);
   ttbarH279->SetBinError(13,1.758158);
   ttbarH279->SetBinError(14,1.639491);
   ttbarH279->SetBinError(15,1.419841);
   ttbarH279->SetBinError(16,1.099804);
   ttbarH279->SetBinError(17,1.036905);
   ttbarH279->SetBinError(18,1.036905);
   ttbarH279->SetBinError(19,0.8197456);
   ttbarH279->SetBinError(20,1.036905);
   ttbarH279->SetBinError(21,1.639491);
   ttbarH279->SetEntries(492);
   ttbarH279->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH279->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH279->SetLineColor(ci);
   ttbarH279->GetXaxis()->SetLabelFont(42);
   ttbarH279->GetXaxis()->SetLabelSize(0.035);
   ttbarH279->GetXaxis()->SetTitleSize(0.035);
   ttbarH279->GetXaxis()->SetTitleFont(42);
   ttbarH279->GetYaxis()->SetLabelFont(42);
   ttbarH279->GetYaxis()->SetLabelSize(0.035);
   ttbarH279->GetYaxis()->SetTitleSize(0.035);
   ttbarH279->GetYaxis()->SetTitleFont(42);
   ttbarH279->GetZaxis()->SetLabelFont(42);
   ttbarH279->GetZaxis()->SetLabelSize(0.035);
   ttbarH279->GetZaxis()->SetTitleSize(0.035);
   ttbarH279->GetZaxis()->SetTitleFont(42);
   Jet1Pt->Add(ttbarH2,"");
   
   TH1D *wjetsH280 = new TH1D("wjetsH280","wjets",20,100,500);
   wjetsH280->SetBinContent(1,4.275398);
   wjetsH280->SetBinContent(2,11.99699);
   wjetsH280->SetBinContent(3,13.56613);
   wjetsH280->SetBinContent(4,20.53563);
   wjetsH280->SetBinContent(5,31.63429);
   wjetsH280->SetBinContent(6,31.33642);
   wjetsH280->SetBinContent(7,33.63946);
   wjetsH280->SetBinContent(8,36.23289);
   wjetsH280->SetBinContent(9,38.70938);
   wjetsH280->SetBinContent(10,48.72052);
   wjetsH280->SetBinContent(11,45.08487);
   wjetsH280->SetBinContent(12,36.66226);
   wjetsH280->SetBinContent(13,27.44167);
   wjetsH280->SetBinContent(14,28.06228);
   wjetsH280->SetBinContent(15,23.27525);
   wjetsH280->SetBinContent(16,16.93553);
   wjetsH280->SetBinContent(17,13.83828);
   wjetsH280->SetBinContent(18,8.438002);
   wjetsH280->SetBinContent(19,8.973341);
   wjetsH280->SetBinContent(20,7.022231);
   wjetsH280->SetBinContent(21,32.75213);
   wjetsH280->SetBinError(1,1.20316);
   wjetsH280->SetBinError(2,2.073404);
   wjetsH280->SetBinError(3,2.061166);
   wjetsH280->SetBinError(4,2.533062);
   wjetsH280->SetBinError(5,3.286741);
   wjetsH280->SetBinError(6,3.147386);
   wjetsH280->SetBinError(7,3.169172);
   wjetsH280->SetBinError(8,3.345358);
   wjetsH280->SetBinError(9,3.499815);
   wjetsH280->SetBinError(10,3.858711);
   wjetsH280->SetBinError(11,3.685558);
   wjetsH280->SetBinError(12,3.133318);
   wjetsH280->SetBinError(13,2.509791);
   wjetsH280->SetBinError(14,2.363125);
   wjetsH280->SetBinError(15,2.01806);
   wjetsH280->SetBinError(16,1.667466);
   wjetsH280->SetBinError(17,1.429136);
   wjetsH280->SetBinError(18,1.080187);
   wjetsH280->SetBinError(19,1.097686);
   wjetsH280->SetBinError(20,0.9593366);
   wjetsH280->SetBinError(21,1.929221);
   wjetsH280->SetEntries(2588);
   wjetsH280->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH280->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH280->SetLineColor(ci);
   wjetsH280->GetXaxis()->SetLabelFont(42);
   wjetsH280->GetXaxis()->SetLabelSize(0.035);
   wjetsH280->GetXaxis()->SetTitleSize(0.035);
   wjetsH280->GetXaxis()->SetTitleFont(42);
   wjetsH280->GetYaxis()->SetLabelFont(42);
   wjetsH280->GetYaxis()->SetLabelSize(0.035);
   wjetsH280->GetYaxis()->SetTitleSize(0.035);
   wjetsH280->GetYaxis()->SetTitleFont(42);
   wjetsH280->GetZaxis()->SetLabelFont(42);
   wjetsH280->GetZaxis()->SetLabelSize(0.035);
   wjetsH280->GetZaxis()->SetTitleSize(0.035);
   wjetsH280->GetZaxis()->SetTitleFont(42);
   Jet1Pt->Add(wjetsH2,"");
   Jet1Pt->Draw("hist");
   
   TH1D *stopH281 = new TH1D("stopH281","Signal",20,100,500);
   stopH281->SetBinContent(1,1.11521);
   stopH281->SetBinContent(2,2.838717);
   stopH281->SetBinContent(3,3.142865);
   stopH281->SetBinContent(4,3.953927);
   stopH281->SetBinContent(5,5.17052);
   stopH281->SetBinContent(6,5.778816);
   stopH281->SetBinContent(7,6.995409);
   stopH281->SetBinContent(8,5.981582);
   stopH281->SetBinContent(9,6.894027);
   stopH281->SetBinContent(10,6.589878);
   stopH281->SetBinContent(11,6.995409);
   stopH281->SetBinContent(12,7.705089);
   stopH281->SetBinContent(13,6.589878);
   stopH281->SetBinContent(14,5.373285);
   stopH281->SetBinContent(15,5.17052);
   stopH281->SetBinContent(16,4.562223);
   stopH281->SetBinContent(17,3.852544);
   stopH281->SetBinContent(18,3.142865);
   stopH281->SetBinContent(19,3.244248);
   stopH281->SetBinContent(20,2.534569);
   stopH281->SetBinContent(21,17.13368);
   stopH281->SetBinError(1,0.3362485);
   stopH281->SetBinError(2,0.5364671);
   stopH281->SetBinError(3,0.5644752);
   stopH281->SetBinError(4,0.633135);
   stopH281->SetBinError(5,0.7240176);
   stopH281->SetBinError(6,0.7654229);
   stopH281->SetBinError(7,0.8421483);
   stopH281->SetBinError(8,0.7787356);
   stopH281->SetBinError(9,0.8360235);
   stopH281->SetBinError(10,0.8173738);
   stopH281->SetBinError(11,0.8421483);
   stopH281->SetBinError(12,0.8838343);
   stopH281->SetBinError(13,0.8173738);
   stopH281->SetBinError(14,0.7380775);
   stopH281->SetBinError(15,0.7240176);
   stopH281->SetBinError(16,0.6800961);
   stopH281->SetBinError(17,0.6249652);
   stopH281->SetBinError(18,0.5644752);
   stopH281->SetBinError(19,0.5735074);
   stopH281->SetBinError(20,0.5069137);
   stopH281->SetBinError(21,1.317976);
   stopH281->SetEntries(1132);
   stopH281->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH281->SetLineColor(ci);
   stopH281->GetXaxis()->SetLabelFont(42);
   stopH281->GetXaxis()->SetLabelSize(0.035);
   stopH281->GetXaxis()->SetTitleSize(0.035);
   stopH281->GetXaxis()->SetTitleFont(42);
   stopH281->GetYaxis()->SetLabelFont(42);
   stopH281->GetYaxis()->SetLabelSize(0.035);
   stopH281->GetYaxis()->SetTitleSize(0.035);
   stopH281->GetYaxis()->SetTitleFont(42);
   stopH281->GetZaxis()->SetLabelFont(42);
   stopH281->GetZaxis()->SetLabelSize(0.035);
   stopH281->GetZaxis()->SetTitleSize(0.035);
   stopH281->GetZaxis()->SetTitleFont(42);
   stopH281->Draw("HIST same");
   
   TH1D *dataH282 = new TH1D("dataH282","Data",20,100,500);
   dataH282->SetBinContent(1,11);
   dataH282->SetBinContent(2,19);
   dataH282->SetBinContent(3,19);
   dataH282->SetBinContent(4,34);
   dataH282->SetBinContent(5,47);
   dataH282->SetBinContent(6,36);
   dataH282->SetBinContent(7,46);
   dataH282->SetBinContent(8,51);
   dataH282->SetBinContent(9,56);
   dataH282->SetBinContent(10,51);
   dataH282->SetBinContent(11,57);
   dataH282->SetBinContent(12,49);
   dataH282->SetBinContent(13,31);
   dataH282->SetBinContent(14,39);
   dataH282->SetBinContent(15,34);
   dataH282->SetBinContent(16,25);
   dataH282->SetBinContent(17,19);
   dataH282->SetBinContent(18,6);
   dataH282->SetBinContent(19,13);
   dataH282->SetBinContent(20,12);
   dataH282->SetBinContent(21,40);
   dataH282->SetBinError(1,3.316625);
   dataH282->SetBinError(2,4.358899);
   dataH282->SetBinError(3,4.358899);
   dataH282->SetBinError(4,5.830952);
   dataH282->SetBinError(5,6.855655);
   dataH282->SetBinError(6,6);
   dataH282->SetBinError(7,6.78233);
   dataH282->SetBinError(8,7.141428);
   dataH282->SetBinError(9,7.483315);
   dataH282->SetBinError(10,7.141428);
   dataH282->SetBinError(11,7.549834);
   dataH282->SetBinError(12,7);
   dataH282->SetBinError(13,5.567764);
   dataH282->SetBinError(14,6.244998);
   dataH282->SetBinError(15,5.830952);
   dataH282->SetBinError(16,5);
   dataH282->SetBinError(17,4.358899);
   dataH282->SetBinError(18,2.44949);
   dataH282->SetBinError(19,3.605551);
   dataH282->SetBinError(20,3.464102);
   dataH282->SetBinError(21,6.324555);
   dataH282->SetEntries(695);
   dataH282->SetStats(0);
   dataH282->GetXaxis()->SetLabelFont(42);
   dataH282->GetXaxis()->SetLabelSize(0.035);
   dataH282->GetXaxis()->SetTitleSize(0.035);
   dataH282->GetXaxis()->SetTitleFont(42);
   dataH282->GetYaxis()->SetLabelFont(42);
   dataH282->GetYaxis()->SetLabelSize(0.035);
   dataH282->GetYaxis()->SetTitleSize(0.035);
   dataH282->GetYaxis()->SetTitleFont(42);
   dataH282->GetZaxis()->SetLabelFont(42);
   dataH282->GetZaxis()->SetLabelSize(0.035);
   dataH282->GetZaxis()->SetTitleSize(0.035);
   dataH282->GetZaxis()->SetTitleFont(42);
   dataH282->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ttbarH2","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH2","wjets","lpf");

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
   entry=leg->AddEntry("stopH2","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH2","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   pt = new TPaveText(0.4113367,0.94,0.5886633,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Jet1Pt");
   pt->Draw();
   Stop_3_1->Modified();
   Stop_3->cd();
  
// ------------>Primitives in pad: Stop_3_2
   TPad *Stop_3_2 = new TPad("Stop_3_2", "Stop_3_2",0.01,0.01,0.99,0.2);
   Stop_3_2->Draw();
   Stop_3_2->cd();
   Stop_3_2->Range(50,0.375,550,1.625);
   Stop_3_2->SetFillColor(0);
   Stop_3_2->SetBorderMode(0);
   Stop_3_2->SetBorderSize(2);
   Stop_3_2->SetFrameBorderMode(0);
   Stop_3_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH283 = new TH1D("backgroundH283","",20,100,500);
   backgroundH283->SetMinimum(0.5);
   backgroundH283->SetMaximum(1.5);
   backgroundH283->SetEntries(3101);
   backgroundH283->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH283->SetLineColor(ci);
   backgroundH283->GetXaxis()->SetLabelFont(42);
   backgroundH283->GetXaxis()->SetLabelSize(0.15);
   backgroundH283->GetXaxis()->SetTitleSize(0.035);
   backgroundH283->GetXaxis()->SetTitleFont(42);
   backgroundH283->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH283->GetYaxis()->SetNdivisions(5);
   backgroundH283->GetYaxis()->SetLabelFont(42);
   backgroundH283->GetYaxis()->SetLabelSize(0.15);
   backgroundH283->GetYaxis()->SetTitleSize(0.15);
   backgroundH283->GetYaxis()->SetTickLength(0.01);
   backgroundH283->GetYaxis()->SetTitleOffset(0.35);
   backgroundH283->GetYaxis()->SetTitleFont(42);
   backgroundH283->GetZaxis()->SetLabelFont(42);
   backgroundH283->GetZaxis()->SetLabelSize(0.035);
   backgroundH283->GetZaxis()->SetTitleSize(0.035);
   backgroundH283->GetZaxis()->SetTitleFont(42);
   backgroundH283->Draw("");
   
   Double_t Graph_from_backgroundH2_fx1014[20] = {
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390,
   410,
   430,
   450,
   470,
   490};
   Double_t Graph_from_backgroundH2_fy1014[20] = {
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
   Double_t Graph_from_backgroundH2_fex1014[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t Graph_from_backgroundH2_fey1014[20] = {
   0.2318645,
   0.1285951,
   0.1148215,
   0.09802067,
   0.08348759,
   0.08686291,
   0.0823644,
   0.08022406,
   0.08039369,
   0.07265207,
   0.07630211,
   0.07944307,
   0.08542069,
   0.08126049,
   0.0857534,
   0.09871544,
   0.1052808,
   0.1316813,
   0.1267773,
   0.1419001};
   gre = new TGraphErrors(20,Graph_from_backgroundH2_fx1014,Graph_from_backgroundH2_fy1014,Graph_from_backgroundH2_fex1014,Graph_from_backgroundH2_fey1014);
   gre->SetName("Graph_from_backgroundH2");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH210031014 = new TH1F("Graph_Graph_Graph_from_backgroundH210031014","",100,60,540);
   Graph_Graph_Graph_from_backgroundH210031014->SetMinimum(0.7217626);
   Graph_Graph_Graph_from_backgroundH210031014->SetMaximum(1.278237);
   Graph_Graph_Graph_from_backgroundH210031014->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH210031014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH210031014->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH210031014->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph_from_backgroundH210031014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH210031014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH210031014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH210031014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH210031014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH210031014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH210031014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH210031014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH210031014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH210031014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH210031014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH210031014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH210031014);
   
   gre->Draw("3");
   
   TH1D *ratioH284 = new TH1D("ratioH284","",20,100,500);
   ratioH284->SetBinContent(1,1.69884);
   ratioH284->SetBinContent(2,0.8677692);
   ratioH284->SetBinContent(3,0.7403375);
   ratioH284->SetBinContent(4,0.9760836);
   ratioH284->SetBinContent(5,0.9338189);
   ratioH284->SetBinContent(6,0.8219015);
   ratioH284->SetBinContent(7,0.9821273);
   ratioH284->SetBinContent(8,1.009295);
   ratioH284->SetBinContent(9,1.102206);
   ratioH284->SetBinContent(10,0.8487953);
   ratioH284->SetBinContent(11,1.065088);
   ratioH284->SetBinContent(12,1.077854);
   ratioH284->SetBinContent(13,0.8641476);
   ratioH284->SetBinContent(14,1.101872);
   ratioH284->SetBinContent(15,1.181611);
   ratioH284->SetBinContent(16,1.235486);
   ratioH284->SetBinContent(17,1.132902);
   ratioH284->SetBinContent(18,0.5276668);
   ratioH284->SetBinContent(19,1.202997);
   ratioH284->SetBinContent(20,1.205419);
   ratioH284->SetBinContent(21,0.9979004);
   ratioH284->SetBinError(1,0.646163);
   ratioH284->SetBinError(2,0.2282221);
   ratioH284->SetBinError(3,0.1899302);
   ratioH284->SetBinError(4,0.19281);
   ratioH284->SetBinError(5,0.1569448);
   ratioH284->SetBinError(6,0.1544714);
   ratioH284->SetBinError(7,0.1658691);
   ratioH284->SetBinError(8,0.1628807);
   ratioH284->SetBinError(9,0.1718885);
   ratioH284->SetBinError(10,0.1339004);
   ratioH284->SetBinError(11,0.1628083);
   ratioH284->SetBinError(12,0.1761867);
   ratioH284->SetBinError(13,0.1718649);
   ratioH284->SetBinError(14,0.1978598);
   ratioH284->SetBinError(15,0.2265658);
   ratioH284->SetBinError(16,0.275557);
   ratioH284->SetBinError(17,0.2859665);
   ratioH284->SetBinError(18,0.2263479);
   ratioH284->SetBinError(19,0.3668559);
   ratioH284->SetBinError(20,0.3877423);
   ratioH284->SetBinError(21,0.1699051);
   ratioH284->SetEntries(310.3264);
   ratioH284->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH284->SetLineColor(ci);
   ratioH284->GetXaxis()->SetLabelFont(42);
   ratioH284->GetXaxis()->SetLabelSize(0.035);
   ratioH284->GetXaxis()->SetTitleSize(0.035);
   ratioH284->GetXaxis()->SetTitleFont(42);
   ratioH284->GetYaxis()->SetLabelFont(42);
   ratioH284->GetYaxis()->SetLabelSize(0.035);
   ratioH284->GetYaxis()->SetTitleSize(0.035);
   ratioH284->GetYaxis()->SetTitleFont(42);
   ratioH284->GetZaxis()->SetLabelFont(42);
   ratioH284->GetZaxis()->SetLabelSize(0.035);
   ratioH284->GetZaxis()->SetTitleSize(0.035);
   ratioH284->GetZaxis()->SetTitleFont(42);
   ratioH284->Draw("E same");
   line = new TLine(100,1,500,1);
   line->Draw();
   Stop_3_2->Modified();
   Stop_3->cd();
   Stop_3->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_4
   TPad *Stop_4 = new TPad("Stop_4", "Stop_4",0.51,0.51,0.6566667,0.99);
   Stop_4->Draw();
   Stop_4->cd();
   Stop_4->Range(0,0,1,1);
   Stop_4->SetFillColor(0);
   Stop_4->SetBorderMode(0);
   Stop_4->SetBorderSize(2);
   Stop_4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_4_1
   TPad *Stop_4_1 = new TPad("Stop_4_1", "Stop_4_1",0.01,0.2,0.99,0.99);
   Stop_4_1->Draw();
   Stop_4_1->cd();
   Stop_4_1->Range(-62.5,-1.908243,562.5,2.925211);
   Stop_4_1->SetFillColor(0);
   Stop_4_1->SetBorderMode(0);
   Stop_4_1->SetBorderSize(2);
   Stop_4_1->SetLogy();
   Stop_4_1->SetFrameBorderMode(0);
   Stop_4_1->SetFrameBorderMode(0);
   
   Jet2Pt = new THStack();
   Jet2Pt->SetName("Jet2Pt");
   Jet2Pt->SetTitle("Jet2Pt;p_{T} (Jet2) [GeV];Evt.");
   Jet2Pt->SetMaximum(167.9976);
   
   TH1F *Jet2Pt_stack_4_stack_15 = new TH1F("Jet2Pt_stack_4_stack_15","Jet2Pt",20,0,500);
   Jet2Pt_stack_4_stack_15->SetMinimum(0.03759259);
   Jet2Pt_stack_4_stack_15->SetMaximum(276.6086);
   Jet2Pt_stack_4_stack_15->SetDirectory(0);
   Jet2Pt_stack_4_stack_15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Jet2Pt_stack_4_stack_15->SetLineColor(ci);
   Jet2Pt_stack_4_stack_15->GetXaxis()->SetTitle("p_{T} (Jet2) [GeV]");
   Jet2Pt_stack_4_stack_15->GetXaxis()->SetLabelFont(42);
   Jet2Pt_stack_4_stack_15->GetXaxis()->SetLabelSize(0.035);
   Jet2Pt_stack_4_stack_15->GetXaxis()->SetTitleSize(0.035);
   Jet2Pt_stack_4_stack_15->GetXaxis()->SetTitleFont(42);
   Jet2Pt_stack_4_stack_15->GetYaxis()->SetTitle("Evt.");
   Jet2Pt_stack_4_stack_15->GetYaxis()->SetLabelFont(42);
   Jet2Pt_stack_4_stack_15->GetYaxis()->SetLabelSize(0.035);
   Jet2Pt_stack_4_stack_15->GetYaxis()->SetTitleSize(0.035);
   Jet2Pt_stack_4_stack_15->GetYaxis()->SetTitleFont(42);
   Jet2Pt_stack_4_stack_15->GetZaxis()->SetLabelFont(42);
   Jet2Pt_stack_4_stack_15->GetZaxis()->SetLabelSize(0.035);
   Jet2Pt_stack_4_stack_15->GetZaxis()->SetTitleSize(0.035);
   Jet2Pt_stack_4_stack_15->GetZaxis()->SetTitleFont(42);
   Jet2Pt->SetHistogram(Jet2Pt_stack_4_stack_15);
   
   
   TH1D *ttbarH385 = new TH1D("ttbarH385","ttbar",20,0,500);
   ttbarH385->SetBinContent(1,0.7332027);
   ttbarH385->SetBinContent(2,12.83105);
   ttbarH385->SetBinContent(3,31.89432);
   ttbarH385->SetBinContent(4,39.95955);
   ttbarH385->SetBinContent(5,26.7619);
   ttbarH385->SetBinContent(6,28.22831);
   ttbarH385->SetBinContent(7,17.59687);
   ttbarH385->SetBinContent(8,9.898237);
   ttbarH385->SetBinContent(9,4.399216);
   ttbarH385->SetBinContent(10,2.932811);
   ttbarH385->SetBinContent(11,1.099804);
   ttbarH385->SetBinContent(12,1.466405);
   ttbarH385->SetBinContent(13,1.466405);
   ttbarH385->SetBinContent(14,0.3666014);
   ttbarH385->SetBinContent(15,0.7332027);
   ttbarH385->SetBinError(1,0.5184526);
   ttbarH385->SetBinError(2,2.168843);
   ttbarH385->SetBinError(3,3.41943);
   ttbarH385->SetBinError(4,3.827431);
   ttbarH385->SetBinError(5,3.132244);
   ttbarH385->SetBinError(6,3.216914);
   ttbarH385->SetBinError(7,2.539889);
   ttbarH385->SetBinError(8,1.904917);
   ttbarH385->SetBinError(9,1.269944);
   ttbarH385->SetBinError(10,1.036905);
   ttbarH385->SetBinError(11,0.6349722);
   ttbarH385->SetBinError(12,0.7332027);
   ttbarH385->SetBinError(13,0.7332027);
   ttbarH385->SetBinError(14,0.3666014);
   ttbarH385->SetBinError(15,0.5184526);
   ttbarH385->SetEntries(492);
   ttbarH385->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH385->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH385->SetLineColor(ci);
   ttbarH385->GetXaxis()->SetLabelFont(42);
   ttbarH385->GetXaxis()->SetLabelSize(0.035);
   ttbarH385->GetXaxis()->SetTitleSize(0.035);
   ttbarH385->GetXaxis()->SetTitleFont(42);
   ttbarH385->GetYaxis()->SetLabelFont(42);
   ttbarH385->GetYaxis()->SetLabelSize(0.035);
   ttbarH385->GetYaxis()->SetTitleSize(0.035);
   ttbarH385->GetYaxis()->SetTitleFont(42);
   ttbarH385->GetZaxis()->SetLabelFont(42);
   ttbarH385->GetZaxis()->SetLabelSize(0.035);
   ttbarH385->GetZaxis()->SetTitleSize(0.035);
   ttbarH385->GetZaxis()->SetTitleFont(42);
   Jet2Pt->Add(ttbarH3,"");
   
   TH1D *wjetsH386 = new TH1D("wjetsH386","wjets",20,0,500);
   wjetsH386->SetBinContent(1,34.27928);
   wjetsH386->SetBinContent(2,147.1666);
   wjetsH386->SetBinContent(3,110.0171);
   wjetsH386->SetBinContent(4,69.47409);
   wjetsH386->SetBinContent(5,47.80739);
   wjetsH386->SetBinContent(6,36.25662);
   wjetsH386->SetBinContent(7,24.33894);
   wjetsH386->SetBinContent(8,15.29093);
   wjetsH386->SetBinContent(9,9.470631);
   wjetsH386->SetBinContent(10,7.59562);
   wjetsH386->SetBinContent(11,4.977769);
   wjetsH386->SetBinContent(12,3.169119);
   wjetsH386->SetBinContent(13,2.076319);
   wjetsH386->SetBinContent(14,1.31136);
   wjetsH386->SetBinContent(15,1.52992);
   wjetsH386->SetBinContent(16,0.7649598);
   wjetsH386->SetBinContent(17,0.8742398);
   wjetsH386->SetBinContent(18,0.6556798);
   wjetsH386->SetBinContent(19,0.2185599);
   wjetsH386->SetBinContent(20,0.10928);
   wjetsH386->SetBinContent(21,1.74848);
   wjetsH386->SetBinError(1,3.395276);
   wjetsH386->SetBinError(2,6.825881);
   wjetsH386->SetBinError(3,5.609834);
   wjetsH386->SetBinError(4,4.178247);
   wjetsH386->SetBinError(5,3.391237);
   wjetsH386->SetBinError(6,2.738039);
   wjetsH386->SetBinError(7,2.017573);
   wjetsH386->SetBinError(8,1.566472);
   wjetsH386->SetBinError(9,1.126701);
   wjetsH386->SetBinError(10,0.9654054);
   wjetsH386->SetBinError(11,0.7444235);
   wjetsH386->SetBinError(12,0.5884907);
   wjetsH386->SetBinError(13,0.4763404);
   wjetsH386->SetBinError(14,0.3785569);
   wjetsH386->SetBinError(15,0.4088882);
   wjetsH386->SetBinError(16,0.2891276);
   wjetsH386->SetBinError(17,0.3090904);
   wjetsH386->SetBinError(18,0.2676802);
   wjetsH386->SetBinError(19,0.1545452);
   wjetsH386->SetBinError(20,0.10928);
   wjetsH386->SetBinError(21,0.4371199);
   wjetsH386->SetEntries(2588);
   wjetsH386->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH386->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH386->SetLineColor(ci);
   wjetsH386->GetXaxis()->SetLabelFont(42);
   wjetsH386->GetXaxis()->SetLabelSize(0.035);
   wjetsH386->GetXaxis()->SetTitleSize(0.035);
   wjetsH386->GetXaxis()->SetTitleFont(42);
   wjetsH386->GetYaxis()->SetLabelFont(42);
   wjetsH386->GetYaxis()->SetLabelSize(0.035);
   wjetsH386->GetYaxis()->SetTitleSize(0.035);
   wjetsH386->GetYaxis()->SetTitleFont(42);
   wjetsH386->GetZaxis()->SetLabelFont(42);
   wjetsH386->GetZaxis()->SetLabelSize(0.035);
   wjetsH386->GetZaxis()->SetTitleSize(0.035);
   wjetsH386->GetZaxis()->SetTitleFont(42);
   Jet2Pt->Add(wjetsH3,"");
   Jet2Pt->Draw("hist");
   
   TH1D *stopH387 = new TH1D("stopH387","Signal",20,0,500);
   stopH387->SetBinContent(1,4.156692);
   stopH387->SetBinContent(2,23.21665);
   stopH387->SetBinContent(3,23.31803);
   stopH387->SetBinContent(4,15.30879);
   stopH387->SetBinContent(5,13.28114);
   stopH387->SetBinContent(6,12.16593);
   stopH387->SetBinContent(7,7.40094);
   stopH387->SetBinContent(8,4.663606);
   stopH387->SetBinContent(9,3.548396);
   stopH387->SetBinContent(10,2.23042);
   stopH387->SetBinContent(11,1.824889);
   stopH387->SetBinContent(12,1.11521);
   stopH387->SetBinContent(13,0.6082965);
   stopH387->SetBinContent(14,0.405531);
   stopH387->SetBinContent(15,0.3041482);
   stopH387->SetBinContent(16,0.405531);
   stopH387->SetBinContent(17,0.1013827);
   stopH387->SetBinContent(18,0.1013827);
   stopH387->SetBinContent(20,0.1013827);
   stopH387->SetBinContent(21,0.5069137);
   stopH387->SetBinError(1,0.6491663);
   stopH387->SetBinError(2,1.534199);
   stopH387->SetBinError(3,1.537545);
   stopH387->SetBinError(4,1.245812);
   stopH387->SetBinError(5,1.160379);
   stopH387->SetBinError(6,1.110592);
   stopH387->SetBinError(7,0.8662145);
   stopH387->SetBinError(8,0.6876112);
   stopH387->SetBinError(9,0.5997884);
   stopH387->SetBinError(10,0.4755272);
   stopH387->SetBinError(11,0.4301306);
   stopH387->SetBinError(12,0.3362485);
   stopH387->SetBinError(13,0.248336);
   stopH387->SetBinError(14,0.2027655);
   stopH387->SetBinError(15,0.1756001);
   stopH387->SetBinError(16,0.2027655);
   stopH387->SetBinError(17,0.1013827);
   stopH387->SetBinError(18,0.1013827);
   stopH387->SetBinError(20,0.1013827);
   stopH387->SetBinError(21,0.2266987);
   stopH387->SetEntries(1132);
   stopH387->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH387->SetLineColor(ci);
   stopH387->GetXaxis()->SetLabelFont(42);
   stopH387->GetXaxis()->SetLabelSize(0.035);
   stopH387->GetXaxis()->SetTitleSize(0.035);
   stopH387->GetXaxis()->SetTitleFont(42);
   stopH387->GetYaxis()->SetLabelFont(42);
   stopH387->GetYaxis()->SetLabelSize(0.035);
   stopH387->GetYaxis()->SetTitleSize(0.035);
   stopH387->GetYaxis()->SetTitleFont(42);
   stopH387->GetZaxis()->SetLabelFont(42);
   stopH387->GetZaxis()->SetLabelSize(0.035);
   stopH387->GetZaxis()->SetTitleSize(0.035);
   stopH387->GetZaxis()->SetTitleFont(42);
   stopH387->Draw("HIST same");
   
   TH1D *dataH388 = new TH1D("dataH388","Data",20,0,500);
   dataH388->SetBinContent(1,35);
   dataH388->SetBinContent(2,151);
   dataH388->SetBinContent(3,141);
   dataH388->SetBinContent(4,102);
   dataH388->SetBinContent(5,72);
   dataH388->SetBinContent(6,68);
   dataH388->SetBinContent(7,44);
   dataH388->SetBinContent(8,27);
   dataH388->SetBinContent(9,15);
   dataH388->SetBinContent(10,10);
   dataH388->SetBinContent(11,9);
   dataH388->SetBinContent(12,8);
   dataH388->SetBinContent(13,3);
   dataH388->SetBinContent(14,1);
   dataH388->SetBinContent(15,4);
   dataH388->SetBinContent(18,1);
   dataH388->SetBinContent(19,1);
   dataH388->SetBinContent(21,3);
   dataH388->SetBinError(1,5.91608);
   dataH388->SetBinError(2,12.28821);
   dataH388->SetBinError(3,11.87434);
   dataH388->SetBinError(4,10.0995);
   dataH388->SetBinError(5,8.485281);
   dataH388->SetBinError(6,8.246211);
   dataH388->SetBinError(7,6.63325);
   dataH388->SetBinError(8,5.196152);
   dataH388->SetBinError(9,3.872983);
   dataH388->SetBinError(10,3.162278);
   dataH388->SetBinError(11,3);
   dataH388->SetBinError(12,2.828427);
   dataH388->SetBinError(13,1.732051);
   dataH388->SetBinError(14,1);
   dataH388->SetBinError(15,2);
   dataH388->SetBinError(18,1);
   dataH388->SetBinError(19,1);
   dataH388->SetBinError(21,1.732051);
   dataH388->SetEntries(695);
   dataH388->SetStats(0);
   dataH388->GetXaxis()->SetLabelFont(42);
   dataH388->GetXaxis()->SetLabelSize(0.035);
   dataH388->GetXaxis()->SetTitleSize(0.035);
   dataH388->GetXaxis()->SetTitleFont(42);
   dataH388->GetYaxis()->SetLabelFont(42);
   dataH388->GetYaxis()->SetLabelSize(0.035);
   dataH388->GetYaxis()->SetTitleSize(0.035);
   dataH388->GetYaxis()->SetTitleFont(42);
   dataH388->GetZaxis()->SetLabelFont(42);
   dataH388->GetZaxis()->SetLabelSize(0.035);
   dataH388->GetZaxis()->SetTitleSize(0.035);
   dataH388->GetZaxis()->SetTitleFont(42);
   dataH388->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
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
   
   pt = new TPaveText(0.4113367,0.94,0.5886633,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Jet2Pt");
   pt->Draw();
   Stop_4_1->Modified();
   Stop_4->cd();
  
// ------------>Primitives in pad: Stop_4_2
   TPad *Stop_4_2 = new TPad("Stop_4_2", "Stop_4_2",0.01,0.01,0.99,0.2);
   Stop_4_2->Draw();
   Stop_4_2->cd();
   Stop_4_2->Range(-62.5,0.375,562.5,1.625);
   Stop_4_2->SetFillColor(0);
   Stop_4_2->SetBorderMode(0);
   Stop_4_2->SetBorderSize(2);
   Stop_4_2->SetFrameBorderMode(0);
   Stop_4_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH389 = new TH1D("backgroundH389","",20,0,500);
   backgroundH389->SetMinimum(0.5);
   backgroundH389->SetMaximum(1.5);
   backgroundH389->SetEntries(3101);
   backgroundH389->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH389->SetLineColor(ci);
   backgroundH389->GetXaxis()->SetLabelFont(42);
   backgroundH389->GetXaxis()->SetLabelSize(0.15);
   backgroundH389->GetXaxis()->SetTitleSize(0.035);
   backgroundH389->GetXaxis()->SetTitleFont(42);
   backgroundH389->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH389->GetYaxis()->SetNdivisions(5);
   backgroundH389->GetYaxis()->SetLabelFont(42);
   backgroundH389->GetYaxis()->SetLabelSize(0.15);
   backgroundH389->GetYaxis()->SetTitleSize(0.15);
   backgroundH389->GetYaxis()->SetTickLength(0.01);
   backgroundH389->GetYaxis()->SetTitleOffset(0.35);
   backgroundH389->GetYaxis()->SetTitleFont(42);
   backgroundH389->GetZaxis()->SetLabelFont(42);
   backgroundH389->GetZaxis()->SetLabelSize(0.035);
   backgroundH389->GetZaxis()->SetTitleSize(0.035);
   backgroundH389->GetZaxis()->SetTitleFont(42);
   backgroundH389->Draw("");
   
   Double_t Graph_from_backgroundH3_fx1015[20] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5};
   Double_t Graph_from_backgroundH3_fy1015[20] = {
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
   Double_t Graph_from_backgroundH3_fex1015[20] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_backgroundH3_fey1015[20] = {
   0.09809732,
   0.04476415,
   0.04629532,
   0.05177843,
   0.06190794,
   0.06550958,
   0.07734934,
   0.09791038,
   0.1224028,
   0.1345642,
   0.1609928,
   0.2028171,
   0.2468013,
   0.3140563,
   0.2917606,
   0.3779645,
   0.3535534,
   0.4082483,
   0.7071068,
   1};
   gre = new TGraphErrors(20,Graph_from_backgroundH3_fx1015,Graph_from_backgroundH3_fy1015,Graph_from_backgroundH3_fex1015,Graph_from_backgroundH3_fey1015);
   gre->SetName("Graph_from_backgroundH3");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH310041015 = new TH1F("Graph_Graph_Graph_from_backgroundH310041015","",100,0,550);
   Graph_Graph_Graph_from_backgroundH310041015->SetMinimum(0);
   Graph_Graph_Graph_from_backgroundH310041015->SetMaximum(2.2);
   Graph_Graph_Graph_from_backgroundH310041015->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH310041015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH310041015->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH310041015->GetXaxis()->SetRange(1,91);
   Graph_Graph_Graph_from_backgroundH310041015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH310041015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH310041015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH310041015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH310041015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH310041015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH310041015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH310041015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH310041015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH310041015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH310041015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH310041015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH310041015);
   
   gre->Draw("3");
   
   TH1D *ratioH390 = new TH1D("ratioH390","",20,0,500);
   ratioH390->SetBinContent(1,0.9996434);
   ratioH390->SetBinContent(2,0.9437637);
   ratioH390->SetBinContent(3,0.9935774);
   ratioH390->SetBinContent(4,0.9320717);
   ratioH390->SetBinContent(5,0.9655449);
   ratioH390->SetBinContent(6,1.05451);
   ratioH390->SetBinContent(7,1.049223);
   ratioH390->SetBinContent(8,1.071889);
   ratioH390->SetBinContent(9,1.081483);
   ratioH390->SetBinContent(10,0.9498092);
   ratioH390->SetBinContent(11,1.480854);
   ratioH390->SetBinContent(12,1.725802);
   ratioH390->SetBinContent(13,0.8468058);
   ratioH390->SetBinContent(14,0.5959614);
   ratioH390->SetBinContent(15,1.76747);
   ratioH390->SetBinContent(18,1.525135);
   ratioH390->SetBinContent(19,4.575404);
   ratioH390->SetBinContent(21,1.715776);
   ratioH390->SetBinError(1,0.1953645);
   ratioH390->SetBinError(2,0.087655);
   ratioH390->SetBinError(3,0.09548406);
   ratioH390->SetBinError(4,0.1041459);
   ratioH390->SetBinError(5,0.1285353);
   ratioH390->SetBinError(6,0.1453442);
   ratioH390->SetBinError(7,0.1777811);
   ratioH390->SetBinError(8,0.2314474);
   ratioH390->SetBinError(9,0.3090262);
   ratioH390->SetBinError(10,0.3264188);
   ratioH390->SetBinError(11,0.5481758);
   ratioH390->SetBinError(12,0.7034307);
   ratioH390->SetBinError(13,0.5316998);
   ratioH390->SetBinError(14,0.6246606);
   ratioH390->SetBinError(15,1.023187);
   ratioH390->SetBinError(18,1.647334);
   ratioH390->SetBinError(19,5.603702);
   ratioH390->SetBinError(21,1.079486);
   ratioH390->SetEntries(13.74642);
   ratioH390->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH390->SetLineColor(ci);
   ratioH390->GetXaxis()->SetLabelFont(42);
   ratioH390->GetXaxis()->SetLabelSize(0.035);
   ratioH390->GetXaxis()->SetTitleSize(0.035);
   ratioH390->GetXaxis()->SetTitleFont(42);
   ratioH390->GetYaxis()->SetLabelFont(42);
   ratioH390->GetYaxis()->SetLabelSize(0.035);
   ratioH390->GetYaxis()->SetTitleSize(0.035);
   ratioH390->GetYaxis()->SetTitleFont(42);
   ratioH390->GetZaxis()->SetLabelFont(42);
   ratioH390->GetZaxis()->SetLabelSize(0.035);
   ratioH390->GetZaxis()->SetTitleSize(0.035);
   ratioH390->GetZaxis()->SetTitleFont(42);
   ratioH390->Draw("E same");
   line = new TLine(0,1,500,1);
   line->Draw();
   Stop_4_2->Modified();
   Stop_4->cd();
   Stop_4->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_5
   TPad *Stop_5 = new TPad("Stop_5", "Stop_5",0.6766667,0.51,0.8233333,0.99);
   Stop_5->Draw();
   Stop_5->cd();
   Stop_5->Range(0,0,1,1);
   Stop_5->SetFillColor(0);
   Stop_5->SetBorderMode(0);
   Stop_5->SetBorderSize(2);
   Stop_5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_5_1
   TPad *Stop_5_1 = new TPad("Stop_5_1", "Stop_5_1",0.01,0.2,0.99,0.99);
   Stop_5_1->Draw();
   Stop_5_1->cd();
   Stop_5_1->Range(262.5,-23.97938,637.5,215.8144);
   Stop_5_1->SetFillColor(0);
   Stop_5_1->SetBorderMode(0);
   Stop_5_1->SetBorderSize(2);
   Stop_5_1->SetFrameBorderMode(0);
   Stop_5_1->SetFrameBorderMode(0);
   
   Met = new THStack();
   Met->SetName("Met");
   Met->SetTitle("Met;Met [GeV];Evt.");
   Met->SetMaximum(182.7);
   
   TH1F *Met_stack_5_stack_16 = new TH1F("Met_stack_5_stack_16","Met",20,300,600);
   Met_stack_5_stack_16->SetMinimum(0);
   Met_stack_5_stack_16->SetMaximum(191.835);
   Met_stack_5_stack_16->SetDirectory(0);
   Met_stack_5_stack_16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Met_stack_5_stack_16->SetLineColor(ci);
   Met_stack_5_stack_16->GetXaxis()->SetTitle("Met [GeV]");
   Met_stack_5_stack_16->GetXaxis()->SetLabelFont(42);
   Met_stack_5_stack_16->GetXaxis()->SetLabelSize(0.035);
   Met_stack_5_stack_16->GetXaxis()->SetTitleSize(0.035);
   Met_stack_5_stack_16->GetXaxis()->SetTitleFont(42);
   Met_stack_5_stack_16->GetYaxis()->SetTitle("Evt.");
   Met_stack_5_stack_16->GetYaxis()->SetLabelFont(42);
   Met_stack_5_stack_16->GetYaxis()->SetLabelSize(0.035);
   Met_stack_5_stack_16->GetYaxis()->SetTitleSize(0.035);
   Met_stack_5_stack_16->GetYaxis()->SetTitleFont(42);
   Met_stack_5_stack_16->GetZaxis()->SetLabelFont(42);
   Met_stack_5_stack_16->GetZaxis()->SetLabelSize(0.035);
   Met_stack_5_stack_16->GetZaxis()->SetTitleSize(0.035);
   Met_stack_5_stack_16->GetZaxis()->SetTitleFont(42);
   Met->SetHistogram(Met_stack_5_stack_16);
   
   
   TH1D *ttbarH491 = new TH1D("ttbarH491","ttbar",20,300,600);
   ttbarH491->SetBinContent(1,42.15916);
   ttbarH491->SetBinContent(2,39.59295);
   ttbarH491->SetBinContent(3,21.62948);
   ttbarH491->SetBinContent(4,16.49706);
   ttbarH491->SetBinContent(5,20.16308);
   ttbarH491->SetBinContent(6,8.431832);
   ttbarH491->SetBinContent(7,9.898237);
   ttbarH491->SetBinContent(8,6.598825);
   ttbarH491->SetBinContent(9,2.932811);
   ttbarH491->SetBinContent(10,4.032615);
   ttbarH491->SetBinContent(11,2.56621);
   ttbarH491->SetBinContent(12,1.833007);
   ttbarH491->SetBinContent(13,1.099804);
   ttbarH491->SetBinContent(14,0.7332027);
   ttbarH491->SetBinContent(15,0.3666014);
   ttbarH491->SetBinContent(16,0.3666014);
   ttbarH491->SetBinContent(17,0.3666014);
   ttbarH491->SetBinContent(18,0.3666014);
   ttbarH491->SetBinContent(21,0.7332027);
   ttbarH491->SetBinError(1,3.931362);
   ttbarH491->SetBinError(2,3.809833);
   ttbarH491->SetBinError(3,2.815919);
   ttbarH491->SetBinError(4,2.459237);
   ttbarH491->SetBinError(5,2.718789);
   ttbarH491->SetBinError(6,1.758158);
   ttbarH491->SetBinError(7,1.904917);
   ttbarH491->SetBinError(8,1.555358);
   ttbarH491->SetBinError(9,1.036905);
   ttbarH491->SetBinError(10,1.215879);
   ttbarH491->SetBinError(11,0.9699361);
   ttbarH491->SetBinError(12,0.8197456);
   ttbarH491->SetBinError(13,0.6349722);
   ttbarH491->SetBinError(14,0.5184526);
   ttbarH491->SetBinError(15,0.3666014);
   ttbarH491->SetBinError(16,0.3666014);
   ttbarH491->SetBinError(17,0.3666014);
   ttbarH491->SetBinError(18,0.3666014);
   ttbarH491->SetBinError(21,0.5184526);
   ttbarH491->SetEntries(492);
   ttbarH491->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH491->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH491->SetLineColor(ci);
   ttbarH491->GetXaxis()->SetLabelFont(42);
   ttbarH491->GetXaxis()->SetLabelSize(0.035);
   ttbarH491->GetXaxis()->SetTitleSize(0.035);
   ttbarH491->GetXaxis()->SetTitleFont(42);
   ttbarH491->GetYaxis()->SetLabelFont(42);
   ttbarH491->GetYaxis()->SetLabelSize(0.035);
   ttbarH491->GetYaxis()->SetTitleSize(0.035);
   ttbarH491->GetYaxis()->SetTitleFont(42);
   ttbarH491->GetZaxis()->SetLabelFont(42);
   ttbarH491->GetZaxis()->SetLabelSize(0.035);
   ttbarH491->GetZaxis()->SetTitleSize(0.035);
   ttbarH491->GetZaxis()->SetTitleFont(42);
   Met->Add(ttbarH4,"");
   
   TH1D *wjetsH492 = new TH1D("wjetsH492","wjets",20,300,600);
   wjetsH492->SetBinContent(1,120.5754);
   wjetsH492->SetBinContent(2,83.82931);
   wjetsH492->SetBinContent(3,68.78019);
   wjetsH492->SetBinContent(4,47.14597);
   wjetsH492->SetBinContent(5,38.58106);
   wjetsH492->SetBinContent(6,32.83591);
   wjetsH492->SetBinContent(7,25.96965);
   wjetsH492->SetBinContent(8,17.70261);
   wjetsH492->SetBinContent(9,15.36153);
   wjetsH492->SetBinContent(10,10.69615);
   wjetsH492->SetBinContent(11,9.630344);
   wjetsH492->SetBinContent(12,7.547833);
   wjetsH492->SetBinContent(13,6.957192);
   wjetsH492->SetBinContent(14,5.454262);
   wjetsH492->SetBinContent(15,4.618071);
   wjetsH492->SetBinContent(16,3.63942);
   wjetsH492->SetBinContent(17,3.2023);
   wjetsH492->SetBinContent(18,1.66132);
   wjetsH492->SetBinContent(19,1.26225);
   wjetsH492->SetBinContent(20,1.04369);
   wjetsH492->SetBinContent(21,12.63843);
   wjetsH492->SetBinError(1,6.273041);
   wjetsH492->SetBinError(2,5.159301);
   wjetsH492->SetBinError(3,4.548141);
   wjetsH492->SetBinError(4,3.535853);
   wjetsH492->SetBinError(5,3.009199);
   wjetsH492->SetBinError(6,2.7308);
   wjetsH492->SetBinError(7,2.363007);
   wjetsH492->SetBinError(8,1.741682);
   wjetsH492->SetBinError(9,1.709465);
   wjetsH492->SetBinError(10,1.283776);
   wjetsH492->SetBinError(11,1.216811);
   wjetsH492->SetBinError(12,1.068128);
   wjetsH492->SetBinError(13,0.9973896);
   wjetsH492->SetBinError(14,0.8829307);
   wjetsH492->SetBinError(15,0.8109256);
   wjetsH492->SetBinError(16,0.6774148);
   wjetsH492->SetBinError(17,0.6411882);
   wjetsH492->SetBinError(18,0.4715213);
   wjetsH492->SetBinError(19,0.3848824);
   wjetsH492->SetBinError(20,0.3524915);
   wjetsH492->SetBinError(21,1.188156);
   wjetsH492->SetEntries(2588);
   wjetsH492->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH492->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH492->SetLineColor(ci);
   wjetsH492->GetXaxis()->SetLabelFont(42);
   wjetsH492->GetXaxis()->SetLabelSize(0.035);
   wjetsH492->GetXaxis()->SetTitleSize(0.035);
   wjetsH492->GetXaxis()->SetTitleFont(42);
   wjetsH492->GetYaxis()->SetLabelFont(42);
   wjetsH492->GetYaxis()->SetLabelSize(0.035);
   wjetsH492->GetYaxis()->SetTitleSize(0.035);
   wjetsH492->GetYaxis()->SetTitleFont(42);
   wjetsH492->GetZaxis()->SetLabelFont(42);
   wjetsH492->GetZaxis()->SetLabelSize(0.035);
   wjetsH492->GetZaxis()->SetTitleSize(0.035);
   wjetsH492->GetZaxis()->SetTitleFont(42);
   Met->Add(wjetsH4,"");
   Met->Draw("hist");
   
   TH1D *stopH493 = new TH1D("stopH493","Signal",20,300,600);
   stopH493->SetBinContent(1,15.91709);
   stopH493->SetBinContent(2,11.45625);
   stopH493->SetBinContent(3,10.54381);
   stopH493->SetBinContent(4,8.414768);
   stopH493->SetBinContent(5,7.603706);
   stopH493->SetBinContent(6,7.299558);
   stopH493->SetBinContent(7,6.691261);
   stopH493->SetBinContent(8,5.271903);
   stopH493->SetBinContent(9,4.156692);
   stopH493->SetBinContent(10,4.562223);
   stopH493->SetBinContent(11,4.460841);
   stopH493->SetBinContent(12,3.041482);
   stopH493->SetBinContent(13,2.838717);
   stopH493->SetBinContent(14,2.9401);
   stopH493->SetBinContent(15,2.23042);
   stopH493->SetBinContent(16,1.824889);
   stopH493->SetBinContent(17,2.129038);
   stopH493->SetBinContent(18,1.419358);
   stopH493->SetBinContent(19,0.9124447);
   stopH493->SetBinContent(20,1.216593);
   stopH493->SetBinContent(21,9.834126);
   stopH493->SetBinError(1,1.270322);
   stopH493->SetBinError(2,1.077713);
   stopH493->SetBinError(3,1.033905);
   stopH493->SetBinError(4,0.9236408);
   stopH493->SetBinError(5,0.8780003);
   stopH493->SetBinError(6,0.8602611);
   stopH493->SetBinError(7,0.8236373);
   stopH493->SetBinError(8,0.7310814);
   stopH493->SetBinError(9,0.6491663);
   stopH493->SetBinError(10,0.6800961);
   stopH493->SetBinError(11,0.672497);
   stopH493->SetBinError(12,0.5552962);
   stopH493->SetBinError(13,0.5364671);
   stopH493->SetBinError(14,0.5459628);
   stopH493->SetBinError(15,0.4755272);
   stopH493->SetBinError(16,0.4301306);
   stopH493->SetBinError(17,0.4645941);
   stopH493->SetBinError(18,0.3793395);
   stopH493->SetBinError(19,0.3041482);
   stopH493->SetBinError(20,0.3512001);
   stopH493->SetBinError(21,0.9985042);
   stopH493->SetEntries(1132);
   stopH493->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH493->SetLineColor(ci);
   stopH493->GetXaxis()->SetLabelFont(42);
   stopH493->GetXaxis()->SetLabelSize(0.035);
   stopH493->GetXaxis()->SetTitleSize(0.035);
   stopH493->GetXaxis()->SetTitleFont(42);
   stopH493->GetYaxis()->SetLabelFont(42);
   stopH493->GetYaxis()->SetLabelSize(0.035);
   stopH493->GetYaxis()->SetTitleSize(0.035);
   stopH493->GetYaxis()->SetTitleFont(42);
   stopH493->GetZaxis()->SetLabelFont(42);
   stopH493->GetZaxis()->SetLabelSize(0.035);
   stopH493->GetZaxis()->SetTitleSize(0.035);
   stopH493->GetZaxis()->SetTitleFont(42);
   stopH493->Draw("HIST same");
   
   TH1D *dataH494 = new TH1D("dataH494","Data",20,300,600);
   dataH494->SetBinContent(1,174);
   dataH494->SetBinContent(2,114);
   dataH494->SetBinContent(3,87);
   dataH494->SetBinContent(4,56);
   dataH494->SetBinContent(5,51);
   dataH494->SetBinContent(6,48);
   dataH494->SetBinContent(7,31);
   dataH494->SetBinContent(8,23);
   dataH494->SetBinContent(9,24);
   dataH494->SetBinContent(10,16);
   dataH494->SetBinContent(11,8);
   dataH494->SetBinContent(12,15);
   dataH494->SetBinContent(13,7);
   dataH494->SetBinContent(14,8);
   dataH494->SetBinContent(15,6);
   dataH494->SetBinContent(16,7);
   dataH494->SetBinContent(17,6);
   dataH494->SetBinContent(18,2);
   dataH494->SetBinContent(19,1);
   dataH494->SetBinContent(20,3);
   dataH494->SetBinContent(21,8);
   dataH494->SetBinError(1,13.19091);
   dataH494->SetBinError(2,10.67708);
   dataH494->SetBinError(3,9.327379);
   dataH494->SetBinError(4,7.483315);
   dataH494->SetBinError(5,7.141428);
   dataH494->SetBinError(6,6.928203);
   dataH494->SetBinError(7,5.567764);
   dataH494->SetBinError(8,4.795832);
   dataH494->SetBinError(9,4.898979);
   dataH494->SetBinError(10,4);
   dataH494->SetBinError(11,2.828427);
   dataH494->SetBinError(12,3.872983);
   dataH494->SetBinError(13,2.645751);
   dataH494->SetBinError(14,2.828427);
   dataH494->SetBinError(15,2.44949);
   dataH494->SetBinError(16,2.645751);
   dataH494->SetBinError(17,2.44949);
   dataH494->SetBinError(18,1.414214);
   dataH494->SetBinError(19,1);
   dataH494->SetBinError(20,1.732051);
   dataH494->SetBinError(21,2.828427);
   dataH494->SetEntries(695);
   dataH494->SetStats(0);
   dataH494->GetXaxis()->SetLabelFont(42);
   dataH494->GetXaxis()->SetLabelSize(0.035);
   dataH494->GetXaxis()->SetTitleSize(0.035);
   dataH494->GetXaxis()->SetTitleFont(42);
   dataH494->GetYaxis()->SetLabelFont(42);
   dataH494->GetYaxis()->SetLabelSize(0.035);
   dataH494->GetYaxis()->SetTitleSize(0.035);
   dataH494->GetYaxis()->SetTitleFont(42);
   dataH494->GetZaxis()->SetLabelFont(42);
   dataH494->GetZaxis()->SetLabelSize(0.035);
   dataH494->GetZaxis()->SetTitleSize(0.035);
   dataH494->GetZaxis()->SetTitleFont(42);
   dataH494->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
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
   
   pt = new TPaveText(0.441928,0.94,0.558072,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Met");
   pt->Draw();
   Stop_5_1->Modified();
   Stop_5->cd();
  
// ------------>Primitives in pad: Stop_5_2
   TPad *Stop_5_2 = new TPad("Stop_5_2", "Stop_5_2",0.01,0.01,0.99,0.2);
   Stop_5_2->Draw();
   Stop_5_2->cd();
   Stop_5_2->Range(262.5,0.375,637.5,1.625);
   Stop_5_2->SetFillColor(0);
   Stop_5_2->SetBorderMode(0);
   Stop_5_2->SetBorderSize(2);
   Stop_5_2->SetFrameBorderMode(0);
   Stop_5_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH495 = new TH1D("backgroundH495","",20,300,600);
   backgroundH495->SetMinimum(0.5);
   backgroundH495->SetMaximum(1.5);
   backgroundH495->SetEntries(3101);
   backgroundH495->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH495->SetLineColor(ci);
   backgroundH495->GetXaxis()->SetLabelFont(42);
   backgroundH495->GetXaxis()->SetLabelSize(0.15);
   backgroundH495->GetXaxis()->SetTitleSize(0.035);
   backgroundH495->GetXaxis()->SetTitleFont(42);
   backgroundH495->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH495->GetYaxis()->SetNdivisions(5);
   backgroundH495->GetYaxis()->SetLabelFont(42);
   backgroundH495->GetYaxis()->SetLabelSize(0.15);
   backgroundH495->GetYaxis()->SetTitleSize(0.15);
   backgroundH495->GetYaxis()->SetTickLength(0.01);
   backgroundH495->GetYaxis()->SetTitleOffset(0.35);
   backgroundH495->GetYaxis()->SetTitleFont(42);
   backgroundH495->GetZaxis()->SetLabelFont(42);
   backgroundH495->GetZaxis()->SetLabelSize(0.035);
   backgroundH495->GetZaxis()->SetTitleSize(0.035);
   backgroundH495->GetZaxis()->SetTitleFont(42);
   backgroundH495->Draw("");
   
   Double_t Graph_from_backgroundH4_fx1016[20] = {
   307.5,
   322.5,
   337.5,
   352.5,
   367.5,
   382.5,
   397.5,
   412.5,
   427.5,
   442.5,
   457.5,
   472.5,
   487.5,
   502.5,
   517.5,
   532.5,
   547.5,
   562.5,
   577.5,
   592.5};
   Double_t Graph_from_backgroundH4_fy1016[20] = {
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
   Double_t Graph_from_backgroundH4_fex1016[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t Graph_from_backgroundH4_fey1016[20] = {
   0.04549217,
   0.05196403,
   0.05916731,
   0.06767407,
   0.0690367,
   0.07870137,
   0.08462196,
   0.09608811,
   0.1092885,
   0.120049,
   0.1275841,
   0.1435301,
   0.1467495,
   0.1654788,
   0.1785357,
   0.1922734,
   0.2069523,
   0.2945222,
   0.3049178,
   0.3377358};
   gre = new TGraphErrors(20,Graph_from_backgroundH4_fx1016,Graph_from_backgroundH4_fy1016,Graph_from_backgroundH4_fex1016,Graph_from_backgroundH4_fey1016);
   gre->SetName("Graph_from_backgroundH4");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH410051016 = new TH1F("Graph_Graph_Graph_from_backgroundH410051016","",100,270,630);
   Graph_Graph_Graph_from_backgroundH410051016->SetMinimum(0.594717);
   Graph_Graph_Graph_from_backgroundH410051016->SetMaximum(1.405283);
   Graph_Graph_Graph_from_backgroundH410051016->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH410051016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH410051016->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH410051016->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph_from_backgroundH410051016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH410051016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH410051016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH410051016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH410051016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH410051016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH410051016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH410051016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH410051016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH410051016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH410051016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH410051016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH410051016);
   
   gre->Draw("3");
   
   TH1D *ratioH496 = new TH1D("ratioH496","",20,300,600);
   ratioH496->SetBinContent(1,1.069226);
   ratioH496->SetBinContent(2,0.9236583);
   ratioH496->SetBinContent(3,0.9622865);
   ratioH496->SetBinContent(4,0.8799077);
   ratioH496->SetBinContent(5,0.8681718);
   ratioH496->SetBinContent(6,1.163136);
   ratioH496->SetBinContent(7,0.8642828);
   ratioH496->SetBinContent(8,0.9464462);
   ratioH496->SetBinContent(9,1.311881);
   ratioH496->SetBinContent(10,1.086309);
   ratioH496->SetBinContent(11,0.655923);
   ratioH496->SetBinContent(12,1.599004);
   ratioH496->SetBinContent(13,0.8688102);
   ratioH496->SetBinContent(14,1.292937);
   ratioH496->SetBinContent(15,1.20369);
   ratioH496->SetBinContent(16,1.74737);
   ratioH496->SetBinContent(17,1.68119);
   ratioH496->SetBinContent(18,0.9862314);
   ratioH496->SetBinContent(19,0.7922362);
   ratioH496->SetBinContent(20,2.874417);
   ratioH496->SetBinContent(21,0.5982816);
   ratioH496->SetBinError(1,0.09453226);
   ratioH496->SetBinError(2,0.09893148);
   ratioH496->SetBinError(3,0.117836);
   ratioH496->SetBinError(4,0.131801);
   ratioH496->SetBinError(5,0.1355402);
   ratioH496->SetBinError(6,0.1912191);
   ratioH496->SetBinError(7,0.1715965);
   ratioH496->SetBinError(8,0.2172938);
   ratioH496->SetBinError(9,0.3037527);
   ratioH496->SetBinError(10,0.3012659);
   ratioH496->SetBinError(11,0.2465413);
   ratioH496->SetBinError(12,0.4723631);
   ratioH496->SetBinError(13,0.3522621);
   ratioH496->SetBinError(14,0.5047146);
   ratioH496->SetBinError(15,0.5363403);
   ratioH496->SetBinError(16,0.7409882);
   ratioH496->SetBinError(17,0.7694927);
   ratioH496->SetBinError(18,0.7554451);
   ratioH496->SetBinError(19,0.8282468);
   ratioH496->SetBinError(20,1.922637);
   ratioH496->SetBinError(21,0.2193327);
   ratioH496->SetEntries(76.30182);
   ratioH496->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH496->SetLineColor(ci);
   ratioH496->GetXaxis()->SetLabelFont(42);
   ratioH496->GetXaxis()->SetLabelSize(0.035);
   ratioH496->GetXaxis()->SetTitleSize(0.035);
   ratioH496->GetXaxis()->SetTitleFont(42);
   ratioH496->GetYaxis()->SetLabelFont(42);
   ratioH496->GetYaxis()->SetLabelSize(0.035);
   ratioH496->GetYaxis()->SetTitleSize(0.035);
   ratioH496->GetYaxis()->SetTitleFont(42);
   ratioH496->GetZaxis()->SetLabelFont(42);
   ratioH496->GetZaxis()->SetLabelSize(0.035);
   ratioH496->GetZaxis()->SetTitleSize(0.035);
   ratioH496->GetZaxis()->SetTitleFont(42);
   ratioH496->Draw("E same");
   line = new TLine(300,1,600,1);
   line->Draw();
   Stop_5_2->Modified();
   Stop_5->cd();
   Stop_5->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_6
   TPad *Stop_6 = new TPad("Stop_6", "Stop_6",0.8433333,0.51,0.99,0.99);
   Stop_6->Draw();
   Stop_6->cd();
   Stop_6->Range(0,0,1,1);
   Stop_6->SetFillColor(0);
   Stop_6->SetBorderMode(0);
   Stop_6->SetBorderSize(2);
   Stop_6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_6_1
   TPad *Stop_6_1 = new TPad("Stop_6_1", "Stop_6_1",0.01,0.2,0.99,0.99);
   Stop_6_1->Draw();
   Stop_6_1->cd();
   Stop_6_1->Range(-1.5,-17.41396,1.5,156.7257);
   Stop_6_1->SetFillColor(0);
   Stop_6_1->SetBorderMode(0);
   Stop_6_1->SetBorderSize(2);
   Stop_6_1->SetFrameBorderMode(0);
   Stop_6_1->SetFrameBorderMode(0);
   
   CosDeltaPhi = new THStack();
   CosDeltaPhi->SetName("CosDeltaPhi");
   CosDeltaPhi->SetTitle("CosDeltaPhi;Cos(#Delta #Phi);Evt.");
   CosDeltaPhi->SetMaximum(132.6778);
   
   TH1F *CosDeltaPhi_stack_6_stack_17 = new TH1F("CosDeltaPhi_stack_6_stack_17","CosDeltaPhi",20,-1.2,1.2);
   CosDeltaPhi_stack_6_stack_17->SetMinimum(0);
   CosDeltaPhi_stack_6_stack_17->SetMaximum(139.3117);
   CosDeltaPhi_stack_6_stack_17->SetDirectory(0);
   CosDeltaPhi_stack_6_stack_17->SetStats(0);

   ci = TColor::GetColor("#000099");
   CosDeltaPhi_stack_6_stack_17->SetLineColor(ci);
   CosDeltaPhi_stack_6_stack_17->GetXaxis()->SetTitle("Cos(#Delta #Phi)");
   CosDeltaPhi_stack_6_stack_17->GetXaxis()->SetLabelFont(42);
   CosDeltaPhi_stack_6_stack_17->GetXaxis()->SetLabelSize(0.035);
   CosDeltaPhi_stack_6_stack_17->GetXaxis()->SetTitleSize(0.035);
   CosDeltaPhi_stack_6_stack_17->GetXaxis()->SetTitleFont(42);
   CosDeltaPhi_stack_6_stack_17->GetYaxis()->SetTitle("Evt.");
   CosDeltaPhi_stack_6_stack_17->GetYaxis()->SetLabelFont(42);
   CosDeltaPhi_stack_6_stack_17->GetYaxis()->SetLabelSize(0.035);
   CosDeltaPhi_stack_6_stack_17->GetYaxis()->SetTitleSize(0.035);
   CosDeltaPhi_stack_6_stack_17->GetYaxis()->SetTitleFont(42);
   CosDeltaPhi_stack_6_stack_17->GetZaxis()->SetLabelFont(42);
   CosDeltaPhi_stack_6_stack_17->GetZaxis()->SetLabelSize(0.035);
   CosDeltaPhi_stack_6_stack_17->GetZaxis()->SetTitleSize(0.035);
   CosDeltaPhi_stack_6_stack_17->GetZaxis()->SetTitleFont(42);
   CosDeltaPhi->SetHistogram(CosDeltaPhi_stack_6_stack_17);
   
   
   TH1D *ttbarH597 = new TH1D("ttbarH597","ttbar",20,-1.2,1.2);
   ttbarH597->SetBinContent(2,1.099804);
   ttbarH597->SetBinContent(3,4.032615);
   ttbarH597->SetBinContent(4,3.299412);
   ttbarH597->SetBinContent(5,2.56621);
   ttbarH597->SetBinContent(6,4.032615);
   ttbarH597->SetBinContent(7,4.399216);
   ttbarH597->SetBinContent(8,3.666014);
   ttbarH597->SetBinContent(9,7.698629);
   ttbarH597->SetBinContent(10,8.06523);
   ttbarH597->SetBinContent(11,9.898237);
   ttbarH597->SetBinContent(12,7.698629);
   ttbarH597->SetBinContent(13,13.93085);
   ttbarH597->SetBinContent(14,6.965426);
   ttbarH597->SetBinContent(15,14.29745);
   ttbarH597->SetBinContent(16,13.56425);
   ttbarH597->SetBinContent(17,13.56425);
   ttbarH597->SetBinContent(18,26.0287);
   ttbarH597->SetBinContent(19,35.56033);
   ttbarH597->SetBinError(2,0.6349722);
   ttbarH597->SetBinError(3,1.215879);
   ttbarH597->SetBinError(4,1.099804);
   ttbarH597->SetBinError(5,0.9699361);
   ttbarH597->SetBinError(6,1.215879);
   ttbarH597->SetBinError(7,1.269944);
   ttbarH597->SetBinError(8,1.159295);
   ttbarH597->SetBinError(9,1.679979);
   ttbarH597->SetBinError(10,1.719513);
   ttbarH597->SetBinError(11,1.904917);
   ttbarH597->SetBinError(12,1.679979);
   ttbarH597->SetBinError(13,2.259883);
   ttbarH597->SetBinError(14,1.597978);
   ttbarH597->SetBinError(15,2.289425);
   ttbarH597->SetBinError(16,2.229949);
   ttbarH597->SetBinError(17,2.229949);
   ttbarH597->SetBinError(18,3.089038);
   ttbarH597->SetBinError(19,3.610605);
   ttbarH597->SetEntries(492);
   ttbarH597->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH597->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH597->SetLineColor(ci);
   ttbarH597->GetXaxis()->SetLabelFont(42);
   ttbarH597->GetXaxis()->SetLabelSize(0.035);
   ttbarH597->GetXaxis()->SetTitleSize(0.035);
   ttbarH597->GetXaxis()->SetTitleFont(42);
   ttbarH597->GetYaxis()->SetLabelFont(42);
   ttbarH597->GetYaxis()->SetLabelSize(0.035);
   ttbarH597->GetYaxis()->SetTitleSize(0.035);
   ttbarH597->GetYaxis()->SetTitleFont(42);
   ttbarH597->GetZaxis()->SetLabelFont(42);
   ttbarH597->GetZaxis()->SetLabelSize(0.035);
   ttbarH597->GetZaxis()->SetTitleSize(0.035);
   ttbarH597->GetZaxis()->SetTitleFont(42);
   CosDeltaPhi->Add(ttbarH5,"");
   
   TH1D *wjetsH598 = new TH1D("wjetsH598","wjets",20,-1.2,1.2);
   wjetsH598->SetBinContent(2,2.288048);
   wjetsH598->SetBinContent(3,6.257575);
   wjetsH598->SetBinContent(4,5.827438);
   wjetsH598->SetBinContent(5,7.000566);
   wjetsH598->SetBinContent(6,9.982496);
   wjetsH598->SetBinContent(7,11.01724);
   wjetsH598->SetBinContent(8,16.08474);
   wjetsH598->SetBinContent(9,17.28845);
   wjetsH598->SetBinContent(10,17.89747);
   wjetsH598->SetBinContent(11,23.93844);
   wjetsH598->SetBinContent(12,29.37089);
   wjetsH598->SetBinContent(13,35.64941);
   wjetsH598->SetBinContent(14,40.89131);
   wjetsH598->SetBinContent(15,39.49052);
   wjetsH598->SetBinContent(16,48.32673);
   wjetsH598->SetBinContent(17,48.89517);
   wjetsH598->SetBinContent(18,68.12698);
   wjetsH598->SetBinContent(19,90.79948);
   wjetsH598->SetBinError(2,0.7536687);
   wjetsH598->SetBinError(3,1.275762);
   wjetsH598->SetBinError(4,1.287628);
   wjetsH598->SetBinError(5,1.436447);
   wjetsH598->SetBinError(6,1.752723);
   wjetsH598->SetBinError(7,1.828689);
   wjetsH598->SetBinError(8,2.285318);
   wjetsH598->SetBinError(9,2.390642);
   wjetsH598->SetBinError(10,2.318176);
   wjetsH598->SetBinError(11,2.598388);
   wjetsH598->SetBinError(12,2.877294);
   wjetsH598->SetBinError(13,3.184485);
   wjetsH598->SetBinError(14,3.318051);
   wjetsH598->SetBinError(15,3.214433);
   wjetsH598->SetBinError(16,3.543413);
   wjetsH598->SetBinError(17,3.363885);
   wjetsH598->SetBinError(18,3.986725);
   wjetsH598->SetBinError(19,4.665143);
   wjetsH598->SetEntries(2588);
   wjetsH598->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH598->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH598->SetLineColor(ci);
   wjetsH598->GetXaxis()->SetLabelFont(42);
   wjetsH598->GetXaxis()->SetLabelSize(0.035);
   wjetsH598->GetXaxis()->SetTitleSize(0.035);
   wjetsH598->GetXaxis()->SetTitleFont(42);
   wjetsH598->GetYaxis()->SetLabelFont(42);
   wjetsH598->GetYaxis()->SetLabelSize(0.035);
   wjetsH598->GetYaxis()->SetTitleSize(0.035);
   wjetsH598->GetYaxis()->SetTitleFont(42);
   wjetsH598->GetZaxis()->SetLabelFont(42);
   wjetsH598->GetZaxis()->SetLabelSize(0.035);
   wjetsH598->GetZaxis()->SetTitleSize(0.035);
   wjetsH598->GetZaxis()->SetTitleFont(42);
   CosDeltaPhi->Add(wjetsH5,"");
   CosDeltaPhi->Draw("hist");
   
   TH1D *stopH599 = new TH1D("stopH599","Signal",20,-1.2,1.2);
   stopH599->SetBinContent(2,3.244248);
   stopH599->SetBinContent(3,3.244248);
   stopH599->SetBinContent(4,2.129038);
   stopH599->SetBinContent(5,2.9401);
   stopH599->SetBinContent(6,3.345631);
   stopH599->SetBinContent(7,3.345631);
   stopH599->SetBinContent(8,3.244248);
   stopH599->SetBinContent(9,3.447013);
   stopH599->SetBinContent(10,3.142865);
   stopH599->SetBinContent(11,3.852544);
   stopH599->SetBinContent(12,5.373285);
   stopH599->SetBinContent(13,4.663606);
   stopH599->SetBinContent(14,6.589878);
   stopH599->SetBinContent(15,7.40094);
   stopH599->SetBinContent(16,8.51615);
   stopH599->SetBinContent(17,12.26731);
   stopH599->SetBinContent(18,19.87102);
   stopH599->SetBinContent(19,18.14751);
   stopH599->SetBinError(2,0.5735074);
   stopH599->SetBinError(3,0.5735074);
   stopH599->SetBinError(4,0.4645941);
   stopH599->SetBinError(5,0.5459628);
   stopH599->SetBinError(6,0.5823995);
   stopH599->SetBinError(7,0.5823995);
   stopH599->SetBinError(8,0.5735074);
   stopH599->SetBinError(9,0.5911579);
   stopH599->SetBinError(10,0.5644752);
   stopH599->SetBinError(11,0.6249652);
   stopH599->SetBinError(12,0.7380775);
   stopH599->SetBinError(13,0.6876112);
   stopH599->SetBinError(14,0.8173738);
   stopH599->SetBinError(15,0.8662145);
   stopH599->SetBinError(16,0.9291882);
   stopH599->SetBinError(17,1.11521);
   stopH599->SetBinError(18,1.419358);
   stopH599->SetBinError(19,1.356409);
   stopH599->SetEntries(1132);
   stopH599->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH599->SetLineColor(ci);
   stopH599->GetXaxis()->SetLabelFont(42);
   stopH599->GetXaxis()->SetLabelSize(0.035);
   stopH599->GetXaxis()->SetTitleSize(0.035);
   stopH599->GetXaxis()->SetTitleFont(42);
   stopH599->GetYaxis()->SetLabelFont(42);
   stopH599->GetYaxis()->SetLabelSize(0.035);
   stopH599->GetYaxis()->SetTitleSize(0.035);
   stopH599->GetYaxis()->SetTitleFont(42);
   stopH599->GetZaxis()->SetLabelFont(42);
   stopH599->GetZaxis()->SetLabelSize(0.035);
   stopH599->GetZaxis()->SetTitleSize(0.035);
   stopH599->GetZaxis()->SetTitleFont(42);
   stopH599->Draw("HIST same");
   
   TH1D *dataH5100 = new TH1D("dataH5100","Data",20,-1.2,1.2);
   dataH5100->SetBinContent(2,7);
   dataH5100->SetBinContent(3,11);
   dataH5100->SetBinContent(4,9);
   dataH5100->SetBinContent(5,10);
   dataH5100->SetBinContent(6,13);
   dataH5100->SetBinContent(7,13);
   dataH5100->SetBinContent(8,26);
   dataH5100->SetBinContent(9,25);
   dataH5100->SetBinContent(10,30);
   dataH5100->SetBinContent(11,30);
   dataH5100->SetBinContent(12,38);
   dataH5100->SetBinContent(13,48);
   dataH5100->SetBinContent(14,45);
   dataH5100->SetBinContent(15,57);
   dataH5100->SetBinContent(16,56);
   dataH5100->SetBinContent(17,65);
   dataH5100->SetBinContent(18,92);
   dataH5100->SetBinContent(19,120);
   dataH5100->SetBinError(2,2.645751);
   dataH5100->SetBinError(3,3.316625);
   dataH5100->SetBinError(4,3);
   dataH5100->SetBinError(5,3.162278);
   dataH5100->SetBinError(6,3.605551);
   dataH5100->SetBinError(7,3.605551);
   dataH5100->SetBinError(8,5.09902);
   dataH5100->SetBinError(9,5);
   dataH5100->SetBinError(10,5.477226);
   dataH5100->SetBinError(11,5.477226);
   dataH5100->SetBinError(12,6.164414);
   dataH5100->SetBinError(13,6.928203);
   dataH5100->SetBinError(14,6.708204);
   dataH5100->SetBinError(15,7.549834);
   dataH5100->SetBinError(16,7.483315);
   dataH5100->SetBinError(17,8.062258);
   dataH5100->SetBinError(18,9.591663);
   dataH5100->SetBinError(19,10.95445);
   dataH5100->SetEntries(695);
   dataH5100->SetStats(0);
   dataH5100->GetXaxis()->SetLabelFont(42);
   dataH5100->GetXaxis()->SetLabelSize(0.035);
   dataH5100->GetXaxis()->SetTitleSize(0.035);
   dataH5100->GetXaxis()->SetTitleFont(42);
   dataH5100->GetYaxis()->SetLabelFont(42);
   dataH5100->GetYaxis()->SetLabelSize(0.035);
   dataH5100->GetYaxis()->SetTitleSize(0.035);
   dataH5100->GetYaxis()->SetTitleFont(42);
   dataH5100->GetZaxis()->SetLabelFont(42);
   dataH5100->GetZaxis()->SetLabelSize(0.035);
   dataH5100->GetZaxis()->SetTitleSize(0.035);
   dataH5100->GetZaxis()->SetTitleFont(42);
   dataH5100->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ttbarH5","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH5","wjets","lpf");

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
   entry=leg->AddEntry("stopH5","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH5","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   pt = new TPaveText(0.3370437,0.94,0.6629563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CosDeltaPhi");
   pt->Draw();
   Stop_6_1->Modified();
   Stop_6->cd();
  
// ------------>Primitives in pad: Stop_6_2
   TPad *Stop_6_2 = new TPad("Stop_6_2", "Stop_6_2",0.01,0.01,0.99,0.2);
   Stop_6_2->Draw();
   Stop_6_2->cd();
   Stop_6_2->Range(-1.5,0.375,1.5,1.625);
   Stop_6_2->SetFillColor(0);
   Stop_6_2->SetBorderMode(0);
   Stop_6_2->SetBorderSize(2);
   Stop_6_2->SetFrameBorderMode(0);
   Stop_6_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH5101 = new TH1D("backgroundH5101","",20,-1.2,1.2);
   backgroundH5101->SetMinimum(0.5);
   backgroundH5101->SetMaximum(1.5);
   backgroundH5101->SetEntries(3101);
   backgroundH5101->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH5101->SetLineColor(ci);
   backgroundH5101->GetXaxis()->SetLabelFont(42);
   backgroundH5101->GetXaxis()->SetLabelSize(0.15);
   backgroundH5101->GetXaxis()->SetTitleSize(0.035);
   backgroundH5101->GetXaxis()->SetTitleFont(42);
   backgroundH5101->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH5101->GetYaxis()->SetNdivisions(5);
   backgroundH5101->GetYaxis()->SetLabelFont(42);
   backgroundH5101->GetYaxis()->SetLabelSize(0.15);
   backgroundH5101->GetYaxis()->SetTitleSize(0.15);
   backgroundH5101->GetYaxis()->SetTickLength(0.01);
   backgroundH5101->GetYaxis()->SetTitleOffset(0.35);
   backgroundH5101->GetYaxis()->SetTitleFont(42);
   backgroundH5101->GetZaxis()->SetLabelFont(42);
   backgroundH5101->GetZaxis()->SetLabelSize(0.035);
   backgroundH5101->GetZaxis()->SetTitleSize(0.035);
   backgroundH5101->GetZaxis()->SetTitleFont(42);
   backgroundH5101->Draw("");
   
   Double_t Graph_from_backgroundH5_fx1017[20] = {
   -1.14,
   -1.02,
   -0.9,
   -0.78,
   -0.66,
   -0.54,
   -0.42,
   -0.3,
   -0.18,
   -0.06,
   0.06,
   0.18,
   0.3,
   0.42,
   0.54,
   0.66,
   0.78,
   0.9,
   1.02,
   1.14};
   Double_t Graph_from_backgroundH5_fy1017[20] = {
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
   Double_t Graph_from_backgroundH5_fex1017[20] = {
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06,
   0.06};
   Double_t Graph_from_backgroundH5_fey1017[20] = {
   0,
   0.2908916,
   0.1712665,
   0.1855388,
   0.1811739,
   0.1522047,
   0.1444172,
   0.1297443,
   0.1169364,
   0.1111706,
   0.09521773,
   0.08988083,
   0.07875857,
   0.07695463,
   0.0733695,
   0.06764635,
   0.06461617,
   0.05356474,
   0.04668537,
   0};
   gre = new TGraphErrors(20,Graph_from_backgroundH5_fx1017,Graph_from_backgroundH5_fy1017,Graph_from_backgroundH5_fex1017,Graph_from_backgroundH5_fey1017);
   gre->SetName("Graph_from_backgroundH5");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH510061017 = new TH1F("Graph_Graph_Graph_from_backgroundH510061017","",100,-1.44,1.44);
   Graph_Graph_Graph_from_backgroundH510061017->SetMinimum(0.65093);
   Graph_Graph_Graph_from_backgroundH510061017->SetMaximum(1.34907);
   Graph_Graph_Graph_from_backgroundH510061017->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH510061017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH510061017->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH510061017->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph_from_backgroundH510061017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH510061017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH510061017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH510061017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH510061017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH510061017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH510061017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH510061017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH510061017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH510061017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH510061017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH510061017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH510061017);
   
   gre->Draw("3");
   
   TH1D *ratioH5102 = new TH1D("ratioH5102","",20,-1.2,1.2);
   ratioH5102->SetBinContent(2,2.066206);
   ratioH5102->SetBinContent(3,1.068979);
   ratioH5102->SetBinContent(4,0.9861014);
   ratioH5102->SetBinContent(5,1.045284);
   ratioH5102->SetBinContent(6,0.9275703);
   ratioH5102->SetBinContent(7,0.8432547);
   ratioH5102->SetBinContent(8,1.316406);
   ratioH5102->SetBinContent(9,1.000517);
   ratioH5102->SetBinContent(10,1.155504);
   ratioH5102->SetBinContent(11,0.8866118);
   ratioH5102->SetBinContent(12,1.025101);
   ratioH5102->SetBinContent(13,0.9681271);
   ratioH5102->SetBinContent(14,0.9403066);
   ratioH5102->SetBinContent(15,1.059716);
   ratioH5102->SetBinContent(16,0.9048169);
   ratioH5102->SetBinContent(17,1.040676);
   ratioH5102->SetBinContent(18,0.9771051);
   ratioH5102->SetBinContent(19,0.949669);
   ratioH5102->SetBinError(2,0.9854633);
   ratioH5102->SetBinError(3,0.3706774);
   ratioH5102->SetBinError(4,0.3761893);
   ratioH5102->SetBinError(5,0.3809541);
   ratioH5102->SetBinError(6,0.2934545);
   ratioH5102->SetBinError(7,0.2636832);
   ratioH5102->SetBinError(8,0.3095516);
   ratioH5102->SetBinError(9,0.2317966);
   ratioH5102->SetBinError(10,0.2469976);
   ratioH5102->SetBinError(11,0.182564);
   ratioH5102->SetBinError(12,0.1901123);
   ratioH5102->SetBinError(13,0.1591863);
   ratioH5102->SetBinError(14,0.1577481);
   ratioH5102->SetBinError(15,0.1604585);
   ratioH5102->SetBinError(16,0.1355208);
   ratioH5102->SetBinError(17,0.1455453);
   ratioH5102->SetBinError(18,0.1145288);
   ratioH5102->SetBinError(19,0.09737168);
   ratioH5102->SetEntries(186.4826);
   ratioH5102->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH5102->SetLineColor(ci);
   ratioH5102->GetXaxis()->SetLabelFont(42);
   ratioH5102->GetXaxis()->SetLabelSize(0.035);
   ratioH5102->GetXaxis()->SetTitleSize(0.035);
   ratioH5102->GetXaxis()->SetTitleFont(42);
   ratioH5102->GetYaxis()->SetLabelFont(42);
   ratioH5102->GetYaxis()->SetLabelSize(0.035);
   ratioH5102->GetYaxis()->SetTitleSize(0.035);
   ratioH5102->GetYaxis()->SetTitleFont(42);
   ratioH5102->GetZaxis()->SetLabelFont(42);
   ratioH5102->GetZaxis()->SetLabelSize(0.035);
   ratioH5102->GetZaxis()->SetTitleSize(0.035);
   ratioH5102->GetZaxis()->SetTitleFont(42);
   ratioH5102->Draw("E same");
   line = new TLine(-1.2,1,1.2,1);
   line->Draw();
   Stop_6_2->Modified();
   Stop_6->cd();
   Stop_6->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_7
   TPad *Stop_7 = new TPad("Stop_7", "Stop_7",0.01,0.01,0.1566667,0.49);
   Stop_7->Draw();
   Stop_7->cd();
   Stop_7->Range(0,0,1,1);
   Stop_7->SetFillColor(0);
   Stop_7->SetBorderMode(0);
   Stop_7->SetBorderSize(2);
   Stop_7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_7_1
   TPad *Stop_7_1 = new TPad("Stop_7_1", "Stop_7_1",0.01,0.2,0.99,0.99);
   Stop_7_1->Draw();
   Stop_7_1->cd();
   Stop_7_1->Range(-0.7500001,-21.04742,6.75,189.4268);
   Stop_7_1->SetFillColor(0);
   Stop_7_1->SetBorderMode(0);
   Stop_7_1->SetBorderSize(2);
   Stop_7_1->SetFrameBorderMode(0);
   Stop_7_1->SetFrameBorderMode(0);
   
   DrJet1Lep = new THStack();
   DrJet1Lep->SetName("DrJet1Lep");
   DrJet1Lep->SetTitle("DrJet1Lep;Dr Jet1 Lep;Evt.");
   DrJet1Lep->SetMaximum(160.3613);
   
   TH1F *DrJet1Lep_stack_7_stack_18 = new TH1F("DrJet1Lep_stack_7_stack_18","DrJet1Lep",20,0,6);
   DrJet1Lep_stack_7_stack_18->SetMinimum(0);
   DrJet1Lep_stack_7_stack_18->SetMaximum(168.3794);
   DrJet1Lep_stack_7_stack_18->SetDirectory(0);
   DrJet1Lep_stack_7_stack_18->SetStats(0);

   ci = TColor::GetColor("#000099");
   DrJet1Lep_stack_7_stack_18->SetLineColor(ci);
   DrJet1Lep_stack_7_stack_18->GetXaxis()->SetTitle("Dr Jet1 Lep");
   DrJet1Lep_stack_7_stack_18->GetXaxis()->SetLabelFont(42);
   DrJet1Lep_stack_7_stack_18->GetXaxis()->SetLabelSize(0.035);
   DrJet1Lep_stack_7_stack_18->GetXaxis()->SetTitleSize(0.035);
   DrJet1Lep_stack_7_stack_18->GetXaxis()->SetTitleFont(42);
   DrJet1Lep_stack_7_stack_18->GetYaxis()->SetTitle("Evt.");
   DrJet1Lep_stack_7_stack_18->GetYaxis()->SetLabelFont(42);
   DrJet1Lep_stack_7_stack_18->GetYaxis()->SetLabelSize(0.035);
   DrJet1Lep_stack_7_stack_18->GetYaxis()->SetTitleSize(0.035);
   DrJet1Lep_stack_7_stack_18->GetYaxis()->SetTitleFont(42);
   DrJet1Lep_stack_7_stack_18->GetZaxis()->SetLabelFont(42);
   DrJet1Lep_stack_7_stack_18->GetZaxis()->SetLabelSize(0.035);
   DrJet1Lep_stack_7_stack_18->GetZaxis()->SetTitleSize(0.035);
   DrJet1Lep_stack_7_stack_18->GetZaxis()->SetTitleFont(42);
   DrJet1Lep->SetHistogram(DrJet1Lep_stack_7_stack_18);
   
   
   TH1D *ttbarH6103 = new TH1D("ttbarH6103","ttbar",20,0,6);
   ttbarH6103->SetBinContent(1,1.833007);
   ttbarH6103->SetBinContent(2,1.466405);
   ttbarH6103->SetBinContent(3,2.932811);
   ttbarH6103->SetBinContent(4,19.42987);
   ttbarH6103->SetBinContent(5,12.46445);
   ttbarH6103->SetBinContent(6,8.798433);
   ttbarH6103->SetBinContent(7,37.02674);
   ttbarH6103->SetBinContent(8,36.66014);
   ttbarH6103->SetBinContent(9,17.96347);
   ttbarH6103->SetBinContent(10,10.63144);
   ttbarH6103->SetBinContent(11,15.39726);
   ttbarH6103->SetBinContent(12,8.431832);
   ttbarH6103->SetBinContent(13,2.932811);
   ttbarH6103->SetBinContent(14,2.199608);
   ttbarH6103->SetBinContent(15,0.7332027);
   ttbarH6103->SetBinContent(16,1.099804);
   ttbarH6103->SetBinContent(18,0.3666014);
   ttbarH6103->SetBinError(1,0.8197456);
   ttbarH6103->SetBinError(2,0.7332027);
   ttbarH6103->SetBinError(3,1.036905);
   ttbarH6103->SetBinError(4,2.668898);
   ttbarH6103->SetBinError(5,2.137635);
   ttbarH6103->SetBinError(6,1.795973);
   ttbarH6103->SetBinError(7,3.684298);
   ttbarH6103->SetBinError(8,3.666014);
   ttbarH6103->SetBinError(9,2.56621);
   ttbarH6103->SetBinError(10,1.974209);
   ttbarH6103->SetBinError(11,2.375848);
   ttbarH6103->SetBinError(12,1.758158);
   ttbarH6103->SetBinError(13,1.036905);
   ttbarH6103->SetBinError(14,0.8979863);
   ttbarH6103->SetBinError(15,0.5184526);
   ttbarH6103->SetBinError(16,0.6349722);
   ttbarH6103->SetBinError(18,0.3666014);
   ttbarH6103->SetEntries(492);
   ttbarH6103->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH6103->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH6103->SetLineColor(ci);
   ttbarH6103->GetXaxis()->SetLabelFont(42);
   ttbarH6103->GetXaxis()->SetLabelSize(0.035);
   ttbarH6103->GetXaxis()->SetTitleSize(0.035);
   ttbarH6103->GetXaxis()->SetTitleFont(42);
   ttbarH6103->GetYaxis()->SetLabelFont(42);
   ttbarH6103->GetYaxis()->SetLabelSize(0.035);
   ttbarH6103->GetYaxis()->SetTitleSize(0.035);
   ttbarH6103->GetYaxis()->SetTitleFont(42);
   ttbarH6103->GetZaxis()->SetLabelFont(42);
   ttbarH6103->GetZaxis()->SetLabelSize(0.035);
   ttbarH6103->GetZaxis()->SetTitleSize(0.035);
   ttbarH6103->GetZaxis()->SetTitleFont(42);
   DrJet1Lep->Add(ttbarH6,"");
   
   TH1D *wjetsH6104 = new TH1D("wjetsH6104","wjets",20,0,6);
   wjetsH6104->SetBinContent(1,3.909356);
   wjetsH6104->SetBinContent(2,5.098565);
   wjetsH6104->SetBinContent(3,5.04232);
   wjetsH6104->SetBinContent(4,71.47931);
   wjetsH6104->SetBinContent(5,39.42571);
   wjetsH6104->SetBinContent(6,18.26532);
   wjetsH6104->SetBinContent(7,115.6983);
   wjetsH6104->SetBinContent(8,102.6225);
   wjetsH6104->SetBinContent(9,47.01136);
   wjetsH6104->SetBinContent(10,24.88572);
   wjetsH6104->SetBinContent(11,49.86888);
   wjetsH6104->SetBinContent(12,18.72346);
   wjetsH6104->SetBinContent(13,8.815256);
   wjetsH6104->SetBinContent(14,3.989533);
   wjetsH6104->SetBinContent(15,1.980214);
   wjetsH6104->SetBinContent(16,1.222238);
   wjetsH6104->SetBinContent(17,0.7560141);
   wjetsH6104->SetBinContent(18,0.3389002);
   wjetsH6104->SetBinError(1,1.021166);
   wjetsH6104->SetBinError(2,1.331902);
   wjetsH6104->SetBinError(3,1.142448);
   wjetsH6104->SetBinError(4,4.659417);
   wjetsH6104->SetBinError(5,3.485028);
   wjetsH6104->SetBinError(6,2.270977);
   wjetsH6104->SetBinError(7,5.400578);
   wjetsH6104->SetBinError(8,5.053509);
   wjetsH6104->SetBinError(9,3.394335);
   wjetsH6104->SetBinError(10,2.502821);
   wjetsH6104->SetBinError(11,3.543051);
   wjetsH6104->SetBinError(12,2.119461);
   wjetsH6104->SetBinError(13,1.410191);
   wjetsH6104->SetBinError(14,0.9660929);
   wjetsH6104->SetBinError(15,0.6371613);
   wjetsH6104->SetBinError(16,0.6329024);
   wjetsH6104->SetBinError(17,0.4810516);
   wjetsH6104->SetBinError(18,0.2396387);
   wjetsH6104->SetEntries(2588);
   wjetsH6104->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH6104->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH6104->SetLineColor(ci);
   wjetsH6104->GetXaxis()->SetLabelFont(42);
   wjetsH6104->GetXaxis()->SetLabelSize(0.035);
   wjetsH6104->GetXaxis()->SetTitleSize(0.035);
   wjetsH6104->GetXaxis()->SetTitleFont(42);
   wjetsH6104->GetYaxis()->SetLabelFont(42);
   wjetsH6104->GetYaxis()->SetLabelSize(0.035);
   wjetsH6104->GetYaxis()->SetTitleSize(0.035);
   wjetsH6104->GetYaxis()->SetTitleFont(42);
   wjetsH6104->GetZaxis()->SetLabelFont(42);
   wjetsH6104->GetZaxis()->SetLabelSize(0.035);
   wjetsH6104->GetZaxis()->SetTitleSize(0.035);
   wjetsH6104->GetZaxis()->SetTitleFont(42);
   DrJet1Lep->Add(wjetsH6,"");
   DrJet1Lep->Draw("hist");
   
   TH1D *stopH6105 = new TH1D("stopH6105","Signal",20,0,6);
   stopH6105->SetBinContent(1,1.11521);
   stopH6105->SetBinContent(2,0.9124447);
   stopH6105->SetBinContent(3,1.926272);
   stopH6105->SetBinContent(4,14.49773);
   stopH6105->SetBinContent(5,6.082965);
   stopH6105->SetBinContent(6,5.576051);
   stopH6105->SetBinContent(7,23.21665);
   stopH6105->SetBinContent(8,19.87102);
   stopH6105->SetBinContent(9,11.45625);
   stopH6105->SetBinContent(10,8.820299);
   stopH6105->SetBinContent(11,12.36869);
   stopH6105->SetBinContent(12,4.05531);
   stopH6105->SetBinContent(13,2.737334);
   stopH6105->SetBinContent(14,0.8110619);
   stopH6105->SetBinContent(15,0.9124447);
   stopH6105->SetBinContent(16,0.3041482);
   stopH6105->SetBinContent(19,0.1013827);
   stopH6105->SetBinError(1,0.3362485);
   stopH6105->SetBinError(2,0.3041482);
   stopH6105->SetBinError(3,0.4419171);
   stopH6105->SetBinError(4,1.212361);
   stopH6105->SetBinError(5,0.7853074);
   stopH6105->SetBinError(6,0.7518746);
   stopH6105->SetBinError(7,1.534199);
   stopH6105->SetBinError(8,1.419358);
   stopH6105->SetBinError(9,1.077713);
   stopH6105->SetBinError(10,0.9456353);
   stopH6105->SetBinError(11,1.119809);
   stopH6105->SetBinError(12,0.6412008);
   stopH6105->SetBinError(13,0.5268002);
   stopH6105->SetBinError(14,0.2867537);
   stopH6105->SetBinError(15,0.3041482);
   stopH6105->SetBinError(16,0.1756001);
   stopH6105->SetBinError(19,0.1013827);
   stopH6105->SetEntries(1132);
   stopH6105->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH6105->SetLineColor(ci);
   stopH6105->GetXaxis()->SetLabelFont(42);
   stopH6105->GetXaxis()->SetLabelSize(0.035);
   stopH6105->GetXaxis()->SetTitleSize(0.035);
   stopH6105->GetXaxis()->SetTitleFont(42);
   stopH6105->GetYaxis()->SetLabelFont(42);
   stopH6105->GetYaxis()->SetLabelSize(0.035);
   stopH6105->GetYaxis()->SetTitleSize(0.035);
   stopH6105->GetYaxis()->SetTitleFont(42);
   stopH6105->GetZaxis()->SetLabelFont(42);
   stopH6105->GetZaxis()->SetLabelSize(0.035);
   stopH6105->GetZaxis()->SetTitleSize(0.035);
   stopH6105->GetZaxis()->SetTitleFont(42);
   stopH6105->Draw("HIST same");
   
   TH1D *dataH6106 = new TH1D("dataH6106","Data",20,0,6);
   dataH6106->SetBinContent(1,7);
   dataH6106->SetBinContent(2,7);
   dataH6106->SetBinContent(3,8);
   dataH6106->SetBinContent(4,96);
   dataH6106->SetBinContent(5,46);
   dataH6106->SetBinContent(6,29);
   dataH6106->SetBinContent(7,148);
   dataH6106->SetBinContent(8,135);
   dataH6106->SetBinContent(9,61);
   dataH6106->SetBinContent(10,48);
   dataH6106->SetBinContent(11,58);
   dataH6106->SetBinContent(12,30);
   dataH6106->SetBinContent(13,12);
   dataH6106->SetBinContent(14,2);
   dataH6106->SetBinContent(15,4);
   dataH6106->SetBinContent(16,1);
   dataH6106->SetBinContent(17,1);
   dataH6106->SetBinContent(18,2);
   dataH6106->SetBinError(1,2.645751);
   dataH6106->SetBinError(2,2.645751);
   dataH6106->SetBinError(3,2.828427);
   dataH6106->SetBinError(4,9.797959);
   dataH6106->SetBinError(5,6.78233);
   dataH6106->SetBinError(6,5.385165);
   dataH6106->SetBinError(7,12.16553);
   dataH6106->SetBinError(8,11.61895);
   dataH6106->SetBinError(9,7.81025);
   dataH6106->SetBinError(10,6.928203);
   dataH6106->SetBinError(11,7.615773);
   dataH6106->SetBinError(12,5.477226);
   dataH6106->SetBinError(13,3.464102);
   dataH6106->SetBinError(14,1.414214);
   dataH6106->SetBinError(15,2);
   dataH6106->SetBinError(16,1);
   dataH6106->SetBinError(17,1);
   dataH6106->SetBinError(18,1.414214);
   dataH6106->SetEntries(695);
   dataH6106->SetStats(0);
   dataH6106->GetXaxis()->SetLabelFont(42);
   dataH6106->GetXaxis()->SetLabelSize(0.035);
   dataH6106->GetXaxis()->SetTitleSize(0.035);
   dataH6106->GetXaxis()->SetTitleFont(42);
   dataH6106->GetYaxis()->SetLabelFont(42);
   dataH6106->GetYaxis()->SetLabelSize(0.035);
   dataH6106->GetYaxis()->SetTitleSize(0.035);
   dataH6106->GetYaxis()->SetTitleFont(42);
   dataH6106->GetZaxis()->SetLabelFont(42);
   dataH6106->GetZaxis()->SetLabelSize(0.035);
   dataH6106->GetZaxis()->SetTitleSize(0.035);
   dataH6106->GetZaxis()->SetTitleFont(42);
   dataH6106->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
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
   
   pt = new TPaveText(0.3588946,0.94,0.6411054,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("DrJet1Lep");
   pt->Draw();
   Stop_7_1->Modified();
   Stop_7->cd();
  
// ------------>Primitives in pad: Stop_7_2
   TPad *Stop_7_2 = new TPad("Stop_7_2", "Stop_7_2",0.01,0.01,0.99,0.2);
   Stop_7_2->Draw();
   Stop_7_2->cd();
   Stop_7_2->Range(-0.7500001,0.375,6.75,1.625);
   Stop_7_2->SetFillColor(0);
   Stop_7_2->SetBorderMode(0);
   Stop_7_2->SetBorderSize(2);
   Stop_7_2->SetFrameBorderMode(0);
   Stop_7_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH6107 = new TH1D("backgroundH6107","",20,0,6);
   backgroundH6107->SetMinimum(0.5);
   backgroundH6107->SetMaximum(1.5);
   backgroundH6107->SetEntries(3101);
   backgroundH6107->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH6107->SetLineColor(ci);
   backgroundH6107->GetXaxis()->SetLabelFont(42);
   backgroundH6107->GetXaxis()->SetLabelSize(0.15);
   backgroundH6107->GetXaxis()->SetTitleSize(0.035);
   backgroundH6107->GetXaxis()->SetTitleFont(42);
   backgroundH6107->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH6107->GetYaxis()->SetNdivisions(5);
   backgroundH6107->GetYaxis()->SetLabelFont(42);
   backgroundH6107->GetYaxis()->SetLabelSize(0.15);
   backgroundH6107->GetYaxis()->SetTitleSize(0.15);
   backgroundH6107->GetYaxis()->SetTickLength(0.01);
   backgroundH6107->GetYaxis()->SetTitleOffset(0.35);
   backgroundH6107->GetYaxis()->SetTitleFont(42);
   backgroundH6107->GetZaxis()->SetLabelFont(42);
   backgroundH6107->GetZaxis()->SetLabelSize(0.035);
   backgroundH6107->GetZaxis()->SetTitleSize(0.035);
   backgroundH6107->GetZaxis()->SetTitleFont(42);
   backgroundH6107->Draw("");
   
   Double_t Graph_from_backgroundH6_fx1018[20] = {
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
   Double_t Graph_from_backgroundH6_fy1018[20] = {
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
   Double_t Graph_from_backgroundH6_fex1018[20] = {
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
   Double_t Graph_from_backgroundH6_fey1018[20] = {
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
   gre = new TGraphErrors(20,Graph_from_backgroundH6_fx1018,Graph_from_backgroundH6_fy1018,Graph_from_backgroundH6_fex1018,Graph_from_backgroundH6_fey1018);
   gre->SetName("Graph_from_backgroundH6");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH610071018 = new TH1F("Graph_Graph_Graph_from_backgroundH610071018","",100,0,6.6);
   Graph_Graph_Graph_from_backgroundH610071018->SetMinimum(0.2364402);
   Graph_Graph_Graph_from_backgroundH610071018->SetMaximum(1.76356);
   Graph_Graph_Graph_from_backgroundH610071018->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH610071018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH610071018->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH610071018->GetXaxis()->SetRange(1,91);
   Graph_Graph_Graph_from_backgroundH610071018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH610071018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH610071018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH610071018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH610071018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH610071018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH610071018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH610071018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH610071018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH610071018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH610071018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH610071018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH610071018);
   
   gre->Draw("3");
   
   TH1D *ratioH6108 = new TH1D("ratioH6108","",20,0,6);
   ratioH6108->SetBinContent(1,1.21901);
   ratioH6108->SetBinContent(2,1.066265);
   ratioH6108->SetBinContent(3,1.003118);
   ratioH6108->SetBinContent(4,1.055999);
   ratioH6108->SetBinContent(5,0.886488);
   ratioH6108->SetBinContent(6,1.071544);
   ratioH6108->SetBinContent(7,0.9690618);
   ratioH6108->SetBinContent(8,0.9692523);
   ratioH6108->SetBinContent(9,0.9388251);
   ratioH6108->SetBinContent(10,1.351459);
   ratioH6108->SetBinContent(11,0.8886692);
   ratioH6108->SetBinContent(12,1.104757);
   ratioH6108->SetBinContent(13,1.021445);
   ratioH6108->SetBinContent(14,0.3231466);
   ratioH6108->SetBinContent(15,1.474156);
   ratioH6108->SetBinContent(16,0.4306555);
   ratioH6108->SetBinContent(17,1.322727);
   ratioH6108->SetBinContent(18,2.834862);
   ratioH6108->SetBinError(1,0.5381064);
   ratioH6108->SetBinError(2,0.4726464);
   ratioH6108->SetBinError(3,0.4042771);
   ratioH6108->SetBinError(4,0.124525);
   ratioH6108->SetBinError(5,0.148197);
   ratioH6108->SetBinError(6,0.2296401);
   ratioH6108->SetBinError(7,0.08981035);
   ratioH6108->SetBinError(8,0.09405543);
   ratioH6108->SetBinError(9,0.1350161);
   ratioH6108->SetBinError(10,0.2297032);
   ratioH6108->SetBinError(11,0.1303454);
   ratioH6108->SetBinError(12,0.2307248);
   ratioH6108->SetBinError(13,0.3318235);
   ratioH6108->SetBinError(14,0.2386514);
   ratioH6108->SetBinError(15,0.8616534);
   ratioH6108->SetBinError(16,0.4616393);
   ratioH6108->SetBinError(17,1.567795);
   ratioH6108->SetBinError(18,2.667475);
   ratioH6108->SetEntries(34.18561);
   ratioH6108->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH6108->SetLineColor(ci);
   ratioH6108->GetXaxis()->SetLabelFont(42);
   ratioH6108->GetXaxis()->SetLabelSize(0.035);
   ratioH6108->GetXaxis()->SetTitleSize(0.035);
   ratioH6108->GetXaxis()->SetTitleFont(42);
   ratioH6108->GetYaxis()->SetLabelFont(42);
   ratioH6108->GetYaxis()->SetLabelSize(0.035);
   ratioH6108->GetYaxis()->SetTitleSize(0.035);
   ratioH6108->GetYaxis()->SetTitleFont(42);
   ratioH6108->GetZaxis()->SetLabelFont(42);
   ratioH6108->GetZaxis()->SetLabelSize(0.035);
   ratioH6108->GetZaxis()->SetTitleSize(0.035);
   ratioH6108->GetZaxis()->SetTitleFont(42);
   ratioH6108->Draw("E same");
   line = new TLine(0,1,6,1);
   line->Draw();
   Stop_7_2->Modified();
   Stop_7->cd();
   Stop_7->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_8
   TPad *Stop_8 = new TPad("Stop_8", "Stop_8",0.1766667,0.01,0.3233333,0.49);
   Stop_8->Draw();
   Stop_8->cd();
   Stop_8->Range(0,0,1,1);
   Stop_8->SetFillColor(0);
   Stop_8->SetBorderMode(0);
   Stop_8->SetBorderSize(2);
   Stop_8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_8_1
   TPad *Stop_8_1 = new TPad("Stop_8_1", "Stop_8_1",0.01,0.2,0.99,0.99);
   Stop_8_1->Draw();
   Stop_8_1->cd();
   Stop_8_1->Range(-0.7500001,-20.53406,6.75,184.8066);
   Stop_8_1->SetFillColor(0);
   Stop_8_1->SetBorderMode(0);
   Stop_8_1->SetBorderSize(2);
   Stop_8_1->SetFrameBorderMode(0);
   Stop_8_1->SetFrameBorderMode(0);
   
   DrJet2Lep = new THStack();
   DrJet2Lep->SetName("DrJet2Lep");
   DrJet2Lep->SetTitle("DrJet2Lep;Dr Jet2 Lep;Evt.");
   DrJet2Lep->SetMaximum(156.45);
   
   TH1F *DrJet2Lep_stack_8_stack_19 = new TH1F("DrJet2Lep_stack_8_stack_19","DrJet2Lep",20,0,6);
   DrJet2Lep_stack_8_stack_19->SetMinimum(0);
   DrJet2Lep_stack_8_stack_19->SetMaximum(164.2725);
   DrJet2Lep_stack_8_stack_19->SetDirectory(0);
   DrJet2Lep_stack_8_stack_19->SetStats(0);

   ci = TColor::GetColor("#000099");
   DrJet2Lep_stack_8_stack_19->SetLineColor(ci);
   DrJet2Lep_stack_8_stack_19->GetXaxis()->SetTitle("Dr Jet2 Lep");
   DrJet2Lep_stack_8_stack_19->GetXaxis()->SetLabelFont(42);
   DrJet2Lep_stack_8_stack_19->GetXaxis()->SetLabelSize(0.035);
   DrJet2Lep_stack_8_stack_19->GetXaxis()->SetTitleSize(0.035);
   DrJet2Lep_stack_8_stack_19->GetXaxis()->SetTitleFont(42);
   DrJet2Lep_stack_8_stack_19->GetYaxis()->SetTitle("Evt.");
   DrJet2Lep_stack_8_stack_19->GetYaxis()->SetLabelFont(42);
   DrJet2Lep_stack_8_stack_19->GetYaxis()->SetLabelSize(0.035);
   DrJet2Lep_stack_8_stack_19->GetYaxis()->SetTitleSize(0.035);
   DrJet2Lep_stack_8_stack_19->GetYaxis()->SetTitleFont(42);
   DrJet2Lep_stack_8_stack_19->GetZaxis()->SetLabelFont(42);
   DrJet2Lep_stack_8_stack_19->GetZaxis()->SetLabelSize(0.035);
   DrJet2Lep_stack_8_stack_19->GetZaxis()->SetTitleSize(0.035);
   DrJet2Lep_stack_8_stack_19->GetZaxis()->SetTitleFont(42);
   DrJet2Lep->SetHistogram(DrJet2Lep_stack_8_stack_19);
   
   
   TH1D *ttbarH7109 = new TH1D("ttbarH7109","ttbar",20,0,6);
   ttbarH7109->SetBinContent(1,4.032615);
   ttbarH7109->SetBinContent(2,2.932811);
   ttbarH7109->SetBinContent(3,6.232223);
   ttbarH7109->SetBinContent(4,28.22831);
   ttbarH7109->SetBinContent(5,19.06327);
   ttbarH7109->SetBinContent(6,10.26484);
   ttbarH7109->SetBinContent(7,33.72733);
   ttbarH7109->SetBinContent(8,26.7619);
   ttbarH7109->SetBinContent(9,15.39726);
   ttbarH7109->SetBinContent(10,8.431832);
   ttbarH7109->SetBinContent(11,12.83105);
   ttbarH7109->SetBinContent(12,7.332027);
   ttbarH7109->SetBinContent(13,2.199608);
   ttbarH7109->SetBinContent(14,1.466405);
   ttbarH7109->SetBinContent(15,1.466405);
   ttbarH7109->SetBinError(1,1.215879);
   ttbarH7109->SetBinError(2,1.036905);
   ttbarH7109->SetBinError(3,1.511536);
   ttbarH7109->SetBinError(4,3.216914);
   ttbarH7109->SetBinError(5,2.6436);
   ttbarH7109->SetBinError(6,1.939872);
   ttbarH7109->SetBinError(7,3.516317);
   ttbarH7109->SetBinError(8,3.132244);
   ttbarH7109->SetBinError(9,2.375848);
   ttbarH7109->SetBinError(10,1.758158);
   ttbarH7109->SetBinError(11,2.168843);
   ttbarH7109->SetBinError(12,1.639491);
   ttbarH7109->SetBinError(13,0.8979863);
   ttbarH7109->SetBinError(14,0.7332027);
   ttbarH7109->SetBinError(15,0.7332027);
   ttbarH7109->SetEntries(492);
   ttbarH7109->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH7109->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH7109->SetLineColor(ci);
   ttbarH7109->GetXaxis()->SetLabelFont(42);
   ttbarH7109->GetXaxis()->SetLabelSize(0.035);
   ttbarH7109->GetXaxis()->SetTitleSize(0.035);
   ttbarH7109->GetXaxis()->SetTitleFont(42);
   ttbarH7109->GetYaxis()->SetLabelFont(42);
   ttbarH7109->GetYaxis()->SetLabelSize(0.035);
   ttbarH7109->GetYaxis()->SetTitleSize(0.035);
   ttbarH7109->GetYaxis()->SetTitleFont(42);
   ttbarH7109->GetZaxis()->SetLabelFont(42);
   ttbarH7109->GetZaxis()->SetLabelSize(0.035);
   ttbarH7109->GetZaxis()->SetTitleSize(0.035);
   ttbarH7109->GetZaxis()->SetTitleFont(42);
   DrJet2Lep->Add(ttbarH7,"");
   
   TH1D *wjetsH7110 = new TH1D("wjetsH7110","wjets",20,0,6);
   wjetsH7110->SetBinContent(1,6.674537);
   wjetsH7110->SetBinContent(2,16.83041);
   wjetsH7110->SetBinContent(3,13.73708);
   wjetsH7110->SetBinContent(4,80.04372);
   wjetsH7110->SetBinContent(5,57.03482);
   wjetsH7110->SetBinContent(6,40.22653);
   wjetsH7110->SetBinContent(7,108.3252);
   wjetsH7110->SetBinContent(8,72.93198);
   wjetsH7110->SetBinContent(9,37.16182);
   wjetsH7110->SetBinContent(10,24.53709);
   wjetsH7110->SetBinContent(11,29.89015);
   wjetsH7110->SetBinContent(12,11.19665);
   wjetsH7110->SetBinContent(13,9.852114);
   wjetsH7110->SetBinContent(14,5.994441);
   wjetsH7110->SetBinContent(15,2.499625);
   wjetsH7110->SetBinContent(16,0.9454702);
   wjetsH7110->SetBinContent(17,1.251342);
   wjetsH7110->SetBinError(1,1.185805);
   wjetsH7110->SetBinError(2,2.013673);
   wjetsH7110->SetBinError(3,1.692591);
   wjetsH7110->SetBinError(4,4.609769);
   wjetsH7110->SetBinError(5,3.834304);
   wjetsH7110->SetBinError(6,3.269588);
   wjetsH7110->SetBinError(7,5.5435);
   wjetsH7110->SetBinError(8,4.295707);
   wjetsH7110->SetBinError(9,3.132616);
   wjetsH7110->SetBinError(10,2.527676);
   wjetsH7110->SetBinError(11,2.826861);
   wjetsH7110->SetBinError(12,1.624262);
   wjetsH7110->SetBinError(13,1.558884);
   wjetsH7110->SetBinError(14,1.450657);
   wjetsH7110->SetBinError(15,0.7167391);
   wjetsH7110->SetBinError(16,0.3659351);
   wjetsH7110->SetBinError(17,0.7224624);
   wjetsH7110->SetEntries(2588);
   wjetsH7110->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH7110->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH7110->SetLineColor(ci);
   wjetsH7110->GetXaxis()->SetLabelFont(42);
   wjetsH7110->GetXaxis()->SetLabelSize(0.035);
   wjetsH7110->GetXaxis()->SetTitleSize(0.035);
   wjetsH7110->GetXaxis()->SetTitleFont(42);
   wjetsH7110->GetYaxis()->SetLabelFont(42);
   wjetsH7110->GetYaxis()->SetLabelSize(0.035);
   wjetsH7110->GetYaxis()->SetTitleSize(0.035);
   wjetsH7110->GetYaxis()->SetTitleFont(42);
   wjetsH7110->GetZaxis()->SetLabelFont(42);
   wjetsH7110->GetZaxis()->SetLabelSize(0.035);
   wjetsH7110->GetZaxis()->SetTitleSize(0.035);
   wjetsH7110->GetZaxis()->SetTitleFont(42);
   DrJet2Lep->Add(wjetsH7,"");
   DrJet2Lep->Draw("hist");
   
   TH1D *stopH7111 = new TH1D("stopH7111","Signal",20,0,6);
   stopH7111->SetBinContent(1,2.838717);
   stopH7111->SetBinContent(2,3.548396);
   stopH7111->SetBinContent(3,4.460841);
   stopH7111->SetBinContent(4,14.80188);
   stopH7111->SetBinContent(5,10.23966);
   stopH7111->SetBinContent(6,8.110619);
   stopH7111->SetBinContent(7,19.56687);
   stopH7111->SetBinContent(8,18.35028);
   stopH7111->SetBinContent(9,9.732743);
   stopH7111->SetBinContent(10,6.995409);
   stopH7111->SetBinContent(11,8.414768);
   stopH7111->SetBinContent(12,2.9401);
   stopH7111->SetBinContent(13,2.534569);
   stopH7111->SetBinContent(14,1.317976);
   stopH7111->SetBinContent(15,0.7096792);
   stopH7111->SetBinContent(16,0.1013827);
   stopH7111->SetBinContent(17,0.1013827);
   stopH7111->SetBinError(1,0.5364671);
   stopH7111->SetBinError(2,0.5997884);
   stopH7111->SetBinError(3,0.672497);
   stopH7111->SetBinError(4,1.225012);
   stopH7111->SetBinError(5,1.018884);
   stopH7111->SetBinError(6,0.9067948);
   stopH7111->SetBinError(7,1.408454);
   stopH7111->SetBinError(8,1.363965);
   stopH7111->SetBinError(9,0.993344);
   stopH7111->SetBinError(10,0.8421483);
   stopH7111->SetBinError(11,0.9236408);
   stopH7111->SetBinError(12,0.5459628);
   stopH7111->SetBinError(13,0.5069137);
   stopH7111->SetBinError(14,0.3655407);
   stopH7111->SetBinError(15,0.2682335);
   stopH7111->SetBinError(16,0.1013827);
   stopH7111->SetBinError(17,0.1013827);
   stopH7111->SetEntries(1132);
   stopH7111->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH7111->SetLineColor(ci);
   stopH7111->GetXaxis()->SetLabelFont(42);
   stopH7111->GetXaxis()->SetLabelSize(0.035);
   stopH7111->GetXaxis()->SetTitleSize(0.035);
   stopH7111->GetXaxis()->SetTitleFont(42);
   stopH7111->GetYaxis()->SetLabelFont(42);
   stopH7111->GetYaxis()->SetLabelSize(0.035);
   stopH7111->GetYaxis()->SetTitleSize(0.035);
   stopH7111->GetYaxis()->SetTitleFont(42);
   stopH7111->GetZaxis()->SetLabelFont(42);
   stopH7111->GetZaxis()->SetLabelSize(0.035);
   stopH7111->GetZaxis()->SetTitleSize(0.035);
   stopH7111->GetZaxis()->SetTitleFont(42);
   stopH7111->Draw("HIST same");
   
   TH1D *dataH7112 = new TH1D("dataH7112","Data",20,0,6);
   dataH7112->SetBinContent(1,12);
   dataH7112->SetBinContent(2,22);
   dataH7112->SetBinContent(3,28);
   dataH7112->SetBinContent(4,104);
   dataH7112->SetBinContent(5,63);
   dataH7112->SetBinContent(6,44);
   dataH7112->SetBinContent(7,149);
   dataH7112->SetBinContent(8,99);
   dataH7112->SetBinContent(9,44);
   dataH7112->SetBinContent(10,26);
   dataH7112->SetBinContent(11,50);
   dataH7112->SetBinContent(12,24);
   dataH7112->SetBinContent(13,14);
   dataH7112->SetBinContent(14,6);
   dataH7112->SetBinContent(15,7);
   dataH7112->SetBinContent(16,2);
   dataH7112->SetBinContent(17,1);
   dataH7112->SetBinError(1,3.464102);
   dataH7112->SetBinError(2,4.690416);
   dataH7112->SetBinError(3,5.291503);
   dataH7112->SetBinError(4,10.19804);
   dataH7112->SetBinError(5,7.937254);
   dataH7112->SetBinError(6,6.63325);
   dataH7112->SetBinError(7,12.20656);
   dataH7112->SetBinError(8,9.949874);
   dataH7112->SetBinError(9,6.63325);
   dataH7112->SetBinError(10,5.09902);
   dataH7112->SetBinError(11,7.071068);
   dataH7112->SetBinError(12,4.898979);
   dataH7112->SetBinError(13,3.741657);
   dataH7112->SetBinError(14,2.44949);
   dataH7112->SetBinError(15,2.645751);
   dataH7112->SetBinError(16,1.414214);
   dataH7112->SetBinError(17,1);
   dataH7112->SetEntries(695);
   dataH7112->SetStats(0);
   dataH7112->GetXaxis()->SetLabelFont(42);
   dataH7112->GetXaxis()->SetLabelSize(0.035);
   dataH7112->GetXaxis()->SetTitleSize(0.035);
   dataH7112->GetXaxis()->SetTitleFont(42);
   dataH7112->GetYaxis()->SetLabelFont(42);
   dataH7112->GetYaxis()->SetLabelSize(0.035);
   dataH7112->GetYaxis()->SetTitleSize(0.035);
   dataH7112->GetYaxis()->SetTitleFont(42);
   dataH7112->GetZaxis()->SetLabelFont(42);
   dataH7112->GetZaxis()->SetLabelSize(0.035);
   dataH7112->GetZaxis()->SetTitleSize(0.035);
   dataH7112->GetZaxis()->SetTitleFont(42);
   dataH7112->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
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
   
   pt = new TPaveText(0.3588946,0.94,0.6411054,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("DrJet2Lep");
   pt->Draw();
   Stop_8_1->Modified();
   Stop_8->cd();
  
// ------------>Primitives in pad: Stop_8_2
   TPad *Stop_8_2 = new TPad("Stop_8_2", "Stop_8_2",0.01,0.01,0.99,0.2);
   Stop_8_2->Draw();
   Stop_8_2->cd();
   Stop_8_2->Range(-0.7500001,0.375,6.75,1.625);
   Stop_8_2->SetFillColor(0);
   Stop_8_2->SetBorderMode(0);
   Stop_8_2->SetBorderSize(2);
   Stop_8_2->SetFrameBorderMode(0);
   Stop_8_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH7113 = new TH1D("backgroundH7113","",20,0,6);
   backgroundH7113->SetMinimum(0.5);
   backgroundH7113->SetMaximum(1.5);
   backgroundH7113->SetEntries(3101);
   backgroundH7113->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH7113->SetLineColor(ci);
   backgroundH7113->GetXaxis()->SetLabelFont(42);
   backgroundH7113->GetXaxis()->SetLabelSize(0.15);
   backgroundH7113->GetXaxis()->SetTitleSize(0.035);
   backgroundH7113->GetXaxis()->SetTitleFont(42);
   backgroundH7113->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH7113->GetYaxis()->SetNdivisions(5);
   backgroundH7113->GetYaxis()->SetLabelFont(42);
   backgroundH7113->GetYaxis()->SetLabelSize(0.15);
   backgroundH7113->GetYaxis()->SetTitleSize(0.15);
   backgroundH7113->GetYaxis()->SetTickLength(0.01);
   backgroundH7113->GetYaxis()->SetTitleOffset(0.35);
   backgroundH7113->GetYaxis()->SetTitleFont(42);
   backgroundH7113->GetZaxis()->SetLabelFont(42);
   backgroundH7113->GetZaxis()->SetLabelSize(0.035);
   backgroundH7113->GetZaxis()->SetTitleSize(0.035);
   backgroundH7113->GetZaxis()->SetTitleFont(42);
   backgroundH7113->Draw("");
   
   Double_t Graph_from_backgroundH7_fx1019[20] = {
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
   Double_t Graph_from_backgroundH7_fy1019[20] = {
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
   Double_t Graph_from_backgroundH7_fex1019[20] = {
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
   Double_t Graph_from_backgroundH7_fey1019[20] = {
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
   gre = new TGraphErrors(20,Graph_from_backgroundH7_fx1019,Graph_from_backgroundH7_fy1019,Graph_from_backgroundH7_fex1019,Graph_from_backgroundH7_fey1019);
   gre->SetName("Graph_from_backgroundH7");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH710081019 = new TH1F("Graph_Graph_Graph_from_backgroundH710081019","",100,0,6.6);
   Graph_Graph_Graph_from_backgroundH710081019->SetMinimum(0.3071797);
   Graph_Graph_Graph_from_backgroundH710081019->SetMaximum(1.69282);
   Graph_Graph_Graph_from_backgroundH710081019->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH710081019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH710081019->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH710081019->GetXaxis()->SetRange(1,91);
   Graph_Graph_Graph_from_backgroundH710081019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH710081019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH710081019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH710081019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH710081019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH710081019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH710081019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH710081019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH710081019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH710081019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH710081019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH710081019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH710081019);
   
   gre->Draw("3");
   
   TH1D *ratioH7114 = new TH1D("ratioH7114","",20,0,6);
   ratioH7114->SetBinContent(1,1.120746);
   ratioH7114->SetBinContent(2,1.113179);
   ratioH7114->SetBinContent(3,1.402152);
   ratioH7114->SetBinContent(4,0.9605436);
   ratioH7114->SetBinContent(5,0.8278789);
   ratioH7114->SetBinContent(6,0.8714361);
   ratioH7114->SetBinContent(7,1.048908);
   ratioH7114->SetBinContent(8,0.9930398);
   ratioH7114->SetBinContent(9,0.8371531);
   ratioH7114->SetBinContent(10,0.7886216);
   ratioH7114->SetBinContent(11,1.170379);
   ratioH7114->SetBinContent(12,1.295289);
   ratioH7114->SetBinContent(13,1.16166);
   ratioH7114->SetBinContent(14,0.8041982);
   ratioH7114->SetBinContent(15,1.764989);
   ratioH7114->SetBinContent(16,2.115349);
   ratioH7114->SetBinContent(17,0.7991423);
   ratioH7114->SetBinError(1,0.3691562);
   ratioH7114->SetBinError(2,0.2694464);
   ratioH7114->SetBinError(3,0.3091988);
   ratioH7114->SetBinError(4,0.1065764);
   ratioH7114->SetBinError(5,0.1159581);
   ratioH7114->SetBinError(6,0.1468483);
   ratioH7114->SetBinError(7,0.09865898);
   ratioH7114->SetBinError(8,0.1129833);
   ratioH7114->SetBinError(9,0.1408882);
   ratioH7114->SetBinError(10,0.1713024);
   ratioH7114->SetBinError(11,0.1921554);
   ratioH7114->SetBinError(12,0.3097358);
   ratioH7114->SetBinError(13,0.3556116);
   ratioH7114->SetBinError(14,0.3721359);
   ratioH7114->SetBinError(15,0.8082297);
   ratioH7114->SetBinError(16,1.705187);
   ratioH7114->SetBinError(17,0.9227701);
   ratioH7114->SetEntries(69.53184);
   ratioH7114->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH7114->SetLineColor(ci);
   ratioH7114->GetXaxis()->SetLabelFont(42);
   ratioH7114->GetXaxis()->SetLabelSize(0.035);
   ratioH7114->GetXaxis()->SetTitleSize(0.035);
   ratioH7114->GetXaxis()->SetTitleFont(42);
   ratioH7114->GetYaxis()->SetLabelFont(42);
   ratioH7114->GetYaxis()->SetLabelSize(0.035);
   ratioH7114->GetYaxis()->SetTitleSize(0.035);
   ratioH7114->GetYaxis()->SetTitleFont(42);
   ratioH7114->GetZaxis()->SetLabelFont(42);
   ratioH7114->GetZaxis()->SetLabelSize(0.035);
   ratioH7114->GetZaxis()->SetTitleSize(0.035);
   ratioH7114->GetZaxis()->SetTitleFont(42);
   ratioH7114->Draw("E same");
   line = new TLine(0,1,6,1);
   line->Draw();
   Stop_8_2->Modified();
   Stop_8->cd();
   Stop_8->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_9
   TPad *Stop_9 = new TPad("Stop_9", "Stop_9",0.3433333,0.01,0.49,0.49);
   Stop_9->Draw();
   Stop_9->cd();
   Stop_9->Range(0,0,1,1);
   Stop_9->SetFillColor(0);
   Stop_9->SetBorderMode(0);
   Stop_9->SetBorderSize(2);
   Stop_9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_9_1
   TPad *Stop_9_1 = new TPad("Stop_9_1", "Stop_9_1",0.01,0.2,0.99,0.99);
   Stop_9_1->Draw();
   Stop_9_1->cd();
   Stop_9_1->Range(-18.75,-15.435,168.75,138.915);
   Stop_9_1->SetFillColor(0);
   Stop_9_1->SetBorderMode(0);
   Stop_9_1->SetBorderSize(2);
   Stop_9_1->SetFrameBorderMode(0);
   Stop_9_1->SetFrameBorderMode(0);
   
   mt = new THStack();
   mt->SetName("mt");
   mt->SetTitle("mt;mt [GeV];Evt.");
   mt->SetMaximum(117.6);
   
   TH1F *mt_stack_9_stack_20 = new TH1F("mt_stack_9_stack_20","mt",20,0,150);
   mt_stack_9_stack_20->SetMinimum(0);
   mt_stack_9_stack_20->SetMaximum(123.48);
   mt_stack_9_stack_20->SetDirectory(0);
   mt_stack_9_stack_20->SetStats(0);

   ci = TColor::GetColor("#000099");
   mt_stack_9_stack_20->SetLineColor(ci);
   mt_stack_9_stack_20->GetXaxis()->SetTitle("mt [GeV]");
   mt_stack_9_stack_20->GetXaxis()->SetLabelFont(42);
   mt_stack_9_stack_20->GetXaxis()->SetLabelSize(0.035);
   mt_stack_9_stack_20->GetXaxis()->SetTitleSize(0.035);
   mt_stack_9_stack_20->GetXaxis()->SetTitleFont(42);
   mt_stack_9_stack_20->GetYaxis()->SetTitle("Evt.");
   mt_stack_9_stack_20->GetYaxis()->SetLabelFont(42);
   mt_stack_9_stack_20->GetYaxis()->SetLabelSize(0.035);
   mt_stack_9_stack_20->GetYaxis()->SetTitleSize(0.035);
   mt_stack_9_stack_20->GetYaxis()->SetTitleFont(42);
   mt_stack_9_stack_20->GetZaxis()->SetLabelFont(42);
   mt_stack_9_stack_20->GetZaxis()->SetLabelSize(0.035);
   mt_stack_9_stack_20->GetZaxis()->SetTitleSize(0.035);
   mt_stack_9_stack_20->GetZaxis()->SetTitleFont(42);
   mt->SetHistogram(mt_stack_9_stack_20);
   
   
   TH1D *ttbarH8115 = new TH1D("ttbarH8115","ttbar",20,0,150);
   ttbarH8115->SetBinContent(1,15.03066);
   ttbarH8115->SetBinContent(2,16.49706);
   ttbarH8115->SetBinContent(3,13.93085);
   ttbarH8115->SetBinContent(4,7.698629);
   ttbarH8115->SetBinContent(5,9.531636);
   ttbarH8115->SetBinContent(6,16.49706);
   ttbarH8115->SetBinContent(7,6.232223);
   ttbarH8115->SetBinContent(8,10.99804);
   ttbarH8115->SetBinContent(9,16.13046);
   ttbarH8115->SetBinContent(10,17.23026);
   ttbarH8115->SetBinContent(11,16.13046);
   ttbarH8115->SetBinContent(12,17.96347);
   ttbarH8115->SetBinContent(13,8.431832);
   ttbarH8115->SetBinContent(14,1.833007);
   ttbarH8115->SetBinContent(15,2.199608);
   ttbarH8115->SetBinContent(16,1.099804);
   ttbarH8115->SetBinContent(17,1.833007);
   ttbarH8115->SetBinContent(18,1.099804);
   ttbarH8115->SetBinError(1,2.347394);
   ttbarH8115->SetBinError(2,2.459237);
   ttbarH8115->SetBinError(3,2.259883);
   ttbarH8115->SetBinError(4,1.679979);
   ttbarH8115->SetBinError(5,1.869308);
   ttbarH8115->SetBinError(6,2.459237);
   ttbarH8115->SetBinError(7,1.511536);
   ttbarH8115->SetBinError(8,2.007958);
   ttbarH8115->SetBinError(9,2.431758);
   ttbarH8115->SetBinError(10,2.513292);
   ttbarH8115->SetBinError(11,2.431758);
   ttbarH8115->SetBinError(12,2.56621);
   ttbarH8115->SetBinError(13,1.758158);
   ttbarH8115->SetBinError(14,0.8197456);
   ttbarH8115->SetBinError(15,0.8979863);
   ttbarH8115->SetBinError(16,0.6349722);
   ttbarH8115->SetBinError(17,0.8197456);
   ttbarH8115->SetBinError(18,0.6349722);
   ttbarH8115->SetEntries(492);
   ttbarH8115->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH8115->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH8115->SetLineColor(ci);
   ttbarH8115->GetXaxis()->SetLabelFont(42);
   ttbarH8115->GetXaxis()->SetLabelSize(0.035);
   ttbarH8115->GetXaxis()->SetTitleSize(0.035);
   ttbarH8115->GetXaxis()->SetTitleFont(42);
   ttbarH8115->GetYaxis()->SetLabelFont(42);
   ttbarH8115->GetYaxis()->SetLabelSize(0.035);
   ttbarH8115->GetYaxis()->SetTitleSize(0.035);
   ttbarH8115->GetYaxis()->SetTitleFont(42);
   ttbarH8115->GetZaxis()->SetLabelFont(42);
   ttbarH8115->GetZaxis()->SetLabelSize(0.035);
   ttbarH8115->GetZaxis()->SetTitleSize(0.035);
   ttbarH8115->GetZaxis()->SetTitleFont(42);
   mt->Add(ttbarH8,"");
   
   TH1D *wjetsH8116 = new TH1D("wjetsH8116","wjets",20,0,150);
   wjetsH8116->SetBinContent(1,44.59403);
   wjetsH8116->SetBinContent(2,32.7973);
   wjetsH8116->SetBinContent(3,28.7488);
   wjetsH8116->SetBinContent(4,31.47129);
   wjetsH8116->SetBinContent(5,32.46885);
   wjetsH8116->SetBinContent(6,36.05343);
   wjetsH8116->SetBinContent(7,29.30249);
   wjetsH8116->SetBinContent(8,41.3536);
   wjetsH8116->SetBinContent(9,39.34806);
   wjetsH8116->SetBinContent(10,60.64166);
   wjetsH8116->SetBinContent(11,81.61716);
   wjetsH8116->SetBinContent(12,44.32542);
   wjetsH8116->SetBinContent(13,10.92944);
   wjetsH8116->SetBinContent(14,0.6667402);
   wjetsH8116->SetBinContent(15,1.980214);
   wjetsH8116->SetBinContent(16,1.500968);
   wjetsH8116->SetBinContent(17,0.4481802);
   wjetsH8116->SetBinContent(19,0.1694501);
   wjetsH8116->SetBinContent(20,0.2787301);
   wjetsH8116->SetBinContent(21,0.4371199);
   wjetsH8116->SetBinError(1,3.326825);
   wjetsH8116->SetBinError(2,2.936486);
   wjetsH8116->SetBinError(3,2.470532);
   wjetsH8116->SetBinError(4,2.884948);
   wjetsH8116->SetBinError(5,2.763915);
   wjetsH8116->SetBinError(6,3.029252);
   wjetsH8116->SetBinError(7,2.65184);
   wjetsH8116->SetBinError(8,3.410369);
   wjetsH8116->SetBinError(9,3.202474);
   wjetsH8116->SetBinError(10,4.083828);
   wjetsH8116->SetBinError(11,4.783427);
   wjetsH8116->SetBinError(12,3.602561);
   wjetsH8116->SetBinError(13,1.780913);
   wjetsH8116->SetBinError(14,0.3053736);
   wjetsH8116->SetBinError(15,0.6371613);
   wjetsH8116->SetBinError(16,0.6642447);
   wjetsH8116->SetBinError(17,0.2633796);
   wjetsH8116->SetBinError(19,0.1694501);
   wjetsH8116->SetBinError(20,0.201632);
   wjetsH8116->SetBinError(21,0.2185599);
   wjetsH8116->SetEntries(2588);
   wjetsH8116->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH8116->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH8116->SetLineColor(ci);
   wjetsH8116->GetXaxis()->SetLabelFont(42);
   wjetsH8116->GetXaxis()->SetLabelSize(0.035);
   wjetsH8116->GetXaxis()->SetTitleSize(0.035);
   wjetsH8116->GetXaxis()->SetTitleFont(42);
   wjetsH8116->GetYaxis()->SetLabelFont(42);
   wjetsH8116->GetYaxis()->SetLabelSize(0.035);
   wjetsH8116->GetYaxis()->SetTitleSize(0.035);
   wjetsH8116->GetYaxis()->SetTitleFont(42);
   wjetsH8116->GetZaxis()->SetLabelFont(42);
   wjetsH8116->GetZaxis()->SetLabelSize(0.035);
   wjetsH8116->GetZaxis()->SetTitleSize(0.035);
   wjetsH8116->GetZaxis()->SetTitleFont(42);
   mt->Add(wjetsH8,"");
   mt->Draw("hist");
   
   TH1D *stopH8117 = new TH1D("stopH8117","Signal",20,0,150);
   stopH8117->SetBinContent(1,7.502323);
   stopH8117->SetBinContent(2,7.603706);
   stopH8117->SetBinContent(3,9.428595);
   stopH8117->SetBinContent(4,9.327212);
   stopH8117->SetBinContent(5,7.502323);
   stopH8117->SetBinContent(6,8.617533);
   stopH8117->SetBinContent(7,8.110619);
   stopH8117->SetBinContent(8,6.184347);
   stopH8117->SetBinContent(9,6.387113);
   stopH8117->SetBinContent(10,8.414768);
   stopH8117->SetBinContent(11,7.603706);
   stopH8117->SetBinContent(12,6.589878);
   stopH8117->SetBinContent(13,5.576051);
   stopH8117->SetBinContent(14,4.460841);
   stopH8117->SetBinContent(15,3.447013);
   stopH8117->SetBinContent(16,1.824889);
   stopH8117->SetBinContent(17,1.824889);
   stopH8117->SetBinContent(18,1.723507);
   stopH8117->SetBinContent(19,1.216593);
   stopH8117->SetBinContent(20,0.6082965);
   stopH8117->SetBinContent(21,0.8110619);
   stopH8117->SetBinError(1,0.8721273);
   stopH8117->SetBinError(2,0.8780003);
   stopH8117->SetBinError(3,0.9776998);
   stopH8117->SetBinError(4,0.9724291);
   stopH8117->SetBinError(5,0.8721273);
   stopH8117->SetBinError(6,0.9347027);
   stopH8117->SetBinError(7,0.9067948);
   stopH8117->SetBinError(8,0.7918245);
   stopH8117->SetBinError(9,0.8047006);
   stopH8117->SetBinError(10,0.9236408);
   stopH8117->SetBinError(11,0.8780003);
   stopH8117->SetBinError(12,0.8173738);
   stopH8117->SetBinError(13,0.7518746);
   stopH8117->SetBinError(14,0.672497);
   stopH8117->SetBinError(15,0.5911579);
   stopH8117->SetBinError(16,0.4301306);
   stopH8117->SetBinError(17,0.4301306);
   stopH8117->SetBinError(18,0.4180118);
   stopH8117->SetBinError(19,0.3512001);
   stopH8117->SetBinError(20,0.248336);
   stopH8117->SetBinError(21,0.2867537);
   stopH8117->SetEntries(1132);
   stopH8117->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH8117->SetLineColor(ci);
   stopH8117->GetXaxis()->SetLabelFont(42);
   stopH8117->GetXaxis()->SetLabelSize(0.035);
   stopH8117->GetXaxis()->SetTitleSize(0.035);
   stopH8117->GetXaxis()->SetTitleFont(42);
   stopH8117->GetYaxis()->SetLabelFont(42);
   stopH8117->GetYaxis()->SetLabelSize(0.035);
   stopH8117->GetYaxis()->SetTitleSize(0.035);
   stopH8117->GetYaxis()->SetTitleFont(42);
   stopH8117->GetZaxis()->SetLabelFont(42);
   stopH8117->GetZaxis()->SetLabelSize(0.035);
   stopH8117->GetZaxis()->SetTitleSize(0.035);
   stopH8117->GetZaxis()->SetTitleFont(42);
   stopH8117->Draw("HIST same");
   
   TH1D *dataH8118 = new TH1D("dataH8118","Data",20,0,150);
   dataH8118->SetBinContent(1,56);
   dataH8118->SetBinContent(2,45);
   dataH8118->SetBinContent(3,39);
   dataH8118->SetBinContent(4,43);
   dataH8118->SetBinContent(5,33);
   dataH8118->SetBinContent(6,59);
   dataH8118->SetBinContent(7,40);
   dataH8118->SetBinContent(8,42);
   dataH8118->SetBinContent(9,48);
   dataH8118->SetBinContent(10,82);
   dataH8118->SetBinContent(11,112);
   dataH8118->SetBinContent(12,66);
   dataH8118->SetBinContent(13,13);
   dataH8118->SetBinContent(14,3);
   dataH8118->SetBinContent(15,4);
   dataH8118->SetBinContent(16,5);
   dataH8118->SetBinContent(17,1);
   dataH8118->SetBinContent(18,2);
   dataH8118->SetBinContent(21,2);
   dataH8118->SetBinError(1,7.483315);
   dataH8118->SetBinError(2,6.708204);
   dataH8118->SetBinError(3,6.244998);
   dataH8118->SetBinError(4,6.557439);
   dataH8118->SetBinError(5,5.744563);
   dataH8118->SetBinError(6,7.681146);
   dataH8118->SetBinError(7,6.324555);
   dataH8118->SetBinError(8,6.480741);
   dataH8118->SetBinError(9,6.928203);
   dataH8118->SetBinError(10,9.055385);
   dataH8118->SetBinError(11,10.58301);
   dataH8118->SetBinError(12,8.124038);
   dataH8118->SetBinError(13,3.605551);
   dataH8118->SetBinError(14,1.732051);
   dataH8118->SetBinError(15,2);
   dataH8118->SetBinError(16,2.236068);
   dataH8118->SetBinError(17,1);
   dataH8118->SetBinError(18,1.414214);
   dataH8118->SetBinError(21,1.414214);
   dataH8118->SetEntries(695);
   dataH8118->SetStats(0);
   dataH8118->GetXaxis()->SetLabelFont(42);
   dataH8118->GetXaxis()->SetLabelSize(0.035);
   dataH8118->GetXaxis()->SetTitleSize(0.035);
   dataH8118->GetXaxis()->SetTitleFont(42);
   dataH8118->GetYaxis()->SetLabelFont(42);
   dataH8118->GetYaxis()->SetLabelSize(0.035);
   dataH8118->GetYaxis()->SetTitleSize(0.035);
   dataH8118->GetYaxis()->SetTitleFont(42);
   dataH8118->GetZaxis()->SetLabelFont(42);
   dataH8118->GetZaxis()->SetLabelSize(0.035);
   dataH8118->GetZaxis()->SetTitleSize(0.035);
   dataH8118->GetZaxis()->SetTitleFont(42);
   dataH8118->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ttbarH8","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH8","wjets","lpf");

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
   entry=leg->AddEntry("stopH8","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH8","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   pt = new TPaveText(0.4550386,0.94,0.5449614,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("mt");
   pt->Draw();
   Stop_9_1->Modified();
   Stop_9->cd();
  
// ------------>Primitives in pad: Stop_9_2
   TPad *Stop_9_2 = new TPad("Stop_9_2", "Stop_9_2",0.01,0.01,0.99,0.2);
   Stop_9_2->Draw();
   Stop_9_2->cd();
   Stop_9_2->Range(-18.75,0.375,168.75,1.625);
   Stop_9_2->SetFillColor(0);
   Stop_9_2->SetBorderMode(0);
   Stop_9_2->SetBorderSize(2);
   Stop_9_2->SetFrameBorderMode(0);
   Stop_9_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH8119 = new TH1D("backgroundH8119","",20,0,150);
   backgroundH8119->SetMinimum(0.5);
   backgroundH8119->SetMaximum(1.5);
   backgroundH8119->SetEntries(3101);
   backgroundH8119->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH8119->SetLineColor(ci);
   backgroundH8119->GetXaxis()->SetLabelFont(42);
   backgroundH8119->GetXaxis()->SetLabelSize(0.15);
   backgroundH8119->GetXaxis()->SetTitleSize(0.035);
   backgroundH8119->GetXaxis()->SetTitleFont(42);
   backgroundH8119->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH8119->GetYaxis()->SetNdivisions(5);
   backgroundH8119->GetYaxis()->SetLabelFont(42);
   backgroundH8119->GetYaxis()->SetLabelSize(0.15);
   backgroundH8119->GetYaxis()->SetTitleSize(0.15);
   backgroundH8119->GetYaxis()->SetTickLength(0.01);
   backgroundH8119->GetYaxis()->SetTitleOffset(0.35);
   backgroundH8119->GetYaxis()->SetTitleFont(42);
   backgroundH8119->GetZaxis()->SetLabelFont(42);
   backgroundH8119->GetZaxis()->SetLabelSize(0.035);
   backgroundH8119->GetZaxis()->SetTitleSize(0.035);
   backgroundH8119->GetZaxis()->SetTitleFont(42);
   backgroundH8119->Draw("");
   
   Double_t Graph_from_backgroundH8_fx1020[20] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25};
   Double_t Graph_from_backgroundH8_fy1020[20] = {
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
   Double_t Graph_from_backgroundH8_fex1020[20] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t Graph_from_backgroundH8_fey1020[20] = {
   0.06828735,
   0.07770153,
   0.07845009,
   0.08522995,
   0.07944421,
   0.07424901,
   0.08589844,
   0.07559628,
   0.0724804,
   0.06157849,
   0.05489711,
   0.07100958,
   0.1292556,
   0.3499465,
   0.2634249,
   0.3533252,
   0.3774429,
   0.5773503,
   1,
   0.7233951};
   gre = new TGraphErrors(20,Graph_from_backgroundH8_fx1020,Graph_from_backgroundH8_fy1020,Graph_from_backgroundH8_fex1020,Graph_from_backgroundH8_fey1020);
   gre->SetName("Graph_from_backgroundH8");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH810091020 = new TH1F("Graph_Graph_Graph_from_backgroundH810091020","",100,0,165);
   Graph_Graph_Graph_from_backgroundH810091020->SetMinimum(0);
   Graph_Graph_Graph_from_backgroundH810091020->SetMaximum(2.2);
   Graph_Graph_Graph_from_backgroundH810091020->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH810091020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH810091020->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH810091020->GetXaxis()->SetRange(1,91);
   Graph_Graph_Graph_from_backgroundH810091020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH810091020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH810091020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH810091020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH810091020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH810091020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH810091020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH810091020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH810091020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH810091020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH810091020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH810091020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH810091020);
   
   gre->Draw("3");
   
   TH1D *ratioH8120 = new TH1D("ratioH8120","",20,0,150);
   ratioH8120->SetBinContent(1,0.9392083);
   ratioH8120->SetBinContent(2,0.9128832);
   ratioH8120->SetBinContent(3,0.9137844);
   ratioH8120->SetBinContent(4,1.097781);
   ratioH8120->SetBinContent(5,0.7857051);
   ratioH8120->SetBinContent(6,1.12273);
   ratioH8120->SetBinContent(7,1.12566);
   ratioH8120->SetBinContent(8,0.802267);
   ratioH8120->SetBinContent(9,0.8651997);
   ratioH8120->SetBinContent(10,1.053011);
   ratioH8120->SetBinContent(11,1.145808);
   ratioH8120->SetBinContent(12,1.059579);
   ratioH8120->SetBinContent(13,0.6714434);
   ratioH8120->SetBinContent(14,1.200121);
   ratioH8120->SetBinContent(15,0.9569784);
   ratioH8120->SetBinContent(16,1.922506);
   ratioH8120->SetBinContent(17,0.4383683);
   ratioH8120->SetBinContent(18,1.818506);
   ratioH8120->SetBinContent(21,4.575404);
   ratioH8120->SetBinError(1,0.1409448);
   ratioH8120->SetBinError(2,0.1534615);
   ratioH8120->SetBinError(3,0.1629394);
   ratioH8120->SetBinError(4,0.191782);
   ratioH8120->SetBinError(5,0.1503438);
   ratioH8120->SetBinError(6,0.1682675);
   ratioH8120->SetBinError(7,0.2025517);
   ratioH8120->SetBinError(8,0.1378507);
   ratioH8120->SetBinError(9,0.1397418);
   ratioH8120->SetBinError(10,0.1331425);
   ratioH8120->SetBinError(11,0.1252147);
   ratioH8120->SetBinError(12,0.1505717);
   ratioH8120->SetBinError(13,0.2054552);
   ratioH8120->SetBinError(14,0.8102338);
   ratioH8120->SetBinError(15,0.5408348);
   ratioH8120->SetBinError(16,1.095725);
   ratioH8120->SetBinError(17,0.4685546);
   ratioH8120->SetBinError(18,1.660061);
   ratioH8120->SetBinError(21,3.962416);
   ratioH8120->SetEntries(64.94463);
   ratioH8120->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH8120->SetLineColor(ci);
   ratioH8120->GetXaxis()->SetLabelFont(42);
   ratioH8120->GetXaxis()->SetLabelSize(0.035);
   ratioH8120->GetXaxis()->SetTitleSize(0.035);
   ratioH8120->GetXaxis()->SetTitleFont(42);
   ratioH8120->GetYaxis()->SetLabelFont(42);
   ratioH8120->GetYaxis()->SetLabelSize(0.035);
   ratioH8120->GetYaxis()->SetTitleSize(0.035);
   ratioH8120->GetYaxis()->SetTitleFont(42);
   ratioH8120->GetZaxis()->SetLabelFont(42);
   ratioH8120->GetZaxis()->SetLabelSize(0.035);
   ratioH8120->GetZaxis()->SetTitleSize(0.035);
   ratioH8120->GetZaxis()->SetTitleFont(42);
   ratioH8120->Draw("E same");
   line = new TLine(0,1,150,1);
   line->Draw();
   Stop_9_2->Modified();
   Stop_9->cd();
   Stop_9->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_10
   TPad *Stop_10 = new TPad("Stop_10", "Stop_10",0.51,0.01,0.6566667,0.49);
   Stop_10->Draw();
   Stop_10->cd();
   Stop_10->Range(0,0,1,1);
   Stop_10->SetFillColor(0);
   Stop_10->SetBorderMode(0);
   Stop_10->SetBorderSize(2);
   Stop_10->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_10_1
   TPad *Stop_10_1 = new TPad("Stop_10_1", "Stop_10_1",0.01,0.2,0.99,0.99);
   Stop_10_1->Draw();
   Stop_10_1->cd();
   Stop_10_1->Range(-175,-22.05,1575,198.45);
   Stop_10_1->SetFillColor(0);
   Stop_10_1->SetBorderMode(0);
   Stop_10_1->SetBorderSize(2);
   Stop_10_1->SetFrameBorderMode(0);
   Stop_10_1->SetFrameBorderMode(0);
   
   HT20 = new THStack();
   HT20->SetName("HT20");
   HT20->SetTitle("HT20;HT20 [GeV];Evt.");
   HT20->SetMaximum(168);
   
   TH1F *HT20_stack_10_stack_21 = new TH1F("HT20_stack_10_stack_21","HT20",20,0,1400);
   HT20_stack_10_stack_21->SetMinimum(0);
   HT20_stack_10_stack_21->SetMaximum(176.4);
   HT20_stack_10_stack_21->SetDirectory(0);
   HT20_stack_10_stack_21->SetStats(0);

   ci = TColor::GetColor("#000099");
   HT20_stack_10_stack_21->SetLineColor(ci);
   HT20_stack_10_stack_21->GetXaxis()->SetTitle("HT20 [GeV]");
   HT20_stack_10_stack_21->GetXaxis()->SetLabelFont(42);
   HT20_stack_10_stack_21->GetXaxis()->SetLabelSize(0.035);
   HT20_stack_10_stack_21->GetXaxis()->SetTitleSize(0.035);
   HT20_stack_10_stack_21->GetXaxis()->SetTitleFont(42);
   HT20_stack_10_stack_21->GetYaxis()->SetTitle("Evt.");
   HT20_stack_10_stack_21->GetYaxis()->SetLabelFont(42);
   HT20_stack_10_stack_21->GetYaxis()->SetLabelSize(0.035);
   HT20_stack_10_stack_21->GetYaxis()->SetTitleSize(0.035);
   HT20_stack_10_stack_21->GetYaxis()->SetTitleFont(42);
   HT20_stack_10_stack_21->GetZaxis()->SetLabelFont(42);
   HT20_stack_10_stack_21->GetZaxis()->SetLabelSize(0.035);
   HT20_stack_10_stack_21->GetZaxis()->SetTitleSize(0.035);
   HT20_stack_10_stack_21->GetZaxis()->SetTitleFont(42);
   HT20->SetHistogram(HT20_stack_10_stack_21);
   
   
   TH1D *ttbarH9121 = new TH1D("ttbarH9121","ttbar",20,0,1400);
   ttbarH9121->SetBinContent(3,1.099804);
   ttbarH9121->SetBinContent(4,3.299412);
   ttbarH9121->SetBinContent(5,13.19765);
   ttbarH9121->SetBinContent(6,29.69471);
   ttbarH9121->SetBinContent(7,33.72733);
   ttbarH9121->SetBinContent(8,35.56033);
   ttbarH9121->SetBinContent(9,20.52968);
   ttbarH9121->SetBinContent(10,12.83105);
   ttbarH9121->SetBinContent(11,10.63144);
   ttbarH9121->SetBinContent(12,4.032615);
   ttbarH9121->SetBinContent(13,4.399216);
   ttbarH9121->SetBinContent(14,4.765818);
   ttbarH9121->SetBinContent(15,0.7332027);
   ttbarH9121->SetBinContent(16,1.833007);
   ttbarH9121->SetBinContent(17,1.099804);
   ttbarH9121->SetBinContent(18,0.7332027);
   ttbarH9121->SetBinContent(19,0.7332027);
   ttbarH9121->SetBinContent(20,0.7332027);
   ttbarH9121->SetBinContent(21,0.7332027);
   ttbarH9121->SetBinError(3,0.6349722);
   ttbarH9121->SetBinError(4,1.099804);
   ttbarH9121->SetBinError(5,2.199608);
   ttbarH9121->SetBinError(6,3.299412);
   ttbarH9121->SetBinError(7,3.516317);
   ttbarH9121->SetBinError(8,3.610605);
   ttbarH9121->SetBinError(9,2.743393);
   ttbarH9121->SetBinError(10,2.168843);
   ttbarH9121->SetBinError(11,1.974209);
   ttbarH9121->SetBinError(12,1.215879);
   ttbarH9121->SetBinError(13,1.269944);
   ttbarH9121->SetBinError(14,1.3218);
   ttbarH9121->SetBinError(15,0.5184526);
   ttbarH9121->SetBinError(16,0.8197456);
   ttbarH9121->SetBinError(17,0.6349722);
   ttbarH9121->SetBinError(18,0.5184526);
   ttbarH9121->SetBinError(19,0.5184526);
   ttbarH9121->SetBinError(20,0.5184526);
   ttbarH9121->SetBinError(21,0.5184526);
   ttbarH9121->SetEntries(492);
   ttbarH9121->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH9121->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH9121->SetLineColor(ci);
   ttbarH9121->GetXaxis()->SetLabelFont(42);
   ttbarH9121->GetXaxis()->SetLabelSize(0.035);
   ttbarH9121->GetXaxis()->SetTitleSize(0.035);
   ttbarH9121->GetXaxis()->SetTitleFont(42);
   ttbarH9121->GetYaxis()->SetLabelFont(42);
   ttbarH9121->GetYaxis()->SetLabelSize(0.035);
   ttbarH9121->GetYaxis()->SetTitleSize(0.035);
   ttbarH9121->GetYaxis()->SetTitleFont(42);
   ttbarH9121->GetZaxis()->SetLabelFont(42);
   ttbarH9121->GetZaxis()->SetLabelSize(0.035);
   ttbarH9121->GetZaxis()->SetTitleSize(0.035);
   ttbarH9121->GetZaxis()->SetTitleFont(42);
   HT20->Add(ttbarH9,"");
   
   TH1D *wjetsH9122 = new TH1D("wjetsH9122","wjets",20,0,1400);
   wjetsH9122->SetBinContent(2,0.1694501);
   wjetsH9122->SetBinContent(3,2.854606);
   wjetsH9122->SetBinContent(4,23.16979);
   wjetsH9122->SetBinContent(5,113.1876);
   wjetsH9122->SetBinContent(6,129.1436);
   wjetsH9122->SetBinContent(7,89.17485);
   wjetsH9122->SetBinContent(8,58.44885);
   wjetsH9122->SetBinContent(9,33.46973);
   wjetsH9122->SetBinContent(10,20.91185);
   wjetsH9122->SetBinContent(11,14.38691);
   wjetsH9122->SetBinContent(12,10.44177);
   wjetsH9122->SetBinContent(13,6.835528);
   wjetsH9122->SetBinContent(14,2.950559);
   wjetsH9122->SetBinContent(15,4.917599);
   wjetsH9122->SetBinContent(16,1.85776);
   wjetsH9122->SetBinContent(17,1.20208);
   wjetsH9122->SetBinContent(18,1.52992);
   wjetsH9122->SetBinContent(19,1.42064);
   wjetsH9122->SetBinContent(20,0.8742398);
   wjetsH9122->SetBinContent(21,2.185599);
   wjetsH9122->SetBinError(2,0.1694501);
   wjetsH9122->SetBinError(3,0.9470635);
   wjetsH9122->SetBinError(4,2.976309);
   wjetsH9122->SetBinError(5,6.720947);
   wjetsH9122->SetBinError(6,6.470203);
   wjetsH9122->SetBinError(7,4.133366);
   wjetsH9122->SetBinError(8,3.168787);
   wjetsH9122->SetBinError(9,2.218525);
   wjetsH9122->SetBinError(10,1.567984);
   wjetsH9122->SetBinError(11,1.266013);
   wjetsH9122->SetBinError(12,1.072973);
   wjetsH9122->SetBinError(13,0.8701622);
   wjetsH9122->SetBinError(14,0.5678354);
   wjetsH9122->SetBinError(15,0.7330723);
   wjetsH9122->SetBinError(16,0.4505729);
   wjetsH9122->SetBinError(17,0.3624407);
   wjetsH9122->SetBinError(18,0.4088882);
   wjetsH9122->SetBinError(19,0.3940145);
   wjetsH9122->SetBinError(20,0.3090904);
   wjetsH9122->SetBinError(21,0.4887149);
   wjetsH9122->SetEntries(2588);
   wjetsH9122->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH9122->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH9122->SetLineColor(ci);
   wjetsH9122->GetXaxis()->SetLabelFont(42);
   wjetsH9122->GetXaxis()->SetLabelSize(0.035);
   wjetsH9122->GetXaxis()->SetTitleSize(0.035);
   wjetsH9122->GetXaxis()->SetTitleFont(42);
   wjetsH9122->GetYaxis()->SetLabelFont(42);
   wjetsH9122->GetYaxis()->SetLabelSize(0.035);
   wjetsH9122->GetYaxis()->SetTitleSize(0.035);
   wjetsH9122->GetYaxis()->SetTitleFont(42);
   wjetsH9122->GetZaxis()->SetLabelFont(42);
   wjetsH9122->GetZaxis()->SetLabelSize(0.035);
   wjetsH9122->GetZaxis()->SetTitleSize(0.035);
   wjetsH9122->GetZaxis()->SetTitleFont(42);
   HT20->Add(wjetsH9,"");
   HT20->Draw("hist");
   
   TH1D *stopH9123 = new TH1D("stopH9123","Signal",20,0,1400);
   stopH9123->SetBinContent(3,0.3041482);
   stopH9123->SetBinContent(4,3.041482);
   stopH9123->SetBinContent(5,9.22583);
   stopH9123->SetBinContent(6,18.14751);
   stopH9123->SetBinContent(7,19.3641);
   stopH9123->SetBinContent(8,16.62677);
   stopH9123->SetBinContent(9,15.20741);
   stopH9123->SetBinContent(10,8.110619);
   stopH9123->SetBinContent(11,6.488496);
   stopH9123->SetBinContent(12,5.778816);
   stopH9123->SetBinContent(13,3.244248);
   stopH9123->SetBinContent(14,2.838717);
   stopH9123->SetBinContent(15,2.331803);
   stopH9123->SetBinContent(16,1.216593);
   stopH9123->SetBinContent(17,0.8110619);
   stopH9123->SetBinContent(18,0.7096792);
   stopH9123->SetBinContent(19,0.2027655);
   stopH9123->SetBinContent(20,0.1013827);
   stopH9123->SetBinContent(21,1.013827);
   stopH9123->SetBinError(3,0.1756001);
   stopH9123->SetBinError(4,0.5552962);
   stopH9123->SetBinError(5,0.9671297);
   stopH9123->SetBinError(6,1.356409);
   stopH9123->SetBinError(7,1.401137);
   stopH9123->SetBinError(8,1.298333);
   stopH9123->SetBinError(9,1.24168);
   stopH9123->SetBinError(10,0.9067948);
   stopH9123->SetBinError(11,0.8110619);
   stopH9123->SetBinError(12,0.7654229);
   stopH9123->SetBinError(13,0.5735074);
   stopH9123->SetBinError(14,0.5364671);
   stopH9123->SetBinError(15,0.4862146);
   stopH9123->SetBinError(16,0.3512001);
   stopH9123->SetBinError(17,0.2867537);
   stopH9123->SetBinError(18,0.2682335);
   stopH9123->SetBinError(19,0.1433769);
   stopH9123->SetBinError(20,0.1013827);
   stopH9123->SetBinError(21,0.3206004);
   stopH9123->SetEntries(1132);
   stopH9123->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH9123->SetLineColor(ci);
   stopH9123->GetXaxis()->SetLabelFont(42);
   stopH9123->GetXaxis()->SetLabelSize(0.035);
   stopH9123->GetXaxis()->SetTitleSize(0.035);
   stopH9123->GetXaxis()->SetTitleFont(42);
   stopH9123->GetYaxis()->SetLabelFont(42);
   stopH9123->GetYaxis()->SetLabelSize(0.035);
   stopH9123->GetYaxis()->SetTitleSize(0.035);
   stopH9123->GetYaxis()->SetTitleFont(42);
   stopH9123->GetZaxis()->SetLabelFont(42);
   stopH9123->GetZaxis()->SetLabelSize(0.035);
   stopH9123->GetZaxis()->SetTitleSize(0.035);
   stopH9123->GetZaxis()->SetTitleFont(42);
   stopH9123->Draw("HIST same");
   
   TH1D *dataH9124 = new TH1D("dataH9124","Data",20,0,1400);
   dataH9124->SetBinContent(3,2);
   dataH9124->SetBinContent(4,20);
   dataH9124->SetBinContent(5,117);
   dataH9124->SetBinContent(6,160);
   dataH9124->SetBinContent(7,135);
   dataH9124->SetBinContent(8,77);
   dataH9124->SetBinContent(9,64);
   dataH9124->SetBinContent(10,36);
   dataH9124->SetBinContent(11,26);
   dataH9124->SetBinContent(12,16);
   dataH9124->SetBinContent(13,11);
   dataH9124->SetBinContent(14,10);
   dataH9124->SetBinContent(15,6);
   dataH9124->SetBinContent(16,3);
   dataH9124->SetBinContent(17,3);
   dataH9124->SetBinContent(18,1);
   dataH9124->SetBinContent(19,2);
   dataH9124->SetBinContent(20,1);
   dataH9124->SetBinContent(21,5);
   dataH9124->SetBinError(3,1.414214);
   dataH9124->SetBinError(4,4.472136);
   dataH9124->SetBinError(5,10.81665);
   dataH9124->SetBinError(6,12.64911);
   dataH9124->SetBinError(7,11.61895);
   dataH9124->SetBinError(8,8.774964);
   dataH9124->SetBinError(9,8);
   dataH9124->SetBinError(10,6);
   dataH9124->SetBinError(11,5.09902);
   dataH9124->SetBinError(12,4);
   dataH9124->SetBinError(13,3.316625);
   dataH9124->SetBinError(14,3.162278);
   dataH9124->SetBinError(15,2.44949);
   dataH9124->SetBinError(16,1.732051);
   dataH9124->SetBinError(17,1.732051);
   dataH9124->SetBinError(18,1);
   dataH9124->SetBinError(19,1.414214);
   dataH9124->SetBinError(20,1);
   dataH9124->SetBinError(21,2.236068);
   dataH9124->SetEntries(695);
   dataH9124->SetStats(0);
   dataH9124->GetXaxis()->SetLabelFont(42);
   dataH9124->GetXaxis()->SetLabelSize(0.035);
   dataH9124->GetXaxis()->SetTitleSize(0.035);
   dataH9124->GetXaxis()->SetTitleFont(42);
   dataH9124->GetYaxis()->SetLabelFont(42);
   dataH9124->GetYaxis()->SetLabelSize(0.035);
   dataH9124->GetYaxis()->SetTitleSize(0.035);
   dataH9124->GetYaxis()->SetTitleFont(42);
   dataH9124->GetZaxis()->SetLabelFont(42);
   dataH9124->GetZaxis()->SetLabelSize(0.035);
   dataH9124->GetZaxis()->SetTitleSize(0.035);
   dataH9124->GetZaxis()->SetTitleFont(42);
   dataH9124->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
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
   
   pt = new TPaveText(0.4244473,0.94,0.5755527,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("HT20");
   pt->Draw();
   Stop_10_1->Modified();
   Stop_10->cd();
  
// ------------>Primitives in pad: Stop_10_2
   TPad *Stop_10_2 = new TPad("Stop_10_2", "Stop_10_2",0.01,0.01,0.99,0.2);
   Stop_10_2->Draw();
   Stop_10_2->cd();
   Stop_10_2->Range(-175,0.375,1575,1.625);
   Stop_10_2->SetFillColor(0);
   Stop_10_2->SetBorderMode(0);
   Stop_10_2->SetBorderSize(2);
   Stop_10_2->SetFrameBorderMode(0);
   Stop_10_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH9125 = new TH1D("backgroundH9125","",20,0,1400);
   backgroundH9125->SetMinimum(0.5);
   backgroundH9125->SetMaximum(1.5);
   backgroundH9125->SetEntries(3101);
   backgroundH9125->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH9125->SetLineColor(ci);
   backgroundH9125->GetXaxis()->SetLabelFont(42);
   backgroundH9125->GetXaxis()->SetLabelSize(0.15);
   backgroundH9125->GetXaxis()->SetTitleSize(0.035);
   backgroundH9125->GetXaxis()->SetTitleFont(42);
   backgroundH9125->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH9125->GetYaxis()->SetNdivisions(5);
   backgroundH9125->GetYaxis()->SetLabelFont(42);
   backgroundH9125->GetYaxis()->SetLabelSize(0.15);
   backgroundH9125->GetYaxis()->SetTitleSize(0.15);
   backgroundH9125->GetYaxis()->SetTickLength(0.01);
   backgroundH9125->GetYaxis()->SetTitleOffset(0.35);
   backgroundH9125->GetYaxis()->SetTitleFont(42);
   backgroundH9125->GetZaxis()->SetLabelFont(42);
   backgroundH9125->GetZaxis()->SetLabelSize(0.035);
   backgroundH9125->GetZaxis()->SetTitleSize(0.035);
   backgroundH9125->GetZaxis()->SetTitleFont(42);
   backgroundH9125->Draw("");
   
   Double_t Graph_from_backgroundH9_fx1021[20] = {
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
   Double_t Graph_from_backgroundH9_fy1021[20] = {
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
   Double_t Graph_from_backgroundH9_fex1021[20] = {
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
   Double_t Graph_from_backgroundH9_fey1021[20] = {
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
   gre = new TGraphErrors(20,Graph_from_backgroundH9_fx1021,Graph_from_backgroundH9_fy1021,Graph_from_backgroundH9_fex1021,Graph_from_backgroundH9_fey1021);
   gre->SetName("Graph_from_backgroundH9");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH910101021 = new TH1F("Graph_Graph_Graph_from_backgroundH910101021","",100,0,1540);
   Graph_Graph_Graph_from_backgroundH910101021->SetMinimum(0);
   Graph_Graph_Graph_from_backgroundH910101021->SetMaximum(2.2);
   Graph_Graph_Graph_from_backgroundH910101021->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH910101021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH910101021->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH910101021->GetXaxis()->SetRange(1,91);
   Graph_Graph_Graph_from_backgroundH910101021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH910101021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH910101021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH910101021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH910101021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH910101021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH910101021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH910101021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH910101021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH910101021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH910101021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH910101021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH910101021);
   
   gre->Draw("3");
   
   TH1D *ratioH9126 = new TH1D("ratioH9126","",20,0,1400);
   ratioH9126->SetBinContent(3,0.5057644);
   ratioH9126->SetBinContent(4,0.7555952);
   ratioH9126->SetBinContent(5,0.9257409);
   ratioH9126->SetBinContent(6,1.007314);
   ratioH9126->SetBinContent(7,1.098435);
   ratioH9126->SetBinContent(8,0.8190689);
   ratioH9126->SetBinContent(9,1.185198);
   ratioH9126->SetBinContent(10,1.066891);
   ratioH9126->SetBinContent(11,1.039237);
   ratioH9126->SetBinContent(12,1.105401);
   ratioH9126->SetBinContent(13,0.9791054);
   ratioH9126->SetBinContent(14,1.295945);
   ratioH9126->SetBinContent(15,1.061796);
   ratioH9126->SetBinContent(16,0.8128393);
   ratioH9126->SetBinContent(17,1.30328);
   ratioH9126->SetBinContent(18,0.4418674);
   ratioH9126->SetBinContent(19,0.928573);
   ratioH9126->SetBinContent(20,0.6221062);
   ratioH9126->SetBinContent(21,1.713031);
   ratioH9126->SetBinError(3,0.3862205);
   ratioH9126->SetBinError(4,0.1917041);
   ratioH9126->SetBinError(5,0.1000393);
   ratioH9126->SetBinError(6,0.09199582);
   ratioH9126->SetBinError(7,0.1062536);
   ratioH9126->SetBinError(8,0.102296);
   ratioH9126->SetBinError(9,0.1671675);
   ratioH9126->SetBinError(10,0.196923);
   ratioH9126->SetBinError(11,0.2258975);
   ratioH9126->SetBinError(12,0.3028305);
   ratioH9126->SetBinError(13,0.3242679);
   ratioH9126->SetBinError(14,0.4757341);
   ratioH9126->SetBinError(15,0.4651517);
   ratioH9126->SetBinError(16,0.51252);
   ratioH9126->SetBinError(17,0.8587992);
   ratioH9126->SetBinError(18,0.4602902);
   ratioH9126->SetBinError(19,0.7141005);
   ratioH9126->SetBinError(20,0.6645194);
   ratioH9126->SetBinError(21,0.872782);
   ratioH9126->SetEntries(91.33756);
   ratioH9126->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH9126->SetLineColor(ci);
   ratioH9126->GetXaxis()->SetLabelFont(42);
   ratioH9126->GetXaxis()->SetLabelSize(0.035);
   ratioH9126->GetXaxis()->SetTitleSize(0.035);
   ratioH9126->GetXaxis()->SetTitleFont(42);
   ratioH9126->GetYaxis()->SetLabelFont(42);
   ratioH9126->GetYaxis()->SetLabelSize(0.035);
   ratioH9126->GetYaxis()->SetTitleSize(0.035);
   ratioH9126->GetYaxis()->SetTitleFont(42);
   ratioH9126->GetZaxis()->SetLabelFont(42);
   ratioH9126->GetZaxis()->SetLabelSize(0.035);
   ratioH9126->GetZaxis()->SetTitleSize(0.035);
   ratioH9126->GetZaxis()->SetTitleFont(42);
   ratioH9126->Draw("E same");
   line = new TLine(0,1,1400,1);
   line->Draw();
   Stop_10_2->Modified();
   Stop_10->cd();
   Stop_10->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_11
   TPad *Stop_11 = new TPad("Stop_11", "Stop_11",0.6766667,0.01,0.8233333,0.49);
   Stop_11->Draw();
   Stop_11->cd();
   Stop_11->Range(0,0,1,1);
   Stop_11->SetFillColor(0);
   Stop_11->SetBorderMode(0);
   Stop_11->SetBorderSize(2);
   Stop_11->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Stop_11_1
   TPad *Stop_11_1 = new TPad("Stop_11_1", "Stop_11_1",0.01,0.2,0.99,0.99);
   Stop_11_1->Draw();
   Stop_11_1->cd();
   Stop_11_1->Range(-2.375,-21.36094,1.375,192.2484);
   Stop_11_1->SetFillColor(0);
   Stop_11_1->SetBorderMode(0);
   Stop_11_1->SetBorderSize(2);
   Stop_11_1->SetFrameBorderMode(0);
   Stop_11_1->SetFrameBorderMode(0);
   
   Q80 = new THStack();
   Q80->SetName("Q80");
   Q80->SetTitle("Q80;Q80 [GeV];Evt.");
   Q80->SetMaximum(162.75);
   
   TH1F *Q80_stack_11_stack_22 = new TH1F("Q80_stack_11_stack_22","Q80",20,-2,1);
   Q80_stack_11_stack_22->SetMinimum(0);
   Q80_stack_11_stack_22->SetMaximum(170.8875);
   Q80_stack_11_stack_22->SetDirectory(0);
   Q80_stack_11_stack_22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Q80_stack_11_stack_22->SetLineColor(ci);
   Q80_stack_11_stack_22->GetXaxis()->SetTitle("Q80 [GeV]");
   Q80_stack_11_stack_22->GetXaxis()->SetLabelFont(42);
   Q80_stack_11_stack_22->GetXaxis()->SetLabelSize(0.035);
   Q80_stack_11_stack_22->GetXaxis()->SetTitleSize(0.035);
   Q80_stack_11_stack_22->GetXaxis()->SetTitleFont(42);
   Q80_stack_11_stack_22->GetYaxis()->SetTitle("Evt.");
   Q80_stack_11_stack_22->GetYaxis()->SetLabelFont(42);
   Q80_stack_11_stack_22->GetYaxis()->SetLabelSize(0.035);
   Q80_stack_11_stack_22->GetYaxis()->SetTitleSize(0.035);
   Q80_stack_11_stack_22->GetYaxis()->SetTitleFont(42);
   Q80_stack_11_stack_22->GetZaxis()->SetLabelFont(42);
   Q80_stack_11_stack_22->GetZaxis()->SetLabelSize(0.035);
   Q80_stack_11_stack_22->GetZaxis()->SetTitleSize(0.035);
   Q80_stack_11_stack_22->GetZaxis()->SetTitleFont(42);
   Q80->SetHistogram(Q80_stack_11_stack_22);
   
   
   TH1D *ttbarH10127 = new TH1D("ttbarH10127","ttbar",20,-2,1);
   ttbarH10127->SetBinContent(8,4.399216);
   ttbarH10127->SetBinContent(9,9.165034);
   ttbarH10127->SetBinContent(10,7.332027);
   ttbarH10127->SetBinContent(11,16.13046);
   ttbarH10127->SetBinContent(12,13.19765);
   ttbarH10127->SetBinContent(13,15.76386);
   ttbarH10127->SetBinContent(14,22.36268);
   ttbarH10127->SetBinContent(15,27.8617);
   ttbarH10127->SetBinContent(16,43.25896);
   ttbarH10127->SetBinContent(17,19.06327);
   ttbarH10127->SetBinContent(18,1.833007);
   ttbarH10127->SetBinError(8,1.269944);
   ttbarH10127->SetBinError(9,1.833007);
   ttbarH10127->SetBinError(10,1.639491);
   ttbarH10127->SetBinError(11,2.431758);
   ttbarH10127->SetBinError(12,2.199608);
   ttbarH10127->SetBinError(13,2.403966);
   ttbarH10127->SetBinError(14,2.863248);
   ttbarH10127->SetBinError(15,3.195957);
   ttbarH10127->SetBinError(16,3.98231);
   ttbarH10127->SetBinError(17,2.6436);
   ttbarH10127->SetBinError(18,0.8197456);
   ttbarH10127->SetEntries(492);
   ttbarH10127->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH10127->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH10127->SetLineColor(ci);
   ttbarH10127->GetXaxis()->SetLabelFont(42);
   ttbarH10127->GetXaxis()->SetLabelSize(0.035);
   ttbarH10127->GetXaxis()->SetTitleSize(0.035);
   ttbarH10127->GetXaxis()->SetTitleFont(42);
   ttbarH10127->GetYaxis()->SetLabelFont(42);
   ttbarH10127->GetYaxis()->SetLabelSize(0.035);
   ttbarH10127->GetYaxis()->SetTitleSize(0.035);
   ttbarH10127->GetYaxis()->SetTitleFont(42);
   ttbarH10127->GetZaxis()->SetLabelFont(42);
   ttbarH10127->GetZaxis()->SetLabelSize(0.035);
   ttbarH10127->GetZaxis()->SetTitleSize(0.035);
   ttbarH10127->GetZaxis()->SetTitleFont(42);
   Q80->Add(ttbarH10,"");
   
   TH1D *wjetsH10128 = new TH1D("wjetsH10128","wjets",20,-2,1);
   wjetsH10128->SetBinContent(7,4.21719);
   wjetsH10128->SetBinContent(8,8.951829);
   wjetsH10128->SetBinContent(9,19.87783);
   wjetsH10128->SetBinContent(10,27.0859);
   wjetsH10128->SetBinContent(11,35.73491);
   wjetsH10128->SetBinContent(12,33.13488);
   wjetsH10128->SetBinContent(13,51.58234);
   wjetsH10128->SetBinContent(14,69.79212);
   wjetsH10128->SetBinContent(15,85.62826);
   wjetsH10128->SetBinContent(16,100.9882);
   wjetsH10128->SetBinContent(17,63.77299);
   wjetsH10128->SetBinContent(18,16.29023);
   wjetsH10128->SetBinContent(19,2.076319);
   wjetsH10128->SetBinError(7,1.097644);
   wjetsH10128->SetBinError(8,1.656317);
   wjetsH10128->SetBinError(9,2.485022);
   wjetsH10128->SetBinError(10,2.870713);
   wjetsH10128->SetBinError(11,3.335645);
   wjetsH10128->SetBinError(12,3.018292);
   wjetsH10128->SetBinError(13,3.8313);
   wjetsH10128->SetBinError(14,4.573193);
   wjetsH10128->SetBinError(15,4.765128);
   wjetsH10128->SetBinError(16,5.026688);
   wjetsH10128->SetBinError(17,3.492281);
   wjetsH10128->SetBinError(18,1.447849);
   wjetsH10128->SetBinError(19,0.4763404);
   wjetsH10128->SetEntries(2588);
   wjetsH10128->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH10128->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH10128->SetLineColor(ci);
   wjetsH10128->GetXaxis()->SetLabelFont(42);
   wjetsH10128->GetXaxis()->SetLabelSize(0.035);
   wjetsH10128->GetXaxis()->SetTitleSize(0.035);
   wjetsH10128->GetXaxis()->SetTitleFont(42);
   wjetsH10128->GetYaxis()->SetLabelFont(42);
   wjetsH10128->GetYaxis()->SetLabelSize(0.035);
   wjetsH10128->GetYaxis()->SetTitleSize(0.035);
   wjetsH10128->GetYaxis()->SetTitleFont(42);
   wjetsH10128->GetZaxis()->SetLabelFont(42);
   wjetsH10128->GetZaxis()->SetLabelSize(0.035);
   wjetsH10128->GetZaxis()->SetTitleSize(0.035);
   wjetsH10128->GetZaxis()->SetTitleFont(42);
   Q80->Add(wjetsH10,"");
   Q80->Draw("hist");
   
   TH1D *stopH10129 = new TH1D("stopH10129","Signal",20,-2,1);
   stopH10129->SetBinContent(6,0.1013827);
   stopH10129->SetBinContent(7,1.013827);
   stopH10129->SetBinContent(8,2.129038);
   stopH10129->SetBinContent(9,3.751162);
   stopH10129->SetBinContent(10,5.778816);
   stopH10129->SetBinContent(11,6.792644);
   stopH10129->SetBinContent(12,11.05072);
   stopH10129->SetBinContent(13,10.03689);
   stopH10129->SetBinContent(14,14.39635);
   stopH10129->SetBinContent(15,18.85719);
   stopH10129->SetBinContent(16,18.45166);
   stopH10129->SetBinContent(17,14.29497);
   stopH10129->SetBinContent(18,7.198175);
   stopH10129->SetBinContent(19,0.9124447);
   stopH10129->SetBinError(6,0.1013827);
   stopH10129->SetBinError(7,0.3206004);
   stopH10129->SetBinError(8,0.4645941);
   stopH10129->SetBinError(9,0.6166872);
   stopH10129->SetBinError(10,0.7654229);
   stopH10129->SetBinError(11,0.8298535);
   stopH10129->SetBinError(12,1.058467);
   stopH10129->SetBinError(13,1.008746);
   stopH10129->SetBinError(14,1.208115);
   stopH10129->SetBinError(15,1.382676);
   stopH10129->SetBinError(16,1.367728);
   stopH10129->SetBinError(17,1.203853);
   stopH10129->SetBinError(18,0.8542662);
   stopH10129->SetBinError(19,0.3041482);
   stopH10129->SetEntries(1132);
   stopH10129->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH10129->SetLineColor(ci);
   stopH10129->GetXaxis()->SetLabelFont(42);
   stopH10129->GetXaxis()->SetLabelSize(0.035);
   stopH10129->GetXaxis()->SetTitleSize(0.035);
   stopH10129->GetXaxis()->SetTitleFont(42);
   stopH10129->GetYaxis()->SetLabelFont(42);
   stopH10129->GetYaxis()->SetLabelSize(0.035);
   stopH10129->GetYaxis()->SetTitleSize(0.035);
   stopH10129->GetYaxis()->SetTitleFont(42);
   stopH10129->GetZaxis()->SetLabelFont(42);
   stopH10129->GetZaxis()->SetLabelSize(0.035);
   stopH10129->GetZaxis()->SetTitleSize(0.035);
   stopH10129->GetZaxis()->SetTitleFont(42);
   stopH10129->Draw("HIST same");
   
   TH1D *dataH10130 = new TH1D("dataH10130","Data",20,-2,1);
   dataH10130->SetBinContent(7,4);
   dataH10130->SetBinContent(8,15);
   dataH10130->SetBinContent(9,24);
   dataH10130->SetBinContent(10,34);
   dataH10130->SetBinContent(11,60);
   dataH10130->SetBinContent(12,41);
   dataH10130->SetBinContent(13,55);
   dataH10130->SetBinContent(14,90);
   dataH10130->SetBinContent(15,117);
   dataH10130->SetBinContent(16,155);
   dataH10130->SetBinContent(17,79);
   dataH10130->SetBinContent(18,20);
   dataH10130->SetBinContent(19,1);
   dataH10130->SetBinError(7,2);
   dataH10130->SetBinError(8,3.872983);
   dataH10130->SetBinError(9,4.898979);
   dataH10130->SetBinError(10,5.830952);
   dataH10130->SetBinError(11,7.745967);
   dataH10130->SetBinError(12,6.403124);
   dataH10130->SetBinError(13,7.416198);
   dataH10130->SetBinError(14,9.486833);
   dataH10130->SetBinError(15,10.81665);
   dataH10130->SetBinError(16,12.4499);
   dataH10130->SetBinError(17,8.888194);
   dataH10130->SetBinError(18,4.472136);
   dataH10130->SetBinError(19,1);
   dataH10130->SetEntries(695);
   dataH10130->SetStats(0);
   dataH10130->GetXaxis()->SetLabelFont(42);
   dataH10130->GetXaxis()->SetLabelSize(0.035);
   dataH10130->GetXaxis()->SetTitleSize(0.035);
   dataH10130->GetXaxis()->SetTitleFont(42);
   dataH10130->GetYaxis()->SetLabelFont(42);
   dataH10130->GetYaxis()->SetLabelSize(0.035);
   dataH10130->GetYaxis()->SetTitleSize(0.035);
   dataH10130->GetYaxis()->SetTitleFont(42);
   dataH10130->GetZaxis()->SetLabelFont(42);
   dataH10130->GetZaxis()->SetLabelSize(0.035);
   dataH10130->GetZaxis()->SetTitleSize(0.035);
   dataH10130->GetZaxis()->SetTitleFont(42);
   dataH10130->Draw("E same");
   
   leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","NDC","h");
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
   
   pt = new TPaveText(0.4375578,0.94,0.5624422,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Q80");
   pt->Draw();
   Stop_11_1->Modified();
   Stop_11->cd();
  
// ------------>Primitives in pad: Stop_11_2
   TPad *Stop_11_2 = new TPad("Stop_11_2", "Stop_11_2",0.01,0.01,0.99,0.2);
   Stop_11_2->Draw();
   Stop_11_2->cd();
   Stop_11_2->Range(-2.375,0.375,1.375,1.625);
   Stop_11_2->SetFillColor(0);
   Stop_11_2->SetBorderMode(0);
   Stop_11_2->SetBorderSize(2);
   Stop_11_2->SetFrameBorderMode(0);
   Stop_11_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH10131 = new TH1D("backgroundH10131","",20,-2,1);
   backgroundH10131->SetMinimum(0.5);
   backgroundH10131->SetMaximum(1.5);
   backgroundH10131->SetEntries(3101);
   backgroundH10131->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH10131->SetLineColor(ci);
   backgroundH10131->GetXaxis()->SetLabelFont(42);
   backgroundH10131->GetXaxis()->SetLabelSize(0.15);
   backgroundH10131->GetXaxis()->SetTitleSize(0.035);
   backgroundH10131->GetXaxis()->SetTitleFont(42);
   backgroundH10131->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH10131->GetYaxis()->SetNdivisions(5);
   backgroundH10131->GetYaxis()->SetLabelFont(42);
   backgroundH10131->GetYaxis()->SetLabelSize(0.15);
   backgroundH10131->GetYaxis()->SetTitleSize(0.15);
   backgroundH10131->GetYaxis()->SetTickLength(0.01);
   backgroundH10131->GetYaxis()->SetTitleOffset(0.35);
   backgroundH10131->GetYaxis()->SetTitleFont(42);
   backgroundH10131->GetZaxis()->SetLabelFont(42);
   backgroundH10131->GetZaxis()->SetLabelSize(0.035);
   backgroundH10131->GetZaxis()->SetTitleSize(0.035);
   backgroundH10131->GetZaxis()->SetTitleFont(42);
   backgroundH10131->Draw("");
   
   Double_t Graph_from_backgroundH10_fx1022[20] = {
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
   Double_t Graph_from_backgroundH10_fy1022[20] = {
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
   Double_t Graph_from_backgroundH10_fex1022[20] = {
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
   Double_t Graph_from_backgroundH10_fey1022[20] = {
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
   gre = new TGraphErrors(20,Graph_from_backgroundH10_fx1022,Graph_from_backgroundH10_fy1022,Graph_from_backgroundH10_fex1022,Graph_from_backgroundH10_fey1022);
   gre->SetName("Graph_from_backgroundH10");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph_from_backgroundH1010111022 = new TH1F("Graph_Graph_Graph_from_backgroundH1010111022","",100,-2.3,1.3);
   Graph_Graph_Graph_from_backgroundH1010111022->SetMinimum(0.6876659);
   Graph_Graph_Graph_from_backgroundH1010111022->SetMaximum(1.312334);
   Graph_Graph_Graph_from_backgroundH1010111022->SetDirectory(0);
   Graph_Graph_Graph_from_backgroundH1010111022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_backgroundH1010111022->SetLineColor(ci);
   Graph_Graph_Graph_from_backgroundH1010111022->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph_from_backgroundH1010111022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH1010111022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH1010111022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH1010111022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH1010111022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH1010111022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH1010111022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH1010111022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_backgroundH1010111022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_backgroundH1010111022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_backgroundH1010111022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_backgroundH1010111022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_from_backgroundH1010111022);
   
   gre->Draw("3");
   
   TH1D *ratioH10132 = new TH1D("ratioH10132","",20,-2,1);
   ratioH10132->SetBinContent(7,0.9484988);
   ratioH10132->SetBinContent(8,1.123508);
   ratioH10132->SetBinContent(9,0.8263647);
   ratioH10132->SetBinContent(10,0.9878573);
   ratioH10132->SetBinContent(11,1.156841);
   ratioH10132->SetBinContent(12,0.8849075);
   ratioH10132->SetBinContent(13,0.8166757);
   ratioH10132->SetBinContent(14,0.9766175);
   ratioH10132->SetBinContent(15,1.030928);
   ratioH10132->SetBinContent(16,1.074545);
   ratioH10132->SetBinContent(17,0.9536886);
   ratioH10132->SetBinContent(18,1.103556);
   ratioH10132->SetBinContent(19,0.4816215);
   ratioH10132->SetBinError(7,0.534658);
   ratioH10132->SetBinError(8,0.3391151);
   ratioH10132->SetBinError(9,0.1901918);
   ratioH10132->SetBinError(10,0.1941778);
   ratioH10132->SetBinError(11,0.1754482);
   ratioH10132->SetBinError(12,0.1555219);
   ratioH10132->SetBinError(13,0.1230241);
   ratioH10132->SetBinError(14,0.1177588);
   ratioH10132->SetBinError(15,0.1086295);
   ratioH10132->SetBinError(16,0.09864858);
   ratioH10132->SetBinError(17,0.1185572);
   ratioH10132->SetBinError(18,0.2667506);
   ratioH10132->SetBinError(19,0.4941332);
   ratioH10132->SetEntries(168.1016);
   ratioH10132->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH10132->SetLineColor(ci);
   ratioH10132->GetXaxis()->SetLabelFont(42);
   ratioH10132->GetXaxis()->SetLabelSize(0.035);
   ratioH10132->GetXaxis()->SetTitleSize(0.035);
   ratioH10132->GetXaxis()->SetTitleFont(42);
   ratioH10132->GetYaxis()->SetLabelFont(42);
   ratioH10132->GetYaxis()->SetLabelSize(0.035);
   ratioH10132->GetYaxis()->SetTitleSize(0.035);
   ratioH10132->GetYaxis()->SetTitleFont(42);
   ratioH10132->GetZaxis()->SetLabelFont(42);
   ratioH10132->GetZaxis()->SetLabelSize(0.035);
   ratioH10132->GetZaxis()->SetTitleSize(0.035);
   ratioH10132->GetZaxis()->SetTitleFont(42);
   ratioH10132->Draw("E same");
   line = new TLine(-2,1,1,1);
   line->Draw();
   Stop_11_2->Modified();
   Stop_11->cd();
   Stop_11->Modified();
   Stop->cd();
  
// ------------>Primitives in pad: Stop_12
   TPad *Stop_12 = new TPad("Stop_12", "Stop_12",0.8433333,0.01,0.99,0.49);
   Stop_12->Draw();
   Stop_12->cd();
   Stop_12->Range(0,0,1,1);
   Stop_12->SetFillColor(0);
   Stop_12->SetBorderMode(0);
   Stop_12->SetBorderSize(2);
   Stop_12->SetFrameBorderMode(0);
   Stop_12->Modified();
   Stop->cd();
   Stop->Modified();
   Stop->cd();
   Stop->SetSelected(Stop);
}
