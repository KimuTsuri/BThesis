{
  gROOT->Reset();
  gStyle->SetOptStat(kFALSE);


  double Eabs;
  
  TFile* tf_No = new TFile("No.root");
  TTree* tr_No = (TTree*)tf_No->Get("B4");
  int Event_No = tr_No->GetEntries();
  int N_No=0;
  tr_No->SetBranchAddress("Eabs",&Eabs);
  for(int n=0; n<Event_No; n++)
    {
      tr_No->GetEntry(n);
      if( 1.25<Eabs && Eabs<=1.75 ) N_No++;
    }
  double Eff_No = (double) N_No / Event_No;

  
  TFile* tf_Al = new TFile("Al.root");
  TTree* tr_Al = (TTree*)tf_Al->Get("B4");
  int Event_Al = tr_Al->GetEntries();
  int N_Al=0;
  tr_Al->SetBranchAddress("Eabs",&Eabs);
  for(int n=0; n<Event_Al; n++)
    {
      tr_Al->GetEntry(n);
      if( 1.25<Eabs && Eabs<=1.75 ) N_Al++;
    }
  double Eff_Al = (double) N_Al / Event_Al;
  cout << N_No << endl;
  cout << N_Al << endl;
  
  cout << "Al薄膜なし " << Eff_No <<endl;
  cout << "Al薄膜あり " << Eff_Al <<endl;
}
