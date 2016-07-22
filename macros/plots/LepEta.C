void LepEta()
{
//=========Macro generated from canvas: variable/variable
//=========  (Mon Jul 18 14:51:16 2016) by ROOT version6.02/13
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
   variable_1->Range(-3.75,-4.023569,3.75,36.21212);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *LepEta = new THStack();
   LepEta->SetName("LepEta");
   LepEta->SetTitle("LepEta;#eta (l);Evt.");
   LepEta->SetMaximum(30.65576);
   
   TH1F *LepEta_stack_2 = new TH1F("LepEta_stack_2","LepEta",30,-3,3);
   LepEta_stack_2->SetMinimum(0);
   LepEta_stack_2->SetMaximum(32.18855);
   LepEta_stack_2->SetDirectory(0);
   LepEta_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   LepEta_stack_2->SetLineColor(ci);
   LepEta_stack_2->GetXaxis()->SetTitle("#eta (l)");
   LepEta_stack_2->GetXaxis()->SetLabelFont(42);
   LepEta_stack_2->GetXaxis()->SetLabelSize(0.035);
   LepEta_stack_2->GetXaxis()->SetTitleSize(0.035);
   LepEta_stack_2->GetXaxis()->SetTitleFont(42);
   LepEta_stack_2->GetYaxis()->SetTitle("Evt.");
   LepEta_stack_2->GetYaxis()->SetLabelFont(42);
   LepEta_stack_2->GetYaxis()->SetLabelSize(0.035);
   LepEta_stack_2->GetYaxis()->SetTitleSize(0.035);
   LepEta_stack_2->GetYaxis()->SetTitleFont(42);
   LepEta_stack_2->GetZaxis()->SetLabelFont(42);
   LepEta_stack_2->GetZaxis()->SetLabelSize(0.035);
   LepEta_stack_2->GetZaxis()->SetTitleSize(0.035);
   LepEta_stack_2->GetZaxis()->SetTitleFont(42);
   LepEta->SetHistogram(LepEta_stack_2);
   
   
   TH1D *ttbarH17 = new TH1D("ttbarH17","ttbar",30,-3,3);
   ttbarH17->SetBinContent(4,1.099804);
   ttbarH17->SetBinContent(5,2.199608);
   ttbarH17->SetBinContent(6,1.099804);
   ttbarH17->SetBinContent(7,4.032615);
   ttbarH17->SetBinContent(8,1.466405);
   ttbarH17->SetBinContent(9,2.199608);
   ttbarH17->SetBinContent(10,1.833007);
   ttbarH17->SetBinContent(11,5.132419);
   ttbarH17->SetBinContent(12,2.932811);
   ttbarH17->SetBinContent(13,5.132419);
   ttbarH17->SetBinContent(14,5.132419);
   ttbarH17->SetBinContent(15,6.598825);
   ttbarH17->SetBinContent(16,7.332027);
   ttbarH17->SetBinContent(17,6.965426);
   ttbarH17->SetBinContent(18,2.199608);
   ttbarH17->SetBinContent(19,4.765818);
   ttbarH17->SetBinContent(20,5.499021);
   ttbarH17->SetBinContent(21,3.666014);
   ttbarH17->SetBinContent(22,4.032615);
   ttbarH17->SetBinContent(23,3.666014);
   ttbarH17->SetBinContent(24,3.299412);
   ttbarH17->SetBinContent(25,1.466405);
   ttbarH17->SetBinContent(26,1.466405);
   ttbarH17->SetBinContent(27,1.099804);
   ttbarH17->SetBinError(4,0.6349722);
   ttbarH17->SetBinError(5,0.8979863);
   ttbarH17->SetBinError(6,0.6349722);
   ttbarH17->SetBinError(7,1.215879);
   ttbarH17->SetBinError(8,0.7332027);
   ttbarH17->SetBinError(9,0.8979863);
   ttbarH17->SetBinError(10,0.8197456);
   ttbarH17->SetBinError(11,1.371697);
   ttbarH17->SetBinError(12,1.036905);
   ttbarH17->SetBinError(13,1.371697);
   ttbarH17->SetBinError(14,1.371697);
   ttbarH17->SetBinError(15,1.555358);
   ttbarH17->SetBinError(16,1.639491);
   ttbarH17->SetBinError(17,1.597978);
   ttbarH17->SetBinError(18,0.8979863);
   ttbarH17->SetBinError(19,1.3218);
   ttbarH17->SetBinError(20,1.419841);
   ttbarH17->SetBinError(21,1.159295);
   ttbarH17->SetBinError(22,1.215879);
   ttbarH17->SetBinError(23,1.159295);
   ttbarH17->SetBinError(24,1.099804);
   ttbarH17->SetBinError(25,0.7332027);
   ttbarH17->SetBinError(26,0.7332027);
   ttbarH17->SetBinError(27,0.6349722);
   ttbarH17->SetEntries(230);
   ttbarH17->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH17->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH17->SetLineColor(ci);
   ttbarH17->GetXaxis()->SetLabelFont(42);
   ttbarH17->GetXaxis()->SetLabelSize(0.035);
   ttbarH17->GetXaxis()->SetTitleSize(0.035);
   ttbarH17->GetXaxis()->SetTitleFont(42);
   ttbarH17->GetYaxis()->SetLabelFont(42);
   ttbarH17->GetYaxis()->SetLabelSize(0.035);
   ttbarH17->GetYaxis()->SetTitleSize(0.035);
   ttbarH17->GetYaxis()->SetTitleFont(42);
   ttbarH17->GetZaxis()->SetLabelFont(42);
   ttbarH17->GetZaxis()->SetLabelSize(0.035);
   ttbarH17->GetZaxis()->SetTitleSize(0.035);
   ttbarH17->GetZaxis()->SetTitleFont(42);
   LepEta->Add(ttbarH1,"");
   
   TH1D *wjetsH18 = new TH1D("wjetsH18","wjets",30,-3,3);
   wjetsH18->SetBinContent(3,0.974574);
   wjetsH18->SetBinContent(4,6.069929);
   wjetsH18->SetBinContent(5,9.483958);
   wjetsH18->SetBinContent(6,8.063167);
   wjetsH18->SetBinContent(7,12.35465);
   wjetsH18->SetBinContent(8,12.49499);
   wjetsH18->SetBinContent(9,17.34072);
   wjetsH18->SetBinContent(10,20.18929);
   wjetsH18->SetBinContent(11,18.39045);
   wjetsH18->SetBinContent(12,17.58125);
   wjetsH18->SetBinContent(13,17.1661);
   wjetsH18->SetBinContent(14,18.60901);
   wjetsH18->SetBinContent(15,16.64684);
   wjetsH18->SetBinContent(16,19.80913);
   wjetsH18->SetBinContent(17,22.23054);
   wjetsH18->SetBinContent(18,20.79978);
   wjetsH18->SetBinContent(19,21.05043);
   wjetsH18->SetBinContent(20,17.93121);
   wjetsH18->SetBinContent(21,19.23864);
   wjetsH18->SetBinContent(22,13.63188);
   wjetsH18->SetBinContent(23,12.95408);
   wjetsH18->SetBinContent(24,9.943199);
   wjetsH18->SetBinContent(25,9.102931);
   wjetsH18->SetBinContent(26,9.403782);
   wjetsH18->SetBinContent(27,8.942579);
   wjetsH18->SetBinContent(28,1.065811);
   wjetsH18->SetBinError(3,0.5052671);
   wjetsH18->SetBinError(4,1.050548);
   wjetsH18->SetBinError(5,1.36231);
   wjetsH18->SetBinError(6,1.142464);
   wjetsH18->SetBinError(7,1.754596);
   wjetsH18->SetBinError(8,1.727985);
   wjetsH18->SetBinError(9,1.978641);
   wjetsH18->SetBinError(10,2.257108);
   wjetsH18->SetBinError(11,1.938216);
   wjetsH18->SetBinError(12,1.893855);
   wjetsH18->SetBinError(13,1.785133);
   wjetsH18->SetBinError(14,1.944368);
   wjetsH18->SetBinError(15,1.863968);
   wjetsH18->SetBinError(16,2.034191);
   wjetsH18->SetBinError(17,2.129575);
   wjetsH18->SetBinError(18,2.172329);
   wjetsH18->SetBinError(19,2.012836);
   wjetsH18->SetBinError(20,1.914605);
   wjetsH18->SetBinError(21,2.064224);
   wjetsH18->SetBinError(22,1.672225);
   wjetsH18->SetBinError(23,1.637524);
   wjetsH18->SetBinError(24,1.395299);
   wjetsH18->SetBinError(25,1.371669);
   wjetsH18->SetBinError(26,1.401903);
   wjetsH18->SetBinError(27,1.449264);
   wjetsH18->SetBinError(28,0.4092077);
   wjetsH18->SetEntries(2161);
   wjetsH18->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH18->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH18->SetLineColor(ci);
   wjetsH18->GetXaxis()->SetLabelFont(42);
   wjetsH18->GetXaxis()->SetLabelSize(0.035);
   wjetsH18->GetXaxis()->SetTitleSize(0.035);
   wjetsH18->GetXaxis()->SetTitleFont(42);
   wjetsH18->GetYaxis()->SetLabelFont(42);
   wjetsH18->GetYaxis()->SetLabelSize(0.035);
   wjetsH18->GetYaxis()->SetTitleSize(0.035);
   wjetsH18->GetYaxis()->SetTitleFont(42);
   wjetsH18->GetZaxis()->SetLabelFont(42);
   wjetsH18->GetZaxis()->SetLabelSize(0.035);
   wjetsH18->GetZaxis()->SetTitleSize(0.035);
   wjetsH18->GetZaxis()->SetTitleFont(42);
   LepEta->Add(wjetsH1,"");
   LepEta->Draw("hist goff");
   
   TH1D *stopH19 = new TH1D("stopH19","Signal",30,-3,3);
   stopH19->SetBinContent(4,0.3041482);
   stopH19->SetBinContent(5,1.317976);
   stopH19->SetBinContent(6,0.9124447);
   stopH19->SetBinContent(7,1.216593);
   stopH19->SetBinContent(8,2.635951);
   stopH19->SetBinContent(9,3.041482);
   stopH19->SetBinContent(10,4.359458);
   stopH19->SetBinContent(11,4.562223);
   stopH19->SetBinContent(12,4.663606);
   stopH19->SetBinContent(13,5.880199);
   stopH19->SetBinContent(14,6.082965);
   stopH19->SetBinContent(15,6.387113);
   stopH19->SetBinContent(16,5.474668);
   stopH19->SetBinContent(17,5.981582);
   stopH19->SetBinContent(18,7.603706);
   stopH19->SetBinContent(19,4.460841);
   stopH19->SetBinContent(20,3.447013);
   stopH19->SetBinContent(21,3.142865);
   stopH19->SetBinContent(22,2.9401);
   stopH19->SetBinContent(23,2.23042);
   stopH19->SetBinContent(24,0.9124447);
   stopH19->SetBinContent(25,0.9124447);
   stopH19->SetBinContent(26,1.216593);
   stopH19->SetBinContent(27,0.1013827);
   stopH19->SetBinContent(28,0.1013827);
   stopH19->SetBinError(4,0.1756001);
   stopH19->SetBinError(5,0.3655407);
   stopH19->SetBinError(6,0.3041482);
   stopH19->SetBinError(7,0.3512001);
   stopH19->SetBinError(8,0.5169526);
   stopH19->SetBinError(9,0.5552962);
   stopH19->SetBinError(10,0.6648111);
   stopH19->SetBinError(11,0.6800961);
   stopH19->SetBinError(12,0.6876112);
   stopH19->SetBinError(13,0.772108);
   stopH19->SetBinError(14,0.7853074);
   stopH19->SetBinError(15,0.8047006);
   stopH19->SetBinError(16,0.745008);
   stopH19->SetBinError(17,0.7787356);
   stopH19->SetBinError(18,0.8780003);
   stopH19->SetBinError(19,0.672497);
   stopH19->SetBinError(20,0.5911579);
   stopH19->SetBinError(21,0.5644752);
   stopH19->SetBinError(22,0.5459628);
   stopH19->SetBinError(23,0.4755272);
   stopH19->SetBinError(24,0.3041482);
   stopH19->SetBinError(25,0.3041482);
   stopH19->SetBinError(26,0.3512001);
   stopH19->SetBinError(27,0.1013827);
   stopH19->SetBinError(28,0.1013827);
   stopH19->SetEntries(788);
   stopH19->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH19->SetLineColor(ci);
   stopH19->GetXaxis()->SetLabelFont(42);
   stopH19->GetXaxis()->SetLabelSize(0.035);
   stopH19->GetXaxis()->SetTitleSize(0.035);
   stopH19->GetXaxis()->SetTitleFont(42);
   stopH19->GetYaxis()->SetLabelFont(42);
   stopH19->GetYaxis()->SetLabelSize(0.035);
   stopH19->GetYaxis()->SetTitleSize(0.035);
   stopH19->GetYaxis()->SetTitleFont(42);
   stopH19->GetZaxis()->SetLabelFont(42);
   stopH19->GetZaxis()->SetLabelSize(0.035);
   stopH19->GetZaxis()->SetTitleSize(0.035);
   stopH19->GetZaxis()->SetTitleFont(42);
   stopH19->Draw("HIST same goff");
   
   TH1D *dataH110 = new TH1D("dataH110","Data",30,-3,3);
   dataH110->SetBinContent(3,2);
   dataH110->SetBinContent(4,9);
   dataH110->SetBinContent(5,13);
   dataH110->SetBinContent(6,11);
   dataH110->SetBinContent(7,17);
   dataH110->SetBinContent(8,15);
   dataH110->SetBinContent(9,23);
   dataH110->SetBinContent(10,26);
   dataH110->SetBinContent(11,23);
   dataH110->SetBinContent(12,25);
   dataH110->SetBinContent(13,14);
   dataH110->SetBinContent(14,22);
   dataH110->SetBinContent(15,27);
   dataH110->SetBinContent(16,30);
   dataH110->SetBinContent(17,31);
   dataH110->SetBinContent(18,21);
   dataH110->SetBinContent(19,30);
   dataH110->SetBinContent(20,27);
   dataH110->SetBinContent(21,26);
   dataH110->SetBinContent(22,20);
   dataH110->SetBinContent(23,17);
   dataH110->SetBinContent(24,14);
   dataH110->SetBinContent(25,10);
   dataH110->SetBinContent(26,11);
   dataH110->SetBinContent(27,8);
   dataH110->SetBinError(3,1.414214);
   dataH110->SetBinError(4,3);
   dataH110->SetBinError(5,3.605551);
   dataH110->SetBinError(6,3.316625);
   dataH110->SetBinError(7,4.123106);
   dataH110->SetBinError(8,3.872983);
   dataH110->SetBinError(9,4.795832);
   dataH110->SetBinError(10,5.09902);
   dataH110->SetBinError(11,4.795832);
   dataH110->SetBinError(12,5);
   dataH110->SetBinError(13,3.741657);
   dataH110->SetBinError(14,4.690416);
   dataH110->SetBinError(15,5.196152);
   dataH110->SetBinError(16,5.477226);
   dataH110->SetBinError(17,5.567764);
   dataH110->SetBinError(18,4.582576);
   dataH110->SetBinError(19,5.477226);
   dataH110->SetBinError(20,5.196152);
   dataH110->SetBinError(21,5.09902);
   dataH110->SetBinError(22,4.472136);
   dataH110->SetBinError(23,4.123106);
   dataH110->SetBinError(24,3.741657);
   dataH110->SetBinError(25,3.162278);
   dataH110->SetBinError(26,3.316625);
   dataH110->SetBinError(27,2.828427);
   dataH110->SetEntries(472);
   dataH110->SetStats(0);
   dataH110->GetXaxis()->SetLabelFont(42);
   dataH110->GetXaxis()->SetLabelSize(0.035);
   dataH110->GetXaxis()->SetTitleSize(0.035);
   dataH110->GetXaxis()->SetTitleFont(42);
   dataH110->GetYaxis()->SetLabelFont(42);
   dataH110->GetYaxis()->SetLabelSize(0.035);
   dataH110->GetYaxis()->SetTitleSize(0.035);
   dataH110->GetYaxis()->SetTitleFont(42);
   dataH110->GetZaxis()->SetLabelFont(42);
   dataH110->GetZaxis()->SetLabelSize(0.035);
   dataH110->GetZaxis()->SetTitleSize(0.035);
   dataH110->GetZaxis()->SetTitleFont(42);
   dataH110->Draw("E same goff");
   
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
   
   TPaveText *pt = new TPaveText(0.4406461,0.9341347,0.5593539,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("LepEta");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH111 = new TH1D("backgroundH111","",30,-3,3);
   backgroundH111->SetMinimum(0.5);
   backgroundH111->SetMaximum(1.5);
   backgroundH111->SetEntries(2422);
   backgroundH111->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH111->SetLineColor(ci);
   backgroundH111->GetXaxis()->SetLabelFont(42);
   backgroundH111->GetXaxis()->SetLabelSize(0.15);
   backgroundH111->GetXaxis()->SetTitleSize(0.035);
   backgroundH111->GetXaxis()->SetTitleFont(42);
   backgroundH111->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH111->GetYaxis()->SetNdivisions(5);
   backgroundH111->GetYaxis()->SetLabelFont(42);
   backgroundH111->GetYaxis()->SetLabelSize(0.15);
   backgroundH111->GetYaxis()->SetTitleSize(0.15);
   backgroundH111->GetYaxis()->SetTickLength(0.01);
   backgroundH111->GetYaxis()->SetTitleOffset(0.3);
   backgroundH111->GetYaxis()->SetTitleFont(42);
   backgroundH111->GetZaxis()->SetLabelFont(42);
   backgroundH111->GetZaxis()->SetLabelSize(0.035);
   backgroundH111->GetZaxis()->SetTitleSize(0.035);
   backgroundH111->GetZaxis()->SetTitleFont(42);
   backgroundH111->Draw("");
   
   Double_t Graph_from_backgroundH1_fx1002[30] = {
   -2.9,
   -2.7,
   -2.5,
   -2.3,
   -2.1,
   -1.9,
   -1.7,
   -1.5,
   -1.3,
   -1.1,
   -0.9,
   -0.7,
   -0.5,
   -0.3,
   -0.1,
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9};
   Double_t Graph_from_backgroundH1_fy1002[30] = {
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
   Double_t Graph_from_backgroundH1_fex1002[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_backgroundH1_fey1002[30] = {
   0,
   0,
   0.5184492,
   0.1712106,
   0.1396531,
   0.1426462,
   0.1302662,
   0.1344496,
   0.1111997,
   0.1090421,
   0.1009442,
   0.1052514,
   0.1009609,
   0.1002265,
   0.1044348,
   0.09626102,
   0.09119229,
   0.1022034,
   0.09327621,
   0.1017328,
   0.1033626,
   0.1170446,
   0.1207185,
   0.1341604,
   0.1471553,
   0.1455414,
   0.1575585,
   0.3839404,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_backgroundH1_fx1002,Graph_from_backgroundH1_fy1002,Graph_from_backgroundH1_fex1002,Graph_from_backgroundH1_fey1002);
   gre->SetName("Graph_from_backgroundH1");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff6600");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH11002 = new TH1F("Graph_Graph_from_backgroundH11002","",100,-3.6,3.6);
   Graph_Graph_from_backgroundH11002->SetMinimum(0.377861);
   Graph_Graph_from_backgroundH11002->SetMaximum(1.622139);
   Graph_Graph_from_backgroundH11002->SetDirectory(0);
   Graph_Graph_from_backgroundH11002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH11002->SetLineColor(ci);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetRange(9,92);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH11002);
   
   gre->Draw("3");
   
   TH1D *ratioH112 = new TH1D("ratioH112","",30,-3,3);
   ratioH112->SetBinContent(3,2.052179);
   ratioH112->SetBinContent(4,1.255277);
   ratioH112->SetBinContent(5,1.112674);
   ratioH112->SetBinContent(6,1.200484);
   ratioH112->SetBinContent(7,1.037391);
   ratioH112->SetBinContent(8,1.074391);
   ratioH112->SetBinContent(9,1.177053);
   ratioH112->SetBinContent(10,1.180622);
   ratioH112->SetBinContent(11,0.9777719);
   ratioH112->SetBinContent(12,1.218676);
   ratioH112->SetBinContent(13,0.6278444);
   ratioH112->SetBinContent(14,0.9266502);
   ratioH112->SetBinContent(15,1.161507);
   ratioH112->SetBinContent(16,1.105332);
   ratioH112->SetBinContent(17,1.061791);
   ratioH112->SetBinContent(18,0.9130677);
   ratioH112->SetBinContent(19,1.162059);
   ratioH112->SetBinContent(20,1.152357);
   ratioH112->SetBinContent(21,1.13514);
   ratioH112->SetBinContent(22,1.132215);
   ratioH112->SetBinContent(23,1.022858);
   ratioH112->SetBinContent(24,1.057193);
   ratioH112->SetBinContent(25,0.9461332);
   ratioH112->SetBinContent(26,1.011942);
   ratioH112->SetBinContent(27,0.7966237);
   ratioH112->SetBinError(3,1.799363);
   ratioH112->SetBinError(4,0.4703926);
   ratioH112->SetBinError(5,0.3455136);
   ratioH112->SetBinError(6,0.400424);
   ratioH112->SetBinError(7,0.2855989);
   ratioH112->SetBinError(8,0.3127629);
   ratioH112->SetBinError(9,0.2781524);
   ratioH112->SetBinError(10,0.264922);
   ratioH112->SetBinError(11,0.2265141);
   ratioH112->SetBinError(12,0.2754259);
   ratioH112->SetBinError(13,0.1793721);
   ratioH112->SetBinError(14,0.2183041);
   ratioH112->SetBinError(15,0.2543241);
   ratioH112->SetBinError(16,0.2281368);
   ratioH112->SetBinError(17,0.2138766);
   ratioH112->SetBinError(18,0.2200182);
   ratioH112->SetBinError(19,0.238247);
   ratioH112->SetBinError(20,0.2508505);
   ratioH112->SetBinError(21,0.2516465);
   ratioH112->SetBinError(22,0.2857568);
   ratioH112->SetBinError(23,0.2771105);
   ratioH112->SetBinError(24,0.3161478);
   ratioH112->SetBinError(25,0.3300021);
   ratioH112->SetBinError(26,0.3387987);
   ratioH112->SetBinError(27,0.3083507);
   ratioH112->SetEntries(144.2129);
   ratioH112->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH112->SetLineColor(ci);
   ratioH112->GetXaxis()->SetLabelFont(42);
   ratioH112->GetXaxis()->SetLabelSize(0.035);
   ratioH112->GetXaxis()->SetTitleSize(0.035);
   ratioH112->GetXaxis()->SetTitleFont(42);
   ratioH112->GetYaxis()->SetLabelFont(42);
   ratioH112->GetYaxis()->SetLabelSize(0.035);
   ratioH112->GetYaxis()->SetTitleSize(0.035);
   ratioH112->GetYaxis()->SetTitleFont(42);
   ratioH112->GetZaxis()->SetLabelFont(42);
   ratioH112->GetZaxis()->SetLabelSize(0.035);
   ratioH112->GetZaxis()->SetTitleSize(0.035);
   ratioH112->GetZaxis()->SetTitleFont(42);
   ratioH112->Draw("E same");
   TLine *line = new TLine(-3,1,3,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
