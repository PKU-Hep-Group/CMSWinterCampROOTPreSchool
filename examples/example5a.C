void example5a() {
TFile*file =new TFile("hist1.root","RECREATE");
TH1F *h1 =new TH1F("h1","A simple histo",100,0,1);
for(int i=0;i<10000;i++) h1->Fill( gRandom->Uniform() );//填充直方图10000次
h1->GetYaxis()->SetRangeUser(0,150);// 更改Y轴范围
h1->GetXaxis()->SetTitle("x");// 更改X轴标题为"x"
h1->GetXaxis()->CenterTitle();// 将标题居中
h1->Draw();
file->cd();
h1->Write();
}