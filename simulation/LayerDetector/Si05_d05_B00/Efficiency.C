{
  gROOT->Reset();
  gStyle->SetOptStat(kFALSE);

  TCanvas c1;
  
  
  TFile f("electron.root");

  int Event = B4->GetEntries();
  double Eff[100];

  double Eabs0;
  int N0 = 0;
  int T0 = 0;
  B4->SetBranchAddress("Eabs0",&Eabs0);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs0 && Eabs0<=1.75 ) N0++;
      if( 0.00<Eabs0 && Eabs0<=3.00 ) T0++; }
  Eff[0] = (double) N0 / Event;

  double Eabs1;
  int N1 = 0;
  int T1 = 0;
  B4->SetBranchAddress("Eabs1",&Eabs1);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs1 && Eabs1<=1.75 ) N1++;
      if( 0.00<Eabs1 && Eabs1<=3.00 ) T1++; }
  Eff[1] = (double) N1 / Event;

  double Eabs2;
  int N2 = 0;
  int T2 = 0;
  B4->SetBranchAddress("Eabs2",&Eabs2);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs2 && Eabs2<=1.75 ) N2++;
      if( 0.00<Eabs2 && Eabs2<=3.00 ) T2++; }
  Eff[2] = (double) N2 / Event;

  double Eabs3;
  int N3 = 0;
  int T3 = 0;
  B4->SetBranchAddress("Eabs3",&Eabs3);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs3 && Eabs3<=1.75 ) N3++;
      if( 0.00<Eabs3 && Eabs3<=3.00 ) T3++; }
  Eff[3] = (double) N3 / Event;

  double Eabs4;
  int N4 = 0;
  int T4 = 0;
  B4->SetBranchAddress("Eabs4",&Eabs4);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs4 && Eabs4<=1.75 ) N4++;
      if( 0.00<Eabs4 && Eabs4<=3.00 ) T4++; }
  Eff[4] = (double) N4 / Event;

  double Eabs5;
  int N5 = 0;
  int T5 = 0;
  B4->SetBranchAddress("Eabs5",&Eabs5);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs5 && Eabs5<=1.75 ) N5++;
      if( 0.00<Eabs5 && Eabs5<=3.00 ) T5++; }
  Eff[5] = (double) N5 / Event;

  double Eabs6;
  int N6 = 0;
  int T6 = 0;
  B4->SetBranchAddress("Eabs6",&Eabs6);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs6 && Eabs6<=1.75 ) N6++;
      if( 0.00<Eabs6 && Eabs6<=3.00 ) T6++; }
  Eff[6] = (double) N6 / Event;

  double Eabs7;
  int N7 = 0;
  int T7 = 0;
  B4->SetBranchAddress("Eabs7",&Eabs7);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs7 && Eabs7<=1.75 ) N7++;
      if( 0.00<Eabs7 && Eabs7<=3.00 ) T7++; }
  Eff[7] = (double) N7 / Event;

  double Eabs8;
  int N8 = 0;
  int T8 = 0;
  B4->SetBranchAddress("Eabs8",&Eabs8);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs8 && Eabs8<=1.75 ) N8++;
      if( 0.00<Eabs8 && Eabs8<=3.00 ) T8++; }
  Eff[8] = (double) N8 / Event;

  double Eabs9;
  int N9 = 0;
  int T9 = 0;
  B4->SetBranchAddress("Eabs9",&Eabs9);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs9 && Eabs9<=1.75 ) N9++;
      if( 0.00<Eabs9 && Eabs9<=3.00 ) T9++; }
  Eff[9] = (double) N9 / Event;

  double Eabs10;
  int N10 = 0;
  int T10 = 0;
  B4->SetBranchAddress("Eabs10",&Eabs10);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs10 && Eabs10<=1.75 ) N10++;
      if( 0.00<Eabs10 && Eabs10<=3.00 ) T10++; }
  Eff[10] = (double) N10 / Event;

  double Eabs11;
  int N11 = 0;
  int T11 = 0;
  B4->SetBranchAddress("Eabs11",&Eabs11);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs11 && Eabs11<=1.75 ) N11++;
      if( 0.00<Eabs11 && Eabs11<=3.00 ) T11++; }
  Eff[11] = (double) N11 / Event;

  double Eabs12;
  int N12 = 0;
  int T12 = 0;
  B4->SetBranchAddress("Eabs12",&Eabs12);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs12 && Eabs12<=1.75 ) N12++;
      if( 0.00<Eabs12 && Eabs12<=3.00 ) T12++; }
  Eff[12] = (double) N12 / Event;

  double Eabs13;
  int N13 = 0;
  int T13 = 0;
  B4->SetBranchAddress("Eabs13",&Eabs13);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs13 && Eabs13<=1.75 ) N13++;
      if( 0.00<Eabs13 && Eabs13<=3.00 ) T13++; }
  Eff[13] = (double) N13 / Event;

  double Eabs14;
  int N14 = 0;
  int T14 = 0;
  B4->SetBranchAddress("Eabs14",&Eabs14);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs14 && Eabs14<=1.75 ) N14++;
      if( 0.00<Eabs14 && Eabs14<=3.00 ) T14++; }
  Eff[14] = (double) N14 / Event;

  double Eabs15;
  int N15 = 0;
  int T15 = 0;
  B4->SetBranchAddress("Eabs15",&Eabs15);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs15 && Eabs15<=1.75 ) N15++;
      if( 0.00<Eabs15 && Eabs15<=3.00 ) T15++; }
  Eff[15] = (double) N15 / Event;

  double Eabs16;
  int N16 = 0;
  int T16 = 0;
  B4->SetBranchAddress("Eabs16",&Eabs16);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs16 && Eabs16<=1.75 ) N16++;
      if( 0.00<Eabs16 && Eabs16<=3.00 ) T16++; }
  Eff[16] = (double) N16 / Event;

  double Eabs17;
  int N17 = 0;
  int T17 = 0;
  B4->SetBranchAddress("Eabs17",&Eabs17);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs17 && Eabs17<=1.75 ) N17++;
      if( 0.00<Eabs17 && Eabs17<=3.00 ) T17++; }
  Eff[17] = (double) N17 / Event;

  double Eabs18;
  int N18 = 0;
  int T18 = 0;
  B4->SetBranchAddress("Eabs18",&Eabs18);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs18 && Eabs18<=1.75 ) N18++;
      if( 0.00<Eabs18 && Eabs18<=3.00 ) T18++; }
  Eff[18] = (double) N18 / Event;

  double Eabs19;
  int N19 = 0;
  int T19 = 0;
  B4->SetBranchAddress("Eabs19",&Eabs19);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs19 && Eabs19<=1.75 ) N19++;
      if( 0.00<Eabs19 && Eabs19<=3.00 ) T19++; }
  Eff[19] = (double) N19 / Event;

  double Eabs20;
  int N20 = 0;
  int T20 = 0;
  B4->SetBranchAddress("Eabs20",&Eabs20);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs20 && Eabs20<=1.75 ) N20++;
      if( 0.00<Eabs20 && Eabs20<=3.00 ) T20++; }
  Eff[20] = (double) N20 / Event;

  double Eabs21;
  int N21 = 0;
  int T21 = 0;
  B4->SetBranchAddress("Eabs21",&Eabs21);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs21 && Eabs21<=1.75 ) N21++;
      if( 0.00<Eabs21 && Eabs21<=3.00 ) T21++; }
  Eff[21] = (double) N21 / Event;

  double Eabs22;
  int N22 = 0;
  int T22 = 0;
  B4->SetBranchAddress("Eabs22",&Eabs22);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs22 && Eabs22<=1.75 ) N22++;
      if( 0.00<Eabs22 && Eabs22<=3.00 ) T22++; }
  Eff[22] = (double) N22 / Event;

  double Eabs23;
  int N23 = 0;
  int T23 = 0;
  B4->SetBranchAddress("Eabs23",&Eabs23);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs23 && Eabs23<=1.75 ) N23++;
      if( 0.00<Eabs23 && Eabs23<=3.00 ) T23++; }
  Eff[23] = (double) N23 / Event;

  double Eabs24;
  int N24 = 0;
  int T24 = 0;
  B4->SetBranchAddress("Eabs24",&Eabs24);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs24 && Eabs24<=1.75 ) N24++;
      if( 0.00<Eabs24 && Eabs24<=3.00 ) T24++; }
  Eff[24] = (double) N24 / Event;

  double Eabs25;
  int N25 = 0;
  int T25 = 0;
  B4->SetBranchAddress("Eabs25",&Eabs25);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs25 && Eabs25<=1.75 ) N25++;
      if( 0.00<Eabs25 && Eabs25<=3.00 ) T25++; }
  Eff[25] = (double) N25 / Event;

  double Eabs26;
  int N26 = 0;
  int T26 = 0;
  B4->SetBranchAddress("Eabs26",&Eabs26);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs26 && Eabs26<=1.75 ) N26++;
      if( 0.00<Eabs26 && Eabs26<=3.00 ) T26++; }
  Eff[26] = (double) N26 / Event;

  double Eabs27;
  int N27 = 0;
  int T27 = 0;
  B4->SetBranchAddress("Eabs27",&Eabs27);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs27 && Eabs27<=1.75 ) N27++;
      if( 0.00<Eabs27 && Eabs27<=3.00 ) T27++; }
  Eff[27] = (double) N27 / Event;

  double Eabs28;
  int N28 = 0;
  int T28 = 0;
  B4->SetBranchAddress("Eabs28",&Eabs28);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs28 && Eabs28<=1.75 ) N28++;
      if( 0.00<Eabs28 && Eabs28<=3.00 ) T28++; }
  Eff[28] = (double) N28 / Event;

  double Eabs29;
  int N29 = 0;
  int T29 = 0;
  B4->SetBranchAddress("Eabs29",&Eabs29);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs29 && Eabs29<=1.75 ) N29++;
      if( 0.00<Eabs29 && Eabs29<=3.00 ) T29++; }
  Eff[29] = (double) N29 / Event;

  double Eabs30;
  int N30 = 0;
  int T30 = 0;
  B4->SetBranchAddress("Eabs30",&Eabs30);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs30 && Eabs30<=1.75 ) N30++;
      if( 0.00<Eabs30 && Eabs30<=3.00 ) T30++; }
  Eff[30] = (double) N30 / Event;

  double Eabs31;
  int N31 = 0;
  int T31 = 0;
  B4->SetBranchAddress("Eabs31",&Eabs31);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs31 && Eabs31<=1.75 ) N31++;
      if( 0.00<Eabs31 && Eabs31<=3.00 ) T31++; }
  Eff[31] = (double) N31 / Event;

  double Eabs32;
  int N32 = 0;
  int T32 = 0;
  B4->SetBranchAddress("Eabs32",&Eabs32);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs32 && Eabs32<=1.75 ) N32++;
      if( 0.00<Eabs32 && Eabs32<=3.00 ) T32++; }
  Eff[32] = (double) N32 / Event;

  double Eabs33;
  int N33 = 0;
  int T33 = 0;
  B4->SetBranchAddress("Eabs33",&Eabs33);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs33 && Eabs33<=1.75 ) N33++;
      if( 0.00<Eabs33 && Eabs33<=3.00 ) T33++; }
  Eff[33] = (double) N33 / Event;

  double Eabs34;
  int N34 = 0;
  int T34 = 0;
  B4->SetBranchAddress("Eabs34",&Eabs34);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs34 && Eabs34<=1.75 ) N34++;
      if( 0.00<Eabs34 && Eabs34<=3.00 ) T34++; }
  Eff[34] = (double) N34 / Event;

  double Eabs35;
  int N35 = 0;
  int T35 = 0;
  B4->SetBranchAddress("Eabs35",&Eabs35);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs35 && Eabs35<=1.75 ) N35++;
      if( 0.00<Eabs35 && Eabs35<=3.00 ) T35++; }
  Eff[35] = (double) N35 / Event;

  double Eabs36;
  int N36 = 0;
  int T36 = 0;
  B4->SetBranchAddress("Eabs36",&Eabs36);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs36 && Eabs36<=1.75 ) N36++;
      if( 0.00<Eabs36 && Eabs36<=3.00 ) T36++; }
  Eff[36] = (double) N36 / Event;

  double Eabs37;
  int N37 = 0;
  int T37 = 0;
  B4->SetBranchAddress("Eabs37",&Eabs37);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs37 && Eabs37<=1.75 ) N37++;
      if( 0.00<Eabs37 && Eabs37<=3.00 ) T37++; }
  Eff[37] = (double) N37 / Event;

  double Eabs38;
  int N38 = 0;
  int T38 = 0;
  B4->SetBranchAddress("Eabs38",&Eabs38);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs38 && Eabs38<=1.75 ) N38++;
      if( 0.00<Eabs38 && Eabs38<=3.00 ) T38++; }
  Eff[38] = (double) N38 / Event;

  double Eabs39;
  int N39 = 0;
  int T39 = 0;
  B4->SetBranchAddress("Eabs39",&Eabs39);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs39 && Eabs39<=1.75 ) N39++;
      if( 0.00<Eabs39 && Eabs39<=3.00 ) T39++; }
  Eff[39] = (double) N39 / Event;

  double Eabs40;
  int N40 = 0;
  int T40 = 0;
  B4->SetBranchAddress("Eabs40",&Eabs40);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs40 && Eabs40<=1.75 ) N40++;
      if( 0.00<Eabs40 && Eabs40<=3.00 ) T40++; }
  Eff[40] = (double) N40 / Event;

  double Eabs41;
  int N41 = 0;
  int T41 = 0;
  B4->SetBranchAddress("Eabs41",&Eabs41);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs41 && Eabs41<=1.75 ) N41++;
      if( 0.00<Eabs41 && Eabs41<=3.00 ) T41++; }
  Eff[41] = (double) N41 / Event;

  double Eabs42;
  int N42 = 0;
  int T42 = 0;
  B4->SetBranchAddress("Eabs42",&Eabs42);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs42 && Eabs42<=1.75 ) N42++;
      if( 0.00<Eabs42 && Eabs42<=3.00 ) T42++; }
  Eff[42] = (double) N42 / Event;

  double Eabs43;
  int N43 = 0;
  int T43 = 0;
  B4->SetBranchAddress("Eabs43",&Eabs43);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs43 && Eabs43<=1.75 ) N43++;
      if( 0.00<Eabs43 && Eabs43<=3.00 ) T43++; }
  Eff[43] = (double) N43 / Event;

  double Eabs44;
  int N44 = 0;
  int T44 = 0;
  B4->SetBranchAddress("Eabs44",&Eabs44);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs44 && Eabs44<=1.75 ) N44++;
      if( 0.00<Eabs44 && Eabs44<=3.00 ) T44++; }
  Eff[44] = (double) N44 / Event;

  double Eabs45;
  int N45 = 0;
  int T45 = 0;
  B4->SetBranchAddress("Eabs45",&Eabs45);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs45 && Eabs45<=1.75 ) N45++;
      if( 0.00<Eabs45 && Eabs45<=3.00 ) T45++; }
  Eff[45] = (double) N45 / Event;

  double Eabs46;
  int N46 = 0;
  int T46 = 0;
  B4->SetBranchAddress("Eabs46",&Eabs46);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs46 && Eabs46<=1.75 ) N46++;
      if( 0.00<Eabs46 && Eabs46<=3.00 ) T46++; }
  Eff[46] = (double) N46 / Event;

  double Eabs47;
  int N47 = 0;
  int T47 = 0;
  B4->SetBranchAddress("Eabs47",&Eabs47);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs47 && Eabs47<=1.75 ) N47++;
      if( 0.00<Eabs47 && Eabs47<=3.00 ) T47++; }
  Eff[47] = (double) N47 / Event;

  double Eabs48;
  int N48 = 0;
  int T48 = 0;
  B4->SetBranchAddress("Eabs48",&Eabs48);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs48 && Eabs48<=1.75 ) N48++;
      if( 0.00<Eabs48 && Eabs48<=3.00 ) T48++; }
  Eff[48] = (double) N48 / Event;

  double Eabs49;
  int N49 = 0;
  int T49 = 0;
  B4->SetBranchAddress("Eabs49",&Eabs49);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs49 && Eabs49<=1.75 ) N49++;
      if( 0.00<Eabs49 && Eabs49<=3.00 ) T49++; }
  Eff[49] = (double) N49 / Event;

  double Eabs50;
  int N50 = 0;
  int T50 = 0;
  B4->SetBranchAddress("Eabs50",&Eabs50);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs50 && Eabs50<=1.75 ) N50++;
      if( 0.00<Eabs50 && Eabs50<=3.00 ) T50++; }
  Eff[50] = (double) N50 / Event;

  double Eabs51;
  int N51 = 0;
  int T51 = 0;
  B4->SetBranchAddress("Eabs51",&Eabs51);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs51 && Eabs51<=1.75 ) N51++;
      if( 0.00<Eabs51 && Eabs51<=3.00 ) T51++; }
  Eff[51] = (double) N51 / Event;

  double Eabs52;
  int N52 = 0;
  int T52 = 0;
  B4->SetBranchAddress("Eabs52",&Eabs52);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs52 && Eabs52<=1.75 ) N52++;
      if( 0.00<Eabs52 && Eabs52<=3.00 ) T52++; }
  Eff[52] = (double) N52 / Event;

  double Eabs53;
  int N53 = 0;
  int T53 = 0;
  B4->SetBranchAddress("Eabs53",&Eabs53);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs53 && Eabs53<=1.75 ) N53++;
      if( 0.00<Eabs53 && Eabs53<=3.00 ) T53++; }
  Eff[53] = (double) N53 / Event;

  double Eabs54;
  int N54 = 0;
  int T54 = 0;
  B4->SetBranchAddress("Eabs54",&Eabs54);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs54 && Eabs54<=1.75 ) N54++;
      if( 0.00<Eabs54 && Eabs54<=3.00 ) T54++; }
  Eff[54] = (double) N54 / Event;

  double Eabs55;
  int N55 = 0;
  int T55 = 0;
  B4->SetBranchAddress("Eabs55",&Eabs55);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs55 && Eabs55<=1.75 ) N55++;
      if( 0.00<Eabs55 && Eabs55<=3.00 ) T55++; }
  Eff[55] = (double) N55 / Event;

  double Eabs56;
  int N56 = 0;
  int T56 = 0;
  B4->SetBranchAddress("Eabs56",&Eabs56);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs56 && Eabs56<=1.75 ) N56++;
      if( 0.00<Eabs56 && Eabs56<=3.00 ) T56++; }
  Eff[56] = (double) N56 / Event;

  double Eabs57;
  int N57 = 0;
  int T57 = 0;
  B4->SetBranchAddress("Eabs57",&Eabs57);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs57 && Eabs57<=1.75 ) N57++;
      if( 0.00<Eabs57 && Eabs57<=3.00 ) T57++; }
  Eff[57] = (double) N57 / Event;

  double Eabs58;
  int N58 = 0;
  int T58 = 0;
  B4->SetBranchAddress("Eabs58",&Eabs58);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs58 && Eabs58<=1.75 ) N58++;
      if( 0.00<Eabs58 && Eabs58<=3.00 ) T58++; }
  Eff[58] = (double) N58 / Event;

  double Eabs59;
  int N59 = 0;
  int T59 = 0;
  B4->SetBranchAddress("Eabs59",&Eabs59);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs59 && Eabs59<=1.75 ) N59++;
      if( 0.00<Eabs59 && Eabs59<=3.00 ) T59++; }
  Eff[59] = (double) N59 / Event;

  double Eabs60;
  int N60 = 0;
  int T60 = 0;
  B4->SetBranchAddress("Eabs60",&Eabs60);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs60 && Eabs60<=1.75 ) N60++;
      if( 0.00<Eabs60 && Eabs60<=3.00 ) T60++; }
  Eff[60] = (double) N60 / Event;

  double Eabs61;
  int N61 = 0;
  int T61 = 0;
  B4->SetBranchAddress("Eabs61",&Eabs61);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs61 && Eabs61<=1.75 ) N61++;
      if( 0.00<Eabs61 && Eabs61<=3.00 ) T61++; }
  Eff[61] = (double) N61 / Event;

  double Eabs62;
  int N62 = 0;
  int T62 = 0;
  B4->SetBranchAddress("Eabs62",&Eabs62);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs62 && Eabs62<=1.75 ) N62++;
      if( 0.00<Eabs62 && Eabs62<=3.00 ) T62++; }
  Eff[62] = (double) N62 / Event;

  double Eabs63;
  int N63 = 0;
  int T63 = 0;
  B4->SetBranchAddress("Eabs63",&Eabs63);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs63 && Eabs63<=1.75 ) N63++;
      if( 0.00<Eabs63 && Eabs63<=3.00 ) T63++; }
  Eff[63] = (double) N63 / Event;

  double Eabs64;
  int N64 = 0;
  int T64 = 0;
  B4->SetBranchAddress("Eabs64",&Eabs64);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs64 && Eabs64<=1.75 ) N64++;
      if( 0.00<Eabs64 && Eabs64<=3.00 ) T64++; }
  Eff[64] = (double) N64 / Event;

  double Eabs65;
  int N65 = 0;
  int T65 = 0;
  B4->SetBranchAddress("Eabs65",&Eabs65);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs65 && Eabs65<=1.75 ) N65++;
      if( 0.00<Eabs65 && Eabs65<=3.00 ) T65++; }
  Eff[65] = (double) N65 / Event;

  double Eabs66;
  int N66 = 0;
  int T66 = 0;
  B4->SetBranchAddress("Eabs66",&Eabs66);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs66 && Eabs66<=1.75 ) N66++;
      if( 0.00<Eabs66 && Eabs66<=3.00 ) T66++; }
  Eff[66] = (double) N66 / Event;

  double Eabs67;
  int N67 = 0;
  int T67 = 0;
  B4->SetBranchAddress("Eabs67",&Eabs67);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs67 && Eabs67<=1.75 ) N67++;
      if( 0.00<Eabs67 && Eabs67<=3.00 ) T67++; }
  Eff[67] = (double) N67 / Event;

  double Eabs68;
  int N68 = 0;
  int T68 = 0;
  B4->SetBranchAddress("Eabs68",&Eabs68);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs68 && Eabs68<=1.75 ) N68++;
      if( 0.00<Eabs68 && Eabs68<=3.00 ) T68++; }
  Eff[68] = (double) N68 / Event;

  double Eabs69;
  int N69 = 0;
  int T69 = 0;
  B4->SetBranchAddress("Eabs69",&Eabs69);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs69 && Eabs69<=1.75 ) N69++;
      if( 0.00<Eabs69 && Eabs69<=3.00 ) T69++; }
  Eff[69] = (double) N69 / Event;

  double Eabs70;
  int N70 = 0;
  int T70 = 0;
  B4->SetBranchAddress("Eabs70",&Eabs70);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs70 && Eabs70<=1.75 ) N70++;
      if( 0.00<Eabs70 && Eabs70<=3.00 ) T70++; }
  Eff[70] = (double) N70 / Event;

  double Eabs71;
  int N71 = 0;
  int T71 = 0;
  B4->SetBranchAddress("Eabs71",&Eabs71);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs71 && Eabs71<=1.75 ) N71++;
      if( 0.00<Eabs71 && Eabs71<=3.00 ) T71++; }
  Eff[71] = (double) N71 / Event;

  double Eabs72;
  int N72 = 0;
  int T72 = 0;
  B4->SetBranchAddress("Eabs72",&Eabs72);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs72 && Eabs72<=1.75 ) N72++;
      if( 0.00<Eabs72 && Eabs72<=3.00 ) T72++; }
  Eff[72] = (double) N72 / Event;

  double Eabs73;
  int N73 = 0;
  int T73 = 0;
  B4->SetBranchAddress("Eabs73",&Eabs73);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs73 && Eabs73<=1.75 ) N73++;
      if( 0.00<Eabs73 && Eabs73<=3.00 ) T73++; }
  Eff[73] = (double) N73 / Event;

  double Eabs74;
  int N74 = 0;
  int T74 = 0;
  B4->SetBranchAddress("Eabs74",&Eabs74);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs74 && Eabs74<=1.75 ) N74++;
      if( 0.00<Eabs74 && Eabs74<=3.00 ) T74++; }
  Eff[74] = (double) N74 / Event;

  double Eabs75;
  int N75 = 0;
  int T75 = 0;
  B4->SetBranchAddress("Eabs75",&Eabs75);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs75 && Eabs75<=1.75 ) N75++;
      if( 0.00<Eabs75 && Eabs75<=3.00 ) T75++; }
  Eff[75] = (double) N75 / Event;

  double Eabs76;
  int N76 = 0;
  int T76 = 0;
  B4->SetBranchAddress("Eabs76",&Eabs76);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs76 && Eabs76<=1.75 ) N76++;
      if( 0.00<Eabs76 && Eabs76<=3.00 ) T76++; }
  Eff[76] = (double) N76 / Event;

  double Eabs77;
  int N77 = 0;
  int T77 = 0;
  B4->SetBranchAddress("Eabs77",&Eabs77);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs77 && Eabs77<=1.75 ) N77++;
      if( 0.00<Eabs77 && Eabs77<=3.00 ) T77++; }
  Eff[77] = (double) N77 / Event;

  double Eabs78;
  int N78 = 0;
  int T78 = 0;
  B4->SetBranchAddress("Eabs78",&Eabs78);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs78 && Eabs78<=1.75 ) N78++;
      if( 0.00<Eabs78 && Eabs78<=3.00 ) T78++; }
  Eff[78] = (double) N78 / Event;

  double Eabs79;
  int N79 = 0;
  int T79 = 0;
  B4->SetBranchAddress("Eabs79",&Eabs79);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs79 && Eabs79<=1.75 ) N79++;
      if( 0.00<Eabs79 && Eabs79<=3.00 ) T79++; }
  Eff[79] = (double) N79 / Event;

  double Eabs80;
  int N80 = 0;
  int T80 = 0;
  B4->SetBranchAddress("Eabs80",&Eabs80);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs80 && Eabs80<=1.75 ) N80++;
      if( 0.00<Eabs80 && Eabs80<=3.00 ) T80++; }
  Eff[80] = (double) N80 / Event;

  double Eabs81;
  int N81 = 0;
  int T81 = 0;
  B4->SetBranchAddress("Eabs81",&Eabs81);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs81 && Eabs81<=1.75 ) N81++;
      if( 0.00<Eabs81 && Eabs81<=3.00 ) T81++; }
  Eff[81] = (double) N81 / Event;

  double Eabs82;
  int N82 = 0;
  int T82 = 0;
  B4->SetBranchAddress("Eabs82",&Eabs82);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs82 && Eabs82<=1.75 ) N82++;
      if( 0.00<Eabs82 && Eabs82<=3.00 ) T82++; }
  Eff[82] = (double) N82 / Event;

  double Eabs83;
  int N83 = 0;
  int T83 = 0;
  B4->SetBranchAddress("Eabs83",&Eabs83);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs83 && Eabs83<=1.75 ) N83++;
      if( 0.00<Eabs83 && Eabs83<=3.00 ) T83++; }
  Eff[83] = (double) N83 / Event;

  double Eabs84;
  int N84 = 0;
  int T84 = 0;
  B4->SetBranchAddress("Eabs84",&Eabs84);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs84 && Eabs84<=1.75 ) N84++;
      if( 0.00<Eabs84 && Eabs84<=3.00 ) T84++; }
  Eff[84] = (double) N84 / Event;

  double Eabs85;
  int N85 = 0;
  int T85 = 0;
  B4->SetBranchAddress("Eabs85",&Eabs85);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs85 && Eabs85<=1.75 ) N85++;
      if( 0.00<Eabs85 && Eabs85<=3.00 ) T85++; }
  Eff[85] = (double) N85 / Event;

  double Eabs86;
  int N86 = 0;
  int T86 = 0;
  B4->SetBranchAddress("Eabs86",&Eabs86);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs86 && Eabs86<=1.75 ) N86++;
      if( 0.00<Eabs86 && Eabs86<=3.00 ) T86++; }
  Eff[86] = (double) N86 / Event;

  double Eabs87;
  int N87 = 0;
  int T87 = 0;
  B4->SetBranchAddress("Eabs87",&Eabs87);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs87 && Eabs87<=1.75 ) N87++;
      if( 0.00<Eabs87 && Eabs87<=3.00 ) T87++; }
  Eff[87] = (double) N87 / Event;

  double Eabs88;
  int N88 = 0;
  int T88 = 0;
  B4->SetBranchAddress("Eabs88",&Eabs88);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs88 && Eabs88<=1.75 ) N88++;
      if( 0.00<Eabs88 && Eabs88<=3.00 ) T88++; }
  Eff[88] = (double) N88 / Event;

  double Eabs89;
  int N89 = 0;
  int T89 = 0;
  B4->SetBranchAddress("Eabs89",&Eabs89);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs89 && Eabs89<=1.75 ) N89++;
      if( 0.00<Eabs89 && Eabs89<=3.00 ) T89++; }
  Eff[89] = (double) N89 / Event;

  double Eabs90;
  int N90 = 0;
  int T90 = 0;
  B4->SetBranchAddress("Eabs90",&Eabs90);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs90 && Eabs90<=1.75 ) N90++;
      if( 0.00<Eabs90 && Eabs90<=3.00 ) T90++; }
  Eff[90] = (double) N90 / Event;

  double Eabs91;
  int N91 = 0;
  int T91 = 0;
  B4->SetBranchAddress("Eabs91",&Eabs91);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs91 && Eabs91<=1.75 ) N91++;
      if( 0.00<Eabs91 && Eabs91<=3.00 ) T91++; }
  Eff[91] = (double) N91 / Event;

  double Eabs92;
  int N92 = 0;
  int T92 = 0;
  B4->SetBranchAddress("Eabs92",&Eabs92);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs92 && Eabs92<=1.75 ) N92++;
      if( 0.00<Eabs92 && Eabs92<=3.00 ) T92++; }
  Eff[92] = (double) N92 / Event;

  double Eabs93;
  int N93 = 0;
  int T93 = 0;
  B4->SetBranchAddress("Eabs93",&Eabs93);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs93 && Eabs93<=1.75 ) N93++;
      if( 0.00<Eabs93 && Eabs93<=3.00 ) T93++; }
  Eff[93] = (double) N93 / Event;

  double Eabs94;
  int N94 = 0;
  int T94 = 0;
  B4->SetBranchAddress("Eabs94",&Eabs94);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs94 && Eabs94<=1.75 ) N94++;
      if( 0.00<Eabs94 && Eabs94<=3.00 ) T94++; }
  Eff[94] = (double) N94 / Event;

  double Eabs95;
  int N95 = 0;
  int T95 = 0;
  B4->SetBranchAddress("Eabs95",&Eabs95);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs95 && Eabs95<=1.75 ) N95++;
      if( 0.00<Eabs95 && Eabs95<=3.00 ) T95++; }
  Eff[95] = (double) N95 / Event;

  double Eabs96;
  int N96 = 0;
  int T96 = 0;
  B4->SetBranchAddress("Eabs96",&Eabs96);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs96 && Eabs96<=1.75 ) N96++;
      if( 0.00<Eabs96 && Eabs96<=3.00 ) T96++; }
  Eff[96] = (double) N96 / Event;

  double Eabs97;
  int N97 = 0;
  int T97 = 0;
  B4->SetBranchAddress("Eabs97",&Eabs97);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs97 && Eabs97<=1.75 ) N97++;
      if( 0.00<Eabs97 && Eabs97<=3.00 ) T97++; }
  Eff[97] = (double) N97 / Event;

  double Eabs98;
  int N98 = 0;
  int T98 = 0;
  B4->SetBranchAddress("Eabs98",&Eabs98);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs98 && Eabs98<=1.75 ) N98++;
      if( 0.00<Eabs98 && Eabs98<=3.00 ) T98++; }
  Eff[98] = (double) N98 / Event;

  double Eabs99;
  int N99 = 0;
  int T99 = 0;
  B4->SetBranchAddress("Eabs99",&Eabs99);
  for(int n=0; n<Event; n++)
    { B4->GetEntry(n);
      if( 1.25<Eabs99 && Eabs99<=1.75 ) N99++;
      if( 0.00<Eabs99 && Eabs99<=3.00 ) T99++; }
  Eff[99] = (double) N99 / Event;




  

  int nbin = 100;
  double layer[100];

  for(int n=0; n<100; n++)layer[n] = n ;

  TGraph* g=new TGraph( nbin, layer, Eff);

  g->GetXaxis()->SetTitle("Layer");
  g->GetYaxis()->SetTitle("Efficiency");
  g->GetYaxis()->SetTitleOffset(1.3);

  g->SetMarkerStyle(5);
  g->SetMarkerColor(1);
  g->SetMarkerSize(1);
  g->Draw("AP");




  int Total[100] = {T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,
		    T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,
		    T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,
		    T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,
                    T40,T41,T42,T43,T44,T45,T46,T47,T48,T49,
		    T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,
		    T60,T61,T62,T63,T64,T65,T66,T67,T68,T69,
		    T70,T71,T72,T73,T74,T75,T76,T77,T78,T79,
		    T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,
		    T90,T91,T92,T93,T94,T95,T96,T97,T98,T99};
  int x[2];
  int y[2];
  x[0] = Total[0];
  x[1] = Total[1];

  for(int n=1; n<100; n++)
    {
      if(x[0]<Total[n])
	{
	  x[1] = x[0];
	  x[0] = Total[n];
	  y[1] = y[0];
	  y[0] = n;
	}
      else if(x[1]<Total[n])
	{
	  x[1] = Total[n];
	  y[1] = n;
	}
    }

  
  cout << "Number of Event " << Event << endl;
  cout << "Layer of E1 " << y[0] << endl;
  cout << "Efficiency of E1 " << Eff[y[0]] << endl;
  cout << "Layer of E2 " << y[1] << endl;
  cout << "Efficiency of E2 " << Eff[y[1]] << endl;

  cout << "Total " << y[0] << " " << Total[y[0]] <<endl;
  cout << "Total " << y[1] << " " << Total[y[1]] <<endl;
}
