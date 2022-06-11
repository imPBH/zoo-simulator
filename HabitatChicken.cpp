//
// Created by Alexis on 11/06/2022.
//
#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include "IHabitat.h"
#include "HabitatChicken.h"
#include <iostream>

using namespace std;

HabitatChicken::HabitatChicken() : IHabitat(CHICKEN) {
    _Species = "chicken";
    _buyingPrice = 300;
    _sellingPrice = 50;
    _capacity = 10;
    _currentCapacity = 0;
    _looseIfSurpopulationByMonth = 4;
    _probabilityOfBeingSick = 0.05;
    cout << "Habitat created" << endl;
    cout << "Type of animal: " << _Species << endl;
}
