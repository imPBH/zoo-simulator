//
// Created by Alexis on 10/06/2022.
//
#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true

#include <string>

using namespace std;

#include "IAnimal.h"
#include "Tiger.h"

Tiger::Tiger(int age, int sex, bool faithful) :
        IAnimal(age, sex, MEAT, 14, 25, faithful) {
    switch (sex) {
        case MALE:
            _foodByDay = 12;
            _daysBeforeHunger = 2;
            _sexualMaturity = 72;
            _pregnancy = 0;
            _infantMortality = 0;
            break;
        case FEMALE:
            _foodByDay = 10;
            _daysBeforeHunger = 2;
            _sexualMaturity = 48;
            _pregnancy = 90;
            _infantMortality = 0.33;
            break;
    }
}

string Tiger::Species() {
    return "tiger";
}
