#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "../../Living.h"
enum StructureType { HALL, BARRACK, FARM, OTHER };

class Structure : public Living {
 public:
  Structure() {}
  virtual void FinishBuilding() = 0;

 public:
  StructureType is = OTHER;
  bool isBeingBuilt = false;
};

#endif
