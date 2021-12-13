void example8a(){
TFile*f =new TFile("tree2.root");
TTree*t2 =(TTree*)f->Get("t2");
//步骤1:定义好必要的变量
const Int_t kMaxTrack=100;
Int_t ntrack;
Float_t px[kMaxTrack];//[ntrack]
Float_t py[kMaxTrack];//[ntrack]
//步骤2: 用SetBranchAddress函数
//将tree的Branch与定义好的变量
//地址联系起来。
t2->SetBranchAddress("ntrack", &ntrack);
t2->SetBranchAddress("px", px);
t2->SetBranchAddress("py", py);
// 获取事例总数
Int_t nentries= t2->GetEntries();
TH1I *hntrack= new TH1I("hntrack","trk n",25,0,50);
TH1F *hpt= new TH1F("hpt" ,"trkpt" ,100,0,10);
// 步骤3:对所有事例循环
for (int i=0;i<nentries;i++) {
t2->GetEntry(i);//获取第i个事例
hntrack->Fill(ntrack);
for (int j=0;j<ntrack;j++) {
Float_t pt = sqrt(px[j]*px[j]+py[j]*py[j]);
hpt->Fill( pt );}}
TCanvas*myC= new TCanvas("myC","",10,10,600,400);
hntrack->Draw("e");
hntrack->GetYaxis()->SetRangeUser(100,300);
TCanvas*myC1 = new TCanvas("myC1","",10,10,600,400);
hpt->Draw();}
