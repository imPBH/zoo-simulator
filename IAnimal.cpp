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

IAnimal::IAnimal(int age, int sex, int food,
                 int endOfReproduction, int lengthOfLife,
                 bool faithful) : _age(age), _sex(sex), _food(food),
                                  _endOfReproduction(endOfReproduction),
                                  _lengthOfLife(lengthOfLife),
                                  _faithful(faithful) {
}

int IAnimal::Age() {
    return _age;
}

string IAnimal::Sex() {
    switch (_sex) {
        case MALE:
            return "male";
            break;
        case FEMALE:
            return "female";
            break;
    }
}