void example7() {
TFile*f =new TFile("tree1.root","recreate");
TTree*t1 =new TTree("t1","test tree");
float px,py,pz; float random;
int i;//设置Tree t1 的branch
t1->Branch("px",&px,"px/F");
t1->Branch("py",&py,"py/F");
t1->Branch("pz",&pz,"pz/F");
t1->Branch("random",&random,"random/D");
t1->Branch("i",&i,"i/I");
for(i=0;i<5000;i++) {
px =gRandom->Gaus(0,1);
pz=gRandom->Gaus(0,1);
pz=gRandom->Exp(10);
random =gRandom->Rndm();
t1->Fill();// 填充Tree t1
}
t1->Write(); }