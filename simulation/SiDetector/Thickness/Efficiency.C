{
  gROOT->Reset();
  gStyle->SetOptStat(kFALSE);

  TCanvas c1;

 
  
  TFile* tf_05 = new TFile("05mm.root");
  TTree* tr_05 = (TTree*)tf_05->Get("B4");  
  int Event_05 = tr_05->GetEntries();
  double N_05;
  double Eabs_05;
  double l_05 = 0.5;
  tr_05->SetBranchAddress("Eabs",&Eabs_05);
  for(int n=0; n<Event_05; n++)
    {
      tr_05->GetEntry(n);
      if( 1.25<=Eabs_05 && Eabs_05<=1.75 ) N_05++;
    }
  double Eff_05 = N_05 /1000;
  
  
  TFile* tf_10 = new TFile("10mm.root");
  TTree* tr_10 = (TTree*)tf_10->Get("B4");
  int Event_10 = tr_10->GetEntries();
  double N_10;
  double Eabs_10;
  double l_10 = 1.0;
  tr_10->SetBranchAddress("Eabs",&Eabs_10);
  for(int n=0; n<Event_10; n++)
    {
      tr_10->GetEntry(n);
      if( 1.25<=Eabs_10 && Eabs_10<=1.75 ) N_10++;
    }
  double Eff_10 = N_10 / 1000;
  
  
  TFile* tf_15 = new TFile("15mm.root");
  TTree* tr_15 = (TTree*)tf_15->Get("B4");
  int Event_15 = tr_15->GetEntries();
  double N_15;
  double Eabs_15;
  double l_15 = 1.5;
  tr_15->SetBranchAddress("Eabs",&Eabs_15);
  for(int n=0; n<Event_15; n++)
    {
      tr_15->GetEntry(n);
      if( 1.25<=Eabs_15 && Eabs_15<=1.75 ) N_15++;
    }
  double Eff_15 = N_15 / Event_15;
  

  TFile* tf_20 = new TFile("20mm.root");
  TTree* tr_20 = (TTree*)tf_20->Get("B4");
  int Event_20 = tr_20->GetEntries();
  double N_20;
  double Eabs_20;
  double l_20 = 2.0;
  tr_20->SetBranchAddress("Eabs",&Eabs_20);
  for(int n=0; n<Event_20; n++)
    {
      tr_20->GetEntry(n);
      if( 1.25<=Eabs_20 && Eabs_20<=1.75 ) N_20++;
    }
  double Eff_20 = N_20 / Event_20;

  
  TFile* tf_25 = new TFile("25mm.root");
  TTree* tr_25 = (TTree*)tf_25->Get("B4");
  int Event_25 = tr_25->GetEntries();
  double N_25;
  double Eabs_25;
  double l_25 = 2.5;
  tr_25->SetBranchAddress("Eabs",&Eabs_25);
  for(int n=0; n<Event_25; n++)
    {
      tr_25->GetEntry(n);
      if( 1.25<=Eabs_25 && Eabs_25<=1.75 ) N_25++;
    }
  double Eff_25 = N_25 / Event_25;

  
  TFile* tf_30 = new TFile("30mm.root");
  TTree* tr_30 = (TTree*)tf_30->Get("B4");
  int Event_30 = tr_30->GetEntries();
  double N_30;
  double Eabs_30;
  double l_30 = 3.0;
  tr_30->SetBranchAddress("Eabs",&Eabs_30);
  for(int n=0; n<Event_30; n++)
    {
      tr_30->GetEntry(n);
      if( 1.25<=Eabs_30 && Eabs_30<=1.75 ) N_30++;
    }
  double Eff_30 = N_30 / Event_30;

  
  TFile* tf_35 = new TFile("35mm.root");
  TTree* tr_35 = (TTree*)tf_35->Get("B4");
  int Event_35 = tr_35->GetEntries();
  double N_35;
  double Eabs_35;
  double l_35 = 3.5;
  tr_35->SetBranchAddress("Eabs",&Eabs_35);
  for(int n=0; n<Event_35; n++)
    {
      tr_35->GetEntry(n);
      if( 1.25<=Eabs_35 && Eabs_35<=1.75 ) N_35++;
    }
  double Eff_35 = N_35 / Event_35;

  
  TFile* tf_40 = new TFile("40mm.root");
  TTree* tr_40 = (TTree*)tf_40->Get("B4");
  int Event_40 = tr_40->GetEntries();
  double N_40;
  double Eabs_40;
  double l_40 = 4.0;
  tr_40->SetBranchAddress("Eabs",&Eabs_40);
  for(int n=0; n<Event_40; n++)
    {
      tr_40->GetEntry(n);
      if( 1.25<=Eabs_40 && Eabs_40<=1.75 ) N_40++;
    }
  double Eff_40 = N_40 / Event_40;

  
  cout << l_05 << " " << Eff_05 <<endl;
  cout << l_10 << " " << Eff_10 <<endl;
  cout << l_15 << " " << Eff_15 <<endl;
  cout << l_20 << " " << Eff_20 <<endl;
  cout << l_25 << " " << Eff_25 <<endl;
  cout << l_30 << " " << Eff_30 <<endl;
  cout << l_35 << " " << Eff_35 <<endl;
  cout << l_40 << " " << Eff_40 <<endl;


  int n = 8;
  double x[] = {  l_05,  l_10,  l_15,  l_20,  l_25,  l_30,  l_35,  l_40};
  double y[] = {Eff_05,Eff_10,Eff_15,Eff_20,Eff_25,Eff_30,Eff_35,Eff_40};
  
  TGraph* g=new TGraph(n,x,y);

  g->GetXaxis()->SetTitle("Si Thickness / mm");
  g->GetYaxis()->SetTitle("Efficiency");
  
  g->SetMarkerStyle(2);
  g->SetMarkerColor(1);
  g->SetMarkerSize(1);  
  g->Draw("AP");
}
