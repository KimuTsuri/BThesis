{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs60;
  B4->SetBranchAddress("Eabs60",&Eabs60);
  int N0_01 = 0;
  int N0_02 = 0;
  int N0_03 = 0;
  int N0_04 = 0;
  int N0_05 = 0;
  int N0_06 = 0;
  int N0_07 = 0;
  int N0_08 = 0;
  int N0_09 = 0;
  int N0_10 = 0;
  int N0_11 = 0;
  int N0_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs60 && Eabs60<=0.25 ) N0_01++;
      if( 0.25<Eabs60 && Eabs60<=0.50 ) N0_02++;
      if( 0.50<Eabs60 && Eabs60<=0.75 ) N0_03++;
      if( 0.75<Eabs60 && Eabs60<=1.00 ) N0_04++;
      if( 1.00<Eabs60 && Eabs60<=1.25 ) N0_05++;
      if( 1.25<Eabs60 && Eabs60<=1.50 ) N0_06++;
      if( 1.50<Eabs60 && Eabs60<=1.75 ) N0_07++;
      if( 1.75<Eabs60 && Eabs60<=2.00 ) N0_08++;
      if( 2.00<Eabs60 && Eabs60<=2.25 ) N0_09++;
      if( 2.25<Eabs60 && Eabs60<=2.50 ) N0_10++;
      if( 2.50<Eabs60 && Eabs60<=2.75 ) N0_11++;
      if( 2.75<Eabs60 && Eabs60<=3.00 ) N0_12++;
    }  
  cout << "60 " << "0.00 " << N0_01 << endl;
  cout << "60 " << "0.25 " << N0_02 << endl;
  cout << "60 " << "0.50 " << N0_03 << endl;
  cout << "60 " << "0.75 " << N0_04 << endl;
  cout << "60 " << "1.00 " << N0_05 << endl;
  cout << "60 " << "1.25 " << N0_06 << endl;
  cout << "60 " << "1.50 " << N0_07 << endl;
  cout << "60 " << "1.75 " << N0_08 << endl;
  cout << "60 " << "2.00 " << N0_09 << endl;
  cout << "60 " << "2.25 " << N0_10 << endl;
  cout << "60 " << "2.50 " << N0_11 << endl;
  cout << "60 " << "2.75 " << N0_12 << endl;

  double Eabs61;
  B4->SetBranchAddress("Eabs61",&Eabs61);
  int N1_01 = 0;
  int N1_02 = 0;
  int N1_03 = 0;
  int N1_04 = 0;
  int N1_05 = 0;
  int N1_06 = 0;
  int N1_07 = 0;
  int N1_08 = 0;
  int N1_09 = 0;
  int N1_10 = 0;
  int N1_11 = 0;
  int N1_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs61 && Eabs61<=0.25 ) N1_01++;
      if( 0.25<Eabs61 && Eabs61<=0.50 ) N1_02++;
      if( 0.50<Eabs61 && Eabs61<=0.75 ) N1_03++;
      if( 0.75<Eabs61 && Eabs61<=1.00 ) N1_04++;
      if( 1.00<Eabs61 && Eabs61<=1.25 ) N1_05++;
      if( 1.25<Eabs61 && Eabs61<=1.50 ) N1_06++;
      if( 1.50<Eabs61 && Eabs61<=1.75 ) N1_07++;
      if( 1.75<Eabs61 && Eabs61<=2.00 ) N1_08++;
      if( 2.00<Eabs61 && Eabs61<=2.25 ) N1_09++;
      if( 2.25<Eabs61 && Eabs61<=2.50 ) N1_10++;
      if( 2.50<Eabs61 && Eabs61<=2.75 ) N1_11++;
      if( 2.75<Eabs61 && Eabs61<=3.00 ) N1_12++;
    }
  cout << "61 " << "0.00 " << N1_01 << endl;
  cout << "61 " << "0.25 " << N1_02 << endl;
  cout << "61 " << "0.50 " << N1_03 << endl;
  cout << "61 " << "0.75 " << N1_04 << endl;
  cout << "61 " << "1.00 " << N1_05 << endl;
  cout << "61 " << "1.25 " << N1_06 << endl;
  cout << "61 " << "1.50 " << N1_07 << endl;
  cout << "61 " << "1.75 " << N1_08 << endl;
  cout << "61 " << "2.00 " << N1_09 << endl;
  cout << "61 " << "2.25 " << N1_10 << endl;
  cout << "61 " << "2.50 " << N1_11 << endl;
  cout << "61 " << "2.75 " << N1_12 << endl;

  double Eabs62;
  B4->SetBranchAddress("Eabs62",&Eabs62);
  int N2_01 = 0;
  int N2_02 = 0;
  int N2_03 = 0;
  int N2_04 = 0;
  int N2_05 = 0;
  int N2_06 = 0;
  int N2_07 = 0;
  int N2_08 = 0;
  int N2_09 = 0;
  int N2_10 = 0;
  int N2_11 = 0;
  int N2_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs62 && Eabs62<=0.25 ) N2_01++;
      if( 0.25<Eabs62 && Eabs62<=0.50 ) N2_02++;
      if( 0.50<Eabs62 && Eabs62<=0.75 ) N2_03++;
      if( 0.75<Eabs62 && Eabs62<=1.00 ) N2_04++;
      if( 1.00<Eabs62 && Eabs62<=1.25 ) N2_05++;
      if( 1.25<Eabs62 && Eabs62<=1.50 ) N2_06++;
      if( 1.50<Eabs62 && Eabs62<=1.75 ) N2_07++;
      if( 1.75<Eabs62 && Eabs62<=2.00 ) N2_08++;
      if( 2.00<Eabs62 && Eabs62<=2.25 ) N2_09++;
      if( 2.25<Eabs62 && Eabs62<=2.50 ) N2_10++;
      if( 2.50<Eabs62 && Eabs62<=2.75 ) N2_11++;
      if( 2.75<Eabs62 && Eabs62<=3.00 ) N2_12++;
    }
  cout << "62 " << "0.00 " << N2_01 << endl;
  cout << "62 " << "0.25 " << N2_02 << endl;
  cout << "62 " << "0.50 " << N2_03 << endl;
  cout << "62 " << "0.75 " << N2_04 << endl;
  cout << "62 " << "1.00 " << N2_05 << endl;
  cout << "62 " << "1.25 " << N2_06 << endl;
  cout << "62 " << "1.50 " << N2_07 << endl;
  cout << "62 " << "1.75 " << N2_08 << endl;
  cout << "62 " << "2.00 " << N2_09 << endl;
  cout << "62 " << "2.25 " << N2_10 << endl;
  cout << "62 " << "2.50 " << N2_11 << endl;
  cout << "62 " << "2.75 " << N2_12 << endl;

  double Eabs63;
  B4->SetBranchAddress("Eabs63",&Eabs63);
  int N3_01 = 0;
  int N3_02 = 0;
  int N3_03 = 0;
  int N3_04 = 0;
  int N3_05 = 0;
  int N3_06 = 0;
  int N3_07 = 0;
  int N3_08 = 0;
  int N3_09 = 0;
  int N3_10 = 0;
  int N3_11 = 0;
  int N3_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs63 && Eabs63<=0.25 ) N3_01++;
      if( 0.25<Eabs63 && Eabs63<=0.50 ) N3_02++;
      if( 0.50<Eabs63 && Eabs63<=0.75 ) N3_03++;
      if( 0.75<Eabs63 && Eabs63<=1.00 ) N3_04++;
      if( 1.00<Eabs63 && Eabs63<=1.25 ) N3_05++;
      if( 1.25<Eabs63 && Eabs63<=1.50 ) N3_06++;
      if( 1.50<Eabs63 && Eabs63<=1.75 ) N3_07++;
      if( 1.75<Eabs63 && Eabs63<=2.00 ) N3_08++;
      if( 2.00<Eabs63 && Eabs63<=2.25 ) N3_09++;
      if( 2.25<Eabs63 && Eabs63<=2.50 ) N3_10++;
      if( 2.50<Eabs63 && Eabs63<=2.75 ) N3_11++;
      if( 2.75<Eabs63 && Eabs63<=3.00 ) N3_12++;
    }
  cout << "63 " << "0.00 " << N3_01 << endl;
  cout << "63 " << "0.25 " << N3_02 << endl;
  cout << "63 " << "0.50 " << N3_03 << endl;
  cout << "63 " << "0.75 " << N3_04 << endl;
  cout << "63 " << "1.00 " << N3_05 << endl;
  cout << "63 " << "1.25 " << N3_06 << endl;
  cout << "63 " << "1.50 " << N3_07 << endl;
  cout << "63 " << "1.75 " << N3_08 << endl;
  cout << "63 " << "2.00 " << N3_09 << endl;
  cout << "63 " << "2.25 " << N3_10 << endl;
  cout << "63 " << "2.50 " << N3_11 << endl;
  cout << "63 " << "2.75 " << N3_12 << endl;

  double Eabs64;
  B4->SetBranchAddress("Eabs64",&Eabs64);
  int N4_01 = 0;
  int N4_02 = 0;
  int N4_03 = 0;
  int N4_04 = 0;
  int N4_05 = 0;
  int N4_06 = 0;
  int N4_07 = 0;
  int N4_08 = 0;
  int N4_09 = 0;
  int N4_10 = 0;
  int N4_11 = 0;
  int N4_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs64 && Eabs64<=0.25 ) N4_01++;
      if( 0.25<Eabs64 && Eabs64<=0.50 ) N4_02++;
      if( 0.50<Eabs64 && Eabs64<=0.75 ) N4_03++;
      if( 0.75<Eabs64 && Eabs64<=1.00 ) N4_04++;
      if( 1.00<Eabs64 && Eabs64<=1.25 ) N4_05++;
      if( 1.25<Eabs64 && Eabs64<=1.50 ) N4_06++;
      if( 1.50<Eabs64 && Eabs64<=1.75 ) N4_07++;
      if( 1.75<Eabs64 && Eabs64<=2.00 ) N4_08++;
      if( 2.00<Eabs64 && Eabs64<=2.25 ) N4_09++;
      if( 2.25<Eabs64 && Eabs64<=2.50 ) N4_10++;
      if( 2.50<Eabs64 && Eabs64<=2.75 ) N4_11++;
      if( 2.75<Eabs64 && Eabs64<=3.00 ) N4_12++;
    }
  cout << "64 " << "0.00 " << N4_01 << endl;
  cout << "64 " << "0.25 " << N4_02 << endl;
  cout << "64 " << "0.50 " << N4_03 << endl;
  cout << "64 " << "0.75 " << N4_04 << endl;
  cout << "64 " << "1.00 " << N4_05 << endl;
  cout << "64 " << "1.25 " << N4_06 << endl;
  cout << "64 " << "1.50 " << N4_07 << endl;
  cout << "64 " << "1.75 " << N4_08 << endl;
  cout << "64 " << "2.00 " << N4_09 << endl;
  cout << "64 " << "2.25 " << N4_10 << endl;
  cout << "64 " << "2.50 " << N4_11 << endl;
  cout << "64 " << "2.75 " << N4_12 << endl;

  double Eabs65;
  B4->SetBranchAddress("Eabs65",&Eabs65);
  int N5_01 = 0;
  int N5_02 = 0;
  int N5_03 = 0;
  int N5_04 = 0;
  int N5_05 = 0;
  int N5_06 = 0;
  int N5_07 = 0;
  int N5_08 = 0;
  int N5_09 = 0;
  int N5_10 = 0;
  int N5_11 = 0;
  int N5_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs65 && Eabs65<=0.25 ) N5_01++;
      if( 0.25<Eabs65 && Eabs65<=0.50 ) N5_02++;
      if( 0.50<Eabs65 && Eabs65<=0.75 ) N5_03++;
      if( 0.75<Eabs65 && Eabs65<=1.00 ) N5_04++;
      if( 1.00<Eabs65 && Eabs65<=1.25 ) N5_05++;
      if( 1.25<Eabs65 && Eabs65<=1.50 ) N5_06++;
      if( 1.50<Eabs65 && Eabs65<=1.75 ) N5_07++;
      if( 1.75<Eabs65 && Eabs65<=2.00 ) N5_08++;
      if( 2.00<Eabs65 && Eabs65<=2.25 ) N5_09++;
      if( 2.25<Eabs65 && Eabs65<=2.50 ) N5_10++;
      if( 2.50<Eabs65 && Eabs65<=2.75 ) N5_11++;
      if( 2.75<Eabs65 && Eabs65<=3.00 ) N5_12++;
    }
  cout << "65 " << "0.00 " << N5_01 << endl;
  cout << "65 " << "0.25 " << N5_02 << endl;
  cout << "65 " << "0.50 " << N5_03 << endl;
  cout << "65 " << "0.75 " << N5_04 << endl;
  cout << "65 " << "1.00 " << N5_05 << endl;
  cout << "65 " << "1.25 " << N5_06 << endl;
  cout << "65 " << "1.50 " << N5_07 << endl;
  cout << "65 " << "1.75 " << N5_08 << endl;
  cout << "65 " << "2.00 " << N5_09 << endl;
  cout << "65 " << "2.25 " << N5_10 << endl;
  cout << "65 " << "2.50 " << N5_11 << endl;
  cout << "65 " << "2.75 " << N5_12 << endl;

  double Eabs66;
  B4->SetBranchAddress("Eabs66",&Eabs66);
  int N6_01 = 0;
  int N6_02 = 0;
  int N6_03 = 0;
  int N6_04 = 0;
  int N6_05 = 0;
  int N6_06 = 0;
  int N6_07 = 0;
  int N6_08 = 0;
  int N6_09 = 0;
  int N6_10 = 0;
  int N6_11 = 0;
  int N6_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs66 && Eabs66<=0.25 ) N6_01++;
      if( 0.25<Eabs66 && Eabs66<=0.50 ) N6_02++;
      if( 0.50<Eabs66 && Eabs66<=0.75 ) N6_03++;
      if( 0.75<Eabs66 && Eabs66<=1.00 ) N6_04++;
      if( 1.00<Eabs66 && Eabs66<=1.25 ) N6_05++;
      if( 1.25<Eabs66 && Eabs66<=1.50 ) N6_06++;
      if( 1.50<Eabs66 && Eabs66<=1.75 ) N6_07++;
      if( 1.75<Eabs66 && Eabs66<=2.00 ) N6_08++;
      if( 2.00<Eabs66 && Eabs66<=2.25 ) N6_09++;
      if( 2.25<Eabs66 && Eabs66<=2.50 ) N6_10++;
      if( 2.50<Eabs66 && Eabs66<=2.75 ) N6_11++;
      if( 2.75<Eabs66 && Eabs66<=3.00 ) N6_12++;
    }
  cout << "66 " << "0.00 " << N6_01 << endl;
  cout << "66 " << "0.25 " << N6_02 << endl;
  cout << "66 " << "0.50 " << N6_03 << endl;
  cout << "66 " << "0.75 " << N6_04 << endl;
  cout << "66 " << "1.00 " << N6_05 << endl;
  cout << "66 " << "1.25 " << N6_06 << endl;
  cout << "66 " << "1.50 " << N6_07 << endl;
  cout << "66 " << "1.75 " << N6_08 << endl;
  cout << "66 " << "2.00 " << N6_09 << endl;
  cout << "66 " << "2.25 " << N6_10 << endl;
  cout << "66 " << "2.50 " << N6_11 << endl;
  cout << "66 " << "2.75 " << N6_12 << endl;

  double Eabs67;
  B4->SetBranchAddress("Eabs67",&Eabs67);
  int N7_01 = 0;
  int N7_02 = 0;
  int N7_03 = 0;
  int N7_04 = 0;
  int N7_05 = 0;
  int N7_06 = 0;
  int N7_07 = 0;
  int N7_08 = 0;
  int N7_09 = 0;
  int N7_10 = 0;
  int N7_11 = 0;
  int N7_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs67 && Eabs67<=0.25 ) N7_01++;
      if( 0.25<Eabs67 && Eabs67<=0.50 ) N7_02++;
      if( 0.50<Eabs67 && Eabs67<=0.75 ) N7_03++;
      if( 0.75<Eabs67 && Eabs67<=1.00 ) N7_04++;
      if( 1.00<Eabs67 && Eabs67<=1.25 ) N7_05++;
      if( 1.25<Eabs67 && Eabs67<=1.50 ) N7_06++;
      if( 1.50<Eabs67 && Eabs67<=1.75 ) N7_07++;
      if( 1.75<Eabs67 && Eabs67<=2.00 ) N7_08++;
      if( 2.00<Eabs67 && Eabs67<=2.25 ) N7_09++;
      if( 2.25<Eabs67 && Eabs67<=2.50 ) N7_10++;
      if( 2.50<Eabs67 && Eabs67<=2.75 ) N7_11++;
      if( 2.75<Eabs67 && Eabs67<=3.00 ) N7_12++;
    }
  cout << "67 " << "0.00 " << N7_01 << endl;
  cout << "67 " << "0.25 " << N7_02 << endl;
  cout << "67 " << "0.50 " << N7_03 << endl;
  cout << "67 " << "0.75 " << N7_04 << endl;
  cout << "67 " << "1.00 " << N7_05 << endl;
  cout << "67 " << "1.25 " << N7_06 << endl;
  cout << "67 " << "1.50 " << N7_07 << endl;
  cout << "67 " << "1.75 " << N7_08 << endl;
  cout << "67 " << "2.00 " << N7_09 << endl;
  cout << "67 " << "2.25 " << N7_10 << endl;
  cout << "67 " << "2.50 " << N7_11 << endl;
  cout << "67 " << "2.75 " << N7_12 << endl;

  double Eabs68;
  B4->SetBranchAddress("Eabs68",&Eabs68);
  int N8_01 = 0;
  int N8_02 = 0;
  int N8_03 = 0;
  int N8_04 = 0;
  int N8_05 = 0;
  int N8_06 = 0;
  int N8_07 = 0;
  int N8_08 = 0;
  int N8_09 = 0;
  int N8_10 = 0;
  int N8_11 = 0;
  int N8_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs68 && Eabs68<=0.25 ) N8_01++;
      if( 0.25<Eabs68 && Eabs68<=0.50 ) N8_02++;
      if( 0.50<Eabs68 && Eabs68<=0.75 ) N8_03++;
      if( 0.75<Eabs68 && Eabs68<=1.00 ) N8_04++;
      if( 1.00<Eabs68 && Eabs68<=1.25 ) N8_05++;
      if( 1.25<Eabs68 && Eabs68<=1.50 ) N8_06++;
      if( 1.50<Eabs68 && Eabs68<=1.75 ) N8_07++;
      if( 1.75<Eabs68 && Eabs68<=2.00 ) N8_08++;
      if( 2.00<Eabs68 && Eabs68<=2.25 ) N8_09++;
      if( 2.25<Eabs68 && Eabs68<=2.50 ) N8_10++;
      if( 2.50<Eabs68 && Eabs68<=2.75 ) N8_11++;
      if( 2.75<Eabs68 && Eabs68<=3.00 ) N8_12++;
    }
  cout << "68 " << "0.00 " << N8_01 << endl;
  cout << "68 " << "0.25 " << N8_02 << endl;
  cout << "68 " << "0.50 " << N8_03 << endl;
  cout << "68 " << "0.75 " << N8_04 << endl;
  cout << "68 " << "1.00 " << N8_05 << endl;
  cout << "68 " << "1.25 " << N8_06 << endl;
  cout << "68 " << "1.50 " << N8_07 << endl;
  cout << "68 " << "1.75 " << N8_08 << endl;
  cout << "68 " << "2.00 " << N8_09 << endl;
  cout << "68 " << "2.25 " << N8_10 << endl;
  cout << "68 " << "2.50 " << N8_11 << endl;
  cout << "68 " << "2.75 " << N8_12 << endl;

  double Eabs69;
  B4->SetBranchAddress("Eabs69",&Eabs69);
  int N9_01 = 0;
  int N9_02 = 0;
  int N9_03 = 0;
  int N9_04 = 0;
  int N9_05 = 0;
  int N9_06 = 0;
  int N9_07 = 0;
  int N9_08 = 0;
  int N9_09 = 0;
  int N9_10 = 0;
  int N9_11 = 0;
  int N9_12 = 0;
  for(int n=0; n<Event; n++)
    {
      B4->GetEntry(n);
      if( 0.00<Eabs69 && Eabs69<=0.25 ) N9_01++;
      if( 0.25<Eabs69 && Eabs69<=0.50 ) N9_02++;
      if( 0.50<Eabs69 && Eabs69<=0.75 ) N9_03++;
      if( 0.75<Eabs69 && Eabs69<=1.00 ) N9_04++;
      if( 1.00<Eabs69 && Eabs69<=1.25 ) N9_05++;
      if( 1.25<Eabs69 && Eabs69<=1.50 ) N9_06++;
      if( 1.50<Eabs69 && Eabs69<=1.75 ) N9_07++;
      if( 1.75<Eabs69 && Eabs69<=2.00 ) N9_08++;
      if( 2.00<Eabs69 && Eabs69<=2.25 ) N9_09++;
      if( 2.25<Eabs69 && Eabs69<=2.50 ) N9_10++;
      if( 2.50<Eabs69 && Eabs69<=2.75 ) N9_11++;
      if( 2.75<Eabs69 && Eabs69<=3.00 ) N9_12++;
    }
  cout << "69 " << "0.00 " << N9_01 << endl;
  cout << "69 " << "0.25 " << N9_02 << endl;
  cout << "69 " << "0.50 " << N9_03 << endl;
  cout << "69 " << "0.75 " << N9_04 << endl;
  cout << "69 " << "1.00 " << N9_05 << endl;
  cout << "69 " << "1.25 " << N9_06 << endl;
  cout << "69 " << "1.50 " << N9_07 << endl;
  cout << "69 " << "1.75 " << N9_08 << endl;
  cout << "69 " << "2.00 " << N9_09 << endl;
  cout << "69 " << "2.25 " << N9_10 << endl;
  cout << "69 " << "2.50 " << N9_11 << endl;
  cout << "69 " << "2.75 " << N9_12 << endl;
}
