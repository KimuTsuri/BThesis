{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);
  gStyle->SetPalette(1);

  TCanvas* c1 = new TCanvas("c1", "", 20, 20, 600, 1000);
  c1->Divide(1,2);
  
  TFile f("gamma.root");
  
  int Event = B4->GetEntries();

  double EabsE1;
  double EabsE2;
  B4->SetBranchAddress("Eabs52",&EabsE1);
  B4->SetBranchAddress("Eabs54",&EabsE2);


  
  TH1D* h1 = new TH1D("h","",100,0.,10.);
  h1->SetXTitle("E2nd / E1st");
  h1->SetYTitle("Counts");
  h1->GetYaxis()->SetTitleOffset(1.2);
  
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      double E1 = EabsE1;
      double E2 = EabsE2;
      double ratio = E2/E1;
      h1->Fill(ratio);
    }

  c1->cd(1);  
  h1->Draw();

  
  int xbin = 100;
  int ybin = 100;
  double xmin = 0.;
  double xmax = 3.;
  double ymin = 0.;
  double ymax = 3.;

  TH2F* cmap1 = new TH2F("cmap1", "Color map of E1-E2", xbin, xmin, xmax, ybin, ymin, ymax);
  cmap1->GetXaxis()->SetTitle("E1 / MeV");
  cmap1->GetYaxis()->SetTitle("E2 / MeV");

  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      cmap1->Fill( EabsE1, EabsE2);
    }
  c1->cd(2);
  cmap1->Draw("colz");

  
}
