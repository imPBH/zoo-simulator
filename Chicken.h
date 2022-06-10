//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_CHICKEN_H
#define TP_ZOO_CPP_CHICKEN_H

class Chicken : public IAnimal {
public:
    Chicken(int age, int sex, bool faithful);

    string Species();
};


#endif //TP_ZOO_CPP_CHICKEN_H
