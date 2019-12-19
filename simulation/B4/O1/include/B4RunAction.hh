
#ifndef B4RunAction_h
#define B4RunAction_h 1

#include "G4UserRunAction.hh"
#include "globals.hh"

class G4Run;

class B4RunAction : public G4UserRunAction
{
public:
  B4RunAction();
  virtual ~B4RunAction();

  virtual void BeginOfRunAction(const G4Run*);
  virtual void   EndOfRunAction(const G4Run*);

  void AddAbs(G4double de, G4int lyr);

private:
  G4double fEnergyAbs;
  G4double fEnergyAbsbyLyr[100];

};

inline void B4RunAction::AddAbs(G4double de, G4int lyr=1){
  fEnergyAbs += de;
  if(lyr != -1) fEnergyAbsbyLyr[lyr] += de;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

