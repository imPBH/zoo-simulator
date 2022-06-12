//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_ZOO_H
#define TP_ZOO_CPP_ZOO_H

#include "IHabitat.h"
#include "Accounting.h"
#include "Tiger.h"
#include "Chicken.h"
#include "Eagle.h"
#include "HabitatEagle.h"
#include "HabitatChicken.h"
#include "HabitatTiger.h"
#include <vector>

class Zoo {
    vector<HabitatTiger *> _habitatsTiger;
    vector<HabitatChicken *> _habitatsChicken;
    vector<HabitatEagle *> _habitatsEagle;
    Accounting *_accounting;
public:
    Zoo(int budget);

    void AddHabitat(int typeOfAnimal);
    void AddAnimal(Tiger *tiger);
    void AddAnimal(Eagle *eagle);
    void AddAnimal(Chicken *chicken);
    void DisplayHabitats();
    void BuySeed(int seedCount);
    void BuyMeat(int meatCount);
    float Budget();
    void FeedAnimals();
    float SeedCount();
    float MeatCount();
};


#endif //TP_ZOO_CPP_ZOO_H
