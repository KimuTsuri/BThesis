{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs50;
  B4->SetBranchAddress("Eabs50",&Eabs50);
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
      if( 0.00<Eabs50 && Eabs50<=0.25 ) N0_01++;
      if( 0.25<Eabs50 && Eabs50<=0.50 ) N0_02++;
      if( 0.50<Eabs50 && Eabs50<=0.75 ) N0_03++;
      if( 0.75<Eabs50 && Eabs50<=1.00 ) N0_04++;
      if( 1.00<Eabs50 && Eabs50<=1.25 ) N0_05++;
      if( 1.25<Eabs50 && Eabs50<=1.50 ) N0_06++;
      if( 1.50<Eabs50 && Eabs50<=1.75 ) N0_07++;
      if( 1.75<Eabs50 && Eabs50<=2.00 ) N0_08++;
      if( 2.00<Eabs50 && Eabs50<=2.25 ) N0_09++;
      if( 2.25<Eabs50 && Eabs50<=2.50 ) N0_10++;
      if( 2.50<Eabs50 && Eabs50<=2.75 ) N0_11++;
      if( 2.75<Eabs50 && Eabs50<=3.00 ) N0_12++;
    }  
  cout << "50 " << "0.00 " << N0_01 << endl;
  cout << "50 " << "0.25 " << N0_02 << endl;
  cout << "50 " << "0.50 " << N0_03 << endl;
  cout << "50 " << "0.75 " << N0_04 << endl;
  cout << "50 " << "1.00 " << N0_05 << endl;
  cout << "50 " << "1.25 " << N0_06 << endl;
  cout << "50 " << "1.50 " << N0_07 << endl;
  cout << "50 " << "1.75 " << N0_08 << endl;
  cout << "50 " << "2.00 " << N0_09 << endl;
  cout << "50 " << "2.25 " << N0_10 << endl;
  cout << "50 " << "2.50 " << N0_11 << endl;
  cout << "50 " << "2.75 " << N0_12 << endl;

  double Eabs51;
  B4->SetBranchAddress("Eabs51",&Eabs51);
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
      if( 0.00<Eabs51 && Eabs51<=0.25 ) N1_01++;
      if( 0.25<Eabs51 && Eabs51<=0.50 ) N1_02++;
      if( 0.50<Eabs51 && Eabs51<=0.75 ) N1_03++;
      if( 0.75<Eabs51 && Eabs51<=1.00 ) N1_04++;
      if( 1.00<Eabs51 && Eabs51<=1.25 ) N1_05++;
      if( 1.25<Eabs51 && Eabs51<=1.50 ) N1_06++;
      if( 1.50<Eabs51 && Eabs51<=1.75 ) N1_07++;
      if( 1.75<Eabs51 && Eabs51<=2.00 ) N1_08++;
      if( 2.00<Eabs51 && Eabs51<=2.25 ) N1_09++;
      if( 2.25<Eabs51 && Eabs51<=2.50 ) N1_10++;
      if( 2.50<Eabs51 && Eabs51<=2.75 ) N1_11++;
      if( 2.75<Eabs51 && Eabs51<=3.00 ) N1_12++;
    }
  cout << "51 " << "0.00 " << N1_01 << endl;
  cout << "51 " << "0.25 " << N1_02 << endl;
  cout << "51 " << "0.50 " << N1_03 << endl;
  cout << "51 " << "0.75 " << N1_04 << endl;
  cout << "51 " << "1.00 " << N1_05 << endl;
  cout << "51 " << "1.25 " << N1_06 << endl;
  cout << "51 " << "1.50 " << N1_07 << endl;
  cout << "51 " << "1.75 " << N1_08 << endl;
  cout << "51 " << "2.00 " << N1_09 << endl;
  cout << "51 " << "2.25 " << N1_10 << endl;
  cout << "51 " << "2.50 " << N1_11 << endl;
  cout << "51 " << "2.75 " << N1_12 << endl;

  double Eabs52;
  B4->SetBranchAddress("Eabs52",&Eabs52);
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
      if( 0.00<Eabs52 && Eabs52<=0.25 ) N2_01++;
      if( 0.25<Eabs52 && Eabs52<=0.50 ) N2_02++;
      if( 0.50<Eabs52 && Eabs52<=0.75 ) N2_03++;
      if( 0.75<Eabs52 && Eabs52<=1.00 ) N2_04++;
      if( 1.00<Eabs52 && Eabs52<=1.25 ) N2_05++;
      if( 1.25<Eabs52 && Eabs52<=1.50 ) N2_06++;
      if( 1.50<Eabs52 && Eabs52<=1.75 ) N2_07++;
      if( 1.75<Eabs52 && Eabs52<=2.00 ) N2_08++;
      if( 2.00<Eabs52 && Eabs52<=2.25 ) N2_09++;
      if( 2.25<Eabs52 && Eabs52<=2.50 ) N2_10++;
      if( 2.50<Eabs52 && Eabs52<=2.75 ) N2_11++;
      if( 2.75<Eabs52 && Eabs52<=3.00 ) N2_12++;
    }
  cout << "52 " << "0.00 " << N2_01 << endl;
  cout << "52 " << "0.25 " << N2_02 << endl;
  cout << "52 " << "0.50 " << N2_03 << endl;
  cout << "52 " << "0.75 " << N2_04 << endl;
  cout << "52 " << "1.00 " << N2_05 << endl;
  cout << "52 " << "1.25 " << N2_06 << endl;
  cout << "52 " << "1.50 " << N2_07 << endl;
  cout << "52 " << "1.75 " << N2_08 << endl;
  cout << "52 " << "2.00 " << N2_09 << endl;
  cout << "52 " << "2.25 " << N2_10 << endl;
  cout << "52 " << "2.50 " << N2_11 << endl;
  cout << "52 " << "2.75 " << N2_12 << endl;

  double Eabs53;
  B4->SetBranchAddress("Eabs53",&Eabs53);
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
      if( 0.00<Eabs53 && Eabs53<=0.25 ) N3_01++;
      if( 0.25<Eabs53 && Eabs53<=0.50 ) N3_02++;
      if( 0.50<Eabs53 && Eabs53<=0.75 ) N3_03++;
      if( 0.75<Eabs53 && Eabs53<=1.00 ) N3_04++;
      if( 1.00<Eabs53 && Eabs53<=1.25 ) N3_05++;
      if( 1.25<Eabs53 && Eabs53<=1.50 ) N3_06++;
      if( 1.50<Eabs53 && Eabs53<=1.75 ) N3_07++;
      if( 1.75<Eabs53 && Eabs53<=2.00 ) N3_08++;
      if( 2.00<Eabs53 && Eabs53<=2.25 ) N3_09++;
      if( 2.25<Eabs53 && Eabs53<=2.50 ) N3_10++;
      if( 2.50<Eabs53 && Eabs53<=2.75 ) N3_11++;
      if( 2.75<Eabs53 && Eabs53<=3.00 ) N3_12++;
    }
  cout << "53 " << "0.00 " << N3_01 << endl;
  cout << "53 " << "0.25 " << N3_02 << endl;
  cout << "53 " << "0.50 " << N3_03 << endl;
  cout << "53 " << "0.75 " << N3_04 << endl;
  cout << "53 " << "1.00 " << N3_05 << endl;
  cout << "53 " << "1.25 " << N3_06 << endl;
  cout << "53 " << "1.50 " << N3_07 << endl;
  cout << "53 " << "1.75 " << N3_08 << endl;
  cout << "53 " << "2.00 " << N3_09 << endl;
  cout << "53 " << "2.25 " << N3_10 << endl;
  cout << "53 " << "2.50 " << N3_11 << endl;
  cout << "53 " << "2.75 " << N3_12 << endl;

  double Eabs54;
  B4->SetBranchAddress("Eabs54",&Eabs54);
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
      if( 0.00<Eabs54 && Eabs54<=0.25 ) N4_01++;
      if( 0.25<Eabs54 && Eabs54<=0.50 ) N4_02++;
      if( 0.50<Eabs54 && Eabs54<=0.75 ) N4_03++;
      if( 0.75<Eabs54 && Eabs54<=1.00 ) N4_04++;
      if( 1.00<Eabs54 && Eabs54<=1.25 ) N4_05++;
      if( 1.25<Eabs54 && Eabs54<=1.50 ) N4_06++;
      if( 1.50<Eabs54 && Eabs54<=1.75 ) N4_07++;
      if( 1.75<Eabs54 && Eabs54<=2.00 ) N4_08++;
      if( 2.00<Eabs54 && Eabs54<=2.25 ) N4_09++;
      if( 2.25<Eabs54 && Eabs54<=2.50 ) N4_10++;
      if( 2.50<Eabs54 && Eabs54<=2.75 ) N4_11++;
      if( 2.75<Eabs54 && Eabs54<=3.00 ) N4_12++;
    }
  cout << "54 " << "0.00 " << N4_01 << endl;
  cout << "54 " << "0.25 " << N4_02 << endl;
  cout << "54 " << "0.50 " << N4_03 << endl;
  cout << "54 " << "0.75 " << N4_04 << endl;
  cout << "54 " << "1.00 " << N4_05 << endl;
  cout << "54 " << "1.25 " << N4_06 << endl;
  cout << "54 " << "1.50 " << N4_07 << endl;
  cout << "54 " << "1.75 " << N4_08 << endl;
  cout << "54 " << "2.00 " << N4_09 << endl;
  cout << "54 " << "2.25 " << N4_10 << endl;
  cout << "54 " << "2.50 " << N4_11 << endl;
  cout << "54 " << "2.75 " << N4_12 << endl;

  double Eabs55;
  B4->SetBranchAddress("Eabs55",&Eabs55);
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
      if( 0.00<Eabs55 && Eabs55<=0.25 ) N5_01++;
      if( 0.25<Eabs55 && Eabs55<=0.50 ) N5_02++;
      if( 0.50<Eabs55 && Eabs55<=0.75 ) N5_03++;
      if( 0.75<Eabs55 && Eabs55<=1.00 ) N5_04++;
      if( 1.00<Eabs55 && Eabs55<=1.25 ) N5_05++;
      if( 1.25<Eabs55 && Eabs55<=1.50 ) N5_06++;
      if( 1.50<Eabs55 && Eabs55<=1.75 ) N5_07++;
      if( 1.75<Eabs55 && Eabs55<=2.00 ) N5_08++;
      if( 2.00<Eabs55 && Eabs55<=2.25 ) N5_09++;
      if( 2.25<Eabs55 && Eabs55<=2.50 ) N5_10++;
      if( 2.50<Eabs55 && Eabs55<=2.75 ) N5_11++;
      if( 2.75<Eabs55 && Eabs55<=3.00 ) N5_12++;
    }
  cout << "55 " << "0.00 " << N5_01 << endl;
  cout << "55 " << "0.25 " << N5_02 << endl;
  cout << "55 " << "0.50 " << N5_03 << endl;
  cout << "55 " << "0.75 " << N5_04 << endl;
  cout << "55 " << "1.00 " << N5_05 << endl;
  cout << "55 " << "1.25 " << N5_06 << endl;
  cout << "55 " << "1.50 " << N5_07 << endl;
  cout << "55 " << "1.75 " << N5_08 << endl;
  cout << "55 " << "2.00 " << N5_09 << endl;
  cout << "55 " << "2.25 " << N5_10 << endl;
  cout << "55 " << "2.50 " << N5_11 << endl;
  cout << "55 " << "2.75 " << N5_12 << endl;

  double Eabs56;
  B4->SetBranchAddress("Eabs56",&Eabs56);
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
      if( 0.00<Eabs56 && Eabs56<=0.25 ) N6_01++;
      if( 0.25<Eabs56 && Eabs56<=0.50 ) N6_02++;
      if( 0.50<Eabs56 && Eabs56<=0.75 ) N6_03++;
      if( 0.75<Eabs56 && Eabs56<=1.00 ) N6_04++;
      if( 1.00<Eabs56 && Eabs56<=1.25 ) N6_05++;
      if( 1.25<Eabs56 && Eabs56<=1.50 ) N6_06++;
      if( 1.50<Eabs56 && Eabs56<=1.75 ) N6_07++;
      if( 1.75<Eabs56 && Eabs56<=2.00 ) N6_08++;
      if( 2.00<Eabs56 && Eabs56<=2.25 ) N6_09++;
      if( 2.25<Eabs56 && Eabs56<=2.50 ) N6_10++;
      if( 2.50<Eabs56 && Eabs56<=2.75 ) N6_11++;
      if( 2.75<Eabs56 && Eabs56<=3.00 ) N6_12++;
    }
  cout << "56 " << "0.00 " << N6_01 << endl;
  cout << "56 " << "0.25 " << N6_02 << endl;
  cout << "56 " << "0.50 " << N6_03 << endl;
  cout << "56 " << "0.75 " << N6_04 << endl;
  cout << "56 " << "1.00 " << N6_05 << endl;
  cout << "56 " << "1.25 " << N6_06 << endl;
  cout << "56 " << "1.50 " << N6_07 << endl;
  cout << "56 " << "1.75 " << N6_08 << endl;
  cout << "56 " << "2.00 " << N6_09 << endl;
  cout << "56 " << "2.25 " << N6_10 << endl;
  cout << "56 " << "2.50 " << N6_11 << endl;
  cout << "56 " << "2.75 " << N6_12 << endl;

  double Eabs57;
  B4->SetBranchAddress("Eabs57",&Eabs57);
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
      if( 0.00<Eabs57 && Eabs57<=0.25 ) N7_01++;
      if( 0.25<Eabs57 && Eabs57<=0.50 ) N7_02++;
      if( 0.50<Eabs57 && Eabs57<=0.75 ) N7_03++;
      if( 0.75<Eabs57 && Eabs57<=1.00 ) N7_04++;
      if( 1.00<Eabs57 && Eabs57<=1.25 ) N7_05++;
      if( 1.25<Eabs57 && Eabs57<=1.50 ) N7_06++;
      if( 1.50<Eabs57 && Eabs57<=1.75 ) N7_07++;
      if( 1.75<Eabs57 && Eabs57<=2.00 ) N7_08++;
      if( 2.00<Eabs57 && Eabs57<=2.25 ) N7_09++;
      if( 2.25<Eabs57 && Eabs57<=2.50 ) N7_10++;
      if( 2.50<Eabs57 && Eabs57<=2.75 ) N7_11++;
      if( 2.75<Eabs57 && Eabs57<=3.00 ) N7_12++;
    }
  cout << "57 " << "0.00 " << N7_01 << endl;
  cout << "57 " << "0.25 " << N7_02 << endl;
  cout << "57 " << "0.50 " << N7_03 << endl;
  cout << "57 " << "0.75 " << N7_04 << endl;
  cout << "57 " << "1.00 " << N7_05 << endl;
  cout << "57 " << "1.25 " << N7_06 << endl;
  cout << "57 " << "1.50 " << N7_07 << endl;
  cout << "57 " << "1.75 " << N7_08 << endl;
  cout << "57 " << "2.00 " << N7_09 << endl;
  cout << "57 " << "2.25 " << N7_10 << endl;
  cout << "57 " << "2.50 " << N7_11 << endl;
  cout << "57 " << "2.75 " << N7_12 << endl;

  double Eabs58;
  B4->SetBranchAddress("Eabs58",&Eabs58);
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
      if( 0.00<Eabs58 && Eabs58<=0.25 ) N8_01++;
      if( 0.25<Eabs58 && Eabs58<=0.50 ) N8_02++;
      if( 0.50<Eabs58 && Eabs58<=0.75 ) N8_03++;
      if( 0.75<Eabs58 && Eabs58<=1.00 ) N8_04++;
      if( 1.00<Eabs58 && Eabs58<=1.25 ) N8_05++;
      if( 1.25<Eabs58 && Eabs58<=1.50 ) N8_06++;
      if( 1.50<Eabs58 && Eabs58<=1.75 ) N8_07++;
      if( 1.75<Eabs58 && Eabs58<=2.00 ) N8_08++;
      if( 2.00<Eabs58 && Eabs58<=2.25 ) N8_09++;
      if( 2.25<Eabs58 && Eabs58<=2.50 ) N8_10++;
      if( 2.50<Eabs58 && Eabs58<=2.75 ) N8_11++;
      if( 2.75<Eabs58 && Eabs58<=3.00 ) N8_12++;
    }
  cout << "58 " << "0.00 " << N8_01 << endl;
  cout << "58 " << "0.25 " << N8_02 << endl;
  cout << "58 " << "0.50 " << N8_03 << endl;
  cout << "58 " << "0.75 " << N8_04 << endl;
  cout << "58 " << "1.00 " << N8_05 << endl;
  cout << "58 " << "1.25 " << N8_06 << endl;
  cout << "58 " << "1.50 " << N8_07 << endl;
  cout << "58 " << "1.75 " << N8_08 << endl;
  cout << "58 " << "2.00 " << N8_09 << endl;
  cout << "58 " << "2.25 " << N8_10 << endl;
  cout << "58 " << "2.50 " << N8_11 << endl;
  cout << "58 " << "2.75 " << N8_12 << endl;

  double Eabs59;
  B4->SetBranchAddress("Eabs59",&Eabs59);
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
      if( 0.00<Eabs59 && Eabs59<=0.25 ) N9_01++;
      if( 0.25<Eabs59 && Eabs59<=0.50 ) N9_02++;
      if( 0.50<Eabs59 && Eabs59<=0.75 ) N9_03++;
      if( 0.75<Eabs59 && Eabs59<=1.00 ) N9_04++;
      if( 1.00<Eabs59 && Eabs59<=1.25 ) N9_05++;
      if( 1.25<Eabs59 && Eabs59<=1.50 ) N9_06++;
      if( 1.50<Eabs59 && Eabs59<=1.75 ) N9_07++;
      if( 1.75<Eabs59 && Eabs59<=2.00 ) N9_08++;
      if( 2.00<Eabs59 && Eabs59<=2.25 ) N9_09++;
      if( 2.25<Eabs59 && Eabs59<=2.50 ) N9_10++;
      if( 2.50<Eabs59 && Eabs59<=2.75 ) N9_11++;
      if( 2.75<Eabs59 && Eabs59<=3.00 ) N9_12++;
    }
  cout << "59 " << "0.00 " << N9_01 << endl;
  cout << "59 " << "0.25 " << N9_02 << endl;
  cout << "59 " << "0.50 " << N9_03 << endl;
  cout << "59 " << "0.75 " << N9_04 << endl;
  cout << "59 " << "1.00 " << N9_05 << endl;
  cout << "59 " << "1.25 " << N9_06 << endl;
  cout << "59 " << "1.50 " << N9_07 << endl;
  cout << "59 " << "1.75 " << N9_08 << endl;
  cout << "59 " << "2.00 " << N9_09 << endl;
  cout << "59 " << "2.25 " << N9_10 << endl;
  cout << "59 " << "2.50 " << N9_11 << endl;
  cout << "59 " << "2.75 " << N9_12 << endl;
}
