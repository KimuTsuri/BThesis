{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(kFALSE);
  gStyle->SetPalette(1);

  TFile f("gamma.root");

  TCanvas* c1 = new TCanvas("c1", "", 20, 20, 1300, 1000);
  c1->Divide(2,2);

  TH1F *h1 = new TH1F("h1","E2/E1 histogram", 100, 0.0, 1.1);
  h1->SetXTitle("E2/E1");
  h1->SetYTitle("Counts");  
  
  TH2F *h2 = new TH2F("h2","E1 - E2 Color map", 100, 0.0, 3.0, 100, 0.0, 3.0);
  h2->SetXTitle("E1 / MeV");
  h2->SetYTitle("E2 / MeV");

  TH1F *h3 = new TH1F("h3","E1/Etotal histogram", 100, 0.0, 1.1);
  h3->SetXTitle("E1/Etotal");
  h3->SetYTitle("Counts");
  
  TH1F *h4 = new TH1F("h4","E2/Etotal histogram", 100, 0.0, 1.1);
  h4->SetXTitle("E2/Etotal");
  h4->SetYTitle("Counts");
  
  int event = B4->GetEntries();
  int Event = event/100;
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

      double Etot = E[0];
      int x[2];
      int y[2];
      x[0] = E[0];
      x[1] = E[1];

      for(int n=2; n<100; n++)
	{
	  Etot += E[n];
	  if(x[0]<E[n])
	    {
	      x[1] = x[0];
	      x[0] = E[n];
	      y[1] = y[0];
	      y[0] = n;
	    }
	  else if(x[1]<E[n])
	    {
	      x[1] = E[n];
	      y[1] = n;
	    }
	}

      double Ratio1;
      double Ratio2;
      double Ratio12;

      if( 1.25<E[y[0]] && E[y[0]]<1.75 && y[0] != y[1] )
	{
	  Ratio1 = E[y[0]]/Etot;
	  Ratio2 = E[y[1]]/Etot;

	  h2->Fill(E[y[0]],E[y[1]]);
	  h3->Fill(Ratio1);
	  h4->Fill(Ratio2);
	  
	  if(((y[0]-y[1])==1)||((y[0]-y[1])==-1))
	    {
	      E12 = E[y[0]]+E[y[1]];
	      Ratio12 = E12/Etot;

	      h1->Fill(Ratio12);
	    }
	}
      cout << i << " " << y[0] << ":" << y[1] <<endl;

    }
       
	
  c1->cd(1);
  h1->Draw();

  c1->cd(2);
  h2->Draw("colz");

  c1->cd(3);
  h3->Draw();

  c1->cd(4);
  h4->Draw();

  c1->SaveAs("Rslt-ElectronGamma-gamma.png");
  
}

