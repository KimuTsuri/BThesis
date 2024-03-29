{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);
  gStyle->SetPalette(1);

  TFile f("electron.root");

  TCanvas* c1;

  int xbin = 100;
  int ybin = 12;
  double xmin = 0.;
  double xmax = 100.;
  double ymin = 0.;
  double ymax = 3.;
  
  TH2F *h1 = new TH2F("h1","Layer - Energy Deposit Coror map", xbin, xmin, xmax, ybin, ymin, ymax);
  h1->SetXTitle("Layer");
  h1->SetYTitle("Energy Deposit");  
    
  int event = B4->GetEntries();
  int Event = event;
  int Layer = 100;
  double E[100];
  
  for(int i=0; i<Event; i++)
    {
      B4->GetEntry(i);
      stringstream ss;
      for(int n=0;n<100;n++)
	{
	  ss.str("");
	  ss.clear(stringstream::goodbit);
	  ss<<n;
	  string name = "Eabs" + ss.str();
	  B4->SetBranchAddress(name.c_str(),&E[n]);
	}
      
      int noLayer = 0;
      for(int l=0;l<Layer;l++)
	{
	  h1->Fill(l,E[l]);
	  cout << l << " " <<E[l]<<endl;
	}

    }
  
  h1->Draw("colz");

  c1->SaveAs("cmap-electron.png");
  
}

