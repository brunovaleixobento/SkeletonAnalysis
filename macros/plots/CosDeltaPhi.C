void CosDeltaPhi()
{
//=========Macro generated from canvas: variable/variable
//=========  (Wed Jul 20 23:13:14 2016) by ROOT version6.02/13
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
   variable_1->Range(-1.5,-17.41396,1.5,156.7257);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *CosDeltaPhi = new THStack();
   CosDeltaPhi->SetName("CosDeltaPhi");
   CosDeltaPhi->SetTitle("CosDeltaPhi;Cos(#Delta #Phi);Evt.");
   CosDeltaPhi->SetMaximum(132.6778);
   
   TH1F *CosDeltaPhi_stack_6 = new TH1F("CosDeltaPhi_stack_6","CosDeltaPhi",20,-1.2,1.2);
   CosDeltaPhi_stack_6->SetMinimum(0);
   CosDeltaPhi_stack_6->SetMaximum(139.3117);
   CosDeltaPhi_stack_6->SetDirectory(0);
   CosDeltaPhi_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CosDeltaPhi_stack_6->SetLineColor(ci);
   CosDeltaPhi_stack_6->GetXaxis()->SetTitle("Cos(#Delta #Phi)");
   CosDeltaPhi_stack_6->GetXaxis()->SetLabelFont(42);
   CosDeltaPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   CosDeltaPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   CosDeltaPhi_stack_6->GetXaxis()->SetTitleFont(42);
   CosDeltaPhi_stack_6->GetYaxis()->SetTitle("Evt.");
   CosDeltaPhi_stack_6->GetYaxis()->SetLabelFont(42);
   CosDeltaPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   CosDeltaPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   CosDeltaPhi_stack_6->GetYaxis()->SetTitleFont(42);
   CosDeltaPhi_stack_6->GetZaxis()->SetLabelFont(42);
   CosDeltaPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   CosDeltaPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   CosDeltaPhi_stack_6->GetZaxis()->SetTitleFont(42);
   CosDeltaPhi->SetHistogram(CosDeltaPhi_stack_6);
   
   
   TH1D *ttbarH531 = new TH1D("ttbarH531","ttbar",20,-1.2,1.2);
   ttbarH531->SetBinContent(2,1.099804);
   ttbarH531->SetBinContent(3,4.032615);
   ttbarH531->SetBinContent(4,3.299412);
   ttbarH531->SetBinContent(5,2.56621);
   ttbarH531->SetBinContent(6,4.032615);
   ttbarH531->SetBinContent(7,4.399216);
   ttbarH531->SetBinContent(8,3.666014);
   ttbarH531->SetBinContent(9,7.698629);
   ttbarH531->SetBinContent(10,8.06523);
   ttbarH531->SetBinContent(11,9.898237);
   ttbarH531->SetBinContent(12,7.698629);
   ttbarH531->SetBinContent(13,13.93085);
   ttbarH531->SetBinContent(14,6.965426);
   ttbarH531->SetBinContent(15,14.29745);
   ttbarH531->SetBinContent(16,13.56425);
   ttbarH531->SetBinContent(17,13.56425);
   ttbarH531->SetBinContent(18,26.0287);
   ttbarH531->SetBinContent(19,35.56033);
   ttbarH531->SetBinError(2,0.6349722);
   ttbarH531->SetBinError(3,1.215879);
   ttbarH531->SetBinError(4,1.099804);
   ttbarH531->SetBinError(5,0.9699361);
   ttbarH531->SetBinError(6,1.215879);
   ttbarH531->SetBinError(7,1.269944);
   ttbarH531->SetBinError(8,1.159295);
   ttbarH531->SetBinError(9,1.679979);
   ttbarH531->SetBinError(10,1.719513);
   ttbarH531->SetBinError(11,1.904917);
   ttbarH531->SetBinError(12,1.679979);
   ttbarH531->SetBinError(13,2.259883);
   ttbarH531->SetBinError(14,1.597978);
   ttbarH531->SetBinError(15,2.289425);
   ttbarH531->SetBinError(16,2.229949);
   ttbarH531->SetBinError(17,2.229949);
   ttbarH531->SetBinError(18,3.089038);
   ttbarH531->SetBinError(19,3.610605);
   ttbarH531->SetEntries(492);
   ttbarH531->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH531->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH531->SetLineColor(ci);
   ttbarH531->GetXaxis()->SetLabelFont(42);
   ttbarH531->GetXaxis()->SetLabelSize(0.035);
   ttbarH531->GetXaxis()->SetTitleSize(0.035);
   ttbarH531->GetXaxis()->SetTitleFont(42);
   ttbarH531->GetYaxis()->SetLabelFont(42);
   ttbarH531->GetYaxis()->SetLabelSize(0.035);
   ttbarH531->GetYaxis()->SetTitleSize(0.035);
   ttbarH531->GetYaxis()->SetTitleFont(42);
   ttbarH531->GetZaxis()->SetLabelFont(42);
   ttbarH531->GetZaxis()->SetLabelSize(0.035);
   ttbarH531->GetZaxis()->SetTitleSize(0.035);
   ttbarH531->GetZaxis()->SetTitleFont(42);
   CosDeltaPhi->Add(ttbarH5,"");
   
   TH1D *wjetsH532 = new TH1D("wjetsH532","wjets",20,-1.2,1.2);
   wjetsH532->SetBinContent(2,2.288048);
   wjetsH532->SetBinContent(3,6.257575);
   wjetsH532->SetBinContent(4,5.827438);
   wjetsH532->SetBinContent(5,7.000566);
   wjetsH532->SetBinContent(6,9.982496);
   wjetsH532->SetBinContent(7,11.01724);
   wjetsH532->SetBinContent(8,16.08474);
   wjetsH532->SetBinContent(9,17.28845);
   wjetsH532->SetBinContent(10,17.89747);
   wjetsH532->SetBinContent(11,23.93844);
   wjetsH532->SetBinContent(12,29.37089);
   wjetsH532->SetBinContent(13,35.64941);
   wjetsH532->SetBinContent(14,40.89131);
   wjetsH532->SetBinContent(15,39.49052);
   wjetsH532->SetBinContent(16,48.32673);
   wjetsH532->SetBinContent(17,48.89517);
   wjetsH532->SetBinContent(18,68.12698);
   wjetsH532->SetBinContent(19,90.79948);
   wjetsH532->SetBinError(2,0.7536687);
   wjetsH532->SetBinError(3,1.275762);
   wjetsH532->SetBinError(4,1.287628);
   wjetsH532->SetBinError(5,1.436447);
   wjetsH532->SetBinError(6,1.752723);
   wjetsH532->SetBinError(7,1.828689);
   wjetsH532->SetBinError(8,2.285318);
   wjetsH532->SetBinError(9,2.390642);
   wjetsH532->SetBinError(10,2.318176);
   wjetsH532->SetBinError(11,2.598388);
   wjetsH532->SetBinError(12,2.877294);
   wjetsH532->SetBinError(13,3.184485);
   wjetsH532->SetBinError(14,3.318051);
   wjetsH532->SetBinError(15,3.214433);
   wjetsH532->SetBinError(16,3.543413);
   wjetsH532->SetBinError(17,3.363885);
   wjetsH532->SetBinError(18,3.986725);
   wjetsH532->SetBinError(19,4.665143);
   wjetsH532->SetEntries(2588);
   wjetsH532->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH532->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH532->SetLineColor(ci);
   wjetsH532->GetXaxis()->SetLabelFont(42);
   wjetsH532->GetXaxis()->SetLabelSize(0.035);
   wjetsH532->GetXaxis()->SetTitleSize(0.035);
   wjetsH532->GetXaxis()->SetTitleFont(42);
   wjetsH532->GetYaxis()->SetLabelFont(42);
   wjetsH532->GetYaxis()->SetLabelSize(0.035);
   wjetsH532->GetYaxis()->SetTitleSize(0.035);
   wjetsH532->GetYaxis()->SetTitleFont(42);
   wjetsH532->GetZaxis()->SetLabelFont(42);
   wjetsH532->GetZaxis()->SetLabelSize(0.035);
   wjetsH532->GetZaxis()->SetTitleSize(0.035);
   wjetsH532->GetZaxis()->SetTitleFont(42);
   CosDeltaPhi->Add(wjetsH5,"");
   CosDeltaPhi->Draw("hist goff");
   
   TH1D *stopH533 = new TH1D("stopH533","Signal",20,-1.2,1.2);
   stopH533->SetBinContent(2,3.244248);
   stopH533->SetBinContent(3,3.244248);
   stopH533->SetBinContent(4,2.129038);
   stopH533->SetBinContent(5,2.9401);
   stopH533->SetBinContent(6,3.345631);
   stopH533->SetBinContent(7,3.345631);
   stopH533->SetBinContent(8,3.244248);
   stopH533->SetBinContent(9,3.447013);
   stopH533->SetBinContent(10,3.142865);
   stopH533->SetBinContent(11,3.852544);
   stopH533->SetBinContent(12,5.373285);
   stopH533->SetBinContent(13,4.663606);
   stopH533->SetBinContent(14,6.589878);
   stopH533->SetBinContent(15,7.40094);
   stopH533->SetBinContent(16,8.51615);
   stopH533->SetBinContent(17,12.26731);
   stopH533->SetBinContent(18,19.87102);
   stopH533->SetBinContent(19,18.14751);
   stopH533->SetBinError(2,0.5735074);
   stopH533->SetBinError(3,0.5735074);
   stopH533->SetBinError(4,0.4645941);
   stopH533->SetBinError(5,0.5459628);
   stopH533->SetBinError(6,0.5823995);
   stopH533->SetBinError(7,0.5823995);
   stopH533->SetBinError(8,0.5735074);
   stopH533->SetBinError(9,0.5911579);
   stopH533->SetBinError(10,0.5644752);
   stopH533->SetBinError(11,0.6249652);
   stopH533->SetBinError(12,0.7380775);
   stopH533->SetBinError(13,0.6876112);
   stopH533->SetBinError(14,0.8173738);
   stopH533->SetBinError(15,0.8662145);
   stopH533->SetBinError(16,0.9291882);
   stopH533->SetBinError(17,1.11521);
   stopH533->SetBinError(18,1.419358);
   stopH533->SetBinError(19,1.356409);
   stopH533->SetEntries(1132);
   stopH533->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH533->SetLineColor(ci);
   stopH533->GetXaxis()->SetLabelFont(42);
   stopH533->GetXaxis()->SetLabelSize(0.035);
   stopH533->GetXaxis()->SetTitleSize(0.035);
   stopH533->GetXaxis()->SetTitleFont(42);
   stopH533->GetYaxis()->SetLabelFont(42);
   stopH533->GetYaxis()->SetLabelSize(0.035);
   stopH533->GetYaxis()->SetTitleSize(0.035);
   stopH533->GetYaxis()->SetTitleFont(42);
   stopH533->GetZaxis()->SetLabelFont(42);
   stopH533->GetZaxis()->SetLabelSize(0.035);
   stopH533->GetZaxis()->SetTitleSize(0.035);
   stopH533->GetZaxis()->SetTitleFont(42);
   stopH533->Draw("HIST same goff");
   
   TH1D *dataH534 = new TH1D("dataH534","Data",20,-1.2,1.2);
   dataH534->SetBinContent(2,7);
   dataH534->SetBinContent(3,11);
   dataH534->SetBinContent(4,9);
   dataH534->SetBinContent(5,10);
   dataH534->SetBinContent(6,13);
   dataH534->SetBinContent(7,13);
   dataH534->SetBinContent(8,26);
   dataH534->SetBinContent(9,25);
   dataH534->SetBinContent(10,30);
   dataH534->SetBinContent(11,30);
   dataH534->SetBinContent(12,38);
   dataH534->SetBinContent(13,48);
   dataH534->SetBinContent(14,45);
   dataH534->SetBinContent(15,57);
   dataH534->SetBinContent(16,56);
   dataH534->SetBinContent(17,65);
   dataH534->SetBinContent(18,92);
   dataH534->SetBinContent(19,120);
   dataH534->SetBinError(2,2.645751);
   dataH534->SetBinError(3,3.316625);
   dataH534->SetBinError(4,3);
   dataH534->SetBinError(5,3.162278);
   dataH534->SetBinError(6,3.605551);
   dataH534->SetBinError(7,3.605551);
   dataH534->SetBinError(8,5.09902);
   dataH534->SetBinError(9,5);
   dataH534->SetBinError(10,5.477226);
   dataH534->SetBinError(11,5.477226);
   dataH534->SetBinError(12,6.164414);
   dataH534->SetBinError(13,6.928203);
   dataH534->SetBinError(14,6.708204);
   dataH534->SetBinError(15,7.549834);
   dataH534->SetBinError(16,7.483315);
   dataH534->SetBinError(17,8.062258);
   dataH534->SetBinError(18,9.591663);
   dataH534->SetBinError(19,10.95445);
   dataH534->SetEntries(695);
   dataH534->SetStats(0);
   dataH534->GetXaxis()->SetLabelFont(42);
   dataH534->GetXaxis()->SetLabelSize(0.035);
   dataH534->GetXaxis()->SetTitleSize(0.035);
   dataH534->GetXaxis()->SetTitleFont(42);
   dataH534->GetYaxis()->SetLabelFont(42);
   dataH534->GetYaxis()->SetLabelSize(0.035);
   dataH534->GetYaxis()->SetTitleSize(0.035);
   dataH534->GetYaxis()->SetTitleFont(42);
   dataH534->GetZaxis()->SetLabelFont(42);
   dataH534->GetZaxis()->SetLabelSize(0.035);
   dataH534->GetZaxis()->SetTitleSize(0.035);
   dataH534->GetZaxis()->SetTitleFont(42);
   dataH534->Draw("E same goff");
   
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
   
   TPaveText *pt = new TPaveText(0.4041114,0.94,0.5958886,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("CosDeltaPhi");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-1.5,0.375,1.5,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH535 = new TH1D("backgroundH535","",20,-1.2,1.2);
   backgroundH535->SetMinimum(0.5);
   backgroundH535->SetMaximum(1.5);
   backgroundH535->SetEntries(3101);
   backgroundH535->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH535->SetLineColor(ci);
   backgroundH535->GetXaxis()->SetLabelFont(42);
   backgroundH535->GetXaxis()->SetLabelSize(0.15);
   backgroundH535->GetXaxis()->SetTitleSize(0.035);
   backgroundH535->GetXaxis()->SetTitleFont(42);
   backgroundH535->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH535->GetYaxis()->SetNdivisions(5);
   backgroundH535->GetYaxis()->SetLabelFont(42);
   backgroundH535->GetYaxis()->SetLabelSize(0.15);
   backgroundH535->GetYaxis()->SetTitleSize(0.15);
   backgroundH535->GetYaxis()->SetTickLength(0.01);
   backgroundH535->GetYaxis()->SetTitleOffset(0.35);
   backgroundH535->GetYaxis()->SetTitleFont(42);
   backgroundH535->GetZaxis()->SetLabelFont(42);
   backgroundH535->GetZaxis()->SetLabelSize(0.035);
   backgroundH535->GetZaxis()->SetTitleSize(0.035);
   backgroundH535->GetZaxis()->SetTitleFont(42);
   backgroundH535->Draw("");
   
   Double_t Graph_from_backgroundH5_fx1006[20] = {
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
   Double_t Graph_from_backgroundH5_fy1006[20] = {
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
   Double_t Graph_from_backgroundH5_fex1006[20] = {
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
   Double_t Graph_from_backgroundH5_fey1006[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph_from_backgroundH5_fx1006,Graph_from_backgroundH5_fy1006,Graph_from_backgroundH5_fex1006,Graph_from_backgroundH5_fey1006);
   gre->SetName("Graph_from_backgroundH5");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH51006 = new TH1F("Graph_Graph_from_backgroundH51006","",100,-1.44,1.44);
   Graph_Graph_from_backgroundH51006->SetMinimum(0.65093);
   Graph_Graph_from_backgroundH51006->SetMaximum(1.34907);
   Graph_Graph_from_backgroundH51006->SetDirectory(0);
   Graph_Graph_from_backgroundH51006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH51006->SetLineColor(ci);
   Graph_Graph_from_backgroundH51006->GetXaxis()->SetRange(9,92);
   Graph_Graph_from_backgroundH51006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH51006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH51006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH51006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH51006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH51006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH51006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH51006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH51006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH51006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH51006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH51006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH51006);
   
   gre->Draw("3");
   
   TH1D *ratioH536 = new TH1D("ratioH536","",20,-1.2,1.2);
   ratioH536->SetBinContent(2,2.066206);
   ratioH536->SetBinContent(3,1.068979);
   ratioH536->SetBinContent(4,0.9861014);
   ratioH536->SetBinContent(5,1.045284);
   ratioH536->SetBinContent(6,0.9275703);
   ratioH536->SetBinContent(7,0.8432547);
   ratioH536->SetBinContent(8,1.316406);
   ratioH536->SetBinContent(9,1.000517);
   ratioH536->SetBinContent(10,1.155504);
   ratioH536->SetBinContent(11,0.8866118);
   ratioH536->SetBinContent(12,1.025101);
   ratioH536->SetBinContent(13,0.9681271);
   ratioH536->SetBinContent(14,0.9403066);
   ratioH536->SetBinContent(15,1.059716);
   ratioH536->SetBinContent(16,0.9048169);
   ratioH536->SetBinContent(17,1.040676);
   ratioH536->SetBinContent(18,0.9771051);
   ratioH536->SetBinContent(19,0.949669);
   ratioH536->SetBinError(2,0.9854633);
   ratioH536->SetBinError(3,0.3706774);
   ratioH536->SetBinError(4,0.3761893);
   ratioH536->SetBinError(5,0.3809541);
   ratioH536->SetBinError(6,0.2934545);
   ratioH536->SetBinError(7,0.2636832);
   ratioH536->SetBinError(8,0.3095516);
   ratioH536->SetBinError(9,0.2317966);
   ratioH536->SetBinError(10,0.2469976);
   ratioH536->SetBinError(11,0.182564);
   ratioH536->SetBinError(12,0.1901123);
   ratioH536->SetBinError(13,0.1591863);
   ratioH536->SetBinError(14,0.1577481);
   ratioH536->SetBinError(15,0.1604585);
   ratioH536->SetBinError(16,0.1355208);
   ratioH536->SetBinError(17,0.1455453);
   ratioH536->SetBinError(18,0.1145288);
   ratioH536->SetBinError(19,0.09737168);
   ratioH536->SetEntries(186.4826);
   ratioH536->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH536->SetLineColor(ci);
   ratioH536->GetXaxis()->SetLabelFont(42);
   ratioH536->GetXaxis()->SetLabelSize(0.035);
   ratioH536->GetXaxis()->SetTitleSize(0.035);
   ratioH536->GetXaxis()->SetTitleFont(42);
   ratioH536->GetYaxis()->SetLabelFont(42);
   ratioH536->GetYaxis()->SetLabelSize(0.035);
   ratioH536->GetYaxis()->SetTitleSize(0.035);
   ratioH536->GetYaxis()->SetTitleFont(42);
   ratioH536->GetZaxis()->SetLabelFont(42);
   ratioH536->GetZaxis()->SetLabelSize(0.035);
   ratioH536->GetZaxis()->SetTitleSize(0.035);
   ratioH536->GetZaxis()->SetTitleFont(42);
   ratioH536->Draw("E same");
   TLine *line = new TLine(-1.2,1,1.2,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
