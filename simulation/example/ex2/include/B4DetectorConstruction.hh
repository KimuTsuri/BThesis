
#ifndef B4DetectorConstruction_h
#define B4DetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"
#include "G4PhysicalConstants.hh"
#include "G4SystemOfUnits.hh"
#include "globals.hh"

class G4VPhysicalVolume;
class G4GlobalMagFieldMessenger;
class B4DetectorConstruction : public G4VUserDetectorConstruction
{
public:
  B4DetectorConstruction();
  virtual ~B4DetectorConstruction();

public:
  virtual G4VPhysicalVolume* Construct();
  //virtual void ConstructSDandField();

  const G4VPhysicalVolume* GetAbsorberPV_01() const;
  const G4VPhysicalVolume* GetAbsorberPV_02() const;
  const G4VPhysicalVolume* GetFilmPV() const;
  const G4VPhysicalVolume* GetIsotopePV() const;

private:
  void DefineMaterials();
  G4VPhysicalVolume* DefineVolumes();

  //static G4ThreadLocal G4GlobalMagFieldMessenger*  fMagFieldMessenger;

  G4VPhysicalVolume*   fAbsorberPV_01;
  G4VPhysicalVolume*   fAbsorberPV_02;
  G4VPhysicalVolume*   fFilmPV;
  G4VPhysicalVolume*   fIsotopePV;

  G4bool  fCheckOverlaps;
};

inline const G4VPhysicalVolume* B4DetectorConstruction::GetAbsorberPV_01() const { 
  return fAbsorberPV_01;
}

inline const G4VPhysicalVolume* B4DetectorConstruction::GetAbsorberPV_02() const {
  return fAbsorberPV_02;
}


inline const G4VPhysicalVolume* B4DetectorConstruction::GetFilmPV() const  { 
  return fFilmPV; 
}

inline const G4VPhysicalVolume* B4DetectorConstruction::GetIsotopePV() const  {
  return fIsotopePV;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

