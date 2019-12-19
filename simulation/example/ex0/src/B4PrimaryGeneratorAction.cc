
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

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4PrimaryGeneratorAction::B4PrimaryGeneratorAction()
 : G4VUserPrimaryGeneratorAction(),
   fParticleGun(nullptr)
{
  G4int nofParticles = 1;
  fParticleGun = new G4ParticleGun(nofParticles);

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4PrimaryGeneratorAction::~B4PrimaryGeneratorAction()
{
  delete fParticleGun;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B4PrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent)
{
  auto worldLV = G4LogicalVolumeStore::GetInstance()->GetVolume("World");

  G4Box* worldBox = nullptr;
  if (  worldLV ) {
    worldBox = dynamic_cast<G4Box*>(worldLV->GetSolid());
  }

  if ( worldBox ) {
    worldBox->GetZHalfLength();
  }
  else  {
    G4ExceptionDescription msg;
    msg << "World volume of box shape not found." << G4endl;
    msg << "Perhaps you have changed geometry." << G4endl;
    msg << "The gun will be place in the center.";
    G4Exception("B4PrimaryGeneratorAction::GeneratePrimaries()",
      "MyCode0002", JustWarning, msg);
  }

  //G4int nofLayers = 100;
  //G4double absoThickness = 1.5*mm;
  //G4double filmThickness = 0.01*mm;
  //G4double calorSizeXY  = 100.*cm;
  //G4double isoThickness = 0.01*mm;
  //G4double empty_Si = 0.05*mm;
  //G4double empty_Se = 0.5*mm;

  //auto block_Si = 2*filmThickness + absoThickness;
  //auto layerThickness = 2*block_Si + 2*empty_Si + 2*empty_Se + isoThickness;
  //auto PrimaryPosition = nofLayers * layerThickness /2;

  //G4double isoSizeXY = CLHEP::RandFlat::shoot( -calorSizeXY/2, calorSizeXY/2);


  G4double x=0.;
  G4double y=0.;
  G4double z=1.;

  auto particleDefinition = G4ParticleTable::GetParticleTable()->FindParticle("e-");
  fParticleGun->SetParticleDefinition(particleDefinition);
  fParticleGun->SetParticlePosition(G4ThreeVector());

  //1本目
  fParticleGun->SetParticleEnergy(1.5*MeV);
  fParticleGun->SetParticleMomentumDirection(G4ThreeVector( x, y, z));
  fParticleGun->GeneratePrimaryVertex(anEvent);
  //2本目
  fParticleGun->SetParticleEnergy(1.5*MeV);
  fParticleGun->SetParticleMomentumDirection(G4ThreeVector( x, y, -z));
  fParticleGun->GeneratePrimaryVertex(anEvent);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

