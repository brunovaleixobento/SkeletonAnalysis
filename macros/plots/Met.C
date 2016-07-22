void Met()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:13:06 2016) by ROOT version6.02/13
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
   variable_1->Range(262.5,-23.97938,637.5,215.8144);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *Met = new THStack();
   Met->SetName("Met");
   Met->SetTitle("Met;Met [GeV];Evt.");
   Met->SetMaximum(182.7);
   
   TH1F *Met_stack_5 = new TH1F("Met_stack_5","Met",20,300,600);
   Met_stack_5->SetMinimum(0);
   Met_stack_5->SetMaximum(191.835);
   Met_stack_5->SetDirectory(0);
   Met_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Met_stack_5->SetLineColor(ci);
   Met_stack_5->GetXaxis()->SetTitle("Met [GeV]");
   Met_stack_5->GetXaxis()->SetLabelFont(42);
   Met_stack_5->GetXaxis()->SetLabelSize(0.035);
   Met_stack_5->GetXaxis()->SetTitleSize(0.035);
   Met_stack_5->GetXaxis()->SetTitleFont(42);
   Met_stack_5->GetYaxis()->SetTitle("Evt.");
   Met_stack_5->GetYaxis()->SetLabelFont(42);
   Met_stack_5->GetYaxis()->SetLabelSize(0.035);
   Met_stack_5->GetYaxis()->SetTitleSize(0.035);
   Met_stack_5->GetYaxis()->SetTitleFont(42);
   Met_stack_5->GetZaxis()->SetLabelFont(42);
   Met_stack_5->GetZaxis()->SetLabelSize(0.035);
   Met_stack_5->GetZaxis()->SetTitleSize(0.035);
   Met_stack_5->GetZaxis()->SetTitleFont(42);
   Met->SetHistogram(Met_stack_5);
   
   
   TH1D *ttbarH425 = new TH1D("ttbarH425","ttbar",20,300,600);
   ttbarH425->SetBinContent(1,42.15916);
   ttbarH425->SetBinContent(2,39.59295);
   ttbarH425->SetBinContent(3,21.62948);
   ttbarH425->SetBinContent(4,16.49706);
   ttbarH425->SetBinContent(5,20.16308);
   ttbarH425->SetBinContent(6,8.431832);
   ttbarH425->SetBinContent(7,9.898237);
   ttbarH425->SetBinContent(8,6.598825);
   ttbarH425->SetBinContent(9,2.932811);
   ttbarH425->SetBinContent(10,4.032615);
   ttbarH425->SetBinContent(11,2.56621);
   ttbarH425->SetBinContent(12,1.833007);
   ttbarH425->SetBinContent(13,1.099804);
   ttbarH425->SetBinContent(14,0.7332027);
   ttbarH425->SetBinContent(15,0.3666014);
   ttbarH425->SetBinContent(16,0.3666014);
   ttbarH425->SetBinContent(17,0.3666014);
   ttbarH425->SetBinContent(18,0.3666014);
   ttbarH425->SetBinContent(21,0.7332027);
   ttbarH425->SetBinError(1,3.931362);
   ttbarH425->SetBinError(2,3.809833);
   ttbarH425->SetBinError(3,2.815919);
   ttbarH425->SetBinError(4,2.459237);
   ttbarH425->SetBinError(5,2.718789);
   ttbarH425->SetBinError(6,1.758158);
   ttbarH425->SetBinError(7,1.904917);
   ttbarH425->SetBinError(8,1.555358);
   ttbarH425->SetBinError(9,1.036905);
   ttbarH425->SetBinError(10,1.215879);
   ttbarH425->SetBinError(11,0.9699361);
   ttbarH425->SetBinError(12,0.8197456);
   ttbarH425->SetBinError(13,0.6349722);
   ttbarH425->SetBinError(14,0.5184526);
   ttbarH425->SetBinError(15,0.3666014);
   ttbarH425->SetBinError(16,0.3666014);
   ttbarH425->SetBinError(17,0.3666014);
   ttbarH425->SetBinError(18,0.3666014);
   ttbarH425->SetBinError(21,0.5184526);
   ttbarH425->SetEntries(492);
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
   Met->Add(ttbarH4,"");
   
   TH1D *wjetsH426 = new TH1D("wjetsH426","wjets",20,300,600);
   wjetsH426->SetBinContent(1,120.5754);
   wjetsH426->SetBinContent(2,83.82931);
   wjetsH426->SetBinContent(3,68.78019);
   wjetsH426->SetBinContent(4,47.14597);
   wjetsH426->SetBinContent(5,38.58106);
   wjetsH426->SetBinContent(6,32.83591);
   wjetsH426->SetBinContent(7,25.96965);
   wjetsH426->SetBinContent(8,17.70261);
   wjetsH426->SetBinContent(9,15.36153);
   wjetsH426->SetBinContent(10,10.69615);
   wjetsH426->SetBinContent(11,9.630344);
   wjetsH426->SetBinContent(12,7.547833);
   wjetsH426->SetBinContent(13,6.957192);
   wjetsH426->SetBinContent(14,5.454262);
   wjetsH426->SetBinContent(15,4.618071);
   wjetsH426->SetBinContent(16,3.63942);
   wjetsH426->SetBinContent(17,3.2023);
   wjetsH426->SetBinContent(18,1.66132);
   wjetsH426->SetBinContent(19,1.26225);
   wjetsH426->SetBinContent(20,1.04369);
   wjetsH426->SetBinContent(21,12.63843);
   wjetsH426->SetBinError(1,6.273041);
   wjetsH426->SetBinError(2,5.159301);
   wjetsH426->SetBinError(3,4.548141);
   wjetsH426->SetBinError(4,3.535853);
   wjetsH426->SetBinError(5,3.009199);
   wjetsH426->SetBinError(6,2.7308);
   wjetsH426->SetBinError(7,2.363007);
   wjetsH426->SetBinError(8,1.741682);
   wjetsH426->SetBinError(9,1.709465);
   wjetsH426->SetBinError(10,1.283776);
   wjetsH426->SetBinError(11,1.216811);
   wjetsH426->SetBinError(12,1.068128);
   wjetsH426->SetBinError(13,0.9973896);
   wjetsH426->SetBinError(14,0.8829307);
   wjetsH426->SetBinError(15,0.8109256);
   wjetsH426->SetBinError(16,0.6774148);
   wjetsH426->SetBinError(17,0.6411882);
   wjetsH426->SetBinError(18,0.4715213);
   wjetsH426->SetBinError(19,0.3848824);
   wjetsH426->SetBinError(20,0.3524915);
   wjetsH426->SetBinError(21,1.188156);
   wjetsH426->SetEntries(2588);
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
   Met->Add(wjetsH4,"");
   Met->Draw("hist goff");
   
   TH1D *stopH427 = new TH1D("stopH427","Signal",20,300,600);
   stopH427->SetBinContent(1,15.91709);
   stopH427->SetBinContent(2,11.45625);
   stopH427->SetBinContent(3,10.54381);
   stopH427->SetBinContent(4,8.414768);
   stopH427->SetBinContent(5,7.603706);
   stopH427->SetBinContent(6,7.299558);
   stopH427->SetBinContent(7,6.691261);
   stopH427->SetBinContent(8,5.271903);
   stopH427->SetBinContent(9,4.156692);
   stopH427->SetBinContent(10,4.562223);
   stopH427->SetBinContent(11,4.460841);
   stopH427->SetBinContent(12,3.041482);
   stopH427->SetBinContent(13,2.838717);
   stopH427->SetBinContent(14,2.9401);
   stopH427->SetBinContent(15,2.23042);
   stopH427->SetBinContent(16,1.824889);
   stopH427->SetBinContent(17,2.129038);
   stopH427->SetBinContent(18,1.419358);
   stopH427->SetBinContent(19,0.9124447);
   stopH427->SetBinContent(20,1.216593);
   stopH427->SetBinContent(21,9.834126);
   stopH427->SetBinError(1,1.270322);
   stopH427->SetBinError(2,1.077713);
   stopH427->SetBinError(3,1.033905);
   stopH427->SetBinError(4,0.9236408);
   stopH427->SetBinError(5,0.8780003);
   stopH427->SetBinError(6,0.8602611);
   stopH427->SetBinError(7,0.8236373);
   stopH427->SetBinError(8,0.7310814);
   stopH427->SetBinError(9,0.6491663);
   stopH427->SetBinError(10,0.6800961);
   stopH427->SetBinError(11,0.672497);
   stopH427->SetBinError(12,0.5552962);
   stopH427->SetBinError(13,0.5364671);
   stopH427->SetBinError(14,0.5459628);
   stopH427->SetBinError(15,0.4755272);
   stopH427->SetBinError(16,0.4301306);
   stopH427->SetBinError(17,0.4645941);
   stopH427->SetBinError(18,0.3793395);
   stopH427->SetBinError(19,0.3041482);
   stopH427->SetBinError(20,0.3512001);
   stopH427->SetBinError(21,0.9985042);
   stopH427->SetEntries(1132);
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
   
   TH1D *dataH428 = new TH1D("dataH428","Data",20,300,600);
   dataH428->SetBinContent(1,174);
   dataH428->SetBinContent(2,114);
   dataH428->SetBinContent(3,87);
   dataH428->SetBinContent(4,56);
   dataH428->SetBinContent(5,51);
   dataH428->SetBinContent(6,48);
   dataH428->SetBinContent(7,31);
   dataH428->SetBinContent(8,23);
   dataH428->SetBinContent(9,24);
   dataH428->SetBinContent(10,16);
   dataH428->SetBinContent(11,8);
   dataH428->SetBinContent(12,15);
   dataH428->SetBinContent(13,7);
   dataH428->SetBinContent(14,8);
   dataH428->SetBinContent(15,6);
   dataH428->SetBinContent(16,7);
   dataH428->SetBinContent(17,6);
   dataH428->SetBinContent(18,2);
   dataH428->SetBinContent(19,1);
   dataH428->SetBinContent(20,3);
   dataH428->SetBinContent(21,8);
   dataH428->SetBinError(1,13.19091);
   dataH428->SetBinError(2,10.67708);
   dataH428->SetBinError(3,9.327379);
   dataH428->SetBinError(4,7.483315);
   dataH428->SetBinError(5,7.141428);
   dataH428->SetBinError(6,6.928203);
   dataH428->SetBinError(7,5.567764);
   dataH428->SetBinError(8,4.795832);
   dataH428->SetBinError(9,4.898979);
   dataH428->SetBinError(10,4);
   dataH428->SetBinError(11,2.828427);
   dataH428->SetBinError(12,3.872983);
   dataH428->SetBinError(13,2.645751);
   dataH428->SetBinError(14,2.828427);
   dataH428->SetBinError(15,2.44949);
   dataH428->SetBinError(16,2.645751);
   dataH428->SetBinError(17,2.44949);
   dataH428->SetBinError(18,1.414214);
   dataH428->SetBinError(19,1);
   dataH428->SetBinError(20,1.732051);
   dataH428->SetBinError(21,2.828427);
   dataH428->SetEntries(695);
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
   
   TPaveText *pt = new TPaveText(0.4650026,0.94,0.5349974,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Met");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(262.5,0.375,637.5,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH429 = new TH1D("backgroundH429","",20,300,600);
   backgroundH429->SetMinimum(0.5);
   backgroundH429->SetMaximum(1.5);
   backgroundH429->SetEntries(3101);
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
   backgroundH429->GetYaxis()->SetTitleOffset(0.35);
   backgroundH429->GetYaxis()->SetTitleFont(42);
   backgroundH429->GetZaxis()->SetLabelFont(42);
   backgroundH429->GetZaxis()->SetLabelSize(0.035);
   backgroundH429->GetZaxis()->SetTitleSize(0.035);
   backgroundH429->GetZaxis()->SetTitleFont(42);
   backgroundH429->Draw("");
   
   Double_t Graph_from_backgroundH4_fx1005[20] = {
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
   Double_t Graph_from_backgroundH4_fy1005[20] = {
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
   Double_t Graph_from_backgroundH4_fex1005[20] = {
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
   Double_t Graph_from_backgroundH4_fey1005[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH4_fx1005,Graph_from_backgroundH4_fy1005,Graph_from_backgroundH4_fex1005,Graph_from_backgroundH4_fey1005);
   gre->SetName("Graph_from_backgroundH4");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH41005 = new TH1F("Graph_Graph_from_backgroundH41005","",100,270,630);
   Graph_Graph_from_backgroundH41005->SetMinimum(0.594717);
   Graph_Graph_from_backgroundH41005->SetMaximum(1.405283);
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
   
   TH1D *ratioH430 = new TH1D("ratioH430","",20,300,600);
   ratioH430->SetBinContent(1,1.069226);
   ratioH430->SetBinContent(2,0.9236583);
   ratioH430->SetBinContent(3,0.9622865);
   ratioH430->SetBinContent(4,0.8799077);
   ratioH430->SetBinContent(5,0.8681718);
   ratioH430->SetBinContent(6,1.163136);
   ratioH430->SetBinContent(7,0.8642828);
   ratioH430->SetBinContent(8,0.9464462);
   ratioH430->SetBinContent(9,1.311881);
   ratioH430->SetBinContent(10,1.086309);
   ratioH430->SetBinContent(11,0.655923);
   ratioH430->SetBinContent(12,1.599004);
   ratioH430->SetBinContent(13,0.8688102);
   ratioH430->SetBinContent(14,1.292937);
   ratioH430->SetBinContent(15,1.20369);
   ratioH430->SetBinContent(16,1.74737);
   ratioH430->SetBinContent(17,1.68119);
   ratioH430->SetBinContent(18,0.9862314);
   ratioH430->SetBinContent(19,0.7922362);
   ratioH430->SetBinContent(20,2.874417);
   ratioH430->SetBinContent(21,0.5982816);
   ratioH430->SetBinError(1,0.09453226);
   ratioH430->SetBinError(2,0.09893148);
   ratioH430->SetBinError(3,0.117836);
   ratioH430->SetBinError(4,0.131801);
   ratioH430->SetBinError(5,0.1355402);
   ratioH430->SetBinError(6,0.1912191);
   ratioH430->SetBinError(7,0.1715965);
   ratioH430->SetBinError(8,0.2172938);
   ratioH430->SetBinError(9,0.3037527);
   ratioH430->SetBinError(10,0.3012659);
   ratioH430->SetBinError(11,0.2465413);
   ratioH430->SetBinError(12,0.4723631);
   ratioH430->SetBinError(13,0.3522621);
   ratioH430->SetBinError(14,0.5047146);
   ratioH430->SetBinError(15,0.5363403);
   ratioH430->SetBinError(16,0.7409882);
   ratioH430->SetBinError(17,0.7694927);
   ratioH430->SetBinError(18,0.7554451);
   ratioH430->SetBinError(19,0.8282468);
   ratioH430->SetBinError(20,1.922637);
   ratioH430->SetBinError(21,0.2193327);
   ratioH430->SetEntries(76.30182);
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
   TLine *line = new TLine(300,1,600,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
