void Jet2Pt()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:12:59 2016) by ROOT version6.02/13
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
   variable_1->Range(-62.5,-1.908243,562.5,2.925211);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetLogy();
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *Jet2Pt = new THStack();
   Jet2Pt->SetName("Jet2Pt");
   Jet2Pt->SetTitle("Jet2Pt;p_{T} (Jet2) [GeV];Evt.");
   Jet2Pt->SetMaximum(167.9976);
   
   TH1F *Jet2Pt_stack_4 = new TH1F("Jet2Pt_stack_4","Jet2Pt",20,0,500);
   Jet2Pt_stack_4->SetMinimum(0.03759259);
   Jet2Pt_stack_4->SetMaximum(276.6086);
   Jet2Pt_stack_4->SetDirectory(0);
   Jet2Pt_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jet2Pt_stack_4->SetLineColor(ci);
   Jet2Pt_stack_4->GetXaxis()->SetTitle("p_{T} (Jet2) [GeV]");
   Jet2Pt_stack_4->GetXaxis()->SetLabelFont(42);
   Jet2Pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   Jet2Pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   Jet2Pt_stack_4->GetXaxis()->SetTitleFont(42);
   Jet2Pt_stack_4->GetYaxis()->SetTitle("Evt.");
   Jet2Pt_stack_4->GetYaxis()->SetLabelFont(42);
   Jet2Pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   Jet2Pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   Jet2Pt_stack_4->GetYaxis()->SetTitleFont(42);
   Jet2Pt_stack_4->GetZaxis()->SetLabelFont(42);
   Jet2Pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   Jet2Pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   Jet2Pt_stack_4->GetZaxis()->SetTitleFont(42);
   Jet2Pt->SetHistogram(Jet2Pt_stack_4);
   
   
   TH1D *ttbarH319 = new TH1D("ttbarH319","ttbar",20,0,500);
   ttbarH319->SetBinContent(1,0.7332027);
   ttbarH319->SetBinContent(2,12.83105);
   ttbarH319->SetBinContent(3,31.89432);
   ttbarH319->SetBinContent(4,39.95955);
   ttbarH319->SetBinContent(5,26.7619);
   ttbarH319->SetBinContent(6,28.22831);
   ttbarH319->SetBinContent(7,17.59687);
   ttbarH319->SetBinContent(8,9.898237);
   ttbarH319->SetBinContent(9,4.399216);
   ttbarH319->SetBinContent(10,2.932811);
   ttbarH319->SetBinContent(11,1.099804);
   ttbarH319->SetBinContent(12,1.466405);
   ttbarH319->SetBinContent(13,1.466405);
   ttbarH319->SetBinContent(14,0.3666014);
   ttbarH319->SetBinContent(15,0.7332027);
   ttbarH319->SetBinError(1,0.5184526);
   ttbarH319->SetBinError(2,2.168843);
   ttbarH319->SetBinError(3,3.41943);
   ttbarH319->SetBinError(4,3.827431);
   ttbarH319->SetBinError(5,3.132244);
   ttbarH319->SetBinError(6,3.216914);
   ttbarH319->SetBinError(7,2.539889);
   ttbarH319->SetBinError(8,1.904917);
   ttbarH319->SetBinError(9,1.269944);
   ttbarH319->SetBinError(10,1.036905);
   ttbarH319->SetBinError(11,0.6349722);
   ttbarH319->SetBinError(12,0.7332027);
   ttbarH319->SetBinError(13,0.7332027);
   ttbarH319->SetBinError(14,0.3666014);
   ttbarH319->SetBinError(15,0.5184526);
   ttbarH319->SetEntries(492);
   ttbarH319->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH319->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH319->SetLineColor(ci);
   ttbarH319->GetXaxis()->SetLabelFont(42);
   ttbarH319->GetXaxis()->SetLabelSize(0.035);
   ttbarH319->GetXaxis()->SetTitleSize(0.035);
   ttbarH319->GetXaxis()->SetTitleFont(42);
   ttbarH319->GetYaxis()->SetLabelFont(42);
   ttbarH319->GetYaxis()->SetLabelSize(0.035);
   ttbarH319->GetYaxis()->SetTitleSize(0.035);
   ttbarH319->GetYaxis()->SetTitleFont(42);
   ttbarH319->GetZaxis()->SetLabelFont(42);
   ttbarH319->GetZaxis()->SetLabelSize(0.035);
   ttbarH319->GetZaxis()->SetTitleSize(0.035);
   ttbarH319->GetZaxis()->SetTitleFont(42);
   Jet2Pt->Add(ttbarH3,"");
   
   TH1D *wjetsH320 = new TH1D("wjetsH320","wjets",20,0,500);
   wjetsH320->SetBinContent(1,34.27928);
   wjetsH320->SetBinContent(2,147.1666);
   wjetsH320->SetBinContent(3,110.0171);
   wjetsH320->SetBinContent(4,69.47409);
   wjetsH320->SetBinContent(5,47.80739);
   wjetsH320->SetBinContent(6,36.25662);
   wjetsH320->SetBinContent(7,24.33894);
   wjetsH320->SetBinContent(8,15.29093);
   wjetsH320->SetBinContent(9,9.470631);
   wjetsH320->SetBinContent(10,7.59562);
   wjetsH320->SetBinContent(11,4.977769);
   wjetsH320->SetBinContent(12,3.169119);
   wjetsH320->SetBinContent(13,2.076319);
   wjetsH320->SetBinContent(14,1.31136);
   wjetsH320->SetBinContent(15,1.52992);
   wjetsH320->SetBinContent(16,0.7649598);
   wjetsH320->SetBinContent(17,0.8742398);
   wjetsH320->SetBinContent(18,0.6556798);
   wjetsH320->SetBinContent(19,0.2185599);
   wjetsH320->SetBinContent(20,0.10928);
   wjetsH320->SetBinContent(21,1.74848);
   wjetsH320->SetBinError(1,3.395276);
   wjetsH320->SetBinError(2,6.825881);
   wjetsH320->SetBinError(3,5.609834);
   wjetsH320->SetBinError(4,4.178247);
   wjetsH320->SetBinError(5,3.391237);
   wjetsH320->SetBinError(6,2.738039);
   wjetsH320->SetBinError(7,2.017573);
   wjetsH320->SetBinError(8,1.566472);
   wjetsH320->SetBinError(9,1.126701);
   wjetsH320->SetBinError(10,0.9654054);
   wjetsH320->SetBinError(11,0.7444235);
   wjetsH320->SetBinError(12,0.5884907);
   wjetsH320->SetBinError(13,0.4763404);
   wjetsH320->SetBinError(14,0.3785569);
   wjetsH320->SetBinError(15,0.4088882);
   wjetsH320->SetBinError(16,0.2891276);
   wjetsH320->SetBinError(17,0.3090904);
   wjetsH320->SetBinError(18,0.2676802);
   wjetsH320->SetBinError(19,0.1545452);
   wjetsH320->SetBinError(20,0.10928);
   wjetsH320->SetBinError(21,0.4371199);
   wjetsH320->SetEntries(2588);
   wjetsH320->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH320->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH320->SetLineColor(ci);
   wjetsH320->GetXaxis()->SetLabelFont(42);
   wjetsH320->GetXaxis()->SetLabelSize(0.035);
   wjetsH320->GetXaxis()->SetTitleSize(0.035);
   wjetsH320->GetXaxis()->SetTitleFont(42);
   wjetsH320->GetYaxis()->SetLabelFont(42);
   wjetsH320->GetYaxis()->SetLabelSize(0.035);
   wjetsH320->GetYaxis()->SetTitleSize(0.035);
   wjetsH320->GetYaxis()->SetTitleFont(42);
   wjetsH320->GetZaxis()->SetLabelFont(42);
   wjetsH320->GetZaxis()->SetLabelSize(0.035);
   wjetsH320->GetZaxis()->SetTitleSize(0.035);
   wjetsH320->GetZaxis()->SetTitleFont(42);
   Jet2Pt->Add(wjetsH3,"");
   Jet2Pt->Draw("hist goff");
   
   TH1D *stopH321 = new TH1D("stopH321","Signal",20,0,500);
   stopH321->SetBinContent(1,4.156692);
   stopH321->SetBinContent(2,23.21665);
   stopH321->SetBinContent(3,23.31803);
   stopH321->SetBinContent(4,15.30879);
   stopH321->SetBinContent(5,13.28114);
   stopH321->SetBinContent(6,12.16593);
   stopH321->SetBinContent(7,7.40094);
   stopH321->SetBinContent(8,4.663606);
   stopH321->SetBinContent(9,3.548396);
   stopH321->SetBinContent(10,2.23042);
   stopH321->SetBinContent(11,1.824889);
   stopH321->SetBinContent(12,1.11521);
   stopH321->SetBinContent(13,0.6082965);
   stopH321->SetBinContent(14,0.405531);
   stopH321->SetBinContent(15,0.3041482);
   stopH321->SetBinContent(16,0.405531);
   stopH321->SetBinContent(17,0.1013827);
   stopH321->SetBinContent(18,0.1013827);
   stopH321->SetBinContent(20,0.1013827);
   stopH321->SetBinContent(21,0.5069137);
   stopH321->SetBinError(1,0.6491663);
   stopH321->SetBinError(2,1.534199);
   stopH321->SetBinError(3,1.537545);
   stopH321->SetBinError(4,1.245812);
   stopH321->SetBinError(5,1.160379);
   stopH321->SetBinError(6,1.110592);
   stopH321->SetBinError(7,0.8662145);
   stopH321->SetBinError(8,0.6876112);
   stopH321->SetBinError(9,0.5997884);
   stopH321->SetBinError(10,0.4755272);
   stopH321->SetBinError(11,0.4301306);
   stopH321->SetBinError(12,0.3362485);
   stopH321->SetBinError(13,0.248336);
   stopH321->SetBinError(14,0.2027655);
   stopH321->SetBinError(15,0.1756001);
   stopH321->SetBinError(16,0.2027655);
   stopH321->SetBinError(17,0.1013827);
   stopH321->SetBinError(18,0.1013827);
   stopH321->SetBinError(20,0.1013827);
   stopH321->SetBinError(21,0.2266987);
   stopH321->SetEntries(1132);
   stopH321->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH321->SetLineColor(ci);
   stopH321->GetXaxis()->SetLabelFont(42);
   stopH321->GetXaxis()->SetLabelSize(0.035);
   stopH321->GetXaxis()->SetTitleSize(0.035);
   stopH321->GetXaxis()->SetTitleFont(42);
   stopH321->GetYaxis()->SetLabelFont(42);
   stopH321->GetYaxis()->SetLabelSize(0.035);
   stopH321->GetYaxis()->SetTitleSize(0.035);
   stopH321->GetYaxis()->SetTitleFont(42);
   stopH321->GetZaxis()->SetLabelFont(42);
   stopH321->GetZaxis()->SetLabelSize(0.035);
   stopH321->GetZaxis()->SetTitleSize(0.035);
   stopH321->GetZaxis()->SetTitleFont(42);
   stopH321->Draw("HIST same goff");
   
   TH1D *dataH322 = new TH1D("dataH322","Data",20,0,500);
   dataH322->SetBinContent(1,35);
   dataH322->SetBinContent(2,151);
   dataH322->SetBinContent(3,141);
   dataH322->SetBinContent(4,102);
   dataH322->SetBinContent(5,72);
   dataH322->SetBinContent(6,68);
   dataH322->SetBinContent(7,44);
   dataH322->SetBinContent(8,27);
   dataH322->SetBinContent(9,15);
   dataH322->SetBinContent(10,10);
   dataH322->SetBinContent(11,9);
   dataH322->SetBinContent(12,8);
   dataH322->SetBinContent(13,3);
   dataH322->SetBinContent(14,1);
   dataH322->SetBinContent(15,4);
   dataH322->SetBinContent(18,1);
   dataH322->SetBinContent(19,1);
   dataH322->SetBinContent(21,3);
   dataH322->SetBinError(1,5.91608);
   dataH322->SetBinError(2,12.28821);
   dataH322->SetBinError(3,11.87434);
   dataH322->SetBinError(4,10.0995);
   dataH322->SetBinError(5,8.485281);
   dataH322->SetBinError(6,8.246211);
   dataH322->SetBinError(7,6.63325);
   dataH322->SetBinError(8,5.196152);
   dataH322->SetBinError(9,3.872983);
   dataH322->SetBinError(10,3.162278);
   dataH322->SetBinError(11,3);
   dataH322->SetBinError(12,2.828427);
   dataH322->SetBinError(13,1.732051);
   dataH322->SetBinError(14,1);
   dataH322->SetBinError(15,2);
   dataH322->SetBinError(18,1);
   dataH322->SetBinError(19,1);
   dataH322->SetBinError(21,1.732051);
   dataH322->SetEntries(695);
   dataH322->SetStats(0);
   dataH322->GetXaxis()->SetLabelFont(42);
   dataH322->GetXaxis()->SetLabelSize(0.035);
   dataH322->GetXaxis()->SetTitleSize(0.035);
   dataH322->GetXaxis()->SetTitleFont(42);
   dataH322->GetYaxis()->SetLabelFont(42);
   dataH322->GetYaxis()->SetLabelSize(0.035);
   dataH322->GetYaxis()->SetTitleSize(0.035);
   dataH322->GetYaxis()->SetTitleFont(42);
   dataH322->GetZaxis()->SetLabelFont(42);
   dataH322->GetZaxis()->SetLabelSize(0.035);
   dataH322->GetZaxis()->SetTitleSize(0.035);
   dataH322->GetZaxis()->SetTitleFont(42);
   dataH322->Draw("E same goff");
   
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
   
   TPaveText *pt = new TPaveText(0.4457738,0.94,0.5542262,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Jet2Pt");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-62.5,0.375,562.5,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH323 = new TH1D("backgroundH323","",20,0,500);
   backgroundH323->SetMinimum(0.5);
   backgroundH323->SetMaximum(1.5);
   backgroundH323->SetEntries(3101);
   backgroundH323->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH323->SetLineColor(ci);
   backgroundH323->GetXaxis()->SetLabelFont(42);
   backgroundH323->GetXaxis()->SetLabelSize(0.15);
   backgroundH323->GetXaxis()->SetTitleSize(0.035);
   backgroundH323->GetXaxis()->SetTitleFont(42);
   backgroundH323->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH323->GetYaxis()->SetNdivisions(5);
   backgroundH323->GetYaxis()->SetLabelFont(42);
   backgroundH323->GetYaxis()->SetLabelSize(0.15);
   backgroundH323->GetYaxis()->SetTitleSize(0.15);
   backgroundH323->GetYaxis()->SetTickLength(0.01);
   backgroundH323->GetYaxis()->SetTitleOffset(0.35);
   backgroundH323->GetYaxis()->SetTitleFont(42);
   backgroundH323->GetZaxis()->SetLabelFont(42);
   backgroundH323->GetZaxis()->SetLabelSize(0.035);
   backgroundH323->GetZaxis()->SetTitleSize(0.035);
   backgroundH323->GetZaxis()->SetTitleFont(42);
   backgroundH323->Draw("");
   
   Double_t Graph_from_backgroundH3_fx1004[20] = {
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
   Double_t Graph_from_backgroundH3_fy1004[20] = {
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
   Double_t Graph_from_backgroundH3_fex1004[20] = {
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
   Double_t Graph_from_backgroundH3_fey1004[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH3_fx1004,Graph_from_backgroundH3_fy1004,Graph_from_backgroundH3_fex1004,Graph_from_backgroundH3_fey1004);
   gre->SetName("Graph_from_backgroundH3");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH31004 = new TH1F("Graph_Graph_from_backgroundH31004","",100,0,550);
   Graph_Graph_from_backgroundH31004->SetMinimum(0);
   Graph_Graph_from_backgroundH31004->SetMaximum(2.2);
   Graph_Graph_from_backgroundH31004->SetDirectory(0);
   Graph_Graph_from_backgroundH31004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH31004->SetLineColor(ci);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH31004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH31004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH31004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH31004);
   
   gre->Draw("3");
   
   TH1D *ratioH324 = new TH1D("ratioH324","",20,0,500);
   ratioH324->SetBinContent(1,0.9996434);
   ratioH324->SetBinContent(2,0.9437637);
   ratioH324->SetBinContent(3,0.9935774);
   ratioH324->SetBinContent(4,0.9320717);
   ratioH324->SetBinContent(5,0.9655449);
   ratioH324->SetBinContent(6,1.05451);
   ratioH324->SetBinContent(7,1.049223);
   ratioH324->SetBinContent(8,1.071889);
   ratioH324->SetBinContent(9,1.081483);
   ratioH324->SetBinContent(10,0.9498092);
   ratioH324->SetBinContent(11,1.480854);
   ratioH324->SetBinContent(12,1.725802);
   ratioH324->SetBinContent(13,0.8468058);
   ratioH324->SetBinContent(14,0.5959614);
   ratioH324->SetBinContent(15,1.76747);
   ratioH324->SetBinContent(18,1.525135);
   ratioH324->SetBinContent(19,4.575404);
   ratioH324->SetBinContent(21,1.715776);
   ratioH324->SetBinError(1,0.1953645);
   ratioH324->SetBinError(2,0.087655);
   ratioH324->SetBinError(3,0.09548406);
   ratioH324->SetBinError(4,0.1041459);
   ratioH324->SetBinError(5,0.1285353);
   ratioH324->SetBinError(6,0.1453442);
   ratioH324->SetBinError(7,0.1777811);
   ratioH324->SetBinError(8,0.2314474);
   ratioH324->SetBinError(9,0.3090262);
   ratioH324->SetBinError(10,0.3264188);
   ratioH324->SetBinError(11,0.5481758);
   ratioH324->SetBinError(12,0.7034307);
   ratioH324->SetBinError(13,0.5316998);
   ratioH324->SetBinError(14,0.6246606);
   ratioH324->SetBinError(15,1.023187);
   ratioH324->SetBinError(18,1.647334);
   ratioH324->SetBinError(19,5.603702);
   ratioH324->SetBinError(21,1.079486);
   ratioH324->SetEntries(13.74642);
   ratioH324->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH324->SetLineColor(ci);
   ratioH324->GetXaxis()->SetLabelFont(42);
   ratioH324->GetXaxis()->SetLabelSize(0.035);
   ratioH324->GetXaxis()->SetTitleSize(0.035);
   ratioH324->GetXaxis()->SetTitleFont(42);
   ratioH324->GetYaxis()->SetLabelFont(42);
   ratioH324->GetYaxis()->SetLabelSize(0.035);
   ratioH324->GetYaxis()->SetTitleSize(0.035);
   ratioH324->GetYaxis()->SetTitleFont(42);
   ratioH324->GetZaxis()->SetLabelFont(42);
   ratioH324->GetZaxis()->SetLabelSize(0.035);
   ratioH324->GetZaxis()->SetTitleSize(0.035);
   ratioH324->GetZaxis()->SetTitleFont(42);
   ratioH324->Draw("E same");
   TLine *line = new TLine(0,1,500,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
