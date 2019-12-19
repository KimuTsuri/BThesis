{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs30;
  B4->SetBranchAddress("Eabs30",&Eabs30);
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
      if( 0.00<Eabs30 && Eabs30<=0.25 ) N0_01++;
      if( 0.25<Eabs30 && Eabs30<=0.50 ) N0_02++;
      if( 0.50<Eabs30 && Eabs30<=0.75 ) N0_03++;
      if( 0.75<Eabs30 && Eabs30<=1.00 ) N0_04++;
      if( 1.00<Eabs30 && Eabs30<=1.25 ) N0_05++;
      if( 1.25<Eabs30 && Eabs30<=1.50 ) N0_06++;
      if( 1.50<Eabs30 && Eabs30<=1.75 ) N0_07++;
      if( 1.75<Eabs30 && Eabs30<=2.00 ) N0_08++;
      if( 2.00<Eabs30 && Eabs30<=2.25 ) N0_09++;
      if( 2.25<Eabs30 && Eabs30<=2.50 ) N0_10++;
      if( 2.50<Eabs30 && Eabs30<=2.75 ) N0_11++;
      if( 2.75<Eabs30 && Eabs30<=3.00 ) N0_12++;
    }  
  cout << "30 " << "0.00 " << N0_01 << endl;
  cout << "30 " << "0.25 " << N0_02 << endl;
  cout << "30 " << "0.50 " << N0_03 << endl;
  cout << "30 " << "0.75 " << N0_04 << endl;
  cout << "30 " << "1.00 " << N0_05 << endl;
  cout << "30 " << "1.25 " << N0_06 << endl;
  cout << "30 " << "1.50 " << N0_07 << endl;
  cout << "30 " << "1.75 " << N0_08 << endl;
  cout << "30 " << "2.00 " << N0_09 << endl;
  cout << "30 " << "2.25 " << N0_10 << endl;
  cout << "30 " << "2.50 " << N0_11 << endl;
  cout << "30 " << "2.75 " << N0_12 << endl;

  double Eabs31;
  B4->SetBranchAddress("Eabs31",&Eabs31);
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
      if( 0.00<Eabs31 && Eabs31<=0.25 ) N1_01++;
      if( 0.25<Eabs31 && Eabs31<=0.50 ) N1_02++;
      if( 0.50<Eabs31 && Eabs31<=0.75 ) N1_03++;
      if( 0.75<Eabs31 && Eabs31<=1.00 ) N1_04++;
      if( 1.00<Eabs31 && Eabs31<=1.25 ) N1_05++;
      if( 1.25<Eabs31 && Eabs31<=1.50 ) N1_06++;
      if( 1.50<Eabs31 && Eabs31<=1.75 ) N1_07++;
      if( 1.75<Eabs31 && Eabs31<=2.00 ) N1_08++;
      if( 2.00<Eabs31 && Eabs31<=2.25 ) N1_09++;
      if( 2.25<Eabs31 && Eabs31<=2.50 ) N1_10++;
      if( 2.50<Eabs31 && Eabs31<=2.75 ) N1_11++;
      if( 2.75<Eabs31 && Eabs31<=3.00 ) N1_12++;
    }
  cout << "31 " << "0.00 " << N1_01 << endl;
  cout << "31 " << "0.25 " << N1_02 << endl;
  cout << "31 " << "0.50 " << N1_03 << endl;
  cout << "31 " << "0.75 " << N1_04 << endl;
  cout << "31 " << "1.00 " << N1_05 << endl;
  cout << "31 " << "1.25 " << N1_06 << endl;
  cout << "31 " << "1.50 " << N1_07 << endl;
  cout << "31 " << "1.75 " << N1_08 << endl;
  cout << "31 " << "2.00 " << N1_09 << endl;
  cout << "31 " << "2.25 " << N1_10 << endl;
  cout << "31 " << "2.50 " << N1_11 << endl;
  cout << "31 " << "2.75 " << N1_12 << endl;

  double Eabs32;
  B4->SetBranchAddress("Eabs32",&Eabs32);
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
      if( 0.00<Eabs32 && Eabs32<=0.25 ) N2_01++;
      if( 0.25<Eabs32 && Eabs32<=0.50 ) N2_02++;
      if( 0.50<Eabs32 && Eabs32<=0.75 ) N2_03++;
      if( 0.75<Eabs32 && Eabs32<=1.00 ) N2_04++;
      if( 1.00<Eabs32 && Eabs32<=1.25 ) N2_05++;
      if( 1.25<Eabs32 && Eabs32<=1.50 ) N2_06++;
      if( 1.50<Eabs32 && Eabs32<=1.75 ) N2_07++;
      if( 1.75<Eabs32 && Eabs32<=2.00 ) N2_08++;
      if( 2.00<Eabs32 && Eabs32<=2.25 ) N2_09++;
      if( 2.25<Eabs32 && Eabs32<=2.50 ) N2_10++;
      if( 2.50<Eabs32 && Eabs32<=2.75 ) N2_11++;
      if( 2.75<Eabs32 && Eabs32<=3.00 ) N2_12++;
    }
  cout << "32 " << "0.00 " << N2_01 << endl;
  cout << "32 " << "0.25 " << N2_02 << endl;
  cout << "32 " << "0.50 " << N2_03 << endl;
  cout << "32 " << "0.75 " << N2_04 << endl;
  cout << "32 " << "1.00 " << N2_05 << endl;
  cout << "32 " << "1.25 " << N2_06 << endl;
  cout << "32 " << "1.50 " << N2_07 << endl;
  cout << "32 " << "1.75 " << N2_08 << endl;
  cout << "32 " << "2.00 " << N2_09 << endl;
  cout << "32 " << "2.25 " << N2_10 << endl;
  cout << "32 " << "2.50 " << N2_11 << endl;
  cout << "32 " << "2.75 " << N2_12 << endl;

  double Eabs33;
  B4->SetBranchAddress("Eabs33",&Eabs33);
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
      if( 0.00<Eabs33 && Eabs33<=0.25 ) N3_01++;
      if( 0.25<Eabs33 && Eabs33<=0.50 ) N3_02++;
      if( 0.50<Eabs33 && Eabs33<=0.75 ) N3_03++;
      if( 0.75<Eabs33 && Eabs33<=1.00 ) N3_04++;
      if( 1.00<Eabs33 && Eabs33<=1.25 ) N3_05++;
      if( 1.25<Eabs33 && Eabs33<=1.50 ) N3_06++;
      if( 1.50<Eabs33 && Eabs33<=1.75 ) N3_07++;
      if( 1.75<Eabs33 && Eabs33<=2.00 ) N3_08++;
      if( 2.00<Eabs33 && Eabs33<=2.25 ) N3_09++;
      if( 2.25<Eabs33 && Eabs33<=2.50 ) N3_10++;
      if( 2.50<Eabs33 && Eabs33<=2.75 ) N3_11++;
      if( 2.75<Eabs33 && Eabs33<=3.00 ) N3_12++;
    }
  cout << "33 " << "0.00 " << N3_01 << endl;
  cout << "33 " << "0.25 " << N3_02 << endl;
  cout << "33 " << "0.50 " << N3_03 << endl;
  cout << "33 " << "0.75 " << N3_04 << endl;
  cout << "33 " << "1.00 " << N3_05 << endl;
  cout << "33 " << "1.25 " << N3_06 << endl;
  cout << "33 " << "1.50 " << N3_07 << endl;
  cout << "33 " << "1.75 " << N3_08 << endl;
  cout << "33 " << "2.00 " << N3_09 << endl;
  cout << "33 " << "2.25 " << N3_10 << endl;
  cout << "33 " << "2.50 " << N3_11 << endl;
  cout << "33 " << "2.75 " << N3_12 << endl;

  double Eabs34;
  B4->SetBranchAddress("Eabs34",&Eabs34);
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
      if( 0.00<Eabs34 && Eabs34<=0.25 ) N4_01++;
      if( 0.25<Eabs34 && Eabs34<=0.50 ) N4_02++;
      if( 0.50<Eabs34 && Eabs34<=0.75 ) N4_03++;
      if( 0.75<Eabs34 && Eabs34<=1.00 ) N4_04++;
      if( 1.00<Eabs34 && Eabs34<=1.25 ) N4_05++;
      if( 1.25<Eabs34 && Eabs34<=1.50 ) N4_06++;
      if( 1.50<Eabs34 && Eabs34<=1.75 ) N4_07++;
      if( 1.75<Eabs34 && Eabs34<=2.00 ) N4_08++;
      if( 2.00<Eabs34 && Eabs34<=2.25 ) N4_09++;
      if( 2.25<Eabs34 && Eabs34<=2.50 ) N4_10++;
      if( 2.50<Eabs34 && Eabs34<=2.75 ) N4_11++;
      if( 2.75<Eabs34 && Eabs34<=3.00 ) N4_12++;
    }
  cout << "34 " << "0.00 " << N4_01 << endl;
  cout << "34 " << "0.25 " << N4_02 << endl;
  cout << "34 " << "0.50 " << N4_03 << endl;
  cout << "34 " << "0.75 " << N4_04 << endl;
  cout << "34 " << "1.00 " << N4_05 << endl;
  cout << "34 " << "1.25 " << N4_06 << endl;
  cout << "34 " << "1.50 " << N4_07 << endl;
  cout << "34 " << "1.75 " << N4_08 << endl;
  cout << "34 " << "2.00 " << N4_09 << endl;
  cout << "34 " << "2.25 " << N4_10 << endl;
  cout << "34 " << "2.50 " << N4_11 << endl;
  cout << "34 " << "2.75 " << N4_12 << endl;

  double Eabs35;
  B4->SetBranchAddress("Eabs35",&Eabs35);
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
      if( 0.00<Eabs35 && Eabs35<=0.25 ) N5_01++;
      if( 0.25<Eabs35 && Eabs35<=0.50 ) N5_02++;
      if( 0.50<Eabs35 && Eabs35<=0.75 ) N5_03++;
      if( 0.75<Eabs35 && Eabs35<=1.00 ) N5_04++;
      if( 1.00<Eabs35 && Eabs35<=1.25 ) N5_05++;
      if( 1.25<Eabs35 && Eabs35<=1.50 ) N5_06++;
      if( 1.50<Eabs35 && Eabs35<=1.75 ) N5_07++;
      if( 1.75<Eabs35 && Eabs35<=2.00 ) N5_08++;
      if( 2.00<Eabs35 && Eabs35<=2.25 ) N5_09++;
      if( 2.25<Eabs35 && Eabs35<=2.50 ) N5_10++;
      if( 2.50<Eabs35 && Eabs35<=2.75 ) N5_11++;
      if( 2.75<Eabs35 && Eabs35<=3.00 ) N5_12++;
    }
  cout << "35 " << "0.00 " << N5_01 << endl;
  cout << "35 " << "0.25 " << N5_02 << endl;
  cout << "35 " << "0.50 " << N5_03 << endl;
  cout << "35 " << "0.75 " << N5_04 << endl;
  cout << "35 " << "1.00 " << N5_05 << endl;
  cout << "35 " << "1.25 " << N5_06 << endl;
  cout << "35 " << "1.50 " << N5_07 << endl;
  cout << "35 " << "1.75 " << N5_08 << endl;
  cout << "35 " << "2.00 " << N5_09 << endl;
  cout << "35 " << "2.25 " << N5_10 << endl;
  cout << "35 " << "2.50 " << N5_11 << endl;
  cout << "35 " << "2.75 " << N5_12 << endl;

  double Eabs36;
  B4->SetBranchAddress("Eabs36",&Eabs36);
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
      if( 0.00<Eabs36 && Eabs36<=0.25 ) N6_01++;
      if( 0.25<Eabs36 && Eabs36<=0.50 ) N6_02++;
      if( 0.50<Eabs36 && Eabs36<=0.75 ) N6_03++;
      if( 0.75<Eabs36 && Eabs36<=1.00 ) N6_04++;
      if( 1.00<Eabs36 && Eabs36<=1.25 ) N6_05++;
      if( 1.25<Eabs36 && Eabs36<=1.50 ) N6_06++;
      if( 1.50<Eabs36 && Eabs36<=1.75 ) N6_07++;
      if( 1.75<Eabs36 && Eabs36<=2.00 ) N6_08++;
      if( 2.00<Eabs36 && Eabs36<=2.25 ) N6_09++;
      if( 2.25<Eabs36 && Eabs36<=2.50 ) N6_10++;
      if( 2.50<Eabs36 && Eabs36<=2.75 ) N6_11++;
      if( 2.75<Eabs36 && Eabs36<=3.00 ) N6_12++;
    }
  cout << "36 " << "0.00 " << N6_01 << endl;
  cout << "36 " << "0.25 " << N6_02 << endl;
  cout << "36 " << "0.50 " << N6_03 << endl;
  cout << "36 " << "0.75 " << N6_04 << endl;
  cout << "36 " << "1.00 " << N6_05 << endl;
  cout << "36 " << "1.25 " << N6_06 << endl;
  cout << "36 " << "1.50 " << N6_07 << endl;
  cout << "36 " << "1.75 " << N6_08 << endl;
  cout << "36 " << "2.00 " << N6_09 << endl;
  cout << "36 " << "2.25 " << N6_10 << endl;
  cout << "36 " << "2.50 " << N6_11 << endl;
  cout << "36 " << "2.75 " << N6_12 << endl;

  double Eabs37;
  B4->SetBranchAddress("Eabs37",&Eabs37);
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
      if( 0.00<Eabs37 && Eabs37<=0.25 ) N7_01++;
      if( 0.25<Eabs37 && Eabs37<=0.50 ) N7_02++;
      if( 0.50<Eabs37 && Eabs37<=0.75 ) N7_03++;
      if( 0.75<Eabs37 && Eabs37<=1.00 ) N7_04++;
      if( 1.00<Eabs37 && Eabs37<=1.25 ) N7_05++;
      if( 1.25<Eabs37 && Eabs37<=1.50 ) N7_06++;
      if( 1.50<Eabs37 && Eabs37<=1.75 ) N7_07++;
      if( 1.75<Eabs37 && Eabs37<=2.00 ) N7_08++;
      if( 2.00<Eabs37 && Eabs37<=2.25 ) N7_09++;
      if( 2.25<Eabs37 && Eabs37<=2.50 ) N7_10++;
      if( 2.50<Eabs37 && Eabs37<=2.75 ) N7_11++;
      if( 2.75<Eabs37 && Eabs37<=3.00 ) N7_12++;
    }
  cout << "37 " << "0.00 " << N7_01 << endl;
  cout << "37 " << "0.25 " << N7_02 << endl;
  cout << "37 " << "0.50 " << N7_03 << endl;
  cout << "37 " << "0.75 " << N7_04 << endl;
  cout << "37 " << "1.00 " << N7_05 << endl;
  cout << "37 " << "1.25 " << N7_06 << endl;
  cout << "37 " << "1.50 " << N7_07 << endl;
  cout << "37 " << "1.75 " << N7_08 << endl;
  cout << "37 " << "2.00 " << N7_09 << endl;
  cout << "37 " << "2.25 " << N7_10 << endl;
  cout << "37 " << "2.50 " << N7_11 << endl;
  cout << "37 " << "2.75 " << N7_12 << endl;

  double Eabs38;
  B4->SetBranchAddress("Eabs38",&Eabs38);
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
      if( 0.00<Eabs38 && Eabs38<=0.25 ) N8_01++;
      if( 0.25<Eabs38 && Eabs38<=0.50 ) N8_02++;
      if( 0.50<Eabs38 && Eabs38<=0.75 ) N8_03++;
      if( 0.75<Eabs38 && Eabs38<=1.00 ) N8_04++;
      if( 1.00<Eabs38 && Eabs38<=1.25 ) N8_05++;
      if( 1.25<Eabs38 && Eabs38<=1.50 ) N8_06++;
      if( 1.50<Eabs38 && Eabs38<=1.75 ) N8_07++;
      if( 1.75<Eabs38 && Eabs38<=2.00 ) N8_08++;
      if( 2.00<Eabs38 && Eabs38<=2.25 ) N8_09++;
      if( 2.25<Eabs38 && Eabs38<=2.50 ) N8_10++;
      if( 2.50<Eabs38 && Eabs38<=2.75 ) N8_11++;
      if( 2.75<Eabs38 && Eabs38<=3.00 ) N8_12++;
    }
  cout << "38 " << "0.00 " << N8_01 << endl;
  cout << "38 " << "0.25 " << N8_02 << endl;
  cout << "38 " << "0.50 " << N8_03 << endl;
  cout << "38 " << "0.75 " << N8_04 << endl;
  cout << "38 " << "1.00 " << N8_05 << endl;
  cout << "38 " << "1.25 " << N8_06 << endl;
  cout << "38 " << "1.50 " << N8_07 << endl;
  cout << "38 " << "1.75 " << N8_08 << endl;
  cout << "38 " << "2.00 " << N8_09 << endl;
  cout << "38 " << "2.25 " << N8_10 << endl;
  cout << "38 " << "2.50 " << N8_11 << endl;
  cout << "38 " << "2.75 " << N8_12 << endl;

  double Eabs39;
  B4->SetBranchAddress("Eabs39",&Eabs39);
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
      if( 0.00<Eabs39 && Eabs39<=0.25 ) N9_01++;
      if( 0.25<Eabs39 && Eabs39<=0.50 ) N9_02++;
      if( 0.50<Eabs39 && Eabs39<=0.75 ) N9_03++;
      if( 0.75<Eabs39 && Eabs39<=1.00 ) N9_04++;
      if( 1.00<Eabs39 && Eabs39<=1.25 ) N9_05++;
      if( 1.25<Eabs39 && Eabs39<=1.50 ) N9_06++;
      if( 1.50<Eabs39 && Eabs39<=1.75 ) N9_07++;
      if( 1.75<Eabs39 && Eabs39<=2.00 ) N9_08++;
      if( 2.00<Eabs39 && Eabs39<=2.25 ) N9_09++;
      if( 2.25<Eabs39 && Eabs39<=2.50 ) N9_10++;
      if( 2.50<Eabs39 && Eabs39<=2.75 ) N9_11++;
      if( 2.75<Eabs39 && Eabs39<=3.00 ) N9_12++;
    }
  cout << "39 " << "0.00 " << N9_01 << endl;
  cout << "39 " << "0.25 " << N9_02 << endl;
  cout << "39 " << "0.50 " << N9_03 << endl;
  cout << "39 " << "0.75 " << N9_04 << endl;
  cout << "39 " << "1.00 " << N9_05 << endl;
  cout << "39 " << "1.25 " << N9_06 << endl;
  cout << "39 " << "1.50 " << N9_07 << endl;
  cout << "39 " << "1.75 " << N9_08 << endl;
  cout << "39 " << "2.00 " << N9_09 << endl;
  cout << "39 " << "2.25 " << N9_10 << endl;
  cout << "39 " << "2.50 " << N9_11 << endl;
  cout << "39 " << "2.75 " << N9_12 << endl;
}
