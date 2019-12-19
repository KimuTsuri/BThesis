
#ifndef B4aSteppingAction_h
#define B4aSteppingAction_h 1

#include "G4UserSteppingAction.hh"

class B4DetectorConstruction;
class B4aEventAction;

class B4aSteppingAction : public G4UserSteppingAction
{
public:
  B4aSteppingAction(const B4DetectorConstruction* detectorConstruction,
                    B4aEventAction* eventAction);
  virtual ~B4aSteppingAction();

  virtual void UserSteppingAction(const G4Step* step);
    
private:
  const B4DetectorConstruction* fDetConstruction;
  B4aEventAction*  fEventAction;  
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
