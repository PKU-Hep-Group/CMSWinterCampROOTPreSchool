void example5b() {
TFile* file = new TFile("hist1.root","READ"); //读取保存的文件
TH1F *h1 = (TH1F*) file->Get("h1"); //取出之前保存的直方图
for (int i=0;i<NEntry;i++) h1->Fill( gRandom->Uniform()); //再填充直方图10000次
h1->GetYaxis()->SetRangeUser(0,300);// 更改Y轴范围
h1->Draw(); //观察变化
}
