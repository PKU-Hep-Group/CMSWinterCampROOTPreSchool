void example8(){
const Int_t kMaxTrack=50;
int ntrack;
float px[kMaxTrack];
float py[kMaxTrack];
TFile*f =new TFile("tree2.root","recreate");
TTree*t2 =new TTree("t2","Reconstevents");
t2->Branch("ntrack",&ntrack,"ntrack/I");
t2->Branch("px",px,"px[ntrack]/F");
t2->Branch("py",py,"py[ntrack]/F");
for (int i=0;i<5000;i++) {
ntrack = gRandom->Integer(kMaxTrack) + 1;
for(int j = 0 ; j < kMaxTrack ; j++){
if (j < ntrack){
px[j] = gRandom->Gaus(0,1);
py[j] = gRandom->Exp(1);}
else{px[j] = 0; py[j] = 0;}}
t2->Fill();}
t2->Write(); }