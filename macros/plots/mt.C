void mt()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:13:36 2016) by ROOT version6.02/13
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
   variable_1->Range(-18.75,-15.435,168.75,138.915);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *mt = new THStack();
   mt->SetName("mt");
   mt->SetTitle("mt;mt [GeV];Evt.");
   mt->SetMaximum(117.6);
   
   TH1F *mt_stack_9 = new TH1F("mt_stack_9","mt",20,0,150);
   mt_stack_9->SetMinimum(0);
   mt_stack_9->SetMaximum(123.48);
   mt_stack_9->SetDirectory(0);
   mt_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mt_stack_9->SetLineColor(ci);
   mt_stack_9->GetXaxis()->SetTitle("mt [GeV]");
   mt_stack_9->GetXaxis()->SetLabelFont(42);
   mt_stack_9->GetXaxis()->SetLabelSize(0.035);
   mt_stack_9->GetXaxis()->SetTitleSize(0.035);
   mt_stack_9->GetXaxis()->SetTitleFont(42);
   mt_stack_9->GetYaxis()->SetTitle("Evt.");
   mt_stack_9->GetYaxis()->SetLabelFont(42);
   mt_stack_9->GetYaxis()->SetLabelSize(0.035);
   mt_stack_9->GetYaxis()->SetTitleSize(0.035);
   mt_stack_9->GetYaxis()->SetTitleFont(42);
   mt_stack_9->GetZaxis()->SetLabelFont(42);
   mt_stack_9->GetZaxis()->SetLabelSize(0.035);
   mt_stack_9->GetZaxis()->SetTitleSize(0.035);
   mt_stack_9->GetZaxis()->SetTitleFont(42);
   mt->SetHistogram(mt_stack_9);
   
   
   TH1D *ttbarH849 = new TH1D("ttbarH849","ttbar",20,0,150);
   ttbarH849->SetBinContent(1,15.03066);
   ttbarH849->SetBinContent(2,16.49706);
   ttbarH849->SetBinContent(3,13.93085);
   ttbarH849->SetBinContent(4,7.698629);
   ttbarH849->SetBinContent(5,9.531636);
   ttbarH849->SetBinContent(6,16.49706);
   ttbarH849->SetBinContent(7,6.232223);
   ttbarH849->SetBinContent(8,10.99804);
   ttbarH849->SetBinContent(9,16.13046);
   ttbarH849->SetBinContent(10,17.23026);
   ttbarH849->SetBinContent(11,16.13046);
   ttbarH849->SetBinContent(12,17.96347);
   ttbarH849->SetBinContent(13,8.431832);
   ttbarH849->SetBinContent(14,1.833007);
   ttbarH849->SetBinContent(15,2.199608);
   ttbarH849->SetBinContent(16,1.099804);
   ttbarH849->SetBinContent(17,1.833007);
   ttbarH849->SetBinContent(18,1.099804);
   ttbarH849->SetBinError(1,2.347394);
   ttbarH849->SetBinError(2,2.459237);
   ttbarH849->SetBinError(3,2.259883);
   ttbarH849->SetBinError(4,1.679979);
   ttbarH849->SetBinError(5,1.869308);
   ttbarH849->SetBinError(6,2.459237);
   ttbarH849->SetBinError(7,1.511536);
   ttbarH849->SetBinError(8,2.007958);
   ttbarH849->SetBinError(9,2.431758);
   ttbarH849->SetBinError(10,2.513292);
   ttbarH849->SetBinError(11,2.431758);
   ttbarH849->SetBinError(12,2.56621);
   ttbarH849->SetBinError(13,1.758158);
   ttbarH849->SetBinError(14,0.8197456);
   ttbarH849->SetBinError(15,0.8979863);
   ttbarH849->SetBinError(16,0.6349722);
   ttbarH849->SetBinError(17,0.8197456);
   ttbarH849->SetBinError(18,0.6349722);
   ttbarH849->SetEntries(492);
   ttbarH849->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH849->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH849->SetLineColor(ci);
   ttbarH849->GetXaxis()->SetLabelFont(42);
   ttbarH849->GetXaxis()->SetLabelSize(0.035);
   ttbarH849->GetXaxis()->SetTitleSize(0.035);
   ttbarH849->GetXaxis()->SetTitleFont(42);
   ttbarH849->GetYaxis()->SetLabelFont(42);
   ttbarH849->GetYaxis()->SetLabelSize(0.035);
   ttbarH849->GetYaxis()->SetTitleSize(0.035);
   ttbarH849->GetYaxis()->SetTitleFont(42);
   ttbarH849->GetZaxis()->SetLabelFont(42);
   ttbarH849->GetZaxis()->SetLabelSize(0.035);
   ttbarH849->GetZaxis()->SetTitleSize(0.035);
   ttbarH849->GetZaxis()->SetTitleFont(42);
   mt->Add(ttbarH8,"");
   
   TH1D *wjetsH850 = new TH1D("wjetsH850","wjets",20,0,150);
   wjetsH850->SetBinContent(1,44.59403);
   wjetsH850->SetBinContent(2,32.7973);
   wjetsH850->SetBinContent(3,28.7488);
   wjetsH850->SetBinContent(4,31.47129);
   wjetsH850->SetBinContent(5,32.46885);
   wjetsH850->SetBinContent(6,36.05343);
   wjetsH850->SetBinContent(7,29.30249);
   wjetsH850->SetBinContent(8,41.3536);
   wjetsH850->SetBinContent(9,39.34806);
   wjetsH850->SetBinContent(10,60.64166);
   wjetsH850->SetBinContent(11,81.61716);
   wjetsH850->SetBinContent(12,44.32542);
   wjetsH850->SetBinContent(13,10.92944);
   wjetsH850->SetBinContent(14,0.6667402);
   wjetsH850->SetBinContent(15,1.980214);
   wjetsH850->SetBinContent(16,1.500968);
   wjetsH850->SetBinContent(17,0.4481802);
   wjetsH850->SetBinContent(19,0.1694501);
   wjetsH850->SetBinContent(20,0.2787301);
   wjetsH850->SetBinContent(21,0.4371199);
   wjetsH850->SetBinError(1,3.326825);
   wjetsH850->SetBinError(2,2.936486);
   wjetsH850->SetBinError(3,2.470532);
   wjetsH850->SetBinError(4,2.884948);
   wjetsH850->SetBinError(5,2.763915);
   wjetsH850->SetBinError(6,3.029252);
   wjetsH850->SetBinError(7,2.65184);
   wjetsH850->SetBinError(8,3.410369);
   wjetsH850->SetBinError(9,3.202474);
   wjetsH850->SetBinError(10,4.083828);
   wjetsH850->SetBinError(11,4.783427);
   wjetsH850->SetBinError(12,3.602561);
   wjetsH850->SetBinError(13,1.780913);
   wjetsH850->SetBinError(14,0.3053736);
   wjetsH850->SetBinError(15,0.6371613);
   wjetsH850->SetBinError(16,0.6642447);
   wjetsH850->SetBinError(17,0.2633796);
   wjetsH850->SetBinError(19,0.1694501);
   wjetsH850->SetBinError(20,0.201632);
   wjetsH850->SetBinError(21,0.2185599);
   wjetsH850->SetEntries(2588);
   wjetsH850->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH850->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH850->SetLineColor(ci);
   wjetsH850->GetXaxis()->SetLabelFont(42);
   wjetsH850->GetXaxis()->SetLabelSize(0.035);
   wjetsH850->GetXaxis()->SetTitleSize(0.035);
   wjetsH850->GetXaxis()->SetTitleFont(42);
   wjetsH850->GetYaxis()->SetLabelFont(42);
   wjetsH850->GetYaxis()->SetLabelSize(0.035);
   wjetsH850->GetYaxis()->SetTitleSize(0.035);
   wjetsH850->GetYaxis()->SetTitleFont(42);
   wjetsH850->GetZaxis()->SetLabelFont(42);
   wjetsH850->GetZaxis()->SetLabelSize(0.035);
   wjetsH850->GetZaxis()->SetTitleSize(0.035);
   wjetsH850->GetZaxis()->SetTitleFont(42);
   mt->Add(wjetsH8,"");
   mt->Draw("hist goff");
   
   TH1D *stopH851 = new TH1D("stopH851","Signal",20,0,150);
   stopH851->SetBinContent(1,7.502323);
   stopH851->SetBinContent(2,7.603706);
   stopH851->SetBinContent(3,9.428595);
   stopH851->SetBinContent(4,9.327212);
   stopH851->SetBinContent(5,7.502323);
   stopH851->SetBinContent(6,8.617533);
   stopH851->SetBinContent(7,8.110619);
   stopH851->SetBinContent(8,6.184347);
   stopH851->SetBinContent(9,6.387113);
   stopH851->SetBinContent(10,8.414768);
   stopH851->SetBinContent(11,7.603706);
   stopH851->SetBinContent(12,6.589878);
   stopH851->SetBinContent(13,5.576051);
   stopH851->SetBinContent(14,4.460841);
   stopH851->SetBinContent(15,3.447013);
   stopH851->SetBinContent(16,1.824889);
   stopH851->SetBinContent(17,1.824889);
   stopH851->SetBinContent(18,1.723507);
   stopH851->SetBinContent(19,1.216593);
   stopH851->SetBinContent(20,0.6082965);
   stopH851->SetBinContent(21,0.8110619);
   stopH851->SetBinError(1,0.8721273);
   stopH851->SetBinError(2,0.8780003);
   stopH851->SetBinError(3,0.9776998);
   stopH851->SetBinError(4,0.9724291);
   stopH851->SetBinError(5,0.8721273);
   stopH851->SetBinError(6,0.9347027);
   stopH851->SetBinError(7,0.9067948);
   stopH851->SetBinError(8,0.7918245);
   stopH851->SetBinError(9,0.8047006);
   stopH851->SetBinError(10,0.9236408);
   stopH851->SetBinError(11,0.8780003);
   stopH851->SetBinError(12,0.8173738);
   stopH851->SetBinError(13,0.7518746);
   stopH851->SetBinError(14,0.672497);
   stopH851->SetBinError(15,0.5911579);
   stopH851->SetBinError(16,0.4301306);
   stopH851->SetBinError(17,0.4301306);
   stopH851->SetBinError(18,0.4180118);
   stopH851->SetBinError(19,0.3512001);
   stopH851->SetBinError(20,0.248336);
   stopH851->SetBinError(21,0.2867537);
   stopH851->SetEntries(1132);
   stopH851->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH851->SetLineColor(ci);
   stopH851->GetXaxis()->SetLabelFont(42);
   stopH851->GetXaxis()->SetLabelSize(0.035);
   stopH851->GetXaxis()->SetTitleSize(0.035);
   stopH851->GetXaxis()->SetTitleFont(42);
   stopH851->GetYaxis()->SetLabelFont(42);
   stopH851->GetYaxis()->SetLabelSize(0.035);
   stopH851->GetYaxis()->SetTitleSize(0.035);
   stopH851->GetYaxis()->SetTitleFont(42);
   stopH851->GetZaxis()->SetLabelFont(42);
   stopH851->GetZaxis()->SetLabelSize(0.035);
   stopH851->GetZaxis()->SetTitleSize(0.035);
   stopH851->GetZaxis()->SetTitleFont(42);
   stopH851->Draw("HIST same goff");
   
   TH1D *dataH852 = new TH1D("dataH852","Data",20,0,150);
   dataH852->SetBinContent(1,56);
   dataH852->SetBinContent(2,45);
   dataH852->SetBinContent(3,39);
   dataH852->SetBinContent(4,43);
   dataH852->SetBinContent(5,33);
   dataH852->SetBinContent(6,59);
   dataH852->SetBinContent(7,40);
   dataH852->SetBinContent(8,42);
   dataH852->SetBinContent(9,48);
   dataH852->SetBinContent(10,82);
   dataH852->SetBinContent(11,112);
   dataH852->SetBinContent(12,66);
   dataH852->SetBinContent(13,13);
   dataH852->SetBinContent(14,3);
   dataH852->SetBinContent(15,4);
   dataH852->SetBinContent(16,5);
   dataH852->SetBinContent(17,1);
   dataH852->SetBinContent(18,2);
   dataH852->SetBinContent(21,2);
   dataH852->SetBinError(1,7.483315);
   dataH852->SetBinError(2,6.708204);
   dataH852->SetBinError(3,6.244998);
   dataH852->SetBinError(4,6.557439);
   dataH852->SetBinError(5,5.744563);
   dataH852->SetBinError(6,7.681146);
   dataH852->SetBinError(7,6.324555);
   dataH852->SetBinError(8,6.480741);
   dataH852->SetBinError(9,6.928203);
   dataH852->SetBinError(10,9.055385);
   dataH852->SetBinError(11,10.58301);
   dataH852->SetBinError(12,8.124038);
   dataH852->SetBinError(13,3.605551);
   dataH852->SetBinError(14,1.732051);
   dataH852->SetBinError(15,2);
   dataH852->SetBinError(16,2.236068);
   dataH852->SetBinError(17,1);
   dataH852->SetBinError(18,1.414214);
   dataH852->SetBinError(21,1.414214);
   dataH852->SetEntries(695);
   dataH852->SetStats(0);
   dataH852->GetXaxis()->SetLabelFont(42);
   dataH852->GetXaxis()->SetLabelSize(0.035);
   dataH852->GetXaxis()->SetTitleSize(0.035);
   dataH852->GetXaxis()->SetTitleFont(42);
   dataH852->GetYaxis()->SetLabelFont(42);
   dataH852->GetYaxis()->SetLabelSize(0.035);
   dataH852->GetYaxis()->SetTitleSize(0.035);
   dataH852->GetYaxis()->SetTitleFont(42);
   dataH852->GetZaxis()->SetLabelFont(42);
   dataH852->GetZaxis()->SetLabelSize(0.035);
   dataH852->GetZaxis()->SetTitleSize(0.035);
   dataH852->GetZaxis()->SetTitleFont(42);
   dataH852->Draw("E same goff");
   
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
   
   TPaveText *pt = new TPaveText(0.4720531,0.94,0.5279469,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("mt");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-18.75,0.375,168.75,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH853 = new TH1D("backgroundH853","",20,0,150);
   backgroundH853->SetMinimum(0.5);
   backgroundH853->SetMaximum(1.5);
   backgroundH853->SetEntries(3101);
   backgroundH853->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH853->SetLineColor(ci);
   backgroundH853->GetXaxis()->SetLabelFont(42);
   backgroundH853->GetXaxis()->SetLabelSize(0.15);
   backgroundH853->GetXaxis()->SetTitleSize(0.035);
   backgroundH853->GetXaxis()->SetTitleFont(42);
   backgroundH853->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH853->GetYaxis()->SetNdivisions(5);
   backgroundH853->GetYaxis()->SetLabelFont(42);
   backgroundH853->GetYaxis()->SetLabelSize(0.15);
   backgroundH853->GetYaxis()->SetTitleSize(0.15);
   backgroundH853->GetYaxis()->SetTickLength(0.01);
   backgroundH853->GetYaxis()->SetTitleOffset(0.35);
   backgroundH853->GetYaxis()->SetTitleFont(42);
   backgroundH853->GetZaxis()->SetLabelFont(42);
   backgroundH853->GetZaxis()->SetLabelSize(0.035);
   backgroundH853->GetZaxis()->SetTitleSize(0.035);
   backgroundH853->GetZaxis()->SetTitleFont(42);
   backgroundH853->Draw("");
   
   Double_t Graph_from_backgroundH8_fx1009[20] = {
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
   Double_t Graph_from_backgroundH8_fy1009[20] = {
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
   Double_t Graph_from_backgroundH8_fex1009[20] = {
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
   Double_t Graph_from_backgroundH8_fey1009[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH8_fx1009,Graph_from_backgroundH8_fy1009,Graph_from_backgroundH8_fex1009,Graph_from_backgroundH8_fey1009);
   gre->SetName("Graph_from_backgroundH8");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH81009 = new TH1F("Graph_Graph_from_backgroundH81009","",100,0,165);
   Graph_Graph_from_backgroundH81009->SetMinimum(0);
   Graph_Graph_from_backgroundH81009->SetMaximum(2.2);
   Graph_Graph_from_backgroundH81009->SetDirectory(0);
   Graph_Graph_from_backgroundH81009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH81009->SetLineColor(ci);
   Graph_Graph_from_backgroundH81009->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH81009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH81009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH81009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH81009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH81009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH81009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH81009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH81009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH81009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH81009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH81009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH81009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH81009);
   
   gre->Draw("3");
   
   TH1D *ratioH854 = new TH1D("ratioH854","",20,0,150);
   ratioH854->SetBinContent(1,0.9392083);
   ratioH854->SetBinContent(2,0.9128832);
   ratioH854->SetBinContent(3,0.9137844);
   ratioH854->SetBinContent(4,1.097781);
   ratioH854->SetBinContent(5,0.7857051);
   ratioH854->SetBinContent(6,1.12273);
   ratioH854->SetBinContent(7,1.12566);
   ratioH854->SetBinContent(8,0.802267);
   ratioH854->SetBinContent(9,0.8651997);
   ratioH854->SetBinContent(10,1.053011);
   ratioH854->SetBinContent(11,1.145808);
   ratioH854->SetBinContent(12,1.059579);
   ratioH854->SetBinContent(13,0.6714434);
   ratioH854->SetBinContent(14,1.200121);
   ratioH854->SetBinContent(15,0.9569784);
   ratioH854->SetBinContent(16,1.922506);
   ratioH854->SetBinContent(17,0.4383683);
   ratioH854->SetBinContent(18,1.818506);
   ratioH854->SetBinContent(21,4.575404);
   ratioH854->SetBinError(1,0.1409448);
   ratioH854->SetBinError(2,0.1534615);
   ratioH854->SetBinError(3,0.1629394);
   ratioH854->SetBinError(4,0.191782);
   ratioH854->SetBinError(5,0.1503438);
   ratioH854->SetBinError(6,0.1682675);
   ratioH854->SetBinError(7,0.2025517);
   ratioH854->SetBinError(8,0.1378507);
   ratioH854->SetBinError(9,0.1397418);
   ratioH854->SetBinError(10,0.1331425);
   ratioH854->SetBinError(11,0.1252147);
   ratioH854->SetBinError(12,0.1505717);
   ratioH854->SetBinError(13,0.2054552);
   ratioH854->SetBinError(14,0.8102338);
   ratioH854->SetBinError(15,0.5408348);
   ratioH854->SetBinError(16,1.095725);
   ratioH854->SetBinError(17,0.4685546);
   ratioH854->SetBinError(18,1.660061);
   ratioH854->SetBinError(21,3.962416);
   ratioH854->SetEntries(64.94463);
   ratioH854->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH854->SetLineColor(ci);
   ratioH854->GetXaxis()->SetLabelFont(42);
   ratioH854->GetXaxis()->SetLabelSize(0.035);
   ratioH854->GetXaxis()->SetTitleSize(0.035);
   ratioH854->GetXaxis()->SetTitleFont(42);
   ratioH854->GetYaxis()->SetLabelFont(42);
   ratioH854->GetYaxis()->SetLabelSize(0.035);
   ratioH854->GetYaxis()->SetTitleSize(0.035);
   ratioH854->GetYaxis()->SetTitleFont(42);
   ratioH854->GetZaxis()->SetLabelFont(42);
   ratioH854->GetZaxis()->SetLabelSize(0.035);
   ratioH854->GetZaxis()->SetTitleSize(0.035);
   ratioH854->GetZaxis()->SetTitleFont(42);
   ratioH854->Draw("E same");
   TLine *line = new TLine(0,1,150,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
