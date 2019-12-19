{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);
  gStyle->SetOptLogy(1);
  
  TCanvas* c1 = new TCanvas("c1","c1",1200,500);
  c1->Divide(2,1);
  
  TFile* e = new TFile("electron.root");
  TTree* te = (TTree*)e->Get("B4");

  TH1D *he1 = new TH1D("he1","", 100, 0.0, 3.0);
  he1->SetTitle("Histogram of Electron;Energy Deposit / MeV;Counts;");
  c1->cd(1);
  te->Draw("Eabs>>he1");
  

  TFile* g = new TFile("gamma.root");
  TTree* tg = (TTree*)g->Get("B4");
  
  TH1D *hg1 = new TH1D("hg1","", 100, 0.0, 3.0);
  hg1->SetTitle("Histogram of Gamma;Energy Deposit / MeV;Counts;");
  c1->cd(2);
  tg->Draw("Eabs>>hg1");

}
