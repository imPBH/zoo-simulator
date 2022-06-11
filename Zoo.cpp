//
// Created by Alexis on 10/06/2022.
//

#include "Zoo.h"

Zoo::Zoo(int budget) {
    _accounting = new Accounting(budget);
}

void Zoo::addHabitat(int typeOfAnimal) {
    _habitats.push_back(Habitat(typeOfAnimal));
}