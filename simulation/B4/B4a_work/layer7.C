{
  gROOT->Reset();
  TFile f("B4.root");

  int Event = B4->GetEntries();

  double Eabs70;
  B4->SetBranchAddress("Eabs70",&Eabs70);
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
      if( 0.00<Eabs70 && Eabs70<=0.25 ) N0_01++;
      if( 0.25<Eabs70 && Eabs70<=0.50 ) N0_02++;
      if( 0.50<Eabs70 && Eabs70<=0.75 ) N0_03++;
      if( 0.75<Eabs70 && Eabs70<=1.00 ) N0_04++;
      if( 1.00<Eabs70 && Eabs70<=1.25 ) N0_05++;
      if( 1.25<Eabs70 && Eabs70<=1.50 ) N0_06++;
      if( 1.50<Eabs70 && Eabs70<=1.75 ) N0_07++;
      if( 1.75<Eabs70 && Eabs70<=2.00 ) N0_08++;
      if( 2.00<Eabs70 && Eabs70<=2.25 ) N0_09++;
      if( 2.25<Eabs70 && Eabs70<=2.50 ) N0_10++;
      if( 2.50<Eabs70 && Eabs70<=2.75 ) N0_11++;
      if( 2.75<Eabs70 && Eabs70<=3.00 ) N0_12++;
    }  
  cout << "70 " << "0.00 " << N0_01 << endl;
  cout << "70 " << "0.25 " << N0_02 << endl;
  cout << "70 " << "0.50 " << N0_03 << endl;
  cout << "70 " << "0.75 " << N0_04 << endl;
  cout << "70 " << "1.00 " << N0_05 << endl;
  cout << "70 " << "1.25 " << N0_06 << endl;
  cout << "70 " << "1.50 " << N0_07 << endl;
  cout << "70 " << "1.75 " << N0_08 << endl;
  cout << "70 " << "2.00 " << N0_09 << endl;
  cout << "70 " << "2.25 " << N0_10 << endl;
  cout << "70 " << "2.50 " << N0_11 << endl;
  cout << "70 " << "2.75 " << N0_12 << endl;

  double Eabs71;
  B4->SetBranchAddress("Eabs71",&Eabs71);
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
      if( 0.00<Eabs71 && Eabs71<=0.25 ) N1_01++;
      if( 0.25<Eabs71 && Eabs71<=0.50 ) N1_02++;
      if( 0.50<Eabs71 && Eabs71<=0.75 ) N1_03++;
      if( 0.75<Eabs71 && Eabs71<=1.00 ) N1_04++;
      if( 1.00<Eabs71 && Eabs71<=1.25 ) N1_05++;
      if( 1.25<Eabs71 && Eabs71<=1.50 ) N1_06++;
      if( 1.50<Eabs71 && Eabs71<=1.75 ) N1_07++;
      if( 1.75<Eabs71 && Eabs71<=2.00 ) N1_08++;
      if( 2.00<Eabs71 && Eabs71<=2.25 ) N1_09++;
      if( 2.25<Eabs71 && Eabs71<=2.50 ) N1_10++;
      if( 2.50<Eabs71 && Eabs71<=2.75 ) N1_11++;
      if( 2.75<Eabs71 && Eabs71<=3.00 ) N1_12++;
    }
  cout << "71 " << "0.00 " << N1_01 << endl;
  cout << "71 " << "0.25 " << N1_02 << endl;
  cout << "71 " << "0.50 " << N1_03 << endl;
  cout << "71 " << "0.75 " << N1_04 << endl;
  cout << "71 " << "1.00 " << N1_05 << endl;
  cout << "71 " << "1.25 " << N1_06 << endl;
  cout << "71 " << "1.50 " << N1_07 << endl;
  cout << "71 " << "1.75 " << N1_08 << endl;
  cout << "71 " << "2.00 " << N1_09 << endl;
  cout << "71 " << "2.25 " << N1_10 << endl;
  cout << "71 " << "2.50 " << N1_11 << endl;
  cout << "71 " << "2.75 " << N1_12 << endl;

  double Eabs72;
  B4->SetBranchAddress("Eabs72",&Eabs72);
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
      if( 0.00<Eabs72 && Eabs72<=0.25 ) N2_01++;
      if( 0.25<Eabs72 && Eabs72<=0.50 ) N2_02++;
      if( 0.50<Eabs72 && Eabs72<=0.75 ) N2_03++;
      if( 0.75<Eabs72 && Eabs72<=1.00 ) N2_04++;
      if( 1.00<Eabs72 && Eabs72<=1.25 ) N2_05++;
      if( 1.25<Eabs72 && Eabs72<=1.50 ) N2_06++;
      if( 1.50<Eabs72 && Eabs72<=1.75 ) N2_07++;
      if( 1.75<Eabs72 && Eabs72<=2.00 ) N2_08++;
      if( 2.00<Eabs72 && Eabs72<=2.25 ) N2_09++;
      if( 2.25<Eabs72 && Eabs72<=2.50 ) N2_10++;
      if( 2.50<Eabs72 && Eabs72<=2.75 ) N2_11++;
      if( 2.75<Eabs72 && Eabs72<=3.00 ) N2_12++;
    }
  cout << "72 " << "0.00 " << N2_01 << endl;
  cout << "72 " << "0.25 " << N2_02 << endl;
  cout << "72 " << "0.50 " << N2_03 << endl;
  cout << "72 " << "0.75 " << N2_04 << endl;
  cout << "72 " << "1.00 " << N2_05 << endl;
  cout << "72 " << "1.25 " << N2_06 << endl;
  cout << "72 " << "1.50 " << N2_07 << endl;
  cout << "72 " << "1.75 " << N2_08 << endl;
  cout << "72 " << "2.00 " << N2_09 << endl;
  cout << "72 " << "2.25 " << N2_10 << endl;
  cout << "72 " << "2.50 " << N2_11 << endl;
  cout << "72 " << "2.75 " << N2_12 << endl;

  double Eabs73;
  B4->SetBranchAddress("Eabs73",&Eabs73);
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
      if( 0.00<Eabs73 && Eabs73<=0.25 ) N3_01++;
      if( 0.25<Eabs73 && Eabs73<=0.50 ) N3_02++;
      if( 0.50<Eabs73 && Eabs73<=0.75 ) N3_03++;
      if( 0.75<Eabs73 && Eabs73<=1.00 ) N3_04++;
      if( 1.00<Eabs73 && Eabs73<=1.25 ) N3_05++;
      if( 1.25<Eabs73 && Eabs73<=1.50 ) N3_06++;
      if( 1.50<Eabs73 && Eabs73<=1.75 ) N3_07++;
      if( 1.75<Eabs73 && Eabs73<=2.00 ) N3_08++;
      if( 2.00<Eabs73 && Eabs73<=2.25 ) N3_09++;
      if( 2.25<Eabs73 && Eabs73<=2.50 ) N3_10++;
      if( 2.50<Eabs73 && Eabs73<=2.75 ) N3_11++;
      if( 2.75<Eabs73 && Eabs73<=3.00 ) N3_12++;
    }
  cout << "73 " << "0.00 " << N3_01 << endl;
  cout << "73 " << "0.25 " << N3_02 << endl;
  cout << "73 " << "0.50 " << N3_03 << endl;
  cout << "73 " << "0.75 " << N3_04 << endl;
  cout << "73 " << "1.00 " << N3_05 << endl;
  cout << "73 " << "1.25 " << N3_06 << endl;
  cout << "73 " << "1.50 " << N3_07 << endl;
  cout << "73 " << "1.75 " << N3_08 << endl;
  cout << "73 " << "2.00 " << N3_09 << endl;
  cout << "73 " << "2.25 " << N3_10 << endl;
  cout << "73 " << "2.50 " << N3_11 << endl;
  cout << "73 " << "2.75 " << N3_12 << endl;

  double Eabs74;
  B4->SetBranchAddress("Eabs74",&Eabs74);
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
      if( 0.00<Eabs74 && Eabs74<=0.25 ) N4_01++;
      if( 0.25<Eabs74 && Eabs74<=0.50 ) N4_02++;
      if( 0.50<Eabs74 && Eabs74<=0.75 ) N4_03++;
      if( 0.75<Eabs74 && Eabs74<=1.00 ) N4_04++;
      if( 1.00<Eabs74 && Eabs74<=1.25 ) N4_05++;
      if( 1.25<Eabs74 && Eabs74<=1.50 ) N4_06++;
      if( 1.50<Eabs74 && Eabs74<=1.75 ) N4_07++;
      if( 1.75<Eabs74 && Eabs74<=2.00 ) N4_08++;
      if( 2.00<Eabs74 && Eabs74<=2.25 ) N4_09++;
      if( 2.25<Eabs74 && Eabs74<=2.50 ) N4_10++;
      if( 2.50<Eabs74 && Eabs74<=2.75 ) N4_11++;
      if( 2.75<Eabs74 && Eabs74<=3.00 ) N4_12++;
    }
  cout << "74 " << "0.00 " << N4_01 << endl;
  cout << "74 " << "0.25 " << N4_02 << endl;
  cout << "74 " << "0.50 " << N4_03 << endl;
  cout << "74 " << "0.75 " << N4_04 << endl;
  cout << "74 " << "1.00 " << N4_05 << endl;
  cout << "74 " << "1.25 " << N4_06 << endl;
  cout << "74 " << "1.50 " << N4_07 << endl;
  cout << "74 " << "1.75 " << N4_08 << endl;
  cout << "74 " << "2.00 " << N4_09 << endl;
  cout << "74 " << "2.25 " << N4_10 << endl;
  cout << "74 " << "2.50 " << N4_11 << endl;
  cout << "74 " << "2.75 " << N4_12 << endl;

  double Eabs75;
  B4->SetBranchAddress("Eabs75",&Eabs75);
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
      if( 0.00<Eabs75 && Eabs75<=0.25 ) N5_01++;
      if( 0.25<Eabs75 && Eabs75<=0.50 ) N5_02++;
      if( 0.50<Eabs75 && Eabs75<=0.75 ) N5_03++;
      if( 0.75<Eabs75 && Eabs75<=1.00 ) N5_04++;
      if( 1.00<Eabs75 && Eabs75<=1.25 ) N5_05++;
      if( 1.25<Eabs75 && Eabs75<=1.50 ) N5_06++;
      if( 1.50<Eabs75 && Eabs75<=1.75 ) N5_07++;
      if( 1.75<Eabs75 && Eabs75<=2.00 ) N5_08++;
      if( 2.00<Eabs75 && Eabs75<=2.25 ) N5_09++;
      if( 2.25<Eabs75 && Eabs75<=2.50 ) N5_10++;
      if( 2.50<Eabs75 && Eabs75<=2.75 ) N5_11++;
      if( 2.75<Eabs75 && Eabs75<=3.00 ) N5_12++;
    }
  cout << "75 " << "0.00 " << N5_01 << endl;
  cout << "75 " << "0.25 " << N5_02 << endl;
  cout << "75 " << "0.50 " << N5_03 << endl;
  cout << "75 " << "0.75 " << N5_04 << endl;
  cout << "75 " << "1.00 " << N5_05 << endl;
  cout << "75 " << "1.25 " << N5_06 << endl;
  cout << "75 " << "1.50 " << N5_07 << endl;
  cout << "75 " << "1.75 " << N5_08 << endl;
  cout << "75 " << "2.00 " << N5_09 << endl;
  cout << "75 " << "2.25 " << N5_10 << endl;
  cout << "75 " << "2.50 " << N5_11 << endl;
  cout << "75 " << "2.75 " << N5_12 << endl;

  double Eabs76;
  B4->SetBranchAddress("Eabs76",&Eabs76);
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
      if( 0.00<Eabs76 && Eabs76<=0.25 ) N6_01++;
      if( 0.25<Eabs76 && Eabs76<=0.50 ) N6_02++;
      if( 0.50<Eabs76 && Eabs76<=0.75 ) N6_03++;
      if( 0.75<Eabs76 && Eabs76<=1.00 ) N6_04++;
      if( 1.00<Eabs76 && Eabs76<=1.25 ) N6_05++;
      if( 1.25<Eabs76 && Eabs76<=1.50 ) N6_06++;
      if( 1.50<Eabs76 && Eabs76<=1.75 ) N6_07++;
      if( 1.75<Eabs76 && Eabs76<=2.00 ) N6_08++;
      if( 2.00<Eabs76 && Eabs76<=2.25 ) N6_09++;
      if( 2.25<Eabs76 && Eabs76<=2.50 ) N6_10++;
      if( 2.50<Eabs76 && Eabs76<=2.75 ) N6_11++;
      if( 2.75<Eabs76 && Eabs76<=3.00 ) N6_12++;
    }
  cout << "76 " << "0.00 " << N6_01 << endl;
  cout << "76 " << "0.25 " << N6_02 << endl;
  cout << "76 " << "0.50 " << N6_03 << endl;
  cout << "76 " << "0.75 " << N6_04 << endl;
  cout << "76 " << "1.00 " << N6_05 << endl;
  cout << "76 " << "1.25 " << N6_06 << endl;
  cout << "76 " << "1.50 " << N6_07 << endl;
  cout << "76 " << "1.75 " << N6_08 << endl;
  cout << "76 " << "2.00 " << N6_09 << endl;
  cout << "76 " << "2.25 " << N6_10 << endl;
  cout << "76 " << "2.50 " << N6_11 << endl;
  cout << "76 " << "2.75 " << N6_12 << endl;

  double Eabs77;
  B4->SetBranchAddress("Eabs77",&Eabs77);
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
      if( 0.00<Eabs77 && Eabs77<=0.25 ) N7_01++;
      if( 0.25<Eabs77 && Eabs77<=0.50 ) N7_02++;
      if( 0.50<Eabs77 && Eabs77<=0.75 ) N7_03++;
      if( 0.75<Eabs77 && Eabs77<=1.00 ) N7_04++;
      if( 1.00<Eabs77 && Eabs77<=1.25 ) N7_05++;
      if( 1.25<Eabs77 && Eabs77<=1.50 ) N7_06++;
      if( 1.50<Eabs77 && Eabs77<=1.75 ) N7_07++;
      if( 1.75<Eabs77 && Eabs77<=2.00 ) N7_08++;
      if( 2.00<Eabs77 && Eabs77<=2.25 ) N7_09++;
      if( 2.25<Eabs77 && Eabs77<=2.50 ) N7_10++;
      if( 2.50<Eabs77 && Eabs77<=2.75 ) N7_11++;
      if( 2.75<Eabs77 && Eabs77<=3.00 ) N7_12++;
    }
  cout << "77 " << "0.00 " << N7_01 << endl;
  cout << "77 " << "0.25 " << N7_02 << endl;
  cout << "77 " << "0.50 " << N7_03 << endl;
  cout << "77 " << "0.75 " << N7_04 << endl;
  cout << "77 " << "1.00 " << N7_05 << endl;
  cout << "77 " << "1.25 " << N7_06 << endl;
  cout << "77 " << "1.50 " << N7_07 << endl;
  cout << "77 " << "1.75 " << N7_08 << endl;
  cout << "77 " << "2.00 " << N7_09 << endl;
  cout << "77 " << "2.25 " << N7_10 << endl;
  cout << "77 " << "2.50 " << N7_11 << endl;
  cout << "77 " << "2.75 " << N7_12 << endl;

  double Eabs78;
  B4->SetBranchAddress("Eabs78",&Eabs78);
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
      if( 0.00<Eabs78 && Eabs78<=0.25 ) N8_01++;
      if( 0.25<Eabs78 && Eabs78<=0.50 ) N8_02++;
      if( 0.50<Eabs78 && Eabs78<=0.75 ) N8_03++;
      if( 0.75<Eabs78 && Eabs78<=1.00 ) N8_04++;
      if( 1.00<Eabs78 && Eabs78<=1.25 ) N8_05++;
      if( 1.25<Eabs78 && Eabs78<=1.50 ) N8_06++;
      if( 1.50<Eabs78 && Eabs78<=1.75 ) N8_07++;
      if( 1.75<Eabs78 && Eabs78<=2.00 ) N8_08++;
      if( 2.00<Eabs78 && Eabs78<=2.25 ) N8_09++;
      if( 2.25<Eabs78 && Eabs78<=2.50 ) N8_10++;
      if( 2.50<Eabs78 && Eabs78<=2.75 ) N8_11++;
      if( 2.75<Eabs78 && Eabs78<=3.00 ) N8_12++;
    }
  cout << "78 " << "0.00 " << N8_01 << endl;
  cout << "78 " << "0.25 " << N8_02 << endl;
  cout << "78 " << "0.50 " << N8_03 << endl;
  cout << "78 " << "0.75 " << N8_04 << endl;
  cout << "78 " << "1.00 " << N8_05 << endl;
  cout << "78 " << "1.25 " << N8_06 << endl;
  cout << "78 " << "1.50 " << N8_07 << endl;
  cout << "78 " << "1.75 " << N8_08 << endl;
  cout << "78 " << "2.00 " << N8_09 << endl;
  cout << "78 " << "2.25 " << N8_10 << endl;
  cout << "78 " << "2.50 " << N8_11 << endl;
  cout << "78 " << "2.75 " << N8_12 << endl;

  double Eabs79;
  B4->SetBranchAddress("Eabs79",&Eabs79);
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
      if( 0.00<Eabs79 && Eabs79<=0.25 ) N9_01++;
      if( 0.25<Eabs79 && Eabs79<=0.50 ) N9_02++;
      if( 0.50<Eabs79 && Eabs79<=0.75 ) N9_03++;
      if( 0.75<Eabs79 && Eabs79<=1.00 ) N9_04++;
      if( 1.00<Eabs79 && Eabs79<=1.25 ) N9_05++;
      if( 1.25<Eabs79 && Eabs79<=1.50 ) N9_06++;
      if( 1.50<Eabs79 && Eabs79<=1.75 ) N9_07++;
      if( 1.75<Eabs79 && Eabs79<=2.00 ) N9_08++;
      if( 2.00<Eabs79 && Eabs79<=2.25 ) N9_09++;
      if( 2.25<Eabs79 && Eabs79<=2.50 ) N9_10++;
      if( 2.50<Eabs79 && Eabs79<=2.75 ) N9_11++;
      if( 2.75<Eabs79 && Eabs79<=3.00 ) N9_12++;
    }
  cout << "79 " << "0.00 " << N9_01 << endl;
  cout << "79 " << "0.25 " << N9_02 << endl;
  cout << "79 " << "0.50 " << N9_03 << endl;
  cout << "79 " << "0.75 " << N9_04 << endl;
  cout << "79 " << "1.00 " << N9_05 << endl;
  cout << "79 " << "1.25 " << N9_06 << endl;
  cout << "79 " << "1.50 " << N9_07 << endl;
  cout << "79 " << "1.75 " << N9_08 << endl;
  cout << "79 " << "2.00 " << N9_09 << endl;
  cout << "79 " << "2.25 " << N9_10 << endl;
  cout << "79 " << "2.50 " << N9_11 << endl;
  cout << "79 " << "2.75 " << N9_12 << endl;
}
