#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  const char *path = "test.txt";
  if (argc > 1) path = argv[1];

  ifstream ifs(path);

  if (!ifs.is_open()) cerr << "can't open " << path << '\n';
  cout<<"#########"<<endl;
  int n0,n1;
  double px0,py0,pz0,px1,py1,pz1,t0,t1;
  while(ifs>>n0>>px0>>py0>>pz0>>t0>>n1>>px1>>py1>>pz1>>t1){
    cout<<n0<<" "<<px0<<" "<<py0<<" "<<pz0<<" "<<endl;
  }
}
