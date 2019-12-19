{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);
  
  // Draw histos filled by Geant4 simulation 
 
  // Open file filled by Geant4 simulation 
  TFile f("B4.root");

  // Create a canvas and divide it into 2x2 pads
  TCanvas* c1 = new TCanvas("c1", "", 20, 20, 1000, 1000);
  c1->Divide(2,2);
  
  // Draw Eabs histogram in the pad 1
  c1->cd(1);
  TH1D* hist1 = (TH1D*)f.Get("Eabs");
  hist1->Draw("HIST");
  
  // Draw Labs histogram in the pad 2
  c1->cd(2);
  TH1D* hist2 = (TH1D*)f.Get("Labs");
  hist2->Draw("HIST");

  // Draw Egap histogram in the pad 3
  TH1D* hist3 = (TH1D*)f.Get("Egap");
  c1->cd(3);
  hist3->Draw("HIST");
  
  // Draw Lgap histogram in the pad 4
  c1->cd(4);
  TH1D* hist4 = (TH1D*)f.Get("Lgap");
  hist4->Draw("HIST");
}  
