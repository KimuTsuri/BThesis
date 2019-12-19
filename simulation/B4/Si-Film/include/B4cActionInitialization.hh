
#ifndef B4cActionInitialization_h
#define B4cActionInitialization_h 1

#include "G4VUserActionInitialization.hh"

class B4DetectorConstruction;

class B4cActionInitialization : public G4VUserActionInitialization
{
  public:
    B4cActionInitialization(B4DetectorConstruction*);
    virtual ~B4cActionInitialization();

    virtual void BuildForMaster() const;
    virtual void Build() const;

  private:
    B4DetectorConstruction* fDetConstruction;
};

#endif

    
