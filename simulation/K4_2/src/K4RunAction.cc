//
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
// $Id: B1RunAction.cc 87359 2014-12-01 16:04:27Z gcosmo $
//
/// \file K4RunAction.cc
/// \brief Implementation of the K4RunAction class

#include "K4RunAction.hh"
//#include "K4PrimaryGeneratorAction.hh"
//#include "K4DetectorConstruction.hh"
#include "K4Analysis.hh"

#include "G4Run.hh"
#include "G4RunManager.hh"
//#include "G4LogicalVolumeStore.hh"
//#include "G4LogicalVolume.hh"
#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4RunAction::K4RunAction()
  : G4UserRunAction()
{
  // set printing event number per each event
  G4RunManager::GetRunManager()->SetPrintProgress(1);

  // Create analysis manager
  // The choice of analysis technology is done via selectin of a namespace
  // in K2Analysis.hh
  auto analysisManager = G4AnalysisManager::Instance();
  G4cout << "Using " << analysisManager->GetType() << G4endl;

  // Create directories
  //analysisManager->SetHistoDirectoryName("histograms");
  //analysisManager->SetNtupleDirectoryName("ntuple");
  analysisManager->SetVerboseLevel(1);
  analysisManager->SetFirstHistoId(1); //Hist Id starts from 1 not from 0
  analysisManager->SetNtupleMerging(true);
  // Note: merging ntuples is available only with Root output

  //
  // Book histograms, ntuple
  //
  /*
  //Creating 2D histograms
  analysisManager->CreateH2("K2", //name
			    "Edap in scintillator", //title
			    100, //nxbins
			    0., //xmin
			    10*GeV, //xmax
			    100, //nybins
			    0., //ymin
			    200*GeV); //ymax
  */
  /*  
  // Creating histogram
  analysisManager->CreateH1("K3TaD","Proton eDeposit in Target",100, 0., 2*GeV);
  analysisManager->CreateH1("Ktub1","KinE in tube1",100, 0, 1200*GeV);
  analysisManager->CreateH1("Ltub","trackL in tube1",100, 0., 500*mm);
  */

  // Creating ntuple
  //
  analysisManager->CreateNtuple("K4", "TargetDep,TargetLen,TubesLen and TubesKinE");
  analysisManager->CreateNtupleDColumn("TarDep");
  analysisManager->CreateNtupleDColumn("TarTrL");
  analysisManager->CreateNtupleDColumn("Ktub1");
  analysisManager->CreateNtupleDColumn("Ltub1");
  analysisManager->CreateNtupleDColumn("H1pipl");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("pipl", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_pipl");
  analysisManager->CreateNtupleDColumn("R1_pipl");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("pimi", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_pimi");
  analysisManager->CreateNtupleDColumn("R1_pimi");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("kapl", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_kapl");
  analysisManager->CreateNtupleDColumn("R1_kapl");

  analysisManager->CreateNtuple("kami", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_kami");
  analysisManager->CreateNtupleDColumn("R1_kami");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("mumi", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_mumi");
  analysisManager->CreateNtupleDColumn("R1_mumi");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("mupl", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_mupl");
  analysisManager->CreateNtupleDColumn("R1_mupl");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("emi", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_emi");
  analysisManager->CreateNtupleDColumn("R1_emi");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("epl", "kinE and TubesHitsPosition");
  analysisManager->CreateNtupleDColumn("k1_epl");
  analysisManager->CreateNtupleDColumn("R1_epl");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("hit_pipl", "Hits zPosition");
  analysisManager->CreateNtupleDColumn("z_pipl");
  analysisManager->FinishNtuple();

  analysisManager->CreateNtuple("hit_pimi", "Hits zPosition");
  analysisManager->CreateNtupleDColumn("z_pimi");
  analysisManager->FinishNtuple();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

K4RunAction::~K4RunAction()
{
  delete G4AnalysisManager::Instance();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void K4RunAction::BeginOfRunAction(const G4Run*)
{
  //inform the runManager to save random number seed
  //G4RunManager::GetRunManager()->SetRandomNumberStore(false);

  // Get analysis manager
  auto analysisManager = G4AnalysisManager::Instance();

  // Open an output file
  //
  G4String fileName = "K4_2_test";
  analysisManager->OpenFile(fileName);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void K4RunAction::EndOfRunAction(const G4Run* /*run*/)
{
  // print histogram statistics
  //
  auto analysisManager = G4AnalysisManager::Instance();
  /*  
  if ( analysisManager->GetH1(1) ) {
    G4cout << G4endl << " ----> print histograms statistic ";
    if(isMaster) {
    G4cout << "for the entire run " << G4endl << G4endl;
    }
    else {
    G4cout << "for the local thread " << G4endl << G4endl;
    }

    G4cout << " EdepTarget : mean = "
           << G4BestUnit(analysisManager->GetH1(1)->mean(), "Energy")
           << " rms = "
           << G4BestUnit(analysisManager->GetH1(1)->rms(),  "Energy")
	   << G4endl;
   
    G4cout << " KinETubes1 : mean = "
	   << G4BestUnit(analysisManager->GetH1(2)->mean(), "Energy")
	   << " rms = "
	   << G4BestUnit(analysisManager->GetH1(2)->rms(),  "Energy")
	   << G4endl;

    G4cout << " LTube1 : mean = "
	   << G4BestUnit(analysisManager->GetH1(3)->mean(), "Length")
	   << " rms = "
	   << G4BestUnit(analysisManager->GetH1(3)->rms(),  "Length")
	   << G4endl;
  }
  */
  
  // save histograms & ntuple
  //
  analysisManager->Write();
  analysisManager->CloseFile();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

