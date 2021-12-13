void example3(){
TF1 *f1 =new TF1("func1","sin(x)/x",0,10);
TF1 *f2 =new TF1("func2","sin([0]*x)/x",0,10);
f2->SetParameter(0,2); //让两个函数相同需要如何设置？
f1->Draw();
f2->SetLineColor(kBlue); //将f2设成蓝线
f2->Draw("same"); // ”same”：两个函数画在一起
}
