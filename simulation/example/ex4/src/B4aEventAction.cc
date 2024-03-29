#include "B4aEventAction.hh"
#include "B4RunAction.hh"
#include "B4Analysis.hh"

#include "G4RunManager.hh"
#include "G4Event.hh"
#include "G4UnitsTable.hh"

#include "Randomize.hh"
#include <iomanip>

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4aEventAction::B4aEventAction()
 : G4UserEventAction(),
   fEnergyAbs_01(0.),
   fEnergyAbs_02(0.),
   fEnergyGap(0.),
   fTrackLAbs_01(0.),
   fTrackLAbs_02(0.),
   fTrackLGap(0.)
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4aEventAction::~B4aEventAction()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B4aEventAction::BeginOfEventAction(const G4Event*)
{  
  fEnergyAbs_01 = 0.;
  fEnergyAbs_02 = 0.;
  fEnergyGap = 0.;
  fTrackLAbs_01 = 0.;
  fTrackLAbs_01 = 0.;
  fTrackLGap = 0.;
  for (G4int i=0; i<100; ++i)
    {
      fEnergyAbsbyLyr_01[i] = 0.;
      fEnergyAbsbyLyr_02[i] = 0.;
      fEnergyGapbyLyr[i] = 0.;
    }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B4aEventAction::EndOfEventAction(const G4Event* event)
{
  auto analysisManager = G4AnalysisManager::Instance();

  analysisManager->FillH1(0, fEnergyAbs_01);
  analysisManager->FillH1(1, fEnergyAbs_02);
  analysisManager->FillH1(2, fEnergyGap);
  analysisManager->FillH1(3, fTrackLAbs_01);
  analysisManager->FillH1(4, fTrackLAbs_02);
  analysisManager->FillH1(5, fTrackLGap);
  
  analysisManager->FillNtupleDColumn(0, fEnergyAbs_01);
  analysisManager->FillNtupleDColumn(1, fEnergyAbs_02);
  analysisManager->FillNtupleDColumn(2, fEnergyGap);
  analysisManager->FillNtupleDColumn(3, fTrackLAbs_01);
  analysisManager->FillNtupleDColumn(4, fTrackLAbs_02);
  analysisManager->FillNtupleDColumn(5, fTrackLGap);
  for (G4int i = 0; i<100; ++i)
    {
      analysisManager->FillNtupleDColumn(i*2  +6, fEnergyAbsbyLyr_01[i]);
      analysisManager->FillNtupleDColumn(i*2+1+6, fEnergyAbsbyLyr_02[i]);
      analysisManager->FillNtupleDColumn(i*2+2+6, fEnergyGapbyLyr[i]);
    }
  analysisManager->AddNtupleRow();  
  
  auto eventID = event->GetEventID();
  auto printModulo = G4RunManager::GetRunManager()->GetPrintProgress();
  if ( ( printModulo > 0 ) && ( eventID % printModulo == 0 ) ) {
    G4cout << "---> End of event: " << eventID << G4endl;

      G4cout
	<< "   Absorber: 01 energy: " << std::setw(7)
	<< G4BestUnit(fEnergyAbs_01,"Energy")
	<< "   Absorber: 02 energy: " << std::setw(7)
	<< G4BestUnit(fEnergyAbs_02,"Energy")
        << G4endl;
      for( G4int i = 0; i<100; ++i)
	{
	        G4cout
		  << i << ";"
		  << " 01 energy;"
		  << std::setw(7)
		  << G4BestUnit(fEnergyAbsbyLyr_01[i],"Energy")
                  << " 02 energy;"
		  << std::setw(7)
		  << G4BestUnit(fEnergyAbsbyLyr_02[i],"Energy")
		  << G4endl;
	}
  }
}  

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
