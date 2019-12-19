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
// $Id: B1DetectorConstruction.hh 69565 2013-05-08 12:35:31Z gcosmo $
//
/// \file K4DetectorConstruction.hh
/// \brief Definition of the K4DetectorConstruction class

#ifndef K4DetectorConstruction_h
#define K4DetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4VPhysicalVolume;
class G4LogicalVolume;

/// Detector construction class to define materials and geometry.

class K4DetectorConstruction : public G4VUserDetectorConstruction
{
  public:
    K4DetectorConstruction();
    virtual ~K4DetectorConstruction();

    virtual G4VPhysicalVolume* Construct();

  
  const G4VPhysicalVolume* GetTube1PV() const;
  const G4VPhysicalVolume* GetTube2PV() const;
  const G4VPhysicalVolume* GetTube3PV() const;

  private:
    // methods
    //
    void DefineMaterials();
    G4VPhysicalVolume* DefineVolumes();

  // data members
  //
  G4VPhysicalVolume*   fTube1PV; // the tubes physical volume
  G4VPhysicalVolume*   fTube2PV;
  G4VPhysicalVolume*   fTube3PV;

  G4bool  fCheckOverlaps; // option to activate checking of volumes overlaps
};

// inline functions

inline const G4VPhysicalVolume* K4DetectorConstruction::GetTube1PV() const {
  return fTube1PV;
}

inline const G4VPhysicalVolume* K4DetectorConstruction::GetTube2PV() const {
  return fTube2PV;
}

inline const G4VPhysicalVolume* K4DetectorConstruction::GetTube3PV() const {
  return fTube3PV;
}
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
