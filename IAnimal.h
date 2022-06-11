//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_IANIMAL_H
#define TP_ZOO_CPP_IANIMAL_H

#include <string>

using namespace std;

class IAnimal {
    int _age;
    int _sex;
    int _food;
    int _endOfReproduction;
    int _lengthOfLife;
    bool _faithful;
protected:
    int _price;
    float _foodByDay;
    int _daysBeforeHunger;
    int _pregnancy;
    int _sexualMaturity;
    float _infantMortality;
public:
    IAnimal(int age, int sex, int food,
            int endOfReproduction, int lengthOfLife,
            bool faithful);

    int Age();

    string Sex();

    virtual string Species() = 0;
};


#endif //TP_ZOO_CPP_IANIMAL_H
