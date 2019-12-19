
#ifndef B4cSteppingAction_h
#define B4cSteppingAction_h 1

#include "G4UserSteppingAction.hh"

class B4DetectorConstruction;
class B4cEventAction;

class B4cSteppingAction : public G4UserSteppingAction
{
public:
  B4cSteppingAction(const B4DetectorConstruction* detectorConstruction,
                    B4cEventAction* eventAction);
  virtual ~B4cSteppingAction();

  virtual void UserSteppingAction(const G4Step* step);
    
private:
  const B4DetectorConstruction* fDetConstruction;
  B4cEventAction*  fEventAction;  
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
