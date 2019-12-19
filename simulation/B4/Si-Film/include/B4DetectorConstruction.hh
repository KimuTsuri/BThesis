
#ifndef B4DetectorConstruction_h
#define B4DetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"
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

    const G4VPhysicalVolume* GetAbsorberPV() const;
    const G4VPhysicalVolume* GetGapPV() const;
    const G4VPhysicalVolume* GetFilmPV() const;
     
  private:
    void DefineMaterials();
    G4VPhysicalVolume* DefineVolumes();
  
  //static G4ThreadLocal G4GlobalMagFieldMessenger*  fMagFieldMessenger; 
     
    G4VPhysicalVolume*   fAbsorberPV; // the absorber physical volume
    G4VPhysicalVolume*   fGapPV;      // the gap physical volume
    G4VPhysicalVolume*   fFilmPV;
    
    G4bool  fCheckOverlaps; // option to activate checking of volumes overlaps
};

// inline functions

inline const G4VPhysicalVolume* B4DetectorConstruction::GetAbsorberPV() const { 
  return fAbsorberPV; 
}

inline const G4VPhysicalVolume* B4DetectorConstruction::GetGapPV() const  { 
  return fGapPV; 
}

inline const G4VPhysicalVolume* B4DetectorConstruction::GetFilmPV() const  {
  return fFilmPV;
}
     

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

