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
// $Id: B1DetectorConstruction.cc 75117 2013-10-28 09:38:37Z gcosmo $
//
/// \file K4DetectorConstruction.cc
/// \brief Implementation of the K4DetectorConstruction class

#include "K4DetectorConstruction.hh"

#include "G4RunManager.hh"
#include "G4NistManager.hh"

#include "G4Box.hh"
#include "G4Cons.hh"
#include "G4Orb.hh"
#include "G4Sphere.hh"
#include "G4Trd.hh"
#include "G4Tubs.hh"

#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4PVReplica.hh"
#include "G4GlobalMagFieldMessenger.hh"
#include "G4AutoDelete.hh"

#include "G4GeometryManager.hh"
#include "G4PhysicalVolumeStore.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4SolidStore.hh"

#include "G4VisAttributes.hh"
#include "G4Colour.hh"

#include "G4PhysicalConstants.hh"
#include "G4SystemOfUnits.hh"

//use for MultiFunctionalDetector and PrimitiveScorer
#include "G4MultiFunctionalDetector.hh"
#include "G4VPrimitiveScorer.hh"
#include "G4PSEnergyDeposit.hh"
//#include "G4PSSphereSurfaceCurrent.hh"
#include "G4PSNofSecondary.hh"
#include "G4PSFlatSurfaceCurrent.hh"
#include "G4PSPassageCellCurrent.hh"
#include "G4PSNofSecondary.hh"
#include "G4PSTrackLength.hh"
//#include "G4SDChargedFilter.hh"
#include "G4SDParticleFilter.hh"
#include "G4SDManager.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4DetectorConstruction::K4DetectorConstruction()
  : G4VUserDetectorConstruction(),
    fTube1PV(nullptr),
    fTube2PV(nullptr)
    //,fScoringVolume(0)
{ }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4DetectorConstruction::~K4DetectorConstruction()
{ }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4VPhysicalVolume* K4DetectorConstruction::Construct()
{
  // Get nist material manager
  G4NistManager* nist = G4NistManager::Instance();

  // Option to switch on/off checking of volumes overlaps
  //
  G4bool checkOverlaps = true;


  //
  // World
  //
  G4double world_sizeXY = 2100.*cm;
  G4double world_sizeZ  = 500.*cm;
  G4Material* world_mat = nist->FindOrBuildMaterial("G4_AIR");

    G4Box* solidWorld =
      new G4Box("World",                       //its name
		world_sizeXY, world_sizeXY, world_sizeZ);     //its size

      G4LogicalVolume* logicWorld =
	new G4LogicalVolume(solidWorld,          //its solid
			    world_mat,           //its material
			    "World");            //its name

  G4VPhysicalVolume* physWorld =
    new G4PVPlacement(0,                     //no rotation
		      G4ThreeVector(),       //at (0,0,0)
		      logicWorld,            //its logical volume
		      "World",               //its name
		      0,                     //its mother  volume
		      false,                 //no boolean operation
		      0,                     //copy number
		      checkOverlaps);        //overlaps checking


  //
  //  Target
  //
  G4Material* target_mat = nist->FindOrBuildMaterial("G4_C");

  G4double target_rmina =  0.*cm, target_rmaxa = 1.3*cm;
  G4double target_rminb =  0.*cm, target_rmaxb = 1.3*cm;
  G4double target_hz = 100.*cm;
  G4double target_phimin = 0.*deg, target_phimax = 360.*deg;

  G4ThreeVector pos_tar = G4ThreeVector(0, 0, - target_hz);
  
  G4Cons* solidTarget =
    new G4Cons("Target",
        target_rmina, target_rmaxa, target_rminb, target_rmaxb, target_hz,
        target_phimin, target_phimax);

  G4LogicalVolume* logicTarget =
    new G4LogicalVolume(solidTarget,         //its solid
     		        target_mat,          //its material
		        "Target");           //its name
  new G4PVPlacement(0,                       //no rotation
		    pos_tar,                 //at position
		    logicTarget,             //its logical volume
		    "Target",                //its name
		    logicWorld,              //its mother  volume
		    false,                   //no boolean operation
		    0,                       //copy number
		    checkOverlaps);          //overlaps checking


  //
  //Tubes
  //

  //size, material
  G4double tubs_radius = 2000.*cm, tubs_size_z = 0.05*cm;
  G4Material* tubs_material = nist->FindOrBuildMaterial("G4_AIR"); //material
  G4ThreeVector pos_tub1 = G4ThreeVector(0, 0, tubs_size_z + 0.1*cm);
  G4ThreeVector pos_tub2 = G4ThreeVector(0, 0, tubs_size_z + 100.*cm);
  G4ThreeVector pos_tub3 = G4ThreeVector(0, 0, tubs_size_z + 200.*cm);
  
  
  //Tube1
  //

  G4Tubs* solidTubes1 = new G4Tubs("solidTubes1",      //its name
					 0., tubs_radius, //its size
					tubs_size_z,
					0., 360*deg);

    G4LogicalVolume* logicTubes1 =
      new G4LogicalVolume(solidTubes1,        //its solid
			  tubs_material,      //its material
			  "Tubes1");          //its name
    fTube1PV =
     new G4PVPlacement(
		       0,              //no rotation
		       pos_tub1,       //position
		       logicTubes1,    //its logical volume
		       "Tubes1",       //its name
		       logicWorld,     //its mother volume
		       false,          //no boolean operation
		       0,              //copy number
		       checkOverlaps); //checking overlaps
  //Tube2
  //

  G4Tubs* solidTubes2 = new G4Tubs("solidTubes2",      //its name
				   0., tubs_radius, //its size
				   tubs_size_z,
				   0., 360*deg);

  G4LogicalVolume* logicTubes2 =
    new G4LogicalVolume(solidTubes2,        //its solid
			tubs_material,      //its material
			"Tubes2");          //its name
  fTube2PV =
    new G4PVPlacement(
		      0,              //no rotation
		      pos_tub2,       //position
		      logicTubes2,    //its logical volume
		      "Tubes2",       //its name
		      logicWorld,     //its mother volume
		      false,          //no boolean operation
		      0,              //copy number
		      checkOverlaps); //checking overlaps

  //Tube3
  //

  G4Tubs* solidTubes3 = new G4Tubs("solidTubes3",      //its name
				   0., tubs_radius, //its size
				   tubs_size_z,
				   0., 360*deg);

    G4LogicalVolume* logicTubes3 =
      new G4LogicalVolume(solidTubes3,        //its solid
			  tubs_material,      //its material
			  "Tubes3");          //its name
      fTube3PV =
	new G4PVPlacement(
			  0,              //no rotation
			  pos_tub3,       //position
			  logicTubes3,    //its logical volume
			  "Tubes3",       //its name
			  logicWorld,     //its mother volume
			  false,          //no boolean operation
			  0,              //copy number
			  checkOverlaps); //checking overlaps
  
  //
  // Visualization attributes
  //
  //logicTarget->SetVisAttributes (G4VisAttributes::GetInvisible());
    

  //
  //MultiFunctionalDetector
  //
    
  //まずMultiFunctionalDetectorのインスタンスを作成し、名前を付ける。
  //make a multi functional detector with name
    G4MultiFunctionalDetector* TargetDetector = new G4MultiFunctionalDetector("TargetDet");

  //その後作成していたGeometryとMultiFunctinalDetectorを紐づける。
  //paste logical volume on multi functional detector
  SetSensitiveDetector("Target", TargetDetector);

  //原始スコラアーを作成し、測定する量を決める。
  //make a score with name
  G4VPrimitiveScorer* primitive = new G4PSEnergyDeposit("eDep");
  G4VPrimitiveScorer* primitive2 = new G4PSTrackLength("tLength");

  //MultiFunctinalDetectorに原始スコアラ―をセットする。
  TargetDetector->RegisterPrimitive(primitive);
  TargetDetector->RegisterPrimitive(primitive2);
  //get a hitmap by /TargetDet/eDep
  
  G4SDManager* SDman = G4SDManager::GetSDMpointer();
  SDman->G4SDManager::GetSDMpointer()->AddNewDetector(TargetDetector);
  //バージョンが新しめのGeant4ではこの行がないとコアダンプする
  
  //define a filter
  G4SDParticleFilter* protonFilter = new G4SDParticleFilter("protonFilter", "proton");

  primitive->SetFilter(protonFilter);
  primitive2->SetFilter(protonFilter);
  //set a filter

  //
  //always return the physical World
  //
  return physWorld;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

