{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  
  TFile f("B4.root");

  TCanvas* c1 = new TCanvas("c1", "", 20, 20, 1000, 1000);
  c1->Divide(2,2);
  
  TNtuple* ntuple = (TNtuple*)f.Get("B4");

  c1->cd(1);
  ntuple->Draw("Eabs");
  
  c1->cd(2);
  ntuple->Draw("Labs");
  
  c1->cd(3);
  gPad->SetLogy(1);
  ntuple->Draw("Egap");
  
  c1->cd(4);
  gPad->SetLogy(1);
  ntuple->Draw("Egap");
}  
