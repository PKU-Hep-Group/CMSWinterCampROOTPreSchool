void example4() {
TF1 *f1 =new TF1("func1","sin(x)/x",0,10);//定义函数sin(x)/x
TF1 *f2 =new TF1("func2","TMath::Gaus(x,0,1)",-3,3);//定义一个高斯函数
TCanvas*myC1 =new TCanvas("myC1","A Canvas",10,10,800,600); //定义一个画布
myC1->Divide(2,1); //将画布分成两部分
myC1->cd(1); //进入第一部分
f1->Draw();
myC1->cd(2); //进入第二部分
f2->Draw();
myC1->SaveAs("myex33.png");//保存画出的图为像素图
myC1->SaveAs("myex33.eps"); //保存画出的图为矢量图
}