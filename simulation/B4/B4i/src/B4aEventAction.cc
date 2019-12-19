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
   fEnergyAbs(0.),
   fEnergyGap(0.),
   fTrackLAbs(0.),
   fTrackLGap(0.)
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4aEventAction::~B4aEventAction()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B4aEventAction::BeginOfEventAction(const G4Event*)
{  
  fEnergyAbs = 0.;
  fEnergyGap = 0.;
  fTrackLAbs = 0.;
  fTrackLGap = 0.;
  for (G4int i=0; i<100; ++i)
    {
      fEnergyAbsbyLyr[i] = 0.;
      fEnergyGapbyLyr[i] = 0.;
    }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B4aEventAction::EndOfEventAction(const G4Event* event)
{
  auto analysisManager = G4AnalysisManager::Instance();

  analysisManager->FillH1(0, fEnergyAbs);
  analysisManager->FillH1(1, fEnergyGap);
  analysisManager->FillH1(2, fTrackLAbs);
  analysisManager->FillH1(3, fTrackLGap);
  
  analysisManager->FillNtupleDColumn(0, fEnergyAbs);
  analysisManager->FillNtupleDColumn(1, fEnergyGap);
  analysisManager->FillNtupleDColumn(2, fTrackLAbs);
  analysisManager->FillNtupleDColumn(3, fTrackLGap);
  for (G4int i = 0; i<100; ++i)
    {
      analysisManager->FillNtupleDColumn(i*2  +4, fEnergyAbsbyLyr[i]);
      analysisManager->FillNtupleDColumn(i*2+1+4, fEnergyGapbyLyr[i]);
    }
  analysisManager->AddNtupleRow();  
  
  auto eventID = event->GetEventID();
  auto printModulo = G4RunManager::GetRunManager()->GetPrintProgress();
  if ( ( printModulo > 0 ) && ( eventID % printModulo == 0 ) ) {
    G4cout << "---> End of event: " << eventID << G4endl;

      G4cout
	<< "   Absorber: total energy: " << std::setw(7)
	<< G4BestUnit(fEnergyAbs,"Energy")
	<< "       total track length: " << std::setw(7)
	<< G4BestUnit(fTrackLAbs,"Length")
	<< G4endl;
      for( G4int i = 0; i<100; ++i)
	{
	        G4cout
		  << i << ";"
		  << std::setw(7)
		  << G4BestUnit(fEnergyAbsbyLyr[i],"Energy")
		  << G4endl;
	}
  }
}  

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
