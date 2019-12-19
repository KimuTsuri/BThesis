{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs90;
  B4->SetBranchAddress("Eabs90",&Eabs90);
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
      if( 0.00<Eabs90 && Eabs90<=0.25 ) N0_01++;
      if( 0.25<Eabs90 && Eabs90<=0.50 ) N0_02++;
      if( 0.50<Eabs90 && Eabs90<=0.75 ) N0_03++;
      if( 0.75<Eabs90 && Eabs90<=1.00 ) N0_04++;
      if( 1.00<Eabs90 && Eabs90<=1.25 ) N0_05++;
      if( 1.25<Eabs90 && Eabs90<=1.50 ) N0_06++;
      if( 1.50<Eabs90 && Eabs90<=1.75 ) N0_07++;
      if( 1.75<Eabs90 && Eabs90<=2.00 ) N0_08++;
      if( 2.00<Eabs90 && Eabs90<=2.25 ) N0_09++;
      if( 2.25<Eabs90 && Eabs90<=2.50 ) N0_10++;
      if( 2.50<Eabs90 && Eabs90<=2.75 ) N0_11++;
      if( 2.75<Eabs90 && Eabs90<=3.00 ) N0_12++;
    }  
  cout << "90 " << "0.00 " << N0_01 << endl;
  cout << "90 " << "0.25 " << N0_02 << endl;
  cout << "90 " << "0.50 " << N0_03 << endl;
  cout << "90 " << "0.75 " << N0_04 << endl;
  cout << "90 " << "1.00 " << N0_05 << endl;
  cout << "90 " << "1.25 " << N0_06 << endl;
  cout << "90 " << "1.50 " << N0_07 << endl;
  cout << "90 " << "1.75 " << N0_08 << endl;
  cout << "90 " << "2.00 " << N0_09 << endl;
  cout << "90 " << "2.25 " << N0_10 << endl;
  cout << "90 " << "2.50 " << N0_11 << endl;
  cout << "90 " << "2.75 " << N0_12 << endl;

  double Eabs91;
  B4->SetBranchAddress("Eabs91",&Eabs91);
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
      if( 0.00<Eabs91 && Eabs91<=0.25 ) N1_01++;
      if( 0.25<Eabs91 && Eabs91<=0.50 ) N1_02++;
      if( 0.50<Eabs91 && Eabs91<=0.75 ) N1_03++;
      if( 0.75<Eabs91 && Eabs91<=1.00 ) N1_04++;
      if( 1.00<Eabs91 && Eabs91<=1.25 ) N1_05++;
      if( 1.25<Eabs91 && Eabs91<=1.50 ) N1_06++;
      if( 1.50<Eabs91 && Eabs91<=1.75 ) N1_07++;
      if( 1.75<Eabs91 && Eabs91<=2.00 ) N1_08++;
      if( 2.00<Eabs91 && Eabs91<=2.25 ) N1_09++;
      if( 2.25<Eabs91 && Eabs91<=2.50 ) N1_10++;
      if( 2.50<Eabs91 && Eabs91<=2.75 ) N1_11++;
      if( 2.75<Eabs91 && Eabs91<=3.00 ) N1_12++;
    }
  cout << "91 " << "0.00 " << N1_01 << endl;
  cout << "91 " << "0.25 " << N1_02 << endl;
  cout << "91 " << "0.50 " << N1_03 << endl;
  cout << "91 " << "0.75 " << N1_04 << endl;
  cout << "91 " << "1.00 " << N1_05 << endl;
  cout << "91 " << "1.25 " << N1_06 << endl;
  cout << "91 " << "1.50 " << N1_07 << endl;
  cout << "91 " << "1.75 " << N1_08 << endl;
  cout << "91 " << "2.00 " << N1_09 << endl;
  cout << "91 " << "2.25 " << N1_10 << endl;
  cout << "91 " << "2.50 " << N1_11 << endl;
  cout << "91 " << "2.75 " << N1_12 << endl;

  double Eabs92;
  B4->SetBranchAddress("Eabs92",&Eabs92);
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
      if( 0.00<Eabs92 && Eabs92<=0.25 ) N2_01++;
      if( 0.25<Eabs92 && Eabs92<=0.50 ) N2_02++;
      if( 0.50<Eabs92 && Eabs92<=0.75 ) N2_03++;
      if( 0.75<Eabs92 && Eabs92<=1.00 ) N2_04++;
      if( 1.00<Eabs92 && Eabs92<=1.25 ) N2_05++;
      if( 1.25<Eabs92 && Eabs92<=1.50 ) N2_06++;
      if( 1.50<Eabs92 && Eabs92<=1.75 ) N2_07++;
      if( 1.75<Eabs92 && Eabs92<=2.00 ) N2_08++;
      if( 2.00<Eabs92 && Eabs92<=2.25 ) N2_09++;
      if( 2.25<Eabs92 && Eabs92<=2.50 ) N2_10++;
      if( 2.50<Eabs92 && Eabs92<=2.75 ) N2_11++;
      if( 2.75<Eabs92 && Eabs92<=3.00 ) N2_12++;
    }
  cout << "92 " << "0.00 " << N2_01 << endl;
  cout << "92 " << "0.25 " << N2_02 << endl;
  cout << "92 " << "0.50 " << N2_03 << endl;
  cout << "92 " << "0.75 " << N2_04 << endl;
  cout << "92 " << "1.00 " << N2_05 << endl;
  cout << "92 " << "1.25 " << N2_06 << endl;
  cout << "92 " << "1.50 " << N2_07 << endl;
  cout << "92 " << "1.75 " << N2_08 << endl;
  cout << "92 " << "2.00 " << N2_09 << endl;
  cout << "92 " << "2.25 " << N2_10 << endl;
  cout << "92 " << "2.50 " << N2_11 << endl;
  cout << "92 " << "2.75 " << N2_12 << endl;

  double Eabs93;
  B4->SetBranchAddress("Eabs93",&Eabs93);
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
      if( 0.00<Eabs93 && Eabs93<=0.25 ) N3_01++;
      if( 0.25<Eabs93 && Eabs93<=0.50 ) N3_02++;
      if( 0.50<Eabs93 && Eabs93<=0.75 ) N3_03++;
      if( 0.75<Eabs93 && Eabs93<=1.00 ) N3_04++;
      if( 1.00<Eabs93 && Eabs93<=1.25 ) N3_05++;
      if( 1.25<Eabs93 && Eabs93<=1.50 ) N3_06++;
      if( 1.50<Eabs93 && Eabs93<=1.75 ) N3_07++;
      if( 1.75<Eabs93 && Eabs93<=2.00 ) N3_08++;
      if( 2.00<Eabs93 && Eabs93<=2.25 ) N3_09++;
      if( 2.25<Eabs93 && Eabs93<=2.50 ) N3_10++;
      if( 2.50<Eabs93 && Eabs93<=2.75 ) N3_11++;
      if( 2.75<Eabs93 && Eabs93<=3.00 ) N3_12++;
    }
  cout << "93 " << "0.00 " << N3_01 << endl;
  cout << "93 " << "0.25 " << N3_02 << endl;
  cout << "93 " << "0.50 " << N3_03 << endl;
  cout << "93 " << "0.75 " << N3_04 << endl;
  cout << "93 " << "1.00 " << N3_05 << endl;
  cout << "93 " << "1.25 " << N3_06 << endl;
  cout << "93 " << "1.50 " << N3_07 << endl;
  cout << "93 " << "1.75 " << N3_08 << endl;
  cout << "93 " << "2.00 " << N3_09 << endl;
  cout << "93 " << "2.25 " << N3_10 << endl;
  cout << "93 " << "2.50 " << N3_11 << endl;
  cout << "93 " << "2.75 " << N3_12 << endl;

  double Eabs94;
  B4->SetBranchAddress("Eabs94",&Eabs94);
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
      if( 0.00<Eabs94 && Eabs94<=0.25 ) N4_01++;
      if( 0.25<Eabs94 && Eabs94<=0.50 ) N4_02++;
      if( 0.50<Eabs94 && Eabs94<=0.75 ) N4_03++;
      if( 0.75<Eabs94 && Eabs94<=1.00 ) N4_04++;
      if( 1.00<Eabs94 && Eabs94<=1.25 ) N4_05++;
      if( 1.25<Eabs94 && Eabs94<=1.50 ) N4_06++;
      if( 1.50<Eabs94 && Eabs94<=1.75 ) N4_07++;
      if( 1.75<Eabs94 && Eabs94<=2.00 ) N4_08++;
      if( 2.00<Eabs94 && Eabs94<=2.25 ) N4_09++;
      if( 2.25<Eabs94 && Eabs94<=2.50 ) N4_10++;
      if( 2.50<Eabs94 && Eabs94<=2.75 ) N4_11++;
      if( 2.75<Eabs94 && Eabs94<=3.00 ) N4_12++;
    }
  cout << "94 " << "0.00 " << N4_01 << endl;
  cout << "94 " << "0.25 " << N4_02 << endl;
  cout << "94 " << "0.50 " << N4_03 << endl;
  cout << "94 " << "0.75 " << N4_04 << endl;
  cout << "94 " << "1.00 " << N4_05 << endl;
  cout << "94 " << "1.25 " << N4_06 << endl;
  cout << "94 " << "1.50 " << N4_07 << endl;
  cout << "94 " << "1.75 " << N4_08 << endl;
  cout << "94 " << "2.00 " << N4_09 << endl;
  cout << "94 " << "2.25 " << N4_10 << endl;
  cout << "94 " << "2.50 " << N4_11 << endl;
  cout << "94 " << "2.75 " << N4_12 << endl;

  double Eabs95;
  B4->SetBranchAddress("Eabs95",&Eabs95);
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
      if( 0.00<Eabs95 && Eabs95<=0.25 ) N5_01++;
      if( 0.25<Eabs95 && Eabs95<=0.50 ) N5_02++;
      if( 0.50<Eabs95 && Eabs95<=0.75 ) N5_03++;
      if( 0.75<Eabs95 && Eabs95<=1.00 ) N5_04++;
      if( 1.00<Eabs95 && Eabs95<=1.25 ) N5_05++;
      if( 1.25<Eabs95 && Eabs95<=1.50 ) N5_06++;
      if( 1.50<Eabs95 && Eabs95<=1.75 ) N5_07++;
      if( 1.75<Eabs95 && Eabs95<=2.00 ) N5_08++;
      if( 2.00<Eabs95 && Eabs95<=2.25 ) N5_09++;
      if( 2.25<Eabs95 && Eabs95<=2.50 ) N5_10++;
      if( 2.50<Eabs95 && Eabs95<=2.75 ) N5_11++;
      if( 2.75<Eabs95 && Eabs95<=3.00 ) N5_12++;
    }
  cout << "95 " << "0.00 " << N5_01 << endl;
  cout << "95 " << "0.25 " << N5_02 << endl;
  cout << "95 " << "0.50 " << N5_03 << endl;
  cout << "95 " << "0.75 " << N5_04 << endl;
  cout << "95 " << "1.00 " << N5_05 << endl;
  cout << "95 " << "1.25 " << N5_06 << endl;
  cout << "95 " << "1.50 " << N5_07 << endl;
  cout << "95 " << "1.75 " << N5_08 << endl;
  cout << "95 " << "2.00 " << N5_09 << endl;
  cout << "95 " << "2.25 " << N5_10 << endl;
  cout << "95 " << "2.50 " << N5_11 << endl;
  cout << "95 " << "2.75 " << N5_12 << endl;

  double Eabs96;
  B4->SetBranchAddress("Eabs96",&Eabs96);
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
      if( 0.00<Eabs96 && Eabs96<=0.25 ) N6_01++;
      if( 0.25<Eabs96 && Eabs96<=0.50 ) N6_02++;
      if( 0.50<Eabs96 && Eabs96<=0.75 ) N6_03++;
      if( 0.75<Eabs96 && Eabs96<=1.00 ) N6_04++;
      if( 1.00<Eabs96 && Eabs96<=1.25 ) N6_05++;
      if( 1.25<Eabs96 && Eabs96<=1.50 ) N6_06++;
      if( 1.50<Eabs96 && Eabs96<=1.75 ) N6_07++;
      if( 1.75<Eabs96 && Eabs96<=2.00 ) N6_08++;
      if( 2.00<Eabs96 && Eabs96<=2.25 ) N6_09++;
      if( 2.25<Eabs96 && Eabs96<=2.50 ) N6_10++;
      if( 2.50<Eabs96 && Eabs96<=2.75 ) N6_11++;
      if( 2.75<Eabs96 && Eabs96<=3.00 ) N6_12++;
    }
  cout << "96 " << "0.00 " << N6_01 << endl;
  cout << "96 " << "0.25 " << N6_02 << endl;
  cout << "96 " << "0.50 " << N6_03 << endl;
  cout << "96 " << "0.75 " << N6_04 << endl;
  cout << "96 " << "1.00 " << N6_05 << endl;
  cout << "96 " << "1.25 " << N6_06 << endl;
  cout << "96 " << "1.50 " << N6_07 << endl;
  cout << "96 " << "1.75 " << N6_08 << endl;
  cout << "96 " << "2.00 " << N6_09 << endl;
  cout << "96 " << "2.25 " << N6_10 << endl;
  cout << "96 " << "2.50 " << N6_11 << endl;
  cout << "96 " << "2.75 " << N6_12 << endl;

  double Eabs97;
  B4->SetBranchAddress("Eabs97",&Eabs97);
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
      if( 0.00<Eabs97 && Eabs97<=0.25 ) N7_01++;
      if( 0.25<Eabs97 && Eabs97<=0.50 ) N7_02++;
      if( 0.50<Eabs97 && Eabs97<=0.75 ) N7_03++;
      if( 0.75<Eabs97 && Eabs97<=1.00 ) N7_04++;
      if( 1.00<Eabs97 && Eabs97<=1.25 ) N7_05++;
      if( 1.25<Eabs97 && Eabs97<=1.50 ) N7_06++;
      if( 1.50<Eabs97 && Eabs97<=1.75 ) N7_07++;
      if( 1.75<Eabs97 && Eabs97<=2.00 ) N7_08++;
      if( 2.00<Eabs97 && Eabs97<=2.25 ) N7_09++;
      if( 2.25<Eabs97 && Eabs97<=2.50 ) N7_10++;
      if( 2.50<Eabs97 && Eabs97<=2.75 ) N7_11++;
      if( 2.75<Eabs97 && Eabs97<=3.00 ) N7_12++;
    }
  cout << "97 " << "0.00 " << N7_01 << endl;
  cout << "97 " << "0.25 " << N7_02 << endl;
  cout << "97 " << "0.50 " << N7_03 << endl;
  cout << "97 " << "0.75 " << N7_04 << endl;
  cout << "97 " << "1.00 " << N7_05 << endl;
  cout << "97 " << "1.25 " << N7_06 << endl;
  cout << "97 " << "1.50 " << N7_07 << endl;
  cout << "97 " << "1.75 " << N7_08 << endl;
  cout << "97 " << "2.00 " << N7_09 << endl;
  cout << "97 " << "2.25 " << N7_10 << endl;
  cout << "97 " << "2.50 " << N7_11 << endl;
  cout << "97 " << "2.75 " << N7_12 << endl;

  double Eabs98;
  B4->SetBranchAddress("Eabs98",&Eabs98);
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
      if( 0.00<Eabs98 && Eabs98<=0.25 ) N8_01++;
      if( 0.25<Eabs98 && Eabs98<=0.50 ) N8_02++;
      if( 0.50<Eabs98 && Eabs98<=0.75 ) N8_03++;
      if( 0.75<Eabs98 && Eabs98<=1.00 ) N8_04++;
      if( 1.00<Eabs98 && Eabs98<=1.25 ) N8_05++;
      if( 1.25<Eabs98 && Eabs98<=1.50 ) N8_06++;
      if( 1.50<Eabs98 && Eabs98<=1.75 ) N8_07++;
      if( 1.75<Eabs98 && Eabs98<=2.00 ) N8_08++;
      if( 2.00<Eabs98 && Eabs98<=2.25 ) N8_09++;
      if( 2.25<Eabs98 && Eabs98<=2.50 ) N8_10++;
      if( 2.50<Eabs98 && Eabs98<=2.75 ) N8_11++;
      if( 2.75<Eabs98 && Eabs98<=3.00 ) N8_12++;
    }
  cout << "98 " << "0.00 " << N8_01 << endl;
  cout << "98 " << "0.25 " << N8_02 << endl;
  cout << "98 " << "0.50 " << N8_03 << endl;
  cout << "98 " << "0.75 " << N8_04 << endl;
  cout << "98 " << "1.00 " << N8_05 << endl;
  cout << "98 " << "1.25 " << N8_06 << endl;
  cout << "98 " << "1.50 " << N8_07 << endl;
  cout << "98 " << "1.75 " << N8_08 << endl;
  cout << "98 " << "2.00 " << N8_09 << endl;
  cout << "98 " << "2.25 " << N8_10 << endl;
  cout << "98 " << "2.50 " << N8_11 << endl;
  cout << "98 " << "2.75 " << N8_12 << endl;

  double Eabs99;
  B4->SetBranchAddress("Eabs99",&Eabs99);
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
      if( 0.00<Eabs99 && Eabs99<=0.25 ) N9_01++;
      if( 0.25<Eabs99 && Eabs99<=0.50 ) N9_02++;
      if( 0.50<Eabs99 && Eabs99<=0.75 ) N9_03++;
      if( 0.75<Eabs99 && Eabs99<=1.00 ) N9_04++;
      if( 1.00<Eabs99 && Eabs99<=1.25 ) N9_05++;
      if( 1.25<Eabs99 && Eabs99<=1.50 ) N9_06++;
      if( 1.50<Eabs99 && Eabs99<=1.75 ) N9_07++;
      if( 1.75<Eabs99 && Eabs99<=2.00 ) N9_08++;
      if( 2.00<Eabs99 && Eabs99<=2.25 ) N9_09++;
      if( 2.25<Eabs99 && Eabs99<=2.50 ) N9_10++;
      if( 2.50<Eabs99 && Eabs99<=2.75 ) N9_11++;
      if( 2.75<Eabs99 && Eabs99<=3.00 ) N9_12++;
    }
  cout << "99 " << "0.00 " << N9_01 << endl;
  cout << "99 " << "0.25 " << N9_02 << endl;
  cout << "99 " << "0.50 " << N9_03 << endl;
  cout << "99 " << "0.75 " << N9_04 << endl;
  cout << "99 " << "1.00 " << N9_05 << endl;
  cout << "99 " << "1.25 " << N9_06 << endl;
  cout << "99 " << "1.50 " << N9_07 << endl;
  cout << "99 " << "1.75 " << N9_08 << endl;
  cout << "99 " << "2.00 " << N9_09 << endl;
  cout << "99 " << "2.25 " << N9_10 << endl;
  cout << "99 " << "2.50 " << N9_11 << endl;
  cout << "99 " << "2.75 " << N9_12 << endl;
}
