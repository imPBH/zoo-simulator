//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_ZOO_H
#define TP_ZOO_CPP_ZOO_H

#include "Habitat.h"
#include "Accounting.h"
#include <vector>

class Zoo {
    vector <Habitat> _habitats;
    Accounting *_accounting;
public:
    Zoo(int budget);
    void addHabitat(int typeOfAnimal);
};


#endif //TP_ZOO_CPP_ZOO_H
