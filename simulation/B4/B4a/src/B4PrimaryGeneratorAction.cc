
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

  auto particleDefinition 
    = G4ParticleTable::GetParticleTable()->FindParticle("e-");
  fParticleGun->SetParticleEnergy(1.5*MeV);
  fParticleGun->SetParticleDefinition(particleDefinition);
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

  G4double Theta = CLHEP::RandFlat::shoot( -90.*degree, 90.*degree);
  G4double Phi   = CLHEP::RandFlat::shoot( -90.*degree, 90.*degree);

  G4double x = sin(Theta)*cos(Phi);
  G4double y = sin(Theta)*sin(Phi);
  G4double z = cos(Theta);

  fParticleGun->SetParticleMomentumDirection(G4ThreeVector( x, y, z));
  
  G4int nofLayers = 1;
  G4double absoThickness = 1.0*mm;
  G4double filmThickness = 0.01*mm;
  G4double isoThickness = 0.01*mm;
  G4double emptyThickness = 1.0*mm;

  auto layerThickness = absoThickness + 2*filmThickness + isoThickness+ 2*emptyThickness;
  auto InitialPosition = nofLayers * layerThickness /2;
  G4double InitialRandPosition = CLHEP::RandFlat::shoot( 0.*mm, 0.001*mm);
  
  G4double isoSizeXY = CLHEP::RandFlat::shoot( -50*cm, 50*cm);
  G4double PrimaryPosition = - InitialPosition + InitialRandPosition;
  
  fParticleGun->SetParticlePosition(G4ThreeVector( isoSizeXY, isoSizeXY, PrimaryPosition));

  //G4double gammaEnergy = CLHEP::RandFlat::shoot( 1.*MeV, 3.*MeV );
  
  //fParticleGun->SetParticleEnergy(gammaEnergy);
  fParticleGun->GeneratePrimaryVertex(anEvent);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

