{
#include <fstream>
  
  gROOT->Reset();
  gStyle->SetOptStat(kFALSE);

  ifstream ifs("gamma.dat");

  TCanvas *c1;// = new TCanvas("c1","c1",1200,800);
  
  int xbin = 100;
  int ybin = 12;
  double xmin = 0.;
  double xmax = 100.;
  double ymin = 0.;
  double ymax = 3.;
  
  TH2F* h = new TH2F("h", "Color map", xbin, xmin, xmax, ybin, ymin, ymax);

  h->GetXaxis()->SetTitle("Layer");
  h->GetYaxis()->SetTitle("Energy Deposit");
  
  double x,y,z;
  while(ifs >> x >> y >> z) h->Fill(x, y, z);

  gStyle->SetPalette(1);
  h->Draw("colz");
  ifs.close();
}
