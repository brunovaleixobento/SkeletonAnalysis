void Jet1Pt()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:12:51 2016) by ROOT version6.02/13
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
   variable_1->Range(50,-8.280487,550,74.52437);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *Jet1Pt = new THStack();
   Jet1Pt->SetName("Jet1Pt");
   Jet1Pt->SetTitle("Jet1Pt;p_{T} (Jet1) [GeV];Evt.");
   Jet1Pt->SetMaximum(63.08942);
   
   TH1F *Jet1Pt_stack_3 = new TH1F("Jet1Pt_stack_3","Jet1Pt",20,100,500);
   Jet1Pt_stack_3->SetMinimum(0);
   Jet1Pt_stack_3->SetMaximum(66.24389);
   Jet1Pt_stack_3->SetDirectory(0);
   Jet1Pt_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jet1Pt_stack_3->SetLineColor(ci);
   Jet1Pt_stack_3->GetXaxis()->SetTitle("p_{T} (Jet1) [GeV]");
   Jet1Pt_stack_3->GetXaxis()->SetLabelFont(42);
   Jet1Pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   Jet1Pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   Jet1Pt_stack_3->GetXaxis()->SetTitleFont(42);
   Jet1Pt_stack_3->GetYaxis()->SetTitle("Evt.");
   Jet1Pt_stack_3->GetYaxis()->SetLabelFont(42);
   Jet1Pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   Jet1Pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   Jet1Pt_stack_3->GetYaxis()->SetTitleFont(42);
   Jet1Pt_stack_3->GetZaxis()->SetLabelFont(42);
   Jet1Pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   Jet1Pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   Jet1Pt_stack_3->GetZaxis()->SetTitleFont(42);
   Jet1Pt->SetHistogram(Jet1Pt_stack_3);
   
   
   TH1D *ttbarH213 = new TH1D("ttbarH213","ttbar",20,100,500);
   ttbarH213->SetBinContent(1,2.199608);
   ttbarH213->SetBinContent(2,9.898237);
   ttbarH213->SetBinContent(3,12.09785);
   ttbarH213->SetBinContent(4,14.29745);
   ttbarH213->SetBinContent(5,18.69667);
   ttbarH213->SetBinContent(6,12.46445);
   ttbarH213->SetBinContent(7,13.19765);
   ttbarH213->SetBinContent(8,14.29745);
   ttbarH213->SetBinContent(9,12.09785);
   ttbarH213->SetBinContent(10,11.36464);
   ttbarH213->SetBinContent(11,8.431832);
   ttbarH213->SetBinContent(12,8.798433);
   ttbarH213->SetBinContent(13,8.431832);
   ttbarH213->SetBinContent(14,7.332027);
   ttbarH213->SetBinContent(15,5.499021);
   ttbarH213->SetBinContent(16,3.299412);
   ttbarH213->SetBinContent(17,2.932811);
   ttbarH213->SetBinContent(18,2.932811);
   ttbarH213->SetBinContent(19,1.833007);
   ttbarH213->SetBinContent(20,2.932811);
   ttbarH213->SetBinContent(21,7.332027);
   ttbarH213->SetBinError(1,0.8979863);
   ttbarH213->SetBinError(2,1.904917);
   ttbarH213->SetBinError(3,2.105965);
   ttbarH213->SetBinError(4,2.289425);
   ttbarH213->SetBinError(5,2.618057);
   ttbarH213->SetBinError(6,2.137635);
   ttbarH213->SetBinError(7,2.199608);
   ttbarH213->SetBinError(8,2.289425);
   ttbarH213->SetBinError(9,2.105965);
   ttbarH213->SetBinError(10,2.04115);
   ttbarH213->SetBinError(11,1.758158);
   ttbarH213->SetBinError(12,1.795973);
   ttbarH213->SetBinError(13,1.758158);
   ttbarH213->SetBinError(14,1.639491);
   ttbarH213->SetBinError(15,1.419841);
   ttbarH213->SetBinError(16,1.099804);
   ttbarH213->SetBinError(17,1.036905);
   ttbarH213->SetBinError(18,1.036905);
   ttbarH213->SetBinError(19,0.8197456);
   ttbarH213->SetBinError(20,1.036905);
   ttbarH213->SetBinError(21,1.639491);
   ttbarH213->SetEntries(492);
   ttbarH213->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH213->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH213->SetLineColor(ci);
   ttbarH213->GetXaxis()->SetLabelFont(42);
   ttbarH213->GetXaxis()->SetLabelSize(0.035);
   ttbarH213->GetXaxis()->SetTitleSize(0.035);
   ttbarH213->GetXaxis()->SetTitleFont(42);
   ttbarH213->GetYaxis()->SetLabelFont(42);
   ttbarH213->GetYaxis()->SetLabelSize(0.035);
   ttbarH213->GetYaxis()->SetTitleSize(0.035);
   ttbarH213->GetYaxis()->SetTitleFont(42);
   ttbarH213->GetZaxis()->SetLabelFont(42);
   ttbarH213->GetZaxis()->SetLabelSize(0.035);
   ttbarH213->GetZaxis()->SetTitleSize(0.035);
   ttbarH213->GetZaxis()->SetTitleFont(42);
   Jet1Pt->Add(ttbarH2,"");
   
   TH1D *wjetsH214 = new TH1D("wjetsH214","wjets",20,100,500);
   wjetsH214->SetBinContent(1,4.275398);
   wjetsH214->SetBinContent(2,11.99699);
   wjetsH214->SetBinContent(3,13.56613);
   wjetsH214->SetBinContent(4,20.53563);
   wjetsH214->SetBinContent(5,31.63429);
   wjetsH214->SetBinContent(6,31.33642);
   wjetsH214->SetBinContent(7,33.63946);
   wjetsH214->SetBinContent(8,36.23289);
   wjetsH214->SetBinContent(9,38.70938);
   wjetsH214->SetBinContent(10,48.72052);
   wjetsH214->SetBinContent(11,45.08487);
   wjetsH214->SetBinContent(12,36.66226);
   wjetsH214->SetBinContent(13,27.44167);
   wjetsH214->SetBinContent(14,28.06228);
   wjetsH214->SetBinContent(15,23.27525);
   wjetsH214->SetBinContent(16,16.93553);
   wjetsH214->SetBinContent(17,13.83828);
   wjetsH214->SetBinContent(18,8.438002);
   wjetsH214->SetBinContent(19,8.973341);
   wjetsH214->SetBinContent(20,7.022231);
   wjetsH214->SetBinContent(21,32.75213);
   wjetsH214->SetBinError(1,1.20316);
   wjetsH214->SetBinError(2,2.073404);
   wjetsH214->SetBinError(3,2.061166);
   wjetsH214->SetBinError(4,2.533062);
   wjetsH214->SetBinError(5,3.286741);
   wjetsH214->SetBinError(6,3.147386);
   wjetsH214->SetBinError(7,3.169172);
   wjetsH214->SetBinError(8,3.345358);
   wjetsH214->SetBinError(9,3.499815);
   wjetsH214->SetBinError(10,3.858711);
   wjetsH214->SetBinError(11,3.685558);
   wjetsH214->SetBinError(12,3.133318);
   wjetsH214->SetBinError(13,2.509791);
   wjetsH214->SetBinError(14,2.363125);
   wjetsH214->SetBinError(15,2.01806);
   wjetsH214->SetBinError(16,1.667466);
   wjetsH214->SetBinError(17,1.429136);
   wjetsH214->SetBinError(18,1.080187);
   wjetsH214->SetBinError(19,1.097686);
   wjetsH214->SetBinError(20,0.9593366);
   wjetsH214->SetBinError(21,1.929221);
   wjetsH214->SetEntries(2588);
   wjetsH214->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH214->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH214->SetLineColor(ci);
   wjetsH214->GetXaxis()->SetLabelFont(42);
   wjetsH214->GetXaxis()->SetLabelSize(0.035);
   wjetsH214->GetXaxis()->SetTitleSize(0.035);
   wjetsH214->GetXaxis()->SetTitleFont(42);
   wjetsH214->GetYaxis()->SetLabelFont(42);
   wjetsH214->GetYaxis()->SetLabelSize(0.035);
   wjetsH214->GetYaxis()->SetTitleSize(0.035);
   wjetsH214->GetYaxis()->SetTitleFont(42);
   wjetsH214->GetZaxis()->SetLabelFont(42);
   wjetsH214->GetZaxis()->SetLabelSize(0.035);
   wjetsH214->GetZaxis()->SetTitleSize(0.035);
   wjetsH214->GetZaxis()->SetTitleFont(42);
   Jet1Pt->Add(wjetsH2,"");
   Jet1Pt->Draw("hist goff");
   
   TH1D *stopH215 = new TH1D("stopH215","Signal",20,100,500);
   stopH215->SetBinContent(1,1.11521);
   stopH215->SetBinContent(2,2.838717);
   stopH215->SetBinContent(3,3.142865);
   stopH215->SetBinContent(4,3.953927);
   stopH215->SetBinContent(5,5.17052);
   stopH215->SetBinContent(6,5.778816);
   stopH215->SetBinContent(7,6.995409);
   stopH215->SetBinContent(8,5.981582);
   stopH215->SetBinContent(9,6.894027);
   stopH215->SetBinContent(10,6.589878);
   stopH215->SetBinContent(11,6.995409);
   stopH215->SetBinContent(12,7.705089);
   stopH215->SetBinContent(13,6.589878);
   stopH215->SetBinContent(14,5.373285);
   stopH215->SetBinContent(15,5.17052);
   stopH215->SetBinContent(16,4.562223);
   stopH215->SetBinContent(17,3.852544);
   stopH215->SetBinContent(18,3.142865);
   stopH215->SetBinContent(19,3.244248);
   stopH215->SetBinContent(20,2.534569);
   stopH215->SetBinContent(21,17.13368);
   stopH215->SetBinError(1,0.3362485);
   stopH215->SetBinError(2,0.5364671);
   stopH215->SetBinError(3,0.5644752);
   stopH215->SetBinError(4,0.633135);
   stopH215->SetBinError(5,0.7240176);
   stopH215->SetBinError(6,0.7654229);
   stopH215->SetBinError(7,0.8421483);
   stopH215->SetBinError(8,0.7787356);
   stopH215->SetBinError(9,0.8360235);
   stopH215->SetBinError(10,0.8173738);
   stopH215->SetBinError(11,0.8421483);
   stopH215->SetBinError(12,0.8838343);
   stopH215->SetBinError(13,0.8173738);
   stopH215->SetBinError(14,0.7380775);
   stopH215->SetBinError(15,0.7240176);
   stopH215->SetBinError(16,0.6800961);
   stopH215->SetBinError(17,0.6249652);
   stopH215->SetBinError(18,0.5644752);
   stopH215->SetBinError(19,0.5735074);
   stopH215->SetBinError(20,0.5069137);
   stopH215->SetBinError(21,1.317976);
   stopH215->SetEntries(1132);
   stopH215->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH215->SetLineColor(ci);
   stopH215->GetXaxis()->SetLabelFont(42);
   stopH215->GetXaxis()->SetLabelSize(0.035);
   stopH215->GetXaxis()->SetTitleSize(0.035);
   stopH215->GetXaxis()->SetTitleFont(42);
   stopH215->GetYaxis()->SetLabelFont(42);
   stopH215->GetYaxis()->SetLabelSize(0.035);
   stopH215->GetYaxis()->SetTitleSize(0.035);
   stopH215->GetYaxis()->SetTitleFont(42);
   stopH215->GetZaxis()->SetLabelFont(42);
   stopH215->GetZaxis()->SetLabelSize(0.035);
   stopH215->GetZaxis()->SetTitleSize(0.035);
   stopH215->GetZaxis()->SetTitleFont(42);
   stopH215->Draw("HIST same goff");
   
   TH1D *dataH216 = new TH1D("dataH216","Data",20,100,500);
   dataH216->SetBinContent(1,11);
   dataH216->SetBinContent(2,19);
   dataH216->SetBinContent(3,19);
   dataH216->SetBinContent(4,34);
   dataH216->SetBinContent(5,47);
   dataH216->SetBinContent(6,36);
   dataH216->SetBinContent(7,46);
   dataH216->SetBinContent(8,51);
   dataH216->SetBinContent(9,56);
   dataH216->SetBinContent(10,51);
   dataH216->SetBinContent(11,57);
   dataH216->SetBinContent(12,49);
   dataH216->SetBinContent(13,31);
   dataH216->SetBinContent(14,39);
   dataH216->SetBinContent(15,34);
   dataH216->SetBinContent(16,25);
   dataH216->SetBinContent(17,19);
   dataH216->SetBinContent(18,6);
   dataH216->SetBinContent(19,13);
   dataH216->SetBinContent(20,12);
   dataH216->SetBinContent(21,40);
   dataH216->SetBinError(1,3.316625);
   dataH216->SetBinError(2,4.358899);
   dataH216->SetBinError(3,4.358899);
   dataH216->SetBinError(4,5.830952);
   dataH216->SetBinError(5,6.855655);
   dataH216->SetBinError(6,6);
   dataH216->SetBinError(7,6.78233);
   dataH216->SetBinError(8,7.141428);
   dataH216->SetBinError(9,7.483315);
   dataH216->SetBinError(10,7.141428);
   dataH216->SetBinError(11,7.549834);
   dataH216->SetBinError(12,7);
   dataH216->SetBinError(13,5.567764);
   dataH216->SetBinError(14,6.244998);
   dataH216->SetBinError(15,5.830952);
   dataH216->SetBinError(16,5);
   dataH216->SetBinError(17,4.358899);
   dataH216->SetBinError(18,2.44949);
   dataH216->SetBinError(19,3.605551);
   dataH216->SetBinError(20,3.464102);
   dataH216->SetBinError(21,6.324555);
   dataH216->SetEntries(695);
   dataH216->SetStats(0);
   dataH216->GetXaxis()->SetLabelFont(42);
   dataH216->GetXaxis()->SetLabelSize(0.035);
   dataH216->GetXaxis()->SetTitleSize(0.035);
   dataH216->GetXaxis()->SetTitleFont(42);
   dataH216->GetYaxis()->SetLabelFont(42);
   dataH216->GetYaxis()->SetLabelSize(0.035);
   dataH216->GetYaxis()->SetTitleSize(0.035);
   dataH216->GetYaxis()->SetTitleFont(42);
   dataH216->GetZaxis()->SetLabelFont(42);
   dataH216->GetZaxis()->SetLabelSize(0.035);
   dataH216->GetZaxis()->SetTitleSize(0.035);
   dataH216->GetZaxis()->SetTitleFont(42);
   dataH216->Draw("E same goff");
   
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
   
   TPaveText *pt = new TPaveText(0.4457738,0.94,0.5542262,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Jet1Pt");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(50,0.375,550,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH217 = new TH1D("backgroundH217","",20,100,500);
   backgroundH217->SetMinimum(0.5);
   backgroundH217->SetMaximum(1.5);
   backgroundH217->SetEntries(3101);
   backgroundH217->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH217->SetLineColor(ci);
   backgroundH217->GetXaxis()->SetLabelFont(42);
   backgroundH217->GetXaxis()->SetLabelSize(0.15);
   backgroundH217->GetXaxis()->SetTitleSize(0.035);
   backgroundH217->GetXaxis()->SetTitleFont(42);
   backgroundH217->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH217->GetYaxis()->SetNdivisions(5);
   backgroundH217->GetYaxis()->SetLabelFont(42);
   backgroundH217->GetYaxis()->SetLabelSize(0.15);
   backgroundH217->GetYaxis()->SetTitleSize(0.15);
   backgroundH217->GetYaxis()->SetTickLength(0.01);
   backgroundH217->GetYaxis()->SetTitleOffset(0.35);
   backgroundH217->GetYaxis()->SetTitleFont(42);
   backgroundH217->GetZaxis()->SetLabelFont(42);
   backgroundH217->GetZaxis()->SetLabelSize(0.035);
   backgroundH217->GetZaxis()->SetTitleSize(0.035);
   backgroundH217->GetZaxis()->SetTitleFont(42);
   backgroundH217->Draw("");
   
   Double_t Graph_from_backgroundH2_fx1003[20] = {
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
   Double_t Graph_from_backgroundH2_fy1003[20] = {
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
   Double_t Graph_from_backgroundH2_fex1003[20] = {
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
   Double_t Graph_from_backgroundH2_fey1003[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH2_fx1003,Graph_from_backgroundH2_fy1003,Graph_from_backgroundH2_fex1003,Graph_from_backgroundH2_fey1003);
   gre->SetName("Graph_from_backgroundH2");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH21003 = new TH1F("Graph_Graph_from_backgroundH21003","",100,60,540);
   Graph_Graph_from_backgroundH21003->SetMinimum(0.7217626);
   Graph_Graph_from_backgroundH21003->SetMaximum(1.278237);
   Graph_Graph_from_backgroundH21003->SetDirectory(0);
   Graph_Graph_from_backgroundH21003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH21003->SetLineColor(ci);
   Graph_Graph_from_backgroundH21003->GetXaxis()->SetRange(9,92);
   Graph_Graph_from_backgroundH21003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH21003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH21003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH21003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH21003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH21003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH21003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH21003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH21003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH21003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH21003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH21003);
   
   gre->Draw("3");
   
   TH1D *ratioH218 = new TH1D("ratioH218","",20,100,500);
   ratioH218->SetBinContent(1,1.69884);
   ratioH218->SetBinContent(2,0.8677692);
   ratioH218->SetBinContent(3,0.7403375);
   ratioH218->SetBinContent(4,0.9760836);
   ratioH218->SetBinContent(5,0.9338189);
   ratioH218->SetBinContent(6,0.8219015);
   ratioH218->SetBinContent(7,0.9821273);
   ratioH218->SetBinContent(8,1.009295);
   ratioH218->SetBinContent(9,1.102206);
   ratioH218->SetBinContent(10,0.8487953);
   ratioH218->SetBinContent(11,1.065088);
   ratioH218->SetBinContent(12,1.077854);
   ratioH218->SetBinContent(13,0.8641476);
   ratioH218->SetBinContent(14,1.101872);
   ratioH218->SetBinContent(15,1.181611);
   ratioH218->SetBinContent(16,1.235486);
   ratioH218->SetBinContent(17,1.132902);
   ratioH218->SetBinContent(18,0.5276668);
   ratioH218->SetBinContent(19,1.202997);
   ratioH218->SetBinContent(20,1.205419);
   ratioH218->SetBinContent(21,0.9979004);
   ratioH218->SetBinError(1,0.646163);
   ratioH218->SetBinError(2,0.2282221);
   ratioH218->SetBinError(3,0.1899302);
   ratioH218->SetBinError(4,0.19281);
   ratioH218->SetBinError(5,0.1569448);
   ratioH218->SetBinError(6,0.1544714);
   ratioH218->SetBinError(7,0.1658691);
   ratioH218->SetBinError(8,0.1628807);
   ratioH218->SetBinError(9,0.1718885);
   ratioH218->SetBinError(10,0.1339004);
   ratioH218->SetBinError(11,0.1628083);
   ratioH218->SetBinError(12,0.1761867);
   ratioH218->SetBinError(13,0.1718649);
   ratioH218->SetBinError(14,0.1978598);
   ratioH218->SetBinError(15,0.2265658);
   ratioH218->SetBinError(16,0.275557);
   ratioH218->SetBinError(17,0.2859665);
   ratioH218->SetBinError(18,0.2263479);
   ratioH218->SetBinError(19,0.3668559);
   ratioH218->SetBinError(20,0.3877423);
   ratioH218->SetBinError(21,0.1699051);
   ratioH218->SetEntries(310.3264);
   ratioH218->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH218->SetLineColor(ci);
   ratioH218->GetXaxis()->SetLabelFont(42);
   ratioH218->GetXaxis()->SetLabelSize(0.035);
   ratioH218->GetXaxis()->SetTitleSize(0.035);
   ratioH218->GetXaxis()->SetTitleFont(42);
   ratioH218->GetYaxis()->SetLabelFont(42);
   ratioH218->GetYaxis()->SetLabelSize(0.035);
   ratioH218->GetYaxis()->SetTitleSize(0.035);
   ratioH218->GetYaxis()->SetTitleFont(42);
   ratioH218->GetZaxis()->SetLabelFont(42);
   ratioH218->GetZaxis()->SetLabelSize(0.035);
   ratioH218->GetZaxis()->SetTitleSize(0.035);
   ratioH218->GetZaxis()->SetTitleFont(42);
   ratioH218->Draw("E same");
   TLine *line = new TLine(100,1,500,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
