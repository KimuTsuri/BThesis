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
// $Id: B1SteppingAction.cc 74483 2013-10-09 13:37:06Z gcosmo $
//
/// \file K4SteppingAction.cc
/// \brief Implementation of the K4SteppingAction class

#include "K4SteppingAction.hh"
#include "K4EventAction.hh"
#include "K4DetectorConstruction.hh"
#include "K4Analysis.hh"

#include "G4Step.hh"
//#include "G4Event.hh"
#include "G4RunManager.hh"
//#include "G4LogicalVolume.hh"
#include "G4UnitsTable.hh"

#include "G4SystemOfUnits.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4SteppingAction::K4SteppingAction(const K4DetectorConstruction* detectorConstruction, K4EventAction* eventAction)
: G4UserSteppingAction(),
  fDetConstruction(detectorConstruction),
  fEventAction(eventAction)
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4SteppingAction::~K4SteppingAction()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void K4SteppingAction::UserSteppingAction(const G4Step* step)
{
  // get volume of the current step
  auto volume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume(); //現物体
  G4Track* track = step->GetTrack();
  auto ParticleName = track->GetDynamicParticle()->GetParticleDefinition()->GetParticleName();
  G4ThreeVector momentum = track->GetMomentum();
  G4double kine = track->GetKineticEnergy();
  G4VPhysicalVolume* NextVolume = track->GetNextVolume();
  G4int TrackID = track->GetTrackID();
  
  // step length
  G4double stepLength = 0.;
  if ( step->GetTrack()->GetDefinition()->GetPDGCharge() != 0. ) {
    stepLength = step->GetStepLength();
  }

  G4StepPoint* point1 = step->GetPreStepPoint(); //ステップの開始点をGet
  G4TouchableHandle touch1 = point1->GetTouchableHandle(); //タッチャブルハンドル
  G4int copyNumber = touch1->GetCopyNumber(); //現物体のコピー番号
  G4String name = volume->GetName(); //現物体の名前
  G4ThreeVector worldPos1 = point1->GetPosition(); //開始点の世界座標
  G4ThreeVector localPos1 = touch1->GetHistory()->GetTopTransform().TransformPoint(worldPos1); //物体に相対的なローカル座標
  G4double radius = sqrt((worldPos1.x() * worldPos1.x()) + (worldPos1.y() * worldPos1.y()));
  
  G4int pipl_hits = 0;
  
  G4cout << "ParticleName: " << ParticleName << G4endl;
  G4cout << "Momentum: " << momentum/MeV << "[MeV]" << G4endl;
  G4cout << "Kinetic Energy: " << kine/MeV << "[MeV]" << G4endl;
  G4cout << "NextVolume: " << NextVolume << G4endl;
  G4cout << "TrackID: " << TrackID << G4endl;
  G4cout << "CureentVolumeCopyNumber: " << copyNumber << G4endl;
  G4cout << "CurrentVolumeName: " << name << G4endl;
  G4cout << "WorldPosition: " << worldPos1 << G4endl;
  G4cout << "LocalPosition: " << localPos1 << G4endl;
  G4cout << "WorldPosition.x: " << worldPos1.x() << G4endl;
  G4cout << "WorldPosition.y: " << worldPos1.y() << G4endl;
  G4cout << "WorldPosition.z: " << worldPos1.z() << G4endl;
  G4cout << "Radius: " << radius << G4endl;

  // get analysis manager
  auto analysisManager = G4AnalysisManager::Instance();
  
  if( volume == fDetConstruction->GetTube1PV() //Tubesに当たったことの判定
      && ParticleName == "pi+" //pi+であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    pipl_hits += 1;
    fEventAction->AddTubM(kine,stepLength,pipl_hits);
  }
  G4cout << "pi+ hits: " << pipl_hits << G4endl;
  
  if( volume == fDetConstruction->GetTube1PV() //Tube1に当たったことの判定
      && ParticleName == "pi+" //pi+であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(1,0,kine/MeV);
    analysisManager->FillNtupleDColumn(1,1,radius);
    analysisManager->AddNtupleRow(1);
  }

  if( ParticleName == "pi+" //pi+であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    if( volume == fDetConstruction->GetTube1PV() //Tube1に当たったことの判定
	|| volume == fDetConstruction->GetTube2PV()
	|| volume == fDetConstruction->GetTube3PV()
	){
    analysisManager->FillNtupleDColumn(9,0,worldPos1.z()/mm);
    analysisManager->AddNtupleRow(9);
    }
  }

  if( volume == fDetConstruction->GetTube1PV() //Tubes1に当たったことの判定
      && ParticleName == "pi-" //pi-であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(2,0,kine/MeV);
    analysisManager->FillNtupleDColumn(2,1,radius);
    analysisManager->AddNtupleRow(2);
  }

  if( ParticleName == "pi-" //pi-であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    if( volume == fDetConstruction->GetTube1PV() //Tube1に当たったことの判定
	|| volume == fDetConstruction->GetTube2PV()
	|| volume == fDetConstruction->GetTube3PV()
	){
      analysisManager->FillNtupleDColumn(10,0,worldPos1.z()/mm);
      analysisManager->AddNtupleRow(10);
    }
  }

  if( volume == fDetConstruction->GetTube1PV() //Tubes1に当たったことの判定
      && ParticleName == "kaon+" //kaon+であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(3,0,kine/MeV);
    analysisManager->FillNtupleDColumn(3,1,radius);
    analysisManager->AddNtupleRow(3);
  }

  if( volume == fDetConstruction->GetTube1PV() //Tubes1に当たったことの判定
      && ParticleName == "kaon-" //kaon-であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(4,0,kine/MeV);
    analysisManager->FillNtupleDColumn(4,1,radius);
    analysisManager->AddNtupleRow(4);
  }

  if( volume == fDetConstruction->GetTube1PV() //Tubes1に当たったことの判定
      && ParticleName == "mu-" //mu-であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(5,0,kine/MeV);
    analysisManager->FillNtupleDColumn(5,1,radius);
    analysisManager->AddNtupleRow(5);
  }

  if( volume == fDetConstruction->GetTube1PV() //Tubes1に当たったことの判定
      && ParticleName == "mu+" //mu+であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(6,0,kine/MeV);
    analysisManager->FillNtupleDColumn(6,1,radius);
    analysisManager->AddNtupleRow(6);
  }

  if( volume == fDetConstruction->GetTube1PV() //Tubes1に当たったことの判定
      && ParticleName == "e-" //e-であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(7,0,kine/MeV);
    analysisManager->FillNtupleDColumn(7,1,radius);
    analysisManager->AddNtupleRow(7);
  }

  if( volume == fDetConstruction->GetTube1PV() //Tubes1に当たったことの判定
      && ParticleName == "e+" //e+であることの判定
      && point1->GetStepStatus() == fGeomBoundary //ステップが現物体中の最初のステップであることの判定
      ){
    analysisManager->FillNtupleDColumn(8,0,kine/MeV);
    analysisManager->FillNtupleDColumn(8,1,radius);
    analysisManager->AddNtupleRow(8);
  }
  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
