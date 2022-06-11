//
// Created by Alexis on 11/06/2022.
//

#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include "IHabitat.h"
#include "HabitatEagle.h"
#include <iostream>

using namespace std;

HabitatEagle::HabitatEagle() : IHabitat(EAGLE) {
    _Species = "eagle";
    _buyingPrice = 2000;
    _sellingPrice = 500;
    _capacity = 4;
    _currentCapacity = 0;
    _looseIfSurpopulationByMonth = 1;
    _probabilityOfBeingSick = 0.1;
    cout << "Habitat created" << endl;
    cout << "Type of animal: " << _Species << endl;
}
