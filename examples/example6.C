void example6(){
TH1F *h1=new TH1F("h1","",100,-5,5);
TH1F *h2=new TH1F("h2","",100,-5,5);
h1->FillRandom("gaus",500);
h2->FillRandom("gaus",10000);
float norm=1000;
h1->Scale(norm/h1->Integral());
h2->Scale(norm/h2->Integral());
h2->SetMarkerColor(kRed);
h2->SetLineColor(kRed);
h1->Draw("e");
h2->Draw("esames");
}
