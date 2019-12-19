
#include "B4PrimaryGeneratorAction.hh"

#include "G4RunManager.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"
#include "Randomize.hh"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4PrimaryGeneratorAction::B4PrimaryGeneratorAction()
 : G4VUserPrimaryGeneratorAction(),
   fParticleGun(nullptr)
{
  G4int nofParticles = 1000;
  fParticleGun = new G4ParticleGun(nofParticles);
}

B4PrimaryGeneratorAction::~B4PrimaryGeneratorAction()
{
  delete fParticleGun;
}

void B4PrimaryGeneratorAction::GeneratePrimaries(G4Event*anEvent)
{
  std::vector<vector<double>> Pevent;
  for(anEvent;){
  auto worldLV = G4LogicalVolumeStore::GetInstance()->GetVolume("World");
  G4Box* worldBox = nullptr;
  if (  worldLV ) {
    worldBox = dynamic_cast<G4Box*>(worldLV->GetSolid());
  }
  if ( worldBox ) {
    worldBox->GetZHalfLength();
  }
  G4double me = 0.510998910*MeV;
  G4int n0,n1;
  G4double px0,py0,pz0,px1,py1,pz1,t0,t1;
  
    const char *path = "data2nu.dat";
    ifstream ifs(path);
    if (!ifs.is_open()) cerr << "can't open " << path << '\n';

    getline(ifs,"%d",n0);
    

    G4double p0=sqrt(px0*px0+py0*py0+pz0*pz0);
    G4double p1=sqrt(px1*px1+py1*py1+pz1*pz1);
    G4double E0=sqrt(me*me+p0*p0);
    G4double E1=sqrt(me*me+p1*p1);
    
    auto particleDefinition = G4ParticleTable::GetParticleTable()->FindParticle("e-");
    fParticleGun->SetParticleDefinition(particleDefinition);
    fParticleGun->SetParticlePosition(G4ThreeVector());
    //1本目
    fParticleGun->SetParticleEnergy(E0);
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(px0,py0,pz0));
    fParticleGun->GeneratePrimaryVertex(anEvent);
    //2本目
    fParticleGun->SetParticleEnergy(E1);
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(px1,py1,pz1));
    fParticleGun->GeneratePrimaryVertex(anEvent);

    G4double momentum[px,]
  Pevent.push_back(momentum);
  }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

