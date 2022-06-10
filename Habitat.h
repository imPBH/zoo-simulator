//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_HABITAT_H
#define TP_ZOO_CPP_HABITAT_H

#include <string>

using namespace std;

class Habitat {
    int _typeOfAnimal;
    string _Species;
    int _buyingPrice;
    int _sellingPrice;
    int _capacity;
    int _currentCapacity;
    int _looseIfSurpopulationByMonth;
    float _probabilityOfBeingSick;
public:
    Habitat(int typeOfAnimal);
};


#endif //TP_ZOO_CPP_HABITAT_H
