{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs10;
  B4->SetBranchAddress("Eabs10",&Eabs10);
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
      if( 0.00<Eabs10 && Eabs10<=0.25 ) N0_01++;
      if( 0.25<Eabs10 && Eabs10<=0.50 ) N0_02++;
      if( 0.50<Eabs10 && Eabs10<=0.75 ) N0_03++;
      if( 0.75<Eabs10 && Eabs10<=1.00 ) N0_04++;
      if( 1.00<Eabs10 && Eabs10<=1.25 ) N0_05++;
      if( 1.25<Eabs10 && Eabs10<=1.50 ) N0_06++;
      if( 1.50<Eabs10 && Eabs10<=1.75 ) N0_07++;
      if( 1.75<Eabs10 && Eabs10<=2.00 ) N0_08++;
      if( 2.00<Eabs10 && Eabs10<=2.25 ) N0_09++;
      if( 2.25<Eabs10 && Eabs10<=2.50 ) N0_10++;
      if( 2.50<Eabs10 && Eabs10<=2.75 ) N0_11++;
      if( 2.75<Eabs10 && Eabs10<=3.00 ) N0_12++;
    }  
  cout << "10 " << "0.00 " << N0_01 << endl;
  cout << "10 " << "0.25 " << N0_02 << endl;
  cout << "10 " << "0.50 " << N0_03 << endl;
  cout << "10 " << "0.75 " << N0_04 << endl;
  cout << "10 " << "1.00 " << N0_05 << endl;
  cout << "10 " << "1.25 " << N0_06 << endl;
  cout << "10 " << "1.50 " << N0_07 << endl;
  cout << "10 " << "1.75 " << N0_08 << endl;
  cout << "10 " << "2.00 " << N0_09 << endl;
  cout << "10 " << "2.25 " << N0_10 << endl;
  cout << "10 " << "2.50 " << N0_11 << endl;
  cout << "10 " << "2.75 " << N0_12 << endl;

  double Eabs11;
  B4->SetBranchAddress("Eabs11",&Eabs11);
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
      if( 0.00<Eabs11 && Eabs11<=0.25 ) N1_01++;
      if( 0.25<Eabs11 && Eabs11<=0.50 ) N1_02++;
      if( 0.50<Eabs11 && Eabs11<=0.75 ) N1_03++;
      if( 0.75<Eabs11 && Eabs11<=1.00 ) N1_04++;
      if( 1.00<Eabs11 && Eabs11<=1.25 ) N1_05++;
      if( 1.25<Eabs11 && Eabs11<=1.50 ) N1_06++;
      if( 1.50<Eabs11 && Eabs11<=1.75 ) N1_07++;
      if( 1.75<Eabs11 && Eabs11<=2.00 ) N1_08++;
      if( 2.00<Eabs11 && Eabs11<=2.25 ) N1_09++;
      if( 2.25<Eabs11 && Eabs11<=2.50 ) N1_10++;
      if( 2.50<Eabs11 && Eabs11<=2.75 ) N1_11++;
      if( 2.75<Eabs11 && Eabs11<=3.00 ) N1_12++;
    }
  cout << "11 " << "0.00 " << N1_01 << endl;
  cout << "11 " << "0.25 " << N1_02 << endl;
  cout << "11 " << "0.50 " << N1_03 << endl;
  cout << "11 " << "0.75 " << N1_04 << endl;
  cout << "11 " << "1.00 " << N1_05 << endl;
  cout << "11 " << "1.25 " << N1_06 << endl;
  cout << "11 " << "1.50 " << N1_07 << endl;
  cout << "11 " << "1.75 " << N1_08 << endl;
  cout << "11 " << "2.00 " << N1_09 << endl;
  cout << "11 " << "2.25 " << N1_10 << endl;
  cout << "11 " << "2.50 " << N1_11 << endl;
  cout << "11 " << "2.75 " << N1_12 << endl;

  double Eabs12;
  B4->SetBranchAddress("Eabs12",&Eabs12);
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
      if( 0.00<Eabs12 && Eabs12<=0.25 ) N2_01++;
      if( 0.25<Eabs12 && Eabs12<=0.50 ) N2_02++;
      if( 0.50<Eabs12 && Eabs12<=0.75 ) N2_03++;
      if( 0.75<Eabs12 && Eabs12<=1.00 ) N2_04++;
      if( 1.00<Eabs12 && Eabs12<=1.25 ) N2_05++;
      if( 1.25<Eabs12 && Eabs12<=1.50 ) N2_06++;
      if( 1.50<Eabs12 && Eabs12<=1.75 ) N2_07++;
      if( 1.75<Eabs12 && Eabs12<=2.00 ) N2_08++;
      if( 2.00<Eabs12 && Eabs12<=2.25 ) N2_09++;
      if( 2.25<Eabs12 && Eabs12<=2.50 ) N2_10++;
      if( 2.50<Eabs12 && Eabs12<=2.75 ) N2_11++;
      if( 2.75<Eabs12 && Eabs12<=3.00 ) N2_12++;
    }
  cout << "12 " << "0.00 " << N2_01 << endl;
  cout << "12 " << "0.25 " << N2_02 << endl;
  cout << "12 " << "0.50 " << N2_03 << endl;
  cout << "12 " << "0.75 " << N2_04 << endl;
  cout << "12 " << "1.00 " << N2_05 << endl;
  cout << "12 " << "1.25 " << N2_06 << endl;
  cout << "12 " << "1.50 " << N2_07 << endl;
  cout << "12 " << "1.75 " << N2_08 << endl;
  cout << "12 " << "2.00 " << N2_09 << endl;
  cout << "12 " << "2.25 " << N2_10 << endl;
  cout << "12 " << "2.50 " << N2_11 << endl;
  cout << "12 " << "2.75 " << N2_12 << endl;

  double Eabs13;
  B4->SetBranchAddress("Eabs13",&Eabs13);
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
      if( 0.00<Eabs13 && Eabs13<=0.25 ) N3_01++;
      if( 0.25<Eabs13 && Eabs13<=0.50 ) N3_02++;
      if( 0.50<Eabs13 && Eabs13<=0.75 ) N3_03++;
      if( 0.75<Eabs13 && Eabs13<=1.00 ) N3_04++;
      if( 1.00<Eabs13 && Eabs13<=1.25 ) N3_05++;
      if( 1.25<Eabs13 && Eabs13<=1.50 ) N3_06++;
      if( 1.50<Eabs13 && Eabs13<=1.75 ) N3_07++;
      if( 1.75<Eabs13 && Eabs13<=2.00 ) N3_08++;
      if( 2.00<Eabs13 && Eabs13<=2.25 ) N3_09++;
      if( 2.25<Eabs13 && Eabs13<=2.50 ) N3_10++;
      if( 2.50<Eabs13 && Eabs13<=2.75 ) N3_11++;
      if( 2.75<Eabs13 && Eabs13<=3.00 ) N3_12++;
    }
  cout << "13 " << "0.00 " << N3_01 << endl;
  cout << "13 " << "0.25 " << N3_02 << endl;
  cout << "13 " << "0.50 " << N3_03 << endl;
  cout << "13 " << "0.75 " << N3_04 << endl;
  cout << "13 " << "1.00 " << N3_05 << endl;
  cout << "13 " << "1.25 " << N3_06 << endl;
  cout << "13 " << "1.50 " << N3_07 << endl;
  cout << "13 " << "1.75 " << N3_08 << endl;
  cout << "13 " << "2.00 " << N3_09 << endl;
  cout << "13 " << "2.25 " << N3_10 << endl;
  cout << "13 " << "2.50 " << N3_11 << endl;
  cout << "13 " << "2.75 " << N3_12 << endl;

  double Eabs14;
  B4->SetBranchAddress("Eabs14",&Eabs14);
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
      if( 0.00<Eabs14 && Eabs14<=0.25 ) N4_01++;
      if( 0.25<Eabs14 && Eabs14<=0.50 ) N4_02++;
      if( 0.50<Eabs14 && Eabs14<=0.75 ) N4_03++;
      if( 0.75<Eabs14 && Eabs14<=1.00 ) N4_04++;
      if( 1.00<Eabs14 && Eabs14<=1.25 ) N4_05++;
      if( 1.25<Eabs14 && Eabs14<=1.50 ) N4_06++;
      if( 1.50<Eabs14 && Eabs14<=1.75 ) N4_07++;
      if( 1.75<Eabs14 && Eabs14<=2.00 ) N4_08++;
      if( 2.00<Eabs14 && Eabs14<=2.25 ) N4_09++;
      if( 2.25<Eabs14 && Eabs14<=2.50 ) N4_10++;
      if( 2.50<Eabs14 && Eabs14<=2.75 ) N4_11++;
      if( 2.75<Eabs14 && Eabs14<=3.00 ) N4_12++;
    }
  cout << "14 " << "0.00 " << N4_01 << endl;
  cout << "14 " << "0.25 " << N4_02 << endl;
  cout << "14 " << "0.50 " << N4_03 << endl;
  cout << "14 " << "0.75 " << N4_04 << endl;
  cout << "14 " << "1.00 " << N4_05 << endl;
  cout << "14 " << "1.25 " << N4_06 << endl;
  cout << "14 " << "1.50 " << N4_07 << endl;
  cout << "14 " << "1.75 " << N4_08 << endl;
  cout << "14 " << "2.00 " << N4_09 << endl;
  cout << "14 " << "2.25 " << N4_10 << endl;
  cout << "14 " << "2.50 " << N4_11 << endl;
  cout << "14 " << "2.75 " << N4_12 << endl;

  double Eabs15;
  B4->SetBranchAddress("Eabs15",&Eabs15);
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
      if( 0.00<Eabs15 && Eabs15<=0.25 ) N5_01++;
      if( 0.25<Eabs15 && Eabs15<=0.50 ) N5_02++;
      if( 0.50<Eabs15 && Eabs15<=0.75 ) N5_03++;
      if( 0.75<Eabs15 && Eabs15<=1.00 ) N5_04++;
      if( 1.00<Eabs15 && Eabs15<=1.25 ) N5_05++;
      if( 1.25<Eabs15 && Eabs15<=1.50 ) N5_06++;
      if( 1.50<Eabs15 && Eabs15<=1.75 ) N5_07++;
      if( 1.75<Eabs15 && Eabs15<=2.00 ) N5_08++;
      if( 2.00<Eabs15 && Eabs15<=2.25 ) N5_09++;
      if( 2.25<Eabs15 && Eabs15<=2.50 ) N5_10++;
      if( 2.50<Eabs15 && Eabs15<=2.75 ) N5_11++;
      if( 2.75<Eabs15 && Eabs15<=3.00 ) N5_12++;
    }
  cout << "15 " << "0.00 " << N5_01 << endl;
  cout << "15 " << "0.25 " << N5_02 << endl;
  cout << "15 " << "0.50 " << N5_03 << endl;
  cout << "15 " << "0.75 " << N5_04 << endl;
  cout << "15 " << "1.00 " << N5_05 << endl;
  cout << "15 " << "1.25 " << N5_06 << endl;
  cout << "15 " << "1.50 " << N5_07 << endl;
  cout << "15 " << "1.75 " << N5_08 << endl;
  cout << "15 " << "2.00 " << N5_09 << endl;
  cout << "15 " << "2.25 " << N5_10 << endl;
  cout << "15 " << "2.50 " << N5_11 << endl;
  cout << "15 " << "2.75 " << N5_12 << endl;

  double Eabs16;
  B4->SetBranchAddress("Eabs16",&Eabs16);
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
      if( 0.00<Eabs16 && Eabs16<=0.25 ) N6_01++;
      if( 0.25<Eabs16 && Eabs16<=0.50 ) N6_02++;
      if( 0.50<Eabs16 && Eabs16<=0.75 ) N6_03++;
      if( 0.75<Eabs16 && Eabs16<=1.00 ) N6_04++;
      if( 1.00<Eabs16 && Eabs16<=1.25 ) N6_05++;
      if( 1.25<Eabs16 && Eabs16<=1.50 ) N6_06++;
      if( 1.50<Eabs16 && Eabs16<=1.75 ) N6_07++;
      if( 1.75<Eabs16 && Eabs16<=2.00 ) N6_08++;
      if( 2.00<Eabs16 && Eabs16<=2.25 ) N6_09++;
      if( 2.25<Eabs16 && Eabs16<=2.50 ) N6_10++;
      if( 2.50<Eabs16 && Eabs16<=2.75 ) N6_11++;
      if( 2.75<Eabs16 && Eabs16<=3.00 ) N6_12++;
    }
  cout << "16 " << "0.00 " << N6_01 << endl;
  cout << "16 " << "0.25 " << N6_02 << endl;
  cout << "16 " << "0.50 " << N6_03 << endl;
  cout << "16 " << "0.75 " << N6_04 << endl;
  cout << "16 " << "1.00 " << N6_05 << endl;
  cout << "16 " << "1.25 " << N6_06 << endl;
  cout << "16 " << "1.50 " << N6_07 << endl;
  cout << "16 " << "1.75 " << N6_08 << endl;
  cout << "16 " << "2.00 " << N6_09 << endl;
  cout << "16 " << "2.25 " << N6_10 << endl;
  cout << "16 " << "2.50 " << N6_11 << endl;
  cout << "16 " << "2.75 " << N6_12 << endl;

  double Eabs17;
  B4->SetBranchAddress("Eabs17",&Eabs17);
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
      if( 0.00<Eabs17 && Eabs17<=0.25 ) N7_01++;
      if( 0.25<Eabs17 && Eabs17<=0.50 ) N7_02++;
      if( 0.50<Eabs17 && Eabs17<=0.75 ) N7_03++;
      if( 0.75<Eabs17 && Eabs17<=1.00 ) N7_04++;
      if( 1.00<Eabs17 && Eabs17<=1.25 ) N7_05++;
      if( 1.25<Eabs17 && Eabs17<=1.50 ) N7_06++;
      if( 1.50<Eabs17 && Eabs17<=1.75 ) N7_07++;
      if( 1.75<Eabs17 && Eabs17<=2.00 ) N7_08++;
      if( 2.00<Eabs17 && Eabs17<=2.25 ) N7_09++;
      if( 2.25<Eabs17 && Eabs17<=2.50 ) N7_10++;
      if( 2.50<Eabs17 && Eabs17<=2.75 ) N7_11++;
      if( 2.75<Eabs17 && Eabs17<=3.00 ) N7_12++;
    }
  cout << "17 " << "0.00 " << N7_01 << endl;
  cout << "17 " << "0.25 " << N7_02 << endl;
  cout << "17 " << "0.50 " << N7_03 << endl;
  cout << "17 " << "0.75 " << N7_04 << endl;
  cout << "17 " << "1.00 " << N7_05 << endl;
  cout << "17 " << "1.25 " << N7_06 << endl;
  cout << "17 " << "1.50 " << N7_07 << endl;
  cout << "17 " << "1.75 " << N7_08 << endl;
  cout << "17 " << "2.00 " << N7_09 << endl;
  cout << "17 " << "2.25 " << N7_10 << endl;
  cout << "17 " << "2.50 " << N7_11 << endl;
  cout << "17 " << "2.75 " << N7_12 << endl;

  double Eabs18;
  B4->SetBranchAddress("Eabs18",&Eabs18);
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
      if( 0.00<Eabs18 && Eabs18<=0.25 ) N8_01++;
      if( 0.25<Eabs18 && Eabs18<=0.50 ) N8_02++;
      if( 0.50<Eabs18 && Eabs18<=0.75 ) N8_03++;
      if( 0.75<Eabs18 && Eabs18<=1.00 ) N8_04++;
      if( 1.00<Eabs18 && Eabs18<=1.25 ) N8_05++;
      if( 1.25<Eabs18 && Eabs18<=1.50 ) N8_06++;
      if( 1.50<Eabs18 && Eabs18<=1.75 ) N8_07++;
      if( 1.75<Eabs18 && Eabs18<=2.00 ) N8_08++;
      if( 2.00<Eabs18 && Eabs18<=2.25 ) N8_09++;
      if( 2.25<Eabs18 && Eabs18<=2.50 ) N8_10++;
      if( 2.50<Eabs18 && Eabs18<=2.75 ) N8_11++;
      if( 2.75<Eabs18 && Eabs18<=3.00 ) N8_12++;
    }
  cout << "18 " << "0.00 " << N8_01 << endl;
  cout << "18 " << "0.25 " << N8_02 << endl;
  cout << "18 " << "0.50 " << N8_03 << endl;
  cout << "18 " << "0.75 " << N8_04 << endl;
  cout << "18 " << "1.00 " << N8_05 << endl;
  cout << "18 " << "1.25 " << N8_06 << endl;
  cout << "18 " << "1.50 " << N8_07 << endl;
  cout << "18 " << "1.75 " << N8_08 << endl;
  cout << "18 " << "2.00 " << N8_09 << endl;
  cout << "18 " << "2.25 " << N8_10 << endl;
  cout << "18 " << "2.50 " << N8_11 << endl;
  cout << "18 " << "2.75 " << N8_12 << endl;

  double Eabs19;
  B4->SetBranchAddress("Eabs19",&Eabs19);
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
      if( 0.00<Eabs19 && Eabs19<=0.25 ) N9_01++;
      if( 0.25<Eabs19 && Eabs19<=0.50 ) N9_02++;
      if( 0.50<Eabs19 && Eabs19<=0.75 ) N9_03++;
      if( 0.75<Eabs19 && Eabs19<=1.00 ) N9_04++;
      if( 1.00<Eabs19 && Eabs19<=1.25 ) N9_05++;
      if( 1.25<Eabs19 && Eabs19<=1.50 ) N9_06++;
      if( 1.50<Eabs19 && Eabs19<=1.75 ) N9_07++;
      if( 1.75<Eabs19 && Eabs19<=2.00 ) N9_08++;
      if( 2.00<Eabs19 && Eabs19<=2.25 ) N9_09++;
      if( 2.25<Eabs19 && Eabs19<=2.50 ) N9_10++;
      if( 2.50<Eabs19 && Eabs19<=2.75 ) N9_11++;
      if( 2.75<Eabs19 && Eabs19<=3.00 ) N9_12++;
    }
  cout << "19 " << "0.00 " << N9_01 << endl;
  cout << "19 " << "0.25 " << N9_02 << endl;
  cout << "19 " << "0.50 " << N9_03 << endl;
  cout << "19 " << "0.75 " << N9_04 << endl;
  cout << "19 " << "1.00 " << N9_05 << endl;
  cout << "19 " << "1.25 " << N9_06 << endl;
  cout << "19 " << "1.50 " << N9_07 << endl;
  cout << "19 " << "1.75 " << N9_08 << endl;
  cout << "19 " << "2.00 " << N9_09 << endl;
  cout << "19 " << "2.25 " << N9_10 << endl;
  cout << "19 " << "2.50 " << N9_11 << endl;
  cout << "19 " << "2.75 " << N9_12 << endl;
}
