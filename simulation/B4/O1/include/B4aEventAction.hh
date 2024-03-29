
#ifndef B4aEventAction_h
#define B4aEventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"

class B4aEventAction : public G4UserEventAction
{
public:
  B4aEventAction();
  virtual ~B4aEventAction();

  virtual void  BeginOfEventAction(const G4Event* event);
  virtual void    EndOfEventAction(const G4Event* event);

  void AddAbs(G4double de, G4double dl, G4int lyr);
  void AddGap(G4double de, G4double dl, G4int lyr);

private:
  G4double  fEnergyAbs;
  G4double  fEnergyGap;
  G4double  fTrackLAbs;
  G4double  fTrackLGap;
  G4double  fEnergyAbsbyLyr[100];
  G4double  fEnergyGapbyLyr[100];
};

inline void B4aEventAction::AddAbs(G4double de, G4double dl, G4int lyr=1) {
  fEnergyAbs += de;
  fTrackLAbs += dl;
  if (lyr != -1) fEnergyAbsbyLyr[lyr] += de;
}

inline void B4aEventAction::AddGap(G4double de, G4double dl, G4int lyr=1) {
  fEnergyGap += de;
  fTrackLGap += dl;
  if (lyr != -1) fEnergyGapbyLyr[lyr] += de;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

    
