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
// $Id: B1EventAction.cc 75117 2013-10-28 09:38:37Z gcosmo $
//
/// \file K4EventAction.cc
/// \brief Implementation of the K4EventAction class

#include "K4EventAction.hh"
#include "K4RunAction.hh"
#include "K4Analysis.hh"

#include "G4Event.hh"
#include "G4RunManager.hh"
#include "G4UnitsTable.hh"
#include "G4SDManager.hh"
#include "G4HCofThisEvent.hh"

#include "Randomize.hh"
#include <iomanip>

#include "G4PrimaryParticle.hh"
#include "G4PrimaryVertex.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4EventAction::K4EventAction()
  : G4UserEventAction(),
    TargetCurrentHCID(-1), //Hit Collection ID
    TargetTrackHCID(-1),
    fKinETub1(0.),
    fTrackLTub1(0.),
    pipl_hits(0)
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4EventAction::~K4EventAction()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

//EventActionからヒットコレクションを取得するための関数を作成する。
G4THitsMap<G4double>* K4EventAction::GetHitsCollection(G4int hcID, const G4Event* event)const
{
  G4THitsMap<G4double>* hitsCollection
    = static_cast<G4THitsMap<G4double>*>(event->GetHCofThisEvent()->GetHC(hcID));

  if ( ! hitsCollection ) {
    G4ExceptionDescription msg;
    msg << "Cannot access hitsCollection ID" << hcID;
    G4Exception("EventAction::GetHitsCollection()",
		"MyCode0003", FatalException, msg);
  }
  
  return hitsCollection;
}

// ヒットコレクションのマップ(G4int, G4double)のG4double の値を得て、その和を返す関数を作成する。
G4double K4EventAction::GetSum(G4THitsMap<G4double>* hitsMap) const
{
  G4double SumValue = 0;
  G4double edep = 0.;
   std::map<G4int, G4double*>::iterator it;
   for ( it = hitsMap->GetMap()->begin(); it != hitsMap->GetMap()->end(); it++) {
     edep = *(it->second); //second is detector’s value.
     SumValue += edep;
  }
   return SumValue;
}

void K4EventAction::BeginOfEventAction(const G4Event*)
{
  // initialisation per event
  fKinETub1 = 0.;
  fTrackLTub1 = 0.;
  pipl_hits = 0;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void K4EventAction::EndOfEventAction(const G4Event* event)
{
  //Get hist collection IDs
  if ( TargetCurrentHCID == -1 ) {
    TargetCurrentHCID
      = G4SDManager::GetSDMpointer()->GetCollectionID("TargetDet/eDep"); // SD 名/スコアラー名
  }
  if ( TargetTrackHCID == -1 ) {
        TargetTrackHCID
	  = G4SDManager::GetSDMpointer()->GetCollectionID("TargetDet/tLength");//SD名/スコアラー名
  }

  // get analysis manager
  auto analysisManager = G4AnalysisManager::Instance();

  // ヒットコレクションから 1イベントでのエネルギーデポジットの総和を求めてヒストグラムへ代入する。
  G4double TargetDep = GetSum(GetHitsCollection(TargetCurrentHCID, event));
  G4double TargetTrackL = GetSum(GetHitsCollection(TargetTrackHCID, event));
  
  //get energy of the primary particle [MeV]
  G4PrimaryVertex* primaryVertex = event->GetPrimaryVertex();
  G4PrimaryParticle* primaryParticle = primaryVertex->GetPrimary();
  G4double ke = primaryParticle->GetKineticEnergy();
  G4cout << " PrimaryParticleEnergy is "<< ke <<G4endl; //debug

  /*
  // Print per event (modulo n)
  //
  auto eventID = event->GetEventID();
  auto printModulo = G4RunManager::GetRunManager()->GetPrintProgress();  
  if ( ( printModulo > 0 ) && ( eventID % printModulo == 0 ) ) {
    G4cout << "---> End of event: " << eventID << G4endl;

                G4cout
		  << "Target : energy deposit : " << std::setw(7)
		  << G4BestUnit(TargetDep,"Energy")
		  << G4endl;

		G4cout
		  << "Tubes : length : " << std::setw(7)
		  << G4BestUnit(TubesLen,"Length")
		  << G4endl;
						
		G4cout
		  << "Tubes : number of particles : " << std::setw(7)
		  << G4BestUnit(TubesHit,"")
		  << G4endl;
		
		 G4cout
		   << "TubesM : kinEnergy : " << std::setw(7)
		   << G4BestUnit(fKinETub1,"Energy")
		   << G4endl;

		 G4cout
		   << "total track length: " << std::setw(7)
		   << G4BestUnit(fTrackLTub1,"Length")
		   << G4endl;

  }
  */

  // Fill histograms, ntuple
  //

  /*  
  //fill histograms
  analysisManager->FillH1(1, TargetDep);
  analysisManager->FillH1(2, fKinETub1);
  analysisManager->FillH1(3, fTrackLTub1);
  */
  
  //fill ntuple
  analysisManager->FillNtupleDColumn(0,TargetDep);
  analysisManager->FillNtupleDColumn(1,TargetTrackL);
  analysisManager->FillNtupleDColumn(2,fKinETub1);
  analysisManager->FillNtupleDColumn(3,fTrackLTub1);
  analysisManager->FillNtupleDColumn(4,pipl_hits);
  analysisManager->AddNtupleRow();  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
