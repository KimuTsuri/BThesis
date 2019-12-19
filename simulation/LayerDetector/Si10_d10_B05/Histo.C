{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);
  gStyle->SetOptLogy(1);

  TCanvas* c1 = new TCanvas("c1", "", 20, 20, 1300, 1000);
  c1->Divide(2,2);


  
  TFile* e = new TFile("electron.root");
  TTree* te = (TTree*)e->Get("B4");

  TH1D *he1 = new TH1D("he1","", 100, 0.0, 3.0);
  he1->SetTitle("E1 Histogram of Electron;Energy Deposit / MeV;Counts;");

  c1->cd(1);
  te->Draw("Eabs50>>he1");

  TH1D *he2 = new TH1D("he2","", 100, 0.0, 3.0);
  he2->SetTitle("E2 Histogram of Electron;Energy Deposit / MeV;Counts;");
  
  c1->cd(2);
  te->Draw("Eabs51>>he2");


  
  TFile* g = new TFile("gamma.root");
  TTree* tg = (TTree*)g->Get("B4");

  TH1D *hg1 = new TH1D("hg1","", 100, 0.0, 3.0);
  hg1->SetTitle("E1 Histogram of Gamma;Energy Deposit / MeV;Counts;");

  c1->cd(3);
  tg->Draw("Eabs51>>hg1");

  TH1D *hg2 = new TH1D("hg2","", 100, 0.0, 3.0);
  hg2->SetTitle("E2 Histogram of Gamma;Energy Deposit / MeV;Counts;");

  c1->cd(4);
  tg->Draw("Eabs50>>hg2");


}
