//
// Created by Alexis on 10/06/2022.
//
#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include "Zoo.h"
//#include "IHabitat.h"
#include "HabitatEagle.h"
#include "HabitatTiger.h"
#include "HabitatChicken.h"
#include <vector>

Zoo::Zoo(int budget) {
    _accounting = new Accounting(budget);
}

void Zoo::addHabitat(int typeOfAnimal) {
    switch (typeOfAnimal) {
        case TIGER:
            _habitats.push_back(new HabitatTiger());
            break;
        case EAGLE:
            _habitats.push_back(new HabitatEagle());
            break;
        case CHICKEN:
            _habitats.push_back(new HabitatChicken());
            break;
    }
}