{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);
  gStyle->SetPalette(1);

  TCanvas* c1;
  TFile f("electron.root");
  TH1F *h = new TH1F("h","", 100, 0., 100.0);

   int event = B4->GetEntries();
   int Event = event;
  int Layer = 100;
  double E[100]; 
      B4->GetEntry(300);
      stringstream ss;
      for(int n=0;n<Layer;n++)
	{
	  ss.str("");
	  ss.clear(stringstream::goodbit);
	  ss<<n;
	  string name = "Eabs" + ss.str();
	  B4->SetBranchAddress(name.c_str(),&E[n]);
	  h->Fill(n,E[n]);
	  cout<<n<<" "<<E[n]<<endl;
	}
      h->Draw("Hist");

      c1->SaveAs("hist-electron.png");
}
