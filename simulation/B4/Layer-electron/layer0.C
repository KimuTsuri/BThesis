{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs0;
  B4->SetBranchAddress("Eabs0",&Eabs0);
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
      if( 0.00<Eabs0 && Eabs0<=0.25 ) N0_01++;
      if( 0.25<Eabs0 && Eabs0<=0.50 ) N0_02++;
      if( 0.50<Eabs0 && Eabs0<=0.75 ) N0_03++;
      if( 0.75<Eabs0 && Eabs0<=1.00 ) N0_04++;
      if( 1.00<Eabs0 && Eabs0<=1.25 ) N0_05++;
      if( 1.25<Eabs0 && Eabs0<=1.50 ) N0_06++;
      if( 1.50<Eabs0 && Eabs0<=1.75 ) N0_07++;
      if( 1.75<Eabs0 && Eabs0<=2.00 ) N0_08++;
      if( 2.00<Eabs0 && Eabs0<=2.25 ) N0_09++;
      if( 2.25<Eabs0 && Eabs0<=2.50 ) N0_10++;
      if( 2.50<Eabs0 && Eabs0<=2.75 ) N0_11++;
      if( 2.75<Eabs0 && Eabs0<=3.00 ) N0_12++;
    }  
  cout << "0 " << "0.00 " << N0_01 << endl;
  cout << "0 " << "0.25 " << N0_02 << endl;
  cout << "0 " << "0.50 " << N0_03 << endl;
  cout << "0 " << "0.75 " << N0_04 << endl;
  cout << "0 " << "1.00 " << N0_05 << endl;
  cout << "0 " << "1.25 " << N0_06 << endl;
  cout << "0 " << "1.50 " << N0_07 << endl;
  cout << "0 " << "1.75 " << N0_08 << endl;
  cout << "0 " << "2.00 " << N0_09 << endl;
  cout << "0 " << "2.25 " << N0_10 << endl;
  cout << "0 " << "2.50 " << N0_11 << endl;
  cout << "0 " << "2.75 " << N0_12 << endl;

  double Eabs1;
  B4->SetBranchAddress("Eabs1",&Eabs1);
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
      if( 0.00<Eabs1 && Eabs1<=0.25 ) N1_01++;
      if( 0.25<Eabs1 && Eabs1<=0.50 ) N1_02++;
      if( 0.50<Eabs1 && Eabs1<=0.75 ) N1_03++;
      if( 0.75<Eabs1 && Eabs1<=1.00 ) N1_04++;
      if( 1.00<Eabs1 && Eabs1<=1.25 ) N1_05++;
      if( 1.25<Eabs1 && Eabs1<=1.50 ) N1_06++;
      if( 1.50<Eabs1 && Eabs1<=1.75 ) N1_07++;
      if( 1.75<Eabs1 && Eabs1<=2.00 ) N1_08++;
      if( 2.00<Eabs1 && Eabs1<=2.25 ) N1_09++;
      if( 2.25<Eabs1 && Eabs1<=2.50 ) N1_10++;
      if( 2.50<Eabs1 && Eabs1<=2.75 ) N1_11++;
      if( 2.75<Eabs1 && Eabs1<=3.00 ) N1_12++;
    }
  cout << "1 " << "0.00 " << N1_01 << endl;
  cout << "1 " << "0.25 " << N1_02 << endl;
  cout << "1 " << "0.50 " << N1_03 << endl;
  cout << "1 " << "0.75 " << N1_04 << endl;
  cout << "1 " << "1.00 " << N1_05 << endl;
  cout << "1 " << "1.25 " << N1_06 << endl;
  cout << "1 " << "1.50 " << N1_07 << endl;
  cout << "1 " << "1.75 " << N1_08 << endl;
  cout << "1 " << "2.00 " << N1_09 << endl;
  cout << "1 " << "2.25 " << N1_10 << endl;
  cout << "1 " << "2.50 " << N1_11 << endl;
  cout << "1 " << "2.75 " << N1_12 << endl;

  double Eabs2;
  B4->SetBranchAddress("Eabs2",&Eabs2);
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
      if( 0.00<Eabs2 && Eabs2<=0.25 ) N2_01++;
      if( 0.25<Eabs2 && Eabs2<=0.50 ) N2_02++;
      if( 0.50<Eabs2 && Eabs2<=0.75 ) N2_03++;
      if( 0.75<Eabs2 && Eabs2<=1.00 ) N2_04++;
      if( 1.00<Eabs2 && Eabs2<=1.25 ) N2_05++;
      if( 1.25<Eabs2 && Eabs2<=1.50 ) N2_06++;
      if( 1.50<Eabs2 && Eabs2<=1.75 ) N2_07++;
      if( 1.75<Eabs2 && Eabs2<=2.00 ) N2_08++;
      if( 2.00<Eabs2 && Eabs2<=2.25 ) N2_09++;
      if( 2.25<Eabs2 && Eabs2<=2.50 ) N2_10++;
      if( 2.50<Eabs2 && Eabs2<=2.75 ) N2_11++;
      if( 2.75<Eabs2 && Eabs2<=3.00 ) N2_12++;
    }
  cout << "2 " << "0.00 " << N2_01 << endl;
  cout << "2 " << "0.25 " << N2_02 << endl;
  cout << "2 " << "0.50 " << N2_03 << endl;
  cout << "2 " << "0.75 " << N2_04 << endl;
  cout << "2 " << "1.00 " << N2_05 << endl;
  cout << "2 " << "1.25 " << N2_06 << endl;
  cout << "2 " << "1.50 " << N2_07 << endl;
  cout << "2 " << "1.75 " << N2_08 << endl;
  cout << "2 " << "2.00 " << N2_09 << endl;
  cout << "2 " << "2.25 " << N2_10 << endl;
  cout << "2 " << "2.50 " << N2_11 << endl;
  cout << "2 " << "2.75 " << N2_12 << endl;

  double Eabs3;
  B4->SetBranchAddress("Eabs3",&Eabs3);
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
      if( 0.00<Eabs3 && Eabs3<=0.25 ) N3_01++;
      if( 0.25<Eabs3 && Eabs3<=0.50 ) N3_02++;
      if( 0.50<Eabs3 && Eabs3<=0.75 ) N3_03++;
      if( 0.75<Eabs3 && Eabs3<=1.00 ) N3_04++;
      if( 1.00<Eabs3 && Eabs3<=1.25 ) N3_05++;
      if( 1.25<Eabs3 && Eabs3<=1.50 ) N3_06++;
      if( 1.50<Eabs3 && Eabs3<=1.75 ) N3_07++;
      if( 1.75<Eabs3 && Eabs3<=2.00 ) N3_08++;
      if( 2.00<Eabs3 && Eabs3<=2.25 ) N3_09++;
      if( 2.25<Eabs3 && Eabs3<=2.50 ) N3_10++;
      if( 2.50<Eabs3 && Eabs3<=2.75 ) N3_11++;
      if( 2.75<Eabs3 && Eabs3<=3.00 ) N3_12++;
    }
  cout << "3 " << "0.00 " << N3_01 << endl;
  cout << "3 " << "0.25 " << N3_02 << endl;
  cout << "3 " << "0.50 " << N3_03 << endl;
  cout << "3 " << "0.75 " << N3_04 << endl;
  cout << "3 " << "1.00 " << N3_05 << endl;
  cout << "3 " << "1.25 " << N3_06 << endl;
  cout << "3 " << "1.50 " << N3_07 << endl;
  cout << "3 " << "1.75 " << N3_08 << endl;
  cout << "3 " << "2.00 " << N3_09 << endl;
  cout << "3 " << "2.25 " << N3_10 << endl;
  cout << "3 " << "2.50 " << N3_11 << endl;
  cout << "3 " << "2.75 " << N3_12 << endl;

  double Eabs4;
  B4->SetBranchAddress("Eabs4",&Eabs4);
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
      if( 0.00<Eabs4 && Eabs4<=0.25 ) N4_01++;
      if( 0.25<Eabs4 && Eabs4<=0.50 ) N4_02++;
      if( 0.50<Eabs4 && Eabs4<=0.75 ) N4_03++;
      if( 0.75<Eabs4 && Eabs4<=1.00 ) N4_04++;
      if( 1.00<Eabs4 && Eabs4<=1.25 ) N4_05++;
      if( 1.25<Eabs4 && Eabs4<=1.50 ) N4_06++;
      if( 1.50<Eabs4 && Eabs4<=1.75 ) N4_07++;
      if( 1.75<Eabs4 && Eabs4<=2.00 ) N4_08++;
      if( 2.00<Eabs4 && Eabs4<=2.25 ) N4_09++;
      if( 2.25<Eabs4 && Eabs4<=2.50 ) N4_10++;
      if( 2.50<Eabs4 && Eabs4<=2.75 ) N4_11++;
      if( 2.75<Eabs4 && Eabs4<=3.00 ) N4_12++;
    }
  cout << "4 " << "0.00 " << N4_01 << endl;
  cout << "4 " << "0.25 " << N4_02 << endl;
  cout << "4 " << "0.50 " << N4_03 << endl;
  cout << "4 " << "0.75 " << N4_04 << endl;
  cout << "4 " << "1.00 " << N4_05 << endl;
  cout << "4 " << "1.25 " << N4_06 << endl;
  cout << "4 " << "1.50 " << N4_07 << endl;
  cout << "4 " << "1.75 " << N4_08 << endl;
  cout << "4 " << "2.00 " << N4_09 << endl;
  cout << "4 " << "2.25 " << N4_10 << endl;
  cout << "4 " << "2.50 " << N4_11 << endl;
  cout << "4 " << "2.75 " << N4_12 << endl;

  double Eabs5;
  B4->SetBranchAddress("Eabs5",&Eabs5);
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
      if( 0.00<Eabs5 && Eabs5<=0.25 ) N5_01++;
      if( 0.25<Eabs5 && Eabs5<=0.50 ) N5_02++;
      if( 0.50<Eabs5 && Eabs5<=0.75 ) N5_03++;
      if( 0.75<Eabs5 && Eabs5<=1.00 ) N5_04++;
      if( 1.00<Eabs5 && Eabs5<=1.25 ) N5_05++;
      if( 1.25<Eabs5 && Eabs5<=1.50 ) N5_06++;
      if( 1.50<Eabs5 && Eabs5<=1.75 ) N5_07++;
      if( 1.75<Eabs5 && Eabs5<=2.00 ) N5_08++;
      if( 2.00<Eabs5 && Eabs5<=2.25 ) N5_09++;
      if( 2.25<Eabs5 && Eabs5<=2.50 ) N5_10++;
      if( 2.50<Eabs5 && Eabs5<=2.75 ) N5_11++;
      if( 2.75<Eabs5 && Eabs5<=3.00 ) N5_12++;
    }
  cout << "5 " << "0.00 " << N5_01 << endl;
  cout << "5 " << "0.25 " << N5_02 << endl;
  cout << "5 " << "0.50 " << N5_03 << endl;
  cout << "5 " << "0.75 " << N5_04 << endl;
  cout << "5 " << "1.00 " << N5_05 << endl;
  cout << "5 " << "1.25 " << N5_06 << endl;
  cout << "5 " << "1.50 " << N5_07 << endl;
  cout << "5 " << "1.75 " << N5_08 << endl;
  cout << "5 " << "2.00 " << N5_09 << endl;
  cout << "5 " << "2.25 " << N5_10 << endl;
  cout << "5 " << "2.50 " << N5_11 << endl;
  cout << "5 " << "2.75 " << N5_12 << endl;

  double Eabs6;
  B4->SetBranchAddress("Eabs6",&Eabs6);
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
      if( 0.00<Eabs6 && Eabs6<=0.25 ) N6_01++;
      if( 0.25<Eabs6 && Eabs6<=0.50 ) N6_02++;
      if( 0.50<Eabs6 && Eabs6<=0.75 ) N6_03++;
      if( 0.75<Eabs6 && Eabs6<=1.00 ) N6_04++;
      if( 1.00<Eabs6 && Eabs6<=1.25 ) N6_05++;
      if( 1.25<Eabs6 && Eabs6<=1.50 ) N6_06++;
      if( 1.50<Eabs6 && Eabs6<=1.75 ) N6_07++;
      if( 1.75<Eabs6 && Eabs6<=2.00 ) N6_08++;
      if( 2.00<Eabs6 && Eabs6<=2.25 ) N6_09++;
      if( 2.25<Eabs6 && Eabs6<=2.50 ) N6_10++;
      if( 2.50<Eabs6 && Eabs6<=2.75 ) N6_11++;
      if( 2.75<Eabs6 && Eabs6<=3.00 ) N6_12++;
    }
  cout << "6 " << "0.00 " << N6_01 << endl;
  cout << "6 " << "0.25 " << N6_02 << endl;
  cout << "6 " << "0.50 " << N6_03 << endl;
  cout << "6 " << "0.75 " << N6_04 << endl;
  cout << "6 " << "1.00 " << N6_05 << endl;
  cout << "6 " << "1.25 " << N6_06 << endl;
  cout << "6 " << "1.50 " << N6_07 << endl;
  cout << "6 " << "1.75 " << N6_08 << endl;
  cout << "6 " << "2.00 " << N6_09 << endl;
  cout << "6 " << "2.25 " << N6_10 << endl;
  cout << "6 " << "2.50 " << N6_11 << endl;
  cout << "6 " << "2.75 " << N6_12 << endl;

  double Eabs7;
  B4->SetBranchAddress("Eabs7",&Eabs7);
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
      if( 0.00<Eabs7 && Eabs7<=0.25 ) N7_01++;
      if( 0.25<Eabs7 && Eabs7<=0.50 ) N7_02++;
      if( 0.50<Eabs7 && Eabs7<=0.75 ) N7_03++;
      if( 0.75<Eabs7 && Eabs7<=1.00 ) N7_04++;
      if( 1.00<Eabs7 && Eabs7<=1.25 ) N7_05++;
      if( 1.25<Eabs7 && Eabs7<=1.50 ) N7_06++;
      if( 1.50<Eabs7 && Eabs7<=1.75 ) N7_07++;
      if( 1.75<Eabs7 && Eabs7<=2.00 ) N7_08++;
      if( 2.00<Eabs7 && Eabs7<=2.25 ) N7_09++;
      if( 2.25<Eabs7 && Eabs7<=2.50 ) N7_10++;
      if( 2.50<Eabs7 && Eabs7<=2.75 ) N7_11++;
      if( 2.75<Eabs7 && Eabs7<=3.00 ) N7_12++;
    }
  cout << "7 " << "0.00 " << N7_01 << endl;
  cout << "7 " << "0.25 " << N7_02 << endl;
  cout << "7 " << "0.50 " << N7_03 << endl;
  cout << "7 " << "0.75 " << N7_04 << endl;
  cout << "7 " << "1.00 " << N7_05 << endl;
  cout << "7 " << "1.25 " << N7_06 << endl;
  cout << "7 " << "1.50 " << N7_07 << endl;
  cout << "7 " << "1.75 " << N7_08 << endl;
  cout << "7 " << "2.00 " << N7_09 << endl;
  cout << "7 " << "2.25 " << N7_10 << endl;
  cout << "7 " << "2.50 " << N7_11 << endl;
  cout << "7 " << "2.75 " << N7_12 << endl;

  double Eabs8;
  B4->SetBranchAddress("Eabs8",&Eabs8);
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
      if( 0.00<Eabs8 && Eabs8<=0.25 ) N8_01++;
      if( 0.25<Eabs8 && Eabs8<=0.50 ) N8_02++;
      if( 0.50<Eabs8 && Eabs8<=0.75 ) N8_03++;
      if( 0.75<Eabs8 && Eabs8<=1.00 ) N8_04++;
      if( 1.00<Eabs8 && Eabs8<=1.25 ) N8_05++;
      if( 1.25<Eabs8 && Eabs8<=1.50 ) N8_06++;
      if( 1.50<Eabs8 && Eabs8<=1.75 ) N8_07++;
      if( 1.75<Eabs8 && Eabs8<=2.00 ) N8_08++;
      if( 2.00<Eabs8 && Eabs8<=2.25 ) N8_09++;
      if( 2.25<Eabs8 && Eabs8<=2.50 ) N8_10++;
      if( 2.50<Eabs8 && Eabs8<=2.75 ) N8_11++;
      if( 2.75<Eabs8 && Eabs8<=3.00 ) N8_12++;
    }
  cout << "8 " << "0.00 " << N8_01 << endl;
  cout << "8 " << "0.25 " << N8_02 << endl;
  cout << "8 " << "0.50 " << N8_03 << endl;
  cout << "8 " << "0.75 " << N8_04 << endl;
  cout << "8 " << "1.00 " << N8_05 << endl;
  cout << "8 " << "1.25 " << N8_06 << endl;
  cout << "8 " << "1.50 " << N8_07 << endl;
  cout << "8 " << "1.75 " << N8_08 << endl;
  cout << "8 " << "2.00 " << N8_09 << endl;
  cout << "8 " << "2.25 " << N8_10 << endl;
  cout << "8 " << "2.50 " << N8_11 << endl;
  cout << "8 " << "2.75 " << N8_12 << endl;

  double Eabs9;
  B4->SetBranchAddress("Eabs9",&Eabs9);
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
      if( 0.00<Eabs9 && Eabs9<=0.25 ) N9_01++;
      if( 0.25<Eabs9 && Eabs9<=0.50 ) N9_02++;
      if( 0.50<Eabs9 && Eabs9<=0.75 ) N9_03++;
      if( 0.75<Eabs9 && Eabs9<=1.00 ) N9_04++;
      if( 1.00<Eabs9 && Eabs9<=1.25 ) N9_05++;
      if( 1.25<Eabs9 && Eabs9<=1.50 ) N9_06++;
      if( 1.50<Eabs9 && Eabs9<=1.75 ) N9_07++;
      if( 1.75<Eabs9 && Eabs9<=2.00 ) N9_08++;
      if( 2.00<Eabs9 && Eabs9<=2.25 ) N9_09++;
      if( 2.25<Eabs9 && Eabs9<=2.50 ) N9_10++;
      if( 2.50<Eabs9 && Eabs9<=2.75 ) N9_11++;
      if( 2.75<Eabs9 && Eabs9<=3.00 ) N9_12++;
    }
  cout << "9 " << "0.00 " << N9_01 << endl;
  cout << "9 " << "0.25 " << N9_02 << endl;
  cout << "9 " << "0.50 " << N9_03 << endl;
  cout << "9 " << "0.75 " << N9_04 << endl;
  cout << "9 " << "1.00 " << N9_05 << endl;
  cout << "9 " << "1.25 " << N9_06 << endl;
  cout << "9 " << "1.50 " << N9_07 << endl;
  cout << "9 " << "1.75 " << N9_08 << endl;
  cout << "9 " << "2.00 " << N9_09 << endl;
  cout << "9 " << "2.25 " << N9_10 << endl;
  cout << "9 " << "2.50 " << N9_11 << endl;
  cout << "9 " << "2.75 " << N9_12 << endl;
}
