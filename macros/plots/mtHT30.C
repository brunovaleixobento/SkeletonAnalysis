void mtHT30()
{
//=========Macro generated from canvas: variable/variable
//=========  (Fri Jul 15 15:11:16 2016) by ROOT version6.02/13
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
   variable_1->Range(-175,-33.24055,1575,299.1649);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->SetFrameBorderMode(0);
   
   THStack *mtHT30 = new THStack();
   mtHT30->SetName("mtHT30");
   mtHT30->SetTitle("mtHT30;HT30 - 5 \times m_{T};Evt.");
   mtHT30->SetMaximum(253.2613);
   
   TH1F *mtHT30_stack_14 = new TH1F("mtHT30_stack_14","mtHT30",30,0,1400);
   mtHT30_stack_14->SetMinimum(0);
   mtHT30_stack_14->SetMaximum(265.9244);
   mtHT30_stack_14->SetDirectory(0);
   mtHT30_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mtHT30_stack_14->SetLineColor(ci);
   mtHT30_stack_14->GetXaxis()->SetTitle("HT30 - 5 \\times m_{T}");
   mtHT30_stack_14->GetXaxis()->SetLabelFont(42);
   mtHT30_stack_14->GetXaxis()->SetLabelSize(0.035);
   mtHT30_stack_14->GetXaxis()->SetTitleSize(0.035);
   mtHT30_stack_14->GetXaxis()->SetTitleFont(42);
   mtHT30_stack_14->GetYaxis()->SetTitle("Evt.");
   mtHT30_stack_14->GetYaxis()->SetLabelFont(42);
   mtHT30_stack_14->GetYaxis()->SetLabelSize(0.035);
   mtHT30_stack_14->GetYaxis()->SetTitleSize(0.035);
   mtHT30_stack_14->GetYaxis()->SetTitleFont(42);
   mtHT30_stack_14->GetZaxis()->SetLabelFont(42);
   mtHT30_stack_14->GetZaxis()->SetLabelSize(0.035);
   mtHT30_stack_14->GetZaxis()->SetTitleSize(0.035);
   mtHT30_stack_14->GetZaxis()->SetTitleFont(42);
   mtHT30->SetHistogram(mtHT30_stack_14);
   
   
   TH1D *ttbarH1379 = new TH1D("ttbarH1379","ttbar",30,0,1400);
   ttbarH1379->SetBinContent(0,16.49706);
   ttbarH1379->SetBinContent(1,14.66405);
   ttbarH1379->SetBinContent(2,20.16308);
   ttbarH1379->SetBinContent(3,32.26092);
   ttbarH1379->SetBinContent(4,38.12654);
   ttbarH1379->SetBinContent(5,43.62556);
   ttbarH1379->SetBinContent(6,52.424);
   ttbarH1379->SetBinContent(7,48.75798);
   ttbarH1379->SetBinContent(8,42.15916);
   ttbarH1379->SetBinContent(9,41.42596);
   ttbarH1379->SetBinContent(10,45.09197);
   ttbarH1379->SetBinContent(11,31.16112);
   ttbarH1379->SetBinContent(12,27.8617);
   ttbarH1379->SetBinContent(13,24.92889);
   ttbarH1379->SetBinContent(14,24.19569);
   ttbarH1379->SetBinContent(15,15.39726);
   ttbarH1379->SetBinContent(16,14.66405);
   ttbarH1379->SetBinContent(17,13.56425);
   ttbarH1379->SetBinContent(18,8.798433);
   ttbarH1379->SetBinContent(19,6.598825);
   ttbarH1379->SetBinContent(20,6.598825);
   ttbarH1379->SetBinContent(21,7.332027);
   ttbarH1379->SetBinContent(22,4.399216);
   ttbarH1379->SetBinContent(23,4.765818);
   ttbarH1379->SetBinContent(24,5.865622);
   ttbarH1379->SetBinContent(25,2.56621);
   ttbarH1379->SetBinContent(26,2.56621);
   ttbarH1379->SetBinContent(27,0.7332027);
   ttbarH1379->SetBinContent(28,2.56621);
   ttbarH1379->SetBinContent(29,1.466405);
   ttbarH1379->SetBinContent(30,1.099804);
   ttbarH1379->SetBinContent(31,5.499021);
   ttbarH1379->SetBinError(0,2.459237);
   ttbarH1379->SetBinError(1,2.318591);
   ttbarH1379->SetBinError(2,2.718789);
   ttbarH1379->SetBinError(3,3.439026);
   ttbarH1379->SetBinError(4,3.738615);
   ttbarH1379->SetBinError(5,3.999149);
   ttbarH1379->SetBinError(6,4.383915);
   ttbarH1379->SetBinError(7,4.227853);
   ttbarH1379->SetBinError(8,3.931362);
   ttbarH1379->SetBinError(9,3.897026);
   ttbarH1379->SetBinError(10,4.065806);
   ttbarH1379->SetBinError(11,3.379898);
   ttbarH1379->SetBinError(12,3.195957);
   ttbarH1379->SetBinError(13,3.023072);
   ttbarH1379->SetBinError(14,2.978284);
   ttbarH1379->SetBinError(15,2.375848);
   ttbarH1379->SetBinError(16,2.318591);
   ttbarH1379->SetBinError(17,2.229949);
   ttbarH1379->SetBinError(18,1.795973);
   ttbarH1379->SetBinError(19,1.555358);
   ttbarH1379->SetBinError(20,1.555358);
   ttbarH1379->SetBinError(21,1.639491);
   ttbarH1379->SetBinError(22,1.269944);
   ttbarH1379->SetBinError(23,1.3218);
   ttbarH1379->SetBinError(24,1.466405);
   ttbarH1379->SetBinError(25,0.9699361);
   ttbarH1379->SetBinError(26,0.9699361);
   ttbarH1379->SetBinError(27,0.5184526);
   ttbarH1379->SetBinError(28,0.9699361);
   ttbarH1379->SetBinError(29,0.7332027);
   ttbarH1379->SetBinError(30,0.6349722);
   ttbarH1379->SetBinError(31,1.419841);
   ttbarH1379->SetEntries(1658);
   ttbarH1379->SetStats(0);

   ci = TColor::GetColor("#66ff66");
   ttbarH1379->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH1379->SetLineColor(ci);
   ttbarH1379->GetXaxis()->SetLabelFont(42);
   ttbarH1379->GetXaxis()->SetLabelSize(0.035);
   ttbarH1379->GetXaxis()->SetTitleSize(0.035);
   ttbarH1379->GetXaxis()->SetTitleFont(42);
   ttbarH1379->GetYaxis()->SetLabelFont(42);
   ttbarH1379->GetYaxis()->SetLabelSize(0.035);
   ttbarH1379->GetYaxis()->SetTitleSize(0.035);
   ttbarH1379->GetYaxis()->SetTitleFont(42);
   ttbarH1379->GetZaxis()->SetLabelFont(42);
   ttbarH1379->GetZaxis()->SetLabelSize(0.035);
   ttbarH1379->GetZaxis()->SetTitleSize(0.035);
   ttbarH1379->GetZaxis()->SetTitleFont(42);
   mtHT30->Add(ttbarH13,"");
   
   TH1D *wjetsH1380 = new TH1D("wjetsH1380","wjets",30,0,1400);
   wjetsH1380->SetBinContent(0,76.94022);
   wjetsH1380->SetBinContent(1,101.5138);
   wjetsH1380->SetBinContent(2,124.2741);
   wjetsH1380->SetBinContent(3,150.0114);
   wjetsH1380->SetBinContent(4,158.9669);
   wjetsH1380->SetBinContent(5,182.4021);
   wjetsH1380->SetBinContent(6,188.7772);
   wjetsH1380->SetBinContent(7,177.3999);
   wjetsH1380->SetBinContent(8,151.0893);
   wjetsH1380->SetBinContent(9,129.0047);
   wjetsH1380->SetBinContent(10,91.69065);
   wjetsH1380->SetBinContent(11,73.23504);
   wjetsH1380->SetBinContent(12,56.91042);
   wjetsH1380->SetBinContent(13,41.58301);
   wjetsH1380->SetBinContent(14,33.48391);
   wjetsH1380->SetBinContent(15,30.11216);
   wjetsH1380->SetBinContent(16,21.97633);
   wjetsH1380->SetBinContent(17,15.14081);
   wjetsH1380->SetBinContent(18,14.09712);
   wjetsH1380->SetBinContent(19,10.70944);
   wjetsH1380->SetBinContent(20,10.16304);
   wjetsH1380->SetBinContent(21,6.775358);
   wjetsH1380->SetBinContent(22,7.977438);
   wjetsH1380->SetBinContent(23,5.354719);
   wjetsH1380->SetBinContent(24,4.480479);
   wjetsH1380->SetBinContent(25,4.152639);
   wjetsH1380->SetBinContent(26,4.043359);
   wjetsH1380->SetBinContent(27,2.950559);
   wjetsH1380->SetBinContent(28,2.185599);
   wjetsH1380->SetBinContent(29,2.294879);
   wjetsH1380->SetBinContent(30,1.0928);
   wjetsH1380->SetBinContent(31,10.3816);
   wjetsH1380->SetBinError(0,5.385501);
   wjetsH1380->SetBinError(1,6.14216);
   wjetsH1380->SetBinError(2,6.366327);
   wjetsH1380->SetBinError(3,6.636156);
   wjetsH1380->SetBinError(4,6.576367);
   wjetsH1380->SetBinError(5,7.11433);
   wjetsH1380->SetBinError(6,7.012899);
   wjetsH1380->SetBinError(7,6.642293);
   wjetsH1380->SetBinError(8,5.628646);
   wjetsH1380->SetBinError(9,4.714908);
   wjetsH1380->SetBinError(10,3.765571);
   wjetsH1380->SetBinError(11,3.221903);
   wjetsH1380->SetBinError(12,2.710491);
   wjetsH1380->SetBinError(13,2.202286);
   wjetsH1380->SetBinError(14,1.934086);
   wjetsH1380->SetBinError(15,1.816825);
   wjetsH1380->SetBinError(16,1.556266);
   wjetsH1380->SetBinError(17,1.290265);
   wjetsH1380->SetBinError(18,1.241182);
   wjetsH1380->SetBinError(19,1.081817);
   wjetsH1380->SetBinError(20,1.053858);
   wjetsH1380->SetBinError(21,0.8604714);
   wjetsH1380->SetBinError(22,0.9336885);
   wjetsH1380->SetBinError(23,0.7649598);
   wjetsH1380->SetBinError(24,0.6997332);
   wjetsH1380->SetBinError(25,0.673647);
   wjetsH1380->SetBinError(26,0.6647241);
   wjetsH1380->SetBinError(27,0.5678354);
   wjetsH1380->SetBinError(28,0.4887149);
   wjetsH1380->SetBinError(29,0.5007837);
   wjetsH1380->SetBinError(30,0.3455736);
   wjetsH1380->SetBinError(31,1.065129);
   wjetsH1380->SetEntries(10375);
   wjetsH1380->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   wjetsH1380->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH1380->SetLineColor(ci);
   wjetsH1380->GetXaxis()->SetLabelFont(42);
   wjetsH1380->GetXaxis()->SetLabelSize(0.035);
   wjetsH1380->GetXaxis()->SetTitleSize(0.035);
   wjetsH1380->GetXaxis()->SetTitleFont(42);
   wjetsH1380->GetYaxis()->SetLabelFont(42);
   wjetsH1380->GetYaxis()->SetLabelSize(0.035);
   wjetsH1380->GetYaxis()->SetTitleSize(0.035);
   wjetsH1380->GetYaxis()->SetTitleFont(42);
   wjetsH1380->GetZaxis()->SetLabelFont(42);
   wjetsH1380->GetZaxis()->SetLabelSize(0.035);
   wjetsH1380->GetZaxis()->SetTitleSize(0.035);
   wjetsH1380->GetZaxis()->SetTitleFont(42);
   mtHT30->Add(wjetsH13,"");
   mtHT30->Draw("hist goff");
   
   TH1D *stopH1381 = new TH1D("stopH1381","Signal",30,0,1400);
   stopH1381->SetBinContent(0,4.460841);
   stopH1381->SetBinContent(1,4.967754);
   stopH1381->SetBinContent(2,7.502323);
   stopH1381->SetBinContent(3,11.65902);
   stopH1381->SetBinContent(4,15.61294);
   stopH1381->SetBinContent(5,14.0922);
   stopH1381->SetBinContent(6,18.75581);
   stopH1381->SetBinContent(7,19.26272);
   stopH1381->SetBinContent(8,15.10603);
   stopH1381->SetBinContent(9,10.64519);
   stopH1381->SetBinContent(10,11.86178);
   stopH1381->SetBinContent(11,9.22583);
   stopH1381->SetBinContent(12,8.009237);
   stopH1381->SetBinContent(13,5.880199);
   stopH1381->SetBinContent(14,4.866372);
   stopH1381->SetBinContent(15,4.359458);
   stopH1381->SetBinContent(16,2.534569);
   stopH1381->SetBinContent(17,1.723507);
   stopH1381->SetBinContent(18,2.737334);
   stopH1381->SetBinContent(19,1.926272);
   stopH1381->SetBinContent(20,1.317976);
   stopH1381->SetBinContent(21,1.11521);
   stopH1381->SetBinContent(22,1.419358);
   stopH1381->SetBinContent(23,0.6082965);
   stopH1381->SetBinContent(24,0.7096792);
   stopH1381->SetBinContent(25,0.2027655);
   stopH1381->SetBinContent(26,0.2027655);
   stopH1381->SetBinContent(27,0.2027655);
   stopH1381->SetBinContent(28,0.405531);
   stopH1381->SetBinContent(29,0.3041482);
   stopH1381->SetBinContent(30,0.3041482);
   stopH1381->SetBinContent(31,0.8110619);
   stopH1381->SetBinError(0,0.672497);
   stopH1381->SetBinError(1,0.7096792);
   stopH1381->SetBinError(2,0.8721273);
   stopH1381->SetBinError(3,1.087209);
   stopH1381->SetBinError(4,1.258127);
   stopH1381->SetBinError(5,1.195285);
   stopH1381->SetBinError(6,1.378954);
   stopH1381->SetBinError(7,1.397465);
   stopH1381->SetBinError(8,1.237534);
   stopH1381->SetBinError(9,1.038864);
   stopH1381->SetBinError(10,1.096622);
   stopH1381->SetBinError(11,0.9671297);
   stopH1381->SetBinError(12,0.9011095);
   stopH1381->SetBinError(13,0.772108);
   stopH1381->SetBinError(14,0.7024003);
   stopH1381->SetBinError(15,0.6648111);
   stopH1381->SetBinError(16,0.5069137);
   stopH1381->SetBinError(17,0.4180118);
   stopH1381->SetBinError(18,0.5268002);
   stopH1381->SetBinError(19,0.4419171);
   stopH1381->SetBinError(20,0.3655407);
   stopH1381->SetBinError(21,0.3362485);
   stopH1381->SetBinError(22,0.3793395);
   stopH1381->SetBinError(23,0.248336);
   stopH1381->SetBinError(24,0.2682335);
   stopH1381->SetBinError(25,0.1433769);
   stopH1381->SetBinError(26,0.1433769);
   stopH1381->SetBinError(27,0.1433769);
   stopH1381->SetBinError(28,0.2027655);
   stopH1381->SetBinError(29,0.1756001);
   stopH1381->SetBinError(30,0.1756001);
   stopH1381->SetBinError(31,0.2867537);
   stopH1381->SetEntries(1803);
   stopH1381->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   stopH1381->SetLineColor(ci);
   stopH1381->GetXaxis()->SetLabelFont(42);
   stopH1381->GetXaxis()->SetLabelSize(0.035);
   stopH1381->GetXaxis()->SetTitleSize(0.035);
   stopH1381->GetXaxis()->SetTitleFont(42);
   stopH1381->GetYaxis()->SetLabelFont(42);
   stopH1381->GetYaxis()->SetLabelSize(0.035);
   stopH1381->GetYaxis()->SetTitleSize(0.035);
   stopH1381->GetYaxis()->SetTitleFont(42);
   stopH1381->GetZaxis()->SetLabelFont(42);
   stopH1381->GetZaxis()->SetLabelSize(0.035);
   stopH1381->GetZaxis()->SetTitleSize(0.035);
   stopH1381->GetZaxis()->SetTitleFont(42);
   stopH1381->Draw("HIST same goff");
   
   TH1D *dataH1382 = new TH1D("dataH1382","Data",30,0,1400);
   dataH1382->SetBinContent(0,94);
   dataH1382->SetBinContent(1,106);
   dataH1382->SetBinContent(2,135);
   dataH1382->SetBinContent(3,203);
   dataH1382->SetBinContent(4,219);
   dataH1382->SetBinContent(5,239);
   dataH1382->SetBinContent(6,247);
   dataH1382->SetBinContent(7,235);
   dataH1382->SetBinContent(8,194);
   dataH1382->SetBinContent(9,180);
   dataH1382->SetBinContent(10,133);
   dataH1382->SetBinContent(11,110);
   dataH1382->SetBinContent(12,95);
   dataH1382->SetBinContent(13,70);
   dataH1382->SetBinContent(14,63);
   dataH1382->SetBinContent(15,45);
   dataH1382->SetBinContent(16,39);
   dataH1382->SetBinContent(17,33);
   dataH1382->SetBinContent(18,23);
   dataH1382->SetBinContent(19,14);
   dataH1382->SetBinContent(20,15);
   dataH1382->SetBinContent(21,22);
   dataH1382->SetBinContent(22,14);
   dataH1382->SetBinContent(23,10);
   dataH1382->SetBinContent(24,10);
   dataH1382->SetBinContent(25,9);
   dataH1382->SetBinContent(26,4);
   dataH1382->SetBinContent(27,3);
   dataH1382->SetBinContent(28,3);
   dataH1382->SetBinContent(30,2);
   dataH1382->SetBinContent(31,13);
   dataH1382->SetBinError(0,9.69536);
   dataH1382->SetBinError(1,10.29563);
   dataH1382->SetBinError(2,11.61895);
   dataH1382->SetBinError(3,14.24781);
   dataH1382->SetBinError(4,14.79865);
   dataH1382->SetBinError(5,15.45962);
   dataH1382->SetBinError(6,15.71623);
   dataH1382->SetBinError(7,15.32971);
   dataH1382->SetBinError(8,13.92839);
   dataH1382->SetBinError(9,13.41641);
   dataH1382->SetBinError(10,11.53256);
   dataH1382->SetBinError(11,10.48809);
   dataH1382->SetBinError(12,9.746794);
   dataH1382->SetBinError(13,8.3666);
   dataH1382->SetBinError(14,7.937254);
   dataH1382->SetBinError(15,6.708204);
   dataH1382->SetBinError(16,6.244998);
   dataH1382->SetBinError(17,5.744563);
   dataH1382->SetBinError(18,4.795832);
   dataH1382->SetBinError(19,3.741657);
   dataH1382->SetBinError(20,3.872983);
   dataH1382->SetBinError(21,4.690416);
   dataH1382->SetBinError(22,3.741657);
   dataH1382->SetBinError(23,3.162278);
   dataH1382->SetBinError(24,3.162278);
   dataH1382->SetBinError(25,3);
   dataH1382->SetBinError(26,2);
   dataH1382->SetBinError(27,1.732051);
   dataH1382->SetBinError(28,1.732051);
   dataH1382->SetBinError(30,1.414214);
   dataH1382->SetBinError(31,3.605551);
   dataH1382->SetEntries(2582);
   dataH1382->SetStats(0);
   dataH1382->GetXaxis()->SetLabelFont(42);
   dataH1382->GetXaxis()->SetLabelSize(0.035);
   dataH1382->GetXaxis()->SetTitleSize(0.035);
   dataH1382->GetXaxis()->SetTitleFont(42);
   dataH1382->GetYaxis()->SetLabelFont(42);
   dataH1382->GetYaxis()->SetLabelSize(0.035);
   dataH1382->GetYaxis()->SetTitleSize(0.035);
   dataH1382->GetYaxis()->SetTitleFont(42);
   dataH1382->GetZaxis()->SetLabelFont(42);
   dataH1382->GetZaxis()->SetLabelSize(0.035);
   dataH1382->GetZaxis()->SetTitleSize(0.035);
   dataH1382->GetZaxis()->SetTitleFont(42);
   dataH1382->Draw("E same goff");
   
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
   entry=leg->AddEntry("ttbarH13","ttbar","lpf");

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
   entry=leg->AddEntry("wjetsH13","wjets","lpf");

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
   entry=leg->AddEntry("stopH13","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dataH13","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4361594,0.94,0.5638406,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("mtHT30");
   pt->Draw();
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.2);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(-175,0.375,1575,1.625);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->SetFrameBorderMode(0);
   
   TH1D *backgroundH1383 = new TH1D("backgroundH1383","",30,0,1400);
   backgroundH1383->SetMinimum(0.5);
   backgroundH1383->SetMaximum(1.5);
   backgroundH1383->SetEntries(12064);
   backgroundH1383->SetStats(0);

   ci = TColor::GetColor("#000099");
   backgroundH1383->SetLineColor(ci);
   backgroundH1383->GetXaxis()->SetLabelFont(42);
   backgroundH1383->GetXaxis()->SetLabelSize(0.15);
   backgroundH1383->GetXaxis()->SetTitleSize(0.035);
   backgroundH1383->GetXaxis()->SetTitleFont(42);
   backgroundH1383->GetYaxis()->SetTitle("Data/ #Sigma MC");
   backgroundH1383->GetYaxis()->SetNdivisions(5);
   backgroundH1383->GetYaxis()->SetLabelFont(42);
   backgroundH1383->GetYaxis()->SetLabelSize(0.15);
   backgroundH1383->GetYaxis()->SetTitleSize(0.15);
   backgroundH1383->GetYaxis()->SetTickLength(0.01);
   backgroundH1383->GetYaxis()->SetTitleOffset(0.15);
   backgroundH1383->GetYaxis()->SetTitleFont(42);
   backgroundH1383->GetZaxis()->SetLabelFont(42);
   backgroundH1383->GetZaxis()->SetLabelSize(0.035);
   backgroundH1383->GetZaxis()->SetTitleSize(0.035);
   backgroundH1383->GetZaxis()->SetTitleFont(42);
   backgroundH1383->Draw("");
   
   Double_t Graph_from_backgroundH13_fx1014[30] = {
   23.33333,
   70,
   116.6667,
   163.3333,
   210,
   256.6667,
   303.3333,
   350,
   396.6667,
   443.3333,
   490,
   536.6667,
   583.3333,
   630,
   676.6667,
   723.3333,
   770,
   816.6667,
   863.3333,
   910,
   956.6667,
   1003.333,
   1050,
   1096.667,
   1143.333,
   1190,
   1236.667,
   1283.333,
   1330,
   1376.667};
   Double_t Graph_from_backgroundH13_fy1014[30] = {
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
   Double_t Graph_from_backgroundH13_fex1014[30] = {
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333,
   23.33333};
   Double_t Graph_from_backgroundH13_fey1014[30] = {
   0.05651002,
   0.04792786,
   0.04100633,
   0.03838168,
   0.03610754,
   0.03428837,
   0.03481497,
   0.03552762,
   0.03589119,
   0.04051456,
   0.0447288,
   0.04943339,
   0.05623341,
   0.0615673,
   0.06572055,
   0.07621259,
   0.08975164,
   0.09535165,
   0.1094615,
   0.1120856,
   0.1312489,
   0.1273559,
   0.1509004,
   0.1570446,
   0.1757625,
   0.1779019,
   0.2087309,
   0.2285661,
   0.2360636,
   0.3297077};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_backgroundH13_fx1014,Graph_from_backgroundH13_fy1014,Graph_from_backgroundH13_fex1014,Graph_from_backgroundH13_fey1014);
   gre->SetName("Graph_from_backgroundH13");
   gre->SetTitle("");
   gre->SetFillColor(6);
   gre->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_backgroundH131014 = new TH1F("Graph_Graph_from_backgroundH131014","",100,0,1540);
   Graph_Graph_from_backgroundH131014->SetMinimum(0.6043508);
   Graph_Graph_from_backgroundH131014->SetMaximum(1.395649);
   Graph_Graph_from_backgroundH131014->SetDirectory(0);
   Graph_Graph_from_backgroundH131014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_backgroundH131014->SetLineColor(ci);
   Graph_Graph_from_backgroundH131014->GetXaxis()->SetRange(1,91);
   Graph_Graph_from_backgroundH131014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH131014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH131014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH131014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH131014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH131014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH131014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH131014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_backgroundH131014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_backgroundH131014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_backgroundH131014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_backgroundH131014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_backgroundH131014);
   
   gre->Draw("3");
   
   TH1D *ratioH1384 = new TH1D("ratioH1384","",30,0,1400);
   ratioH1384->SetBinContent(0,1.006022);
   ratioH1384->SetBinContent(1,0.9123944);
   ratioH1384->SetBinContent(2,0.9346622);
   ratioH1384->SetBinContent(3,1.113718);
   ratioH1384->SetBinContent(4,1.111148);
   ratioH1384->SetBinContent(5,1.057393);
   ratioH1384->SetBinContent(6,1.024041);
   ratioH1384->SetBinContent(7,1.039097);
   ratioH1384->SetBinContent(8,1.003889);
   ratioH1384->SetBinContent(9,1.056148);
   ratioH1384->SetBinContent(10,0.9723457);
   ratioH1384->SetBinContent(11,1.053679);
   ratioH1384->SetBinContent(12,1.120651);
   ratioH1384->SetBinContent(13,1.052443);
   ratioH1384->SetBinContent(14,1.092241);
   ratioH1384->SetBinContent(15,0.9888063);
   ratioH1384->SetBinContent(16,1.064399);
   ratioH1384->SetBinContent(17,1.149623);
   ratioH1384->SetBinContent(18,1.004562);
   ratioH1384->SetBinContent(19,0.8088623);
   ratioH1384->SetBinContent(20,0.8948886);
   ratioH1384->SetBinContent(21,1.559467);
   ratioH1384->SetBinContent(22,1.131162);
   ratioH1384->SetBinContent(23,0.9880899);
   ratioH1384->SetBinContent(24,0.9665477);
   ratioH1384->SetBinContent(25,1.339515);
   ratioH1384->SetBinContent(26,0.6051832);
   ratioH1384->SetBinContent(27,0.8143849);
   ratioH1384->SetBinContent(28,0.6313385);
   ratioH1384->SetBinContent(30,0.9121575);
   ratioH1384->SetBinContent(31,0.8186079);
   ratioH1384->SetBinError(0,0.1217791);
   ratioH1384->SetBinError(1,0.1025271);
   ratioH1384->SetBinError(2,0.09207484);
   ratioH1384->SetBinError(3,0.09053115);
   ratioH1384->SetBinError(4,0.08635105);
   ratioH1384->SetBinError(5,0.0783317);
   ratioH1384->SetBinError(6,0.07401682);
   ratioH1384->SetBinError(7,0.0768328);
   ratioH1384->SetBinError(8,0.08041677);
   ratioH1384->SetBinError(9,0.08737182);
   ratioH1384->SetBinError(10,0.09306231);
   ratioH1384->SetBinError(11,0.1109698);
   ratioH1384->SetBinError(12,0.1276263);
   ratioH1384->SetBinError(13,0.1390178);
   ratioH1384->SetBinError(14,0.1531614);
   ratioH1384->SetBinError(15,0.1610917);
   ratioH1384->SetBinError(16,0.1887603);
   ratioH1384->SetBinError(17,0.2251571);
   ratioH1384->SetBinError(18,0.2303279);
   ratioH1384->SetBinError(19,0.2336064);
   ratioH1384->SetBinError(20,0.2518915);
   ratioH1384->SetBinError(21,0.3904302);
   ratioH1384->SetBinError(22,0.3348853);
   ratioH1384->SetBinError(23,0.3462137);
   ratioH1384->SetBinError(24,0.3412653);
   ratioH1384->SetBinError(25,0.5047744);
   ratioH1384->SetBinError(26,0.3211745);
   ratioH1384->SetBinError(27,0.4999699);
   ratioH1384->SetBinError(28,0.3920281);
   ratioH1384->SetBinError(30,0.7116624);
   ratioH1384->SetBinError(31,0.2447833);
   ratioH1384->SetEntries(393.2105);
   ratioH1384->SetStats(0);

   ci = TColor::GetColor("#000099");
   ratioH1384->SetLineColor(ci);
   ratioH1384->GetXaxis()->SetLabelFont(42);
   ratioH1384->GetXaxis()->SetLabelSize(0.035);
   ratioH1384->GetXaxis()->SetTitleSize(0.035);
   ratioH1384->GetXaxis()->SetTitleFont(42);
   ratioH1384->GetYaxis()->SetLabelFont(42);
   ratioH1384->GetYaxis()->SetLabelSize(0.035);
   ratioH1384->GetYaxis()->SetTitleSize(0.035);
   ratioH1384->GetYaxis()->SetTitleFont(42);
   ratioH1384->GetZaxis()->SetLabelFont(42);
   ratioH1384->GetZaxis()->SetLabelSize(0.035);
   ratioH1384->GetZaxis()->SetTitleSize(0.035);
   ratioH1384->GetZaxis()->SetTitleFont(42);
   ratioH1384->Draw("E same");
   TLine *line = new TLine(0,1,1400,1);
   line->Draw();
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_1
   TPad *variable_1 = new TPad("variable_1", "variable_1",0.01,0.51,0.99,0.99);
   variable_1->Draw();
   variable_1->cd();
   variable_1->Range(0,0,1,1);
   variable_1->SetFillColor(0);
   variable_1->SetBorderMode(0);
   variable_1->SetBorderSize(2);
   variable_1->SetFrameBorderMode(0);
   variable_1->Modified();
   variable->cd();
  
// ------------>Primitives in pad: variable_2
   TPad *variable_2 = new TPad("variable_2", "variable_2",0.01,0.01,0.99,0.49);
   variable_2->Draw();
   variable_2->cd();
   variable_2->Range(0,0,1,1);
   variable_2->SetFillColor(0);
   variable_2->SetBorderMode(0);
   variable_2->SetBorderSize(2);
   variable_2->SetFrameBorderMode(0);
   variable_2->Modified();
   variable->cd();
   variable->Modified();
   variable->cd();
   variable->SetSelected(variable);
}
