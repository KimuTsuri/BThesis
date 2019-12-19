
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

  void AddAbs_01(G4double de, G4double dl, G4int lyr);
  void AddAbs_02(G4double de, G4double dl, G4int lyr);
  void AddGap(G4double de, G4double dl, G4int lyr);

private:
  G4double  fEnergyAbs_01;
  G4double  fEnergyAbs_02;
  G4double  fEnergyGap;
  G4double  fTrackLAbs_01;
  G4double  fTrackLAbs_02;
  G4double  fTrackLGap;
  G4double  fEnergyAbsbyLyr_01[100];
  G4double  fEnergyAbsbyLyr_02[100];
  G4double  fEnergyGapbyLyr[100];
};

inline void B4aEventAction::AddAbs_01(G4double de, G4double dl, G4int lyr=1) {
  fEnergyAbs_01 += de;
  fTrackLAbs_01 += dl;
  if (lyr != -1) fEnergyAbsbyLyr_01[lyr] += de;
}

inline void B4aEventAction::AddAbs_02(G4double de, G4double dl, G4int lyr=1) {
  fEnergyAbs_02 += de;
  fTrackLAbs_02 += dl;
  if (lyr != -1) fEnergyAbsbyLyr_02[lyr] += de;
}

inline void B4aEventAction::AddGap(G4double de, G4double dl, G4int lyr=1) {
  fEnergyGap += de;
  fTrackLGap += dl;
  if (lyr != -1) fEnergyGapbyLyr[lyr] += de;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

    
