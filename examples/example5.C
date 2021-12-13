void example5() {
const int NEntry=10000;
TH1F *h1 =new TH1F("h1","A simple histo",100,0,1);
//填充直方图10000次，用(0,1)均匀分布
for(int i=0;i<NEntry;i++) h1->Fill( gRandom->Uniform() );
//如果填充一个预定义过的分布（如高斯分布），可以采用"h1->FillRandom("gaus",10000);"简化
h1->GetYaxis()->SetRangeUser(0,150);// 更改Y轴范围
h1->GetXaxis()->SetTitle("x");// 更改X轴标题为"x"
h1->GetXaxis()->CenterTitle();// 将标题居中
h1->Draw();
}
