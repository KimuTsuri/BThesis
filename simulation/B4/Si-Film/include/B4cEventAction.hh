
#ifndef B4cEventAction_h
#define B4cEventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"

class B4cEventAction : public G4UserEventAction
{
  public:
    B4cEventAction();
    virtual ~B4cEventAction();

    virtual void  BeginOfEventAction(const G4Event* event);
    virtual void    EndOfEventAction(const G4Event* event);
    
    void AddAbs(G4double de, G4double dl);
    void AddGap(G4double de, G4double dl);
    
  private:
    G4double  fEnergyAbs;
    G4double  fEnergyGap;
    G4double  fTrackLAbs; 
    G4double  fTrackLGap;
};

// inline functions

inline void B4cEventAction::AddAbs(G4double de, G4double dl) {
  fEnergyAbs += de; 
  fTrackLAbs += dl;
}

inline void B4cEventAction::AddGap(G4double de, G4double dl) {
  fEnergyGap += de; 
  fTrackLGap += dl;
}
                     
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

    
