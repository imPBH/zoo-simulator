//
// Created by Alexis on 11/06/2022.
//

#ifndef TP_ZOO_CPP_HABITATTIGER_H
#define TP_ZOO_CPP_HABITATTIGER_H

#include "IHabitat.h"
#include "Tiger.h"
#include <vector>

class HabitatTiger : public IHabitat {
    vector<Tiger *> _tigers;
public:
    HabitatTiger();
    void AddAnimal(Tiger *tiger);
    void DisplayAnimals();
};


#endif //TP_ZOO_CPP_HABITATTIGER_H
