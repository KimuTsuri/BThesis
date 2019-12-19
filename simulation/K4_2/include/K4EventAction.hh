//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: B1EventAction.hh 75216 2013-10-29 16:08:11Z gcosmo $
//
/// \file K4EventAction.hh
/// \brief Definition of the K4EventAction class

#ifndef K4EventAction_h
#define K4EventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"

#include "G4THitsMap.hh"

#include "G4ThreeVector.hh"

/// Event action class
///

class K4EventAction : public G4UserEventAction
{
 public:
   K4EventAction();
   virtual ~K4EventAction();
 
   virtual void BeginOfEventAction(const G4Event* event);
   virtual void EndOfEventAction(const G4Event* event);

  void AddTubM(G4double de, G4double dl, G4int dh);
  
 private:
  //methods
  G4THitsMap<G4double>*GetHitsCollection(G4int hcID, const G4Event* event)const;
  G4double GetSum(G4THitsMap<G4double>* hitsMap)const;
  //void PrintEventStatistics(G4double TargetEdep)const;

  //data members
  G4int TargetCurrentHCID;
  G4int TargetTrackHCID;

 private:
  G4double  fKinETub1;
  G4double  fTrackLTub1;
  G4int pipl_hits;
};

// inline functions

inline void K4EventAction::AddTubM(G4double de, G4double dl, G4int dh) {
  fKinETub1 += de;
  fTrackLTub1 += dl;
  pipl_hits += dh;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif