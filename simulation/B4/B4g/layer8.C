{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs80;
  B4->SetBranchAddress("Eabs80",&Eabs80);
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
      if( 0.00<Eabs80 && Eabs80<=0.25 ) N0_01++;
      if( 0.25<Eabs80 && Eabs80<=0.50 ) N0_02++;
      if( 0.50<Eabs80 && Eabs80<=0.75 ) N0_03++;
      if( 0.75<Eabs80 && Eabs80<=1.00 ) N0_04++;
      if( 1.00<Eabs80 && Eabs80<=1.25 ) N0_05++;
      if( 1.25<Eabs80 && Eabs80<=1.50 ) N0_06++;
      if( 1.50<Eabs80 && Eabs80<=1.75 ) N0_07++;
      if( 1.75<Eabs80 && Eabs80<=2.00 ) N0_08++;
      if( 2.00<Eabs80 && Eabs80<=2.25 ) N0_09++;
      if( 2.25<Eabs80 && Eabs80<=2.50 ) N0_10++;
      if( 2.50<Eabs80 && Eabs80<=2.75 ) N0_11++;
      if( 2.75<Eabs80 && Eabs80<=3.00 ) N0_12++;
    }  
  cout << "80 " << "0.00 " << N0_01 << endl;
  cout << "80 " << "0.25 " << N0_02 << endl;
  cout << "80 " << "0.50 " << N0_03 << endl;
  cout << "80 " << "0.75 " << N0_04 << endl;
  cout << "80 " << "1.00 " << N0_05 << endl;
  cout << "80 " << "1.25 " << N0_06 << endl;
  cout << "80 " << "1.50 " << N0_07 << endl;
  cout << "80 " << "1.75 " << N0_08 << endl;
  cout << "80 " << "2.00 " << N0_09 << endl;
  cout << "80 " << "2.25 " << N0_10 << endl;
  cout << "80 " << "2.50 " << N0_11 << endl;
  cout << "80 " << "2.75 " << N0_12 << endl;

  double Eabs81;
  B4->SetBranchAddress("Eabs81",&Eabs81);
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
      if( 0.00<Eabs81 && Eabs81<=0.25 ) N1_01++;
      if( 0.25<Eabs81 && Eabs81<=0.50 ) N1_02++;
      if( 0.50<Eabs81 && Eabs81<=0.75 ) N1_03++;
      if( 0.75<Eabs81 && Eabs81<=1.00 ) N1_04++;
      if( 1.00<Eabs81 && Eabs81<=1.25 ) N1_05++;
      if( 1.25<Eabs81 && Eabs81<=1.50 ) N1_06++;
      if( 1.50<Eabs81 && Eabs81<=1.75 ) N1_07++;
      if( 1.75<Eabs81 && Eabs81<=2.00 ) N1_08++;
      if( 2.00<Eabs81 && Eabs81<=2.25 ) N1_09++;
      if( 2.25<Eabs81 && Eabs81<=2.50 ) N1_10++;
      if( 2.50<Eabs81 && Eabs81<=2.75 ) N1_11++;
      if( 2.75<Eabs81 && Eabs81<=3.00 ) N1_12++;
    }
  cout << "81 " << "0.00 " << N1_01 << endl;
  cout << "81 " << "0.25 " << N1_02 << endl;
  cout << "81 " << "0.50 " << N1_03 << endl;
  cout << "81 " << "0.75 " << N1_04 << endl;
  cout << "81 " << "1.00 " << N1_05 << endl;
  cout << "81 " << "1.25 " << N1_06 << endl;
  cout << "81 " << "1.50 " << N1_07 << endl;
  cout << "81 " << "1.75 " << N1_08 << endl;
  cout << "81 " << "2.00 " << N1_09 << endl;
  cout << "81 " << "2.25 " << N1_10 << endl;
  cout << "81 " << "2.50 " << N1_11 << endl;
  cout << "81 " << "2.75 " << N1_12 << endl;

  double Eabs82;
  B4->SetBranchAddress("Eabs82",&Eabs82);
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
      if( 0.00<Eabs82 && Eabs82<=0.25 ) N2_01++;
      if( 0.25<Eabs82 && Eabs82<=0.50 ) N2_02++;
      if( 0.50<Eabs82 && Eabs82<=0.75 ) N2_03++;
      if( 0.75<Eabs82 && Eabs82<=1.00 ) N2_04++;
      if( 1.00<Eabs82 && Eabs82<=1.25 ) N2_05++;
      if( 1.25<Eabs82 && Eabs82<=1.50 ) N2_06++;
      if( 1.50<Eabs82 && Eabs82<=1.75 ) N2_07++;
      if( 1.75<Eabs82 && Eabs82<=2.00 ) N2_08++;
      if( 2.00<Eabs82 && Eabs82<=2.25 ) N2_09++;
      if( 2.25<Eabs82 && Eabs82<=2.50 ) N2_10++;
      if( 2.50<Eabs82 && Eabs82<=2.75 ) N2_11++;
      if( 2.75<Eabs82 && Eabs82<=3.00 ) N2_12++;
    }
  cout << "82 " << "0.00 " << N2_01 << endl;
  cout << "82 " << "0.25 " << N2_02 << endl;
  cout << "82 " << "0.50 " << N2_03 << endl;
  cout << "82 " << "0.75 " << N2_04 << endl;
  cout << "82 " << "1.00 " << N2_05 << endl;
  cout << "82 " << "1.25 " << N2_06 << endl;
  cout << "82 " << "1.50 " << N2_07 << endl;
  cout << "82 " << "1.75 " << N2_08 << endl;
  cout << "82 " << "2.00 " << N2_09 << endl;
  cout << "82 " << "2.25 " << N2_10 << endl;
  cout << "82 " << "2.50 " << N2_11 << endl;
  cout << "82 " << "2.75 " << N2_12 << endl;

  double Eabs83;
  B4->SetBranchAddress("Eabs83",&Eabs83);
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
      if( 0.00<Eabs83 && Eabs83<=0.25 ) N3_01++;
      if( 0.25<Eabs83 && Eabs83<=0.50 ) N3_02++;
      if( 0.50<Eabs83 && Eabs83<=0.75 ) N3_03++;
      if( 0.75<Eabs83 && Eabs83<=1.00 ) N3_04++;
      if( 1.00<Eabs83 && Eabs83<=1.25 ) N3_05++;
      if( 1.25<Eabs83 && Eabs83<=1.50 ) N3_06++;
      if( 1.50<Eabs83 && Eabs83<=1.75 ) N3_07++;
      if( 1.75<Eabs83 && Eabs83<=2.00 ) N3_08++;
      if( 2.00<Eabs83 && Eabs83<=2.25 ) N3_09++;
      if( 2.25<Eabs83 && Eabs83<=2.50 ) N3_10++;
      if( 2.50<Eabs83 && Eabs83<=2.75 ) N3_11++;
      if( 2.75<Eabs83 && Eabs83<=3.00 ) N3_12++;
    }
  cout << "83 " << "0.00 " << N3_01 << endl;
  cout << "83 " << "0.25 " << N3_02 << endl;
  cout << "83 " << "0.50 " << N3_03 << endl;
  cout << "83 " << "0.75 " << N3_04 << endl;
  cout << "83 " << "1.00 " << N3_05 << endl;
  cout << "83 " << "1.25 " << N3_06 << endl;
  cout << "83 " << "1.50 " << N3_07 << endl;
  cout << "83 " << "1.75 " << N3_08 << endl;
  cout << "83 " << "2.00 " << N3_09 << endl;
  cout << "83 " << "2.25 " << N3_10 << endl;
  cout << "83 " << "2.50 " << N3_11 << endl;
  cout << "83 " << "2.75 " << N3_12 << endl;

  double Eabs84;
  B4->SetBranchAddress("Eabs84",&Eabs84);
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
      if( 0.00<Eabs84 && Eabs84<=0.25 ) N4_01++;
      if( 0.25<Eabs84 && Eabs84<=0.50 ) N4_02++;
      if( 0.50<Eabs84 && Eabs84<=0.75 ) N4_03++;
      if( 0.75<Eabs84 && Eabs84<=1.00 ) N4_04++;
      if( 1.00<Eabs84 && Eabs84<=1.25 ) N4_05++;
      if( 1.25<Eabs84 && Eabs84<=1.50 ) N4_06++;
      if( 1.50<Eabs84 && Eabs84<=1.75 ) N4_07++;
      if( 1.75<Eabs84 && Eabs84<=2.00 ) N4_08++;
      if( 2.00<Eabs84 && Eabs84<=2.25 ) N4_09++;
      if( 2.25<Eabs84 && Eabs84<=2.50 ) N4_10++;
      if( 2.50<Eabs84 && Eabs84<=2.75 ) N4_11++;
      if( 2.75<Eabs84 && Eabs84<=3.00 ) N4_12++;
    }
  cout << "84 " << "0.00 " << N4_01 << endl;
  cout << "84 " << "0.25 " << N4_02 << endl;
  cout << "84 " << "0.50 " << N4_03 << endl;
  cout << "84 " << "0.75 " << N4_04 << endl;
  cout << "84 " << "1.00 " << N4_05 << endl;
  cout << "84 " << "1.25 " << N4_06 << endl;
  cout << "84 " << "1.50 " << N4_07 << endl;
  cout << "84 " << "1.75 " << N4_08 << endl;
  cout << "84 " << "2.00 " << N4_09 << endl;
  cout << "84 " << "2.25 " << N4_10 << endl;
  cout << "84 " << "2.50 " << N4_11 << endl;
  cout << "84 " << "2.75 " << N4_12 << endl;

  double Eabs85;
  B4->SetBranchAddress("Eabs85",&Eabs85);
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
      if( 0.00<Eabs85 && Eabs85<=0.25 ) N5_01++;
      if( 0.25<Eabs85 && Eabs85<=0.50 ) N5_02++;
      if( 0.50<Eabs85 && Eabs85<=0.75 ) N5_03++;
      if( 0.75<Eabs85 && Eabs85<=1.00 ) N5_04++;
      if( 1.00<Eabs85 && Eabs85<=1.25 ) N5_05++;
      if( 1.25<Eabs85 && Eabs85<=1.50 ) N5_06++;
      if( 1.50<Eabs85 && Eabs85<=1.75 ) N5_07++;
      if( 1.75<Eabs85 && Eabs85<=2.00 ) N5_08++;
      if( 2.00<Eabs85 && Eabs85<=2.25 ) N5_09++;
      if( 2.25<Eabs85 && Eabs85<=2.50 ) N5_10++;
      if( 2.50<Eabs85 && Eabs85<=2.75 ) N5_11++;
      if( 2.75<Eabs85 && Eabs85<=3.00 ) N5_12++;
    }
  cout << "85 " << "0.00 " << N5_01 << endl;
  cout << "85 " << "0.25 " << N5_02 << endl;
  cout << "85 " << "0.50 " << N5_03 << endl;
  cout << "85 " << "0.75 " << N5_04 << endl;
  cout << "85 " << "1.00 " << N5_05 << endl;
  cout << "85 " << "1.25 " << N5_06 << endl;
  cout << "85 " << "1.50 " << N5_07 << endl;
  cout << "85 " << "1.75 " << N5_08 << endl;
  cout << "85 " << "2.00 " << N5_09 << endl;
  cout << "85 " << "2.25 " << N5_10 << endl;
  cout << "85 " << "2.50 " << N5_11 << endl;
  cout << "85 " << "2.75 " << N5_12 << endl;

  double Eabs86;
  B4->SetBranchAddress("Eabs86",&Eabs86);
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
      if( 0.00<Eabs86 && Eabs86<=0.25 ) N6_01++;
      if( 0.25<Eabs86 && Eabs86<=0.50 ) N6_02++;
      if( 0.50<Eabs86 && Eabs86<=0.75 ) N6_03++;
      if( 0.75<Eabs86 && Eabs86<=1.00 ) N6_04++;
      if( 1.00<Eabs86 && Eabs86<=1.25 ) N6_05++;
      if( 1.25<Eabs86 && Eabs86<=1.50 ) N6_06++;
      if( 1.50<Eabs86 && Eabs86<=1.75 ) N6_07++;
      if( 1.75<Eabs86 && Eabs86<=2.00 ) N6_08++;
      if( 2.00<Eabs86 && Eabs86<=2.25 ) N6_09++;
      if( 2.25<Eabs86 && Eabs86<=2.50 ) N6_10++;
      if( 2.50<Eabs86 && Eabs86<=2.75 ) N6_11++;
      if( 2.75<Eabs86 && Eabs86<=3.00 ) N6_12++;
    }
  cout << "86 " << "0.00 " << N6_01 << endl;
  cout << "86 " << "0.25 " << N6_02 << endl;
  cout << "86 " << "0.50 " << N6_03 << endl;
  cout << "86 " << "0.75 " << N6_04 << endl;
  cout << "86 " << "1.00 " << N6_05 << endl;
  cout << "86 " << "1.25 " << N6_06 << endl;
  cout << "86 " << "1.50 " << N6_07 << endl;
  cout << "86 " << "1.75 " << N6_08 << endl;
  cout << "86 " << "2.00 " << N6_09 << endl;
  cout << "86 " << "2.25 " << N6_10 << endl;
  cout << "86 " << "2.50 " << N6_11 << endl;
  cout << "86 " << "2.75 " << N6_12 << endl;

  double Eabs87;
  B4->SetBranchAddress("Eabs87",&Eabs87);
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
      if( 0.00<Eabs87 && Eabs87<=0.25 ) N7_01++;
      if( 0.25<Eabs87 && Eabs87<=0.50 ) N7_02++;
      if( 0.50<Eabs87 && Eabs87<=0.75 ) N7_03++;
      if( 0.75<Eabs87 && Eabs87<=1.00 ) N7_04++;
      if( 1.00<Eabs87 && Eabs87<=1.25 ) N7_05++;
      if( 1.25<Eabs87 && Eabs87<=1.50 ) N7_06++;
      if( 1.50<Eabs87 && Eabs87<=1.75 ) N7_07++;
      if( 1.75<Eabs87 && Eabs87<=2.00 ) N7_08++;
      if( 2.00<Eabs87 && Eabs87<=2.25 ) N7_09++;
      if( 2.25<Eabs87 && Eabs87<=2.50 ) N7_10++;
      if( 2.50<Eabs87 && Eabs87<=2.75 ) N7_11++;
      if( 2.75<Eabs87 && Eabs87<=3.00 ) N7_12++;
    }
  cout << "87 " << "0.00 " << N7_01 << endl;
  cout << "87 " << "0.25 " << N7_02 << endl;
  cout << "87 " << "0.50 " << N7_03 << endl;
  cout << "87 " << "0.75 " << N7_04 << endl;
  cout << "87 " << "1.00 " << N7_05 << endl;
  cout << "87 " << "1.25 " << N7_06 << endl;
  cout << "87 " << "1.50 " << N7_07 << endl;
  cout << "87 " << "1.75 " << N7_08 << endl;
  cout << "87 " << "2.00 " << N7_09 << endl;
  cout << "87 " << "2.25 " << N7_10 << endl;
  cout << "87 " << "2.50 " << N7_11 << endl;
  cout << "87 " << "2.75 " << N7_12 << endl;

  double Eabs88;
  B4->SetBranchAddress("Eabs88",&Eabs88);
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
      if( 0.00<Eabs88 && Eabs88<=0.25 ) N8_01++;
      if( 0.25<Eabs88 && Eabs88<=0.50 ) N8_02++;
      if( 0.50<Eabs88 && Eabs88<=0.75 ) N8_03++;
      if( 0.75<Eabs88 && Eabs88<=1.00 ) N8_04++;
      if( 1.00<Eabs88 && Eabs88<=1.25 ) N8_05++;
      if( 1.25<Eabs88 && Eabs88<=1.50 ) N8_06++;
      if( 1.50<Eabs88 && Eabs88<=1.75 ) N8_07++;
      if( 1.75<Eabs88 && Eabs88<=2.00 ) N8_08++;
      if( 2.00<Eabs88 && Eabs88<=2.25 ) N8_09++;
      if( 2.25<Eabs88 && Eabs88<=2.50 ) N8_10++;
      if( 2.50<Eabs88 && Eabs88<=2.75 ) N8_11++;
      if( 2.75<Eabs88 && Eabs88<=3.00 ) N8_12++;
    }
  cout << "88 " << "0.00 " << N8_01 << endl;
  cout << "88 " << "0.25 " << N8_02 << endl;
  cout << "88 " << "0.50 " << N8_03 << endl;
  cout << "88 " << "0.75 " << N8_04 << endl;
  cout << "88 " << "1.00 " << N8_05 << endl;
  cout << "88 " << "1.25 " << N8_06 << endl;
  cout << "88 " << "1.50 " << N8_07 << endl;
  cout << "88 " << "1.75 " << N8_08 << endl;
  cout << "88 " << "2.00 " << N8_09 << endl;
  cout << "88 " << "2.25 " << N8_10 << endl;
  cout << "88 " << "2.50 " << N8_11 << endl;
  cout << "88 " << "2.75 " << N8_12 << endl;

  double Eabs89;
  B4->SetBranchAddress("Eabs89",&Eabs89);
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
      if( 0.00<Eabs89 && Eabs89<=0.25 ) N9_01++;
      if( 0.25<Eabs89 && Eabs89<=0.50 ) N9_02++;
      if( 0.50<Eabs89 && Eabs89<=0.75 ) N9_03++;
      if( 0.75<Eabs89 && Eabs89<=1.00 ) N9_04++;
      if( 1.00<Eabs89 && Eabs89<=1.25 ) N9_05++;
      if( 1.25<Eabs89 && Eabs89<=1.50 ) N9_06++;
      if( 1.50<Eabs89 && Eabs89<=1.75 ) N9_07++;
      if( 1.75<Eabs89 && Eabs89<=2.00 ) N9_08++;
      if( 2.00<Eabs89 && Eabs89<=2.25 ) N9_09++;
      if( 2.25<Eabs89 && Eabs89<=2.50 ) N9_10++;
      if( 2.50<Eabs89 && Eabs89<=2.75 ) N9_11++;
      if( 2.75<Eabs89 && Eabs89<=3.00 ) N9_12++;
    }
  cout << "89 " << "0.00 " << N9_01 << endl;
  cout << "89 " << "0.25 " << N9_02 << endl;
  cout << "89 " << "0.50 " << N9_03 << endl;
  cout << "89 " << "0.75 " << N9_04 << endl;
  cout << "89 " << "1.00 " << N9_05 << endl;
  cout << "89 " << "1.25 " << N9_06 << endl;
  cout << "89 " << "1.50 " << N9_07 << endl;
  cout << "89 " << "1.75 " << N9_08 << endl;
  cout << "89 " << "2.00 " << N9_09 << endl;
  cout << "89 " << "2.25 " << N9_10 << endl;
  cout << "89 " << "2.50 " << N9_11 << endl;
  cout << "89 " << "2.75 " << N9_12 << endl;
}
