{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs40;
  B4->SetBranchAddress("Eabs40",&Eabs40);
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
      if( 0.00<Eabs40 && Eabs40<=0.25 ) N0_01++;
      if( 0.25<Eabs40 && Eabs40<=0.50 ) N0_02++;
      if( 0.50<Eabs40 && Eabs40<=0.75 ) N0_03++;
      if( 0.75<Eabs40 && Eabs40<=1.00 ) N0_04++;
      if( 1.00<Eabs40 && Eabs40<=1.25 ) N0_05++;
      if( 1.25<Eabs40 && Eabs40<=1.50 ) N0_06++;
      if( 1.50<Eabs40 && Eabs40<=1.75 ) N0_07++;
      if( 1.75<Eabs40 && Eabs40<=2.00 ) N0_08++;
      if( 2.00<Eabs40 && Eabs40<=2.25 ) N0_09++;
      if( 2.25<Eabs40 && Eabs40<=2.50 ) N0_10++;
      if( 2.50<Eabs40 && Eabs40<=2.75 ) N0_11++;
      if( 2.75<Eabs40 && Eabs40<=3.00 ) N0_12++;
    }  
  cout << "40 " << "0.00 " << N0_01 << endl;
  cout << "40 " << "0.25 " << N0_02 << endl;
  cout << "40 " << "0.50 " << N0_03 << endl;
  cout << "40 " << "0.75 " << N0_04 << endl;
  cout << "40 " << "1.00 " << N0_05 << endl;
  cout << "40 " << "1.25 " << N0_06 << endl;
  cout << "40 " << "1.50 " << N0_07 << endl;
  cout << "40 " << "1.75 " << N0_08 << endl;
  cout << "40 " << "2.00 " << N0_09 << endl;
  cout << "40 " << "2.25 " << N0_10 << endl;
  cout << "40 " << "2.50 " << N0_11 << endl;
  cout << "40 " << "2.75 " << N0_12 << endl;

  double Eabs41;
  B4->SetBranchAddress("Eabs41",&Eabs41);
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
      if( 0.00<Eabs41 && Eabs41<=0.25 ) N1_01++;
      if( 0.25<Eabs41 && Eabs41<=0.50 ) N1_02++;
      if( 0.50<Eabs41 && Eabs41<=0.75 ) N1_03++;
      if( 0.75<Eabs41 && Eabs41<=1.00 ) N1_04++;
      if( 1.00<Eabs41 && Eabs41<=1.25 ) N1_05++;
      if( 1.25<Eabs41 && Eabs41<=1.50 ) N1_06++;
      if( 1.50<Eabs41 && Eabs41<=1.75 ) N1_07++;
      if( 1.75<Eabs41 && Eabs41<=2.00 ) N1_08++;
      if( 2.00<Eabs41 && Eabs41<=2.25 ) N1_09++;
      if( 2.25<Eabs41 && Eabs41<=2.50 ) N1_10++;
      if( 2.50<Eabs41 && Eabs41<=2.75 ) N1_11++;
      if( 2.75<Eabs41 && Eabs41<=3.00 ) N1_12++;
    }
  cout << "41 " << "0.00 " << N1_01 << endl;
  cout << "41 " << "0.25 " << N1_02 << endl;
  cout << "41 " << "0.50 " << N1_03 << endl;
  cout << "41 " << "0.75 " << N1_04 << endl;
  cout << "41 " << "1.00 " << N1_05 << endl;
  cout << "41 " << "1.25 " << N1_06 << endl;
  cout << "41 " << "1.50 " << N1_07 << endl;
  cout << "41 " << "1.75 " << N1_08 << endl;
  cout << "41 " << "2.00 " << N1_09 << endl;
  cout << "41 " << "2.25 " << N1_10 << endl;
  cout << "41 " << "2.50 " << N1_11 << endl;
  cout << "41 " << "2.75 " << N1_12 << endl;

  double Eabs42;
  B4->SetBranchAddress("Eabs42",&Eabs42);
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
      if( 0.00<Eabs42 && Eabs42<=0.25 ) N2_01++;
      if( 0.25<Eabs42 && Eabs42<=0.50 ) N2_02++;
      if( 0.50<Eabs42 && Eabs42<=0.75 ) N2_03++;
      if( 0.75<Eabs42 && Eabs42<=1.00 ) N2_04++;
      if( 1.00<Eabs42 && Eabs42<=1.25 ) N2_05++;
      if( 1.25<Eabs42 && Eabs42<=1.50 ) N2_06++;
      if( 1.50<Eabs42 && Eabs42<=1.75 ) N2_07++;
      if( 1.75<Eabs42 && Eabs42<=2.00 ) N2_08++;
      if( 2.00<Eabs42 && Eabs42<=2.25 ) N2_09++;
      if( 2.25<Eabs42 && Eabs42<=2.50 ) N2_10++;
      if( 2.50<Eabs42 && Eabs42<=2.75 ) N2_11++;
      if( 2.75<Eabs42 && Eabs42<=3.00 ) N2_12++;
    }
  cout << "42 " << "0.00 " << N2_01 << endl;
  cout << "42 " << "0.25 " << N2_02 << endl;
  cout << "42 " << "0.50 " << N2_03 << endl;
  cout << "42 " << "0.75 " << N2_04 << endl;
  cout << "42 " << "1.00 " << N2_05 << endl;
  cout << "42 " << "1.25 " << N2_06 << endl;
  cout << "42 " << "1.50 " << N2_07 << endl;
  cout << "42 " << "1.75 " << N2_08 << endl;
  cout << "42 " << "2.00 " << N2_09 << endl;
  cout << "42 " << "2.25 " << N2_10 << endl;
  cout << "42 " << "2.50 " << N2_11 << endl;
  cout << "42 " << "2.75 " << N2_12 << endl;

  double Eabs43;
  B4->SetBranchAddress("Eabs43",&Eabs43);
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
      if( 0.00<Eabs43 && Eabs43<=0.25 ) N3_01++;
      if( 0.25<Eabs43 && Eabs43<=0.50 ) N3_02++;
      if( 0.50<Eabs43 && Eabs43<=0.75 ) N3_03++;
      if( 0.75<Eabs43 && Eabs43<=1.00 ) N3_04++;
      if( 1.00<Eabs43 && Eabs43<=1.25 ) N3_05++;
      if( 1.25<Eabs43 && Eabs43<=1.50 ) N3_06++;
      if( 1.50<Eabs43 && Eabs43<=1.75 ) N3_07++;
      if( 1.75<Eabs43 && Eabs43<=2.00 ) N3_08++;
      if( 2.00<Eabs43 && Eabs43<=2.25 ) N3_09++;
      if( 2.25<Eabs43 && Eabs43<=2.50 ) N3_10++;
      if( 2.50<Eabs43 && Eabs43<=2.75 ) N3_11++;
      if( 2.75<Eabs43 && Eabs43<=3.00 ) N3_12++;
    }
  cout << "43 " << "0.00 " << N3_01 << endl;
  cout << "43 " << "0.25 " << N3_02 << endl;
  cout << "43 " << "0.50 " << N3_03 << endl;
  cout << "43 " << "0.75 " << N3_04 << endl;
  cout << "43 " << "1.00 " << N3_05 << endl;
  cout << "43 " << "1.25 " << N3_06 << endl;
  cout << "43 " << "1.50 " << N3_07 << endl;
  cout << "43 " << "1.75 " << N3_08 << endl;
  cout << "43 " << "2.00 " << N3_09 << endl;
  cout << "43 " << "2.25 " << N3_10 << endl;
  cout << "43 " << "2.50 " << N3_11 << endl;
  cout << "43 " << "2.75 " << N3_12 << endl;

  double Eabs44;
  B4->SetBranchAddress("Eabs44",&Eabs44);
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
      if( 0.00<Eabs44 && Eabs44<=0.25 ) N4_01++;
      if( 0.25<Eabs44 && Eabs44<=0.50 ) N4_02++;
      if( 0.50<Eabs44 && Eabs44<=0.75 ) N4_03++;
      if( 0.75<Eabs44 && Eabs44<=1.00 ) N4_04++;
      if( 1.00<Eabs44 && Eabs44<=1.25 ) N4_05++;
      if( 1.25<Eabs44 && Eabs44<=1.50 ) N4_06++;
      if( 1.50<Eabs44 && Eabs44<=1.75 ) N4_07++;
      if( 1.75<Eabs44 && Eabs44<=2.00 ) N4_08++;
      if( 2.00<Eabs44 && Eabs44<=2.25 ) N4_09++;
      if( 2.25<Eabs44 && Eabs44<=2.50 ) N4_10++;
      if( 2.50<Eabs44 && Eabs44<=2.75 ) N4_11++;
      if( 2.75<Eabs44 && Eabs44<=3.00 ) N4_12++;
    }
  cout << "44 " << "0.00 " << N4_01 << endl;
  cout << "44 " << "0.25 " << N4_02 << endl;
  cout << "44 " << "0.50 " << N4_03 << endl;
  cout << "44 " << "0.75 " << N4_04 << endl;
  cout << "44 " << "1.00 " << N4_05 << endl;
  cout << "44 " << "1.25 " << N4_06 << endl;
  cout << "44 " << "1.50 " << N4_07 << endl;
  cout << "44 " << "1.75 " << N4_08 << endl;
  cout << "44 " << "2.00 " << N4_09 << endl;
  cout << "44 " << "2.25 " << N4_10 << endl;
  cout << "44 " << "2.50 " << N4_11 << endl;
  cout << "44 " << "2.75 " << N4_12 << endl;

  double Eabs45;
  B4->SetBranchAddress("Eabs45",&Eabs45);
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
      if( 0.00<Eabs45 && Eabs45<=0.25 ) N5_01++;
      if( 0.25<Eabs45 && Eabs45<=0.50 ) N5_02++;
      if( 0.50<Eabs45 && Eabs45<=0.75 ) N5_03++;
      if( 0.75<Eabs45 && Eabs45<=1.00 ) N5_04++;
      if( 1.00<Eabs45 && Eabs45<=1.25 ) N5_05++;
      if( 1.25<Eabs45 && Eabs45<=1.50 ) N5_06++;
      if( 1.50<Eabs45 && Eabs45<=1.75 ) N5_07++;
      if( 1.75<Eabs45 && Eabs45<=2.00 ) N5_08++;
      if( 2.00<Eabs45 && Eabs45<=2.25 ) N5_09++;
      if( 2.25<Eabs45 && Eabs45<=2.50 ) N5_10++;
      if( 2.50<Eabs45 && Eabs45<=2.75 ) N5_11++;
      if( 2.75<Eabs45 && Eabs45<=3.00 ) N5_12++;
    }
  cout << "45 " << "0.00 " << N5_01 << endl;
  cout << "45 " << "0.25 " << N5_02 << endl;
  cout << "45 " << "0.50 " << N5_03 << endl;
  cout << "45 " << "0.75 " << N5_04 << endl;
  cout << "45 " << "1.00 " << N5_05 << endl;
  cout << "45 " << "1.25 " << N5_06 << endl;
  cout << "45 " << "1.50 " << N5_07 << endl;
  cout << "45 " << "1.75 " << N5_08 << endl;
  cout << "45 " << "2.00 " << N5_09 << endl;
  cout << "45 " << "2.25 " << N5_10 << endl;
  cout << "45 " << "2.50 " << N5_11 << endl;
  cout << "45 " << "2.75 " << N5_12 << endl;

  double Eabs46;
  B4->SetBranchAddress("Eabs46",&Eabs46);
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
      if( 0.00<Eabs46 && Eabs46<=0.25 ) N6_01++;
      if( 0.25<Eabs46 && Eabs46<=0.50 ) N6_02++;
      if( 0.50<Eabs46 && Eabs46<=0.75 ) N6_03++;
      if( 0.75<Eabs46 && Eabs46<=1.00 ) N6_04++;
      if( 1.00<Eabs46 && Eabs46<=1.25 ) N6_05++;
      if( 1.25<Eabs46 && Eabs46<=1.50 ) N6_06++;
      if( 1.50<Eabs46 && Eabs46<=1.75 ) N6_07++;
      if( 1.75<Eabs46 && Eabs46<=2.00 ) N6_08++;
      if( 2.00<Eabs46 && Eabs46<=2.25 ) N6_09++;
      if( 2.25<Eabs46 && Eabs46<=2.50 ) N6_10++;
      if( 2.50<Eabs46 && Eabs46<=2.75 ) N6_11++;
      if( 2.75<Eabs46 && Eabs46<=3.00 ) N6_12++;
    }
  cout << "46 " << "0.00 " << N6_01 << endl;
  cout << "46 " << "0.25 " << N6_02 << endl;
  cout << "46 " << "0.50 " << N6_03 << endl;
  cout << "46 " << "0.75 " << N6_04 << endl;
  cout << "46 " << "1.00 " << N6_05 << endl;
  cout << "46 " << "1.25 " << N6_06 << endl;
  cout << "46 " << "1.50 " << N6_07 << endl;
  cout << "46 " << "1.75 " << N6_08 << endl;
  cout << "46 " << "2.00 " << N6_09 << endl;
  cout << "46 " << "2.25 " << N6_10 << endl;
  cout << "46 " << "2.50 " << N6_11 << endl;
  cout << "46 " << "2.75 " << N6_12 << endl;

  double Eabs47;
  B4->SetBranchAddress("Eabs47",&Eabs47);
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
      if( 0.00<Eabs47 && Eabs47<=0.25 ) N7_01++;
      if( 0.25<Eabs47 && Eabs47<=0.50 ) N7_02++;
      if( 0.50<Eabs47 && Eabs47<=0.75 ) N7_03++;
      if( 0.75<Eabs47 && Eabs47<=1.00 ) N7_04++;
      if( 1.00<Eabs47 && Eabs47<=1.25 ) N7_05++;
      if( 1.25<Eabs47 && Eabs47<=1.50 ) N7_06++;
      if( 1.50<Eabs47 && Eabs47<=1.75 ) N7_07++;
      if( 1.75<Eabs47 && Eabs47<=2.00 ) N7_08++;
      if( 2.00<Eabs47 && Eabs47<=2.25 ) N7_09++;
      if( 2.25<Eabs47 && Eabs47<=2.50 ) N7_10++;
      if( 2.50<Eabs47 && Eabs47<=2.75 ) N7_11++;
      if( 2.75<Eabs47 && Eabs47<=3.00 ) N7_12++;
    }
  cout << "47 " << "0.00 " << N7_01 << endl;
  cout << "47 " << "0.25 " << N7_02 << endl;
  cout << "47 " << "0.50 " << N7_03 << endl;
  cout << "47 " << "0.75 " << N7_04 << endl;
  cout << "47 " << "1.00 " << N7_05 << endl;
  cout << "47 " << "1.25 " << N7_06 << endl;
  cout << "47 " << "1.50 " << N7_07 << endl;
  cout << "47 " << "1.75 " << N7_08 << endl;
  cout << "47 " << "2.00 " << N7_09 << endl;
  cout << "47 " << "2.25 " << N7_10 << endl;
  cout << "47 " << "2.50 " << N7_11 << endl;
  cout << "47 " << "2.75 " << N7_12 << endl;

  double Eabs48;
  B4->SetBranchAddress("Eabs48",&Eabs48);
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
      if( 0.00<Eabs48 && Eabs48<=0.25 ) N8_01++;
      if( 0.25<Eabs48 && Eabs48<=0.50 ) N8_02++;
      if( 0.50<Eabs48 && Eabs48<=0.75 ) N8_03++;
      if( 0.75<Eabs48 && Eabs48<=1.00 ) N8_04++;
      if( 1.00<Eabs48 && Eabs48<=1.25 ) N8_05++;
      if( 1.25<Eabs48 && Eabs48<=1.50 ) N8_06++;
      if( 1.50<Eabs48 && Eabs48<=1.75 ) N8_07++;
      if( 1.75<Eabs48 && Eabs48<=2.00 ) N8_08++;
      if( 2.00<Eabs48 && Eabs48<=2.25 ) N8_09++;
      if( 2.25<Eabs48 && Eabs48<=2.50 ) N8_10++;
      if( 2.50<Eabs48 && Eabs48<=2.75 ) N8_11++;
      if( 2.75<Eabs48 && Eabs48<=3.00 ) N8_12++;
    }
  cout << "48 " << "0.00 " << N8_01 << endl;
  cout << "48 " << "0.25 " << N8_02 << endl;
  cout << "48 " << "0.50 " << N8_03 << endl;
  cout << "48 " << "0.75 " << N8_04 << endl;
  cout << "48 " << "1.00 " << N8_05 << endl;
  cout << "48 " << "1.25 " << N8_06 << endl;
  cout << "48 " << "1.50 " << N8_07 << endl;
  cout << "48 " << "1.75 " << N8_08 << endl;
  cout << "48 " << "2.00 " << N8_09 << endl;
  cout << "48 " << "2.25 " << N8_10 << endl;
  cout << "48 " << "2.50 " << N8_11 << endl;
  cout << "48 " << "2.75 " << N8_12 << endl;

  double Eabs49;
  B4->SetBranchAddress("Eabs49",&Eabs49);
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
      if( 0.00<Eabs49 && Eabs49<=0.25 ) N9_01++;
      if( 0.25<Eabs49 && Eabs49<=0.50 ) N9_02++;
      if( 0.50<Eabs49 && Eabs49<=0.75 ) N9_03++;
      if( 0.75<Eabs49 && Eabs49<=1.00 ) N9_04++;
      if( 1.00<Eabs49 && Eabs49<=1.25 ) N9_05++;
      if( 1.25<Eabs49 && Eabs49<=1.50 ) N9_06++;
      if( 1.50<Eabs49 && Eabs49<=1.75 ) N9_07++;
      if( 1.75<Eabs49 && Eabs49<=2.00 ) N9_08++;
      if( 2.00<Eabs49 && Eabs49<=2.25 ) N9_09++;
      if( 2.25<Eabs49 && Eabs49<=2.50 ) N9_10++;
      if( 2.50<Eabs49 && Eabs49<=2.75 ) N9_11++;
      if( 2.75<Eabs49 && Eabs49<=3.00 ) N9_12++;
    }
  cout << "49 " << "0.00 " << N9_01 << endl;
  cout << "49 " << "0.25 " << N9_02 << endl;
  cout << "49 " << "0.50 " << N9_03 << endl;
  cout << "49 " << "0.75 " << N9_04 << endl;
  cout << "49 " << "1.00 " << N9_05 << endl;
  cout << "49 " << "1.25 " << N9_06 << endl;
  cout << "49 " << "1.50 " << N9_07 << endl;
  cout << "49 " << "1.75 " << N9_08 << endl;
  cout << "49 " << "2.00 " << N9_09 << endl;
  cout << "49 " << "2.25 " << N9_10 << endl;
  cout << "49 " << "2.50 " << N9_11 << endl;
  cout << "49 " << "2.75 " << N9_12 << endl;
}
