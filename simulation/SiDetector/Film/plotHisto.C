{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);

  TCanvas* c1 = new TCanvas("c1", "", 20, 20, 1300, 500);
  c1->Divide(2,1);

  TFile* al = new TFile("Al.root");
  TTree* tal = (TTree*)al->Get("B4");

  TH1D *hal = new TH1D("hal","", 100, 0.0, 3.0);
  hal->SetTitle(";Energy Deposit / MeV;Counts;");
  c1->cd(2);
  tal->Draw("Eabs>>hal");

  TFile* no = new TFile("No.root");
  TTree* tno = (TTree*)no->Get("B4");

  TH1D *hno = new TH1D("hno","", 100, 0.0, 3.0);
  hno->SetTitle(";Energy Deposit / MeV;Counts;");
  c1->cd(1);
  tno->Draw("Eabs>>hno");
}
