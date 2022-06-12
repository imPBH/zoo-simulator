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
#include "Tiger.h"
#include "Eagle.h"
#include "Chicken.h"
#include <vector>
#include <iostream>

using namespace std;

Zoo::Zoo(int budget) {
    _accounting = new Accounting(budget);
}

void Zoo::AddHabitat(int typeOfAnimal) {
    switch (typeOfAnimal) {
        case TIGER:
            if (_accounting->Budget() >= 2000 ) {
                _accounting->Buy(2000);
                _habitatsTiger.push_back(new HabitatTiger());
            } else {
                cout << "Not enough money" << endl;
            }
            break;
        case EAGLE:
            if (_accounting->Budget() >= 2000 ) {
                _accounting->Buy(2000);
                _habitatsEagle.push_back(new HabitatEagle());
            } else {
                cout << "Not enough money" << endl;
            }
            break;
        case CHICKEN:
            if (_accounting->Budget() >= 300 ) {
                _accounting->Buy(300);
                _habitatsChicken.push_back(new HabitatChicken());
            } else {
                cout << "Not enough money" << endl;
            }
            break;
    }
}

void Zoo::AddAnimal(Tiger *tiger) {
    if (_accounting->Budget() >= tiger->BuyingPrice()) {
        for (int i = 0; i < _habitatsTiger.size(); i++) {
            if (_habitatsTiger[i]->GetTypeOfAnimal() == TIGER) {
                if (_habitatsTiger[i]->GetCurrentCapacity() < _habitatsTiger[i]->GetCapacity()) {
                    _habitatsTiger[i]->AddAnimal(tiger);
                    _accounting->Buy(tiger->BuyingPrice());
                    return;
                }
                cout << "Habitat is full" << endl;
            }
        }
    }
    cout << "Not enough money" << endl;
}

void Zoo::AddAnimal(Eagle *eagle) {
    if (_accounting->Budget() >= eagle->BuyingPrice()) {
        for (int i = 0; i < _habitatsEagle.size(); i++) {
            if (_habitatsEagle[i]->GetTypeOfAnimal() == EAGLE) {
                if (_habitatsEagle[i]->GetCurrentCapacity() < _habitatsEagle[i]->GetCapacity()) {
                    _habitatsEagle[i]->AddAnimal(eagle);
                    _accounting->Buy(eagle->BuyingPrice());
                    return;
                }
                cout << "Habitat is full" << endl;
            }
        }
    }
    cout << "Not enough money" << endl;
}

void Zoo::AddAnimal(Chicken *chicken) {
    if (_accounting->Budget() >= chicken->BuyingPrice()) {
        for (int i = 0; i < _habitatsChicken.size(); i++) {
            if (_habitatsChicken[i]->GetTypeOfAnimal() == CHICKEN) {
                if (_habitatsChicken[i]->GetCurrentCapacity() < _habitatsChicken[i]->GetCapacity()) {
                    _habitatsChicken[i]->AddAnimal(chicken);
                    _accounting->Buy(chicken->BuyingPrice());
                    return;
                }
                cout << "Habitat is full" << endl;
            }
        }
    }
    cout << "Not enough money" << endl;
}

void Zoo::DisplayHabitats() {
    for (int i = 0; i < _habitatsTiger.size(); i++) {
        cout << "Tigers habitat No " << i + 1 << endl;
        _habitatsTiger[i]->DisplayAnimals();
    }
    for (int i = 0; i < _habitatsEagle.size(); i++) {
        cout << "Eagles habitat No " << i + 1 << endl;
        _habitatsEagle[i]->DisplayAnimals();
    }
    for (int i = 0; i < _habitatsChicken.size(); i++) {
        cout << "Chickens habitat No " << i + 1 << endl;
        _habitatsChicken[i]->DisplayAnimals();
    }
}

void Zoo::BuySeed(int seedCount) {
    _accounting->BuySeed(seedCount);
}

void Zoo::BuyMeat(int meatCount) {
    _accounting->BuyMeat(meatCount);
}

float Zoo::Budget() {
    return _accounting->Budget();
}

void Zoo::FeedAnimals() {
    for (int i = 0; i < _habitatsTiger.size(); i++) {
        _habitatsTiger[i]->FeedAnimals(_accounting);
    }
    for (int i = 0; i < _habitatsEagle.size(); i++) {
        _habitatsEagle[i]->FeedAnimals(_accounting);
    }
    for (int i = 0; i < _habitatsChicken.size(); i++) {
        _habitatsChicken[i]->FeedAnimals(_accounting);
    }
}

float Zoo::SeedCount() {
    return _accounting->SeedCount();
}

float Zoo::MeatCount() {
    return _accounting->MeatCount();
}

void Zoo::SellHabitat(int typeOfAnimal) {
    switch (typeOfAnimal) {
        case TIGER:
            for (int i = 0; i < _habitatsTiger.size(); i++) {
                if (_habitatsTiger[i]->Size() == 0) {
                    _accounting->Sell(_habitatsTiger[i]->GetSellingPrice());
                    delete _habitatsTiger[i];
                    _habitatsTiger.erase(_habitatsTiger.begin() + i);
                    cout << "Habitat sold" << endl;
                    return;
                }
            }
            cout << "No habitat can be sold, make sure there is an empty one" << endl;
        case EAGLE:
            for (int i = 0; i < _habitatsEagle.size(); i++) {
                if (_habitatsEagle[i]->Size() == 0) {
                    _accounting->Sell(_habitatsEagle[i]->GetSellingPrice());
                    delete _habitatsEagle[i];
                    _habitatsEagle.erase(_habitatsEagle.begin() + i);
                    cout << "Habitat sold" << endl;
                    return;
                }
            }
            cout << "No habitat can be sold, make sure there is an empty one" << endl;
        case CHICKEN:
            for (int i = 0; i < _habitatsChicken.size(); i++) {
                if (_habitatsChicken[i]->Size() == 0) {
                    _accounting->Sell(_habitatsChicken[i]->GetSellingPrice());
                    delete _habitatsChicken[i];
                    _habitatsChicken.erase(_habitatsChicken.begin() + i);
                    cout << "Habitat sold" << endl;
                    return;
                }
            }
            cout << "No habitat can be sold, make sure there is an empty one" << endl;
    }
}

void Zoo::SellAnimal(int typeOfAnimal) {
    switch(typeOfAnimal) {
        case TIGER:
            for (int i = 0; i < _habitatsTiger.size(); i++) {
                if (_habitatsTiger[i]->Size() > 0) {
                    _habitatsTiger[i]->DisplayAnimals();
                    cout << "Enter the number of the animal you want to sell : ";
                    int number;
                    cin >> number;
                    cout << "You sold a tiger for $" << _habitatsTiger[i]->GetAnimalPrice(number) << endl;
                    _accounting->Sell(_habitatsTiger[i]->GetAnimalPrice(number));
                    _habitatsTiger[i]->RemoveAnimal(number);
                    return;
                }
            }
            cout << "No animal can be sold, make sure there is an empty one" << endl;
            break;
        case EAGLE:
            for (int i = 0; i < _habitatsEagle.size(); i++) {
                if (_habitatsEagle[i]->Size() > 0) {
                    _habitatsEagle[i]->DisplayAnimals();
                    cout << "Enter the number of the animal you want to sell : ";
                    int number;
                    cin >> number;
                    cout << "You sold an eagle for $" << _habitatsEagle[i]->GetAnimalPrice(number) << endl;
                    _accounting->Sell(_habitatsEagle[i]->GetAnimalPrice(number));
                    _habitatsEagle[i]->RemoveAnimal(number);
                    return;
                }
            }
            cout << "No animal can be sold, make sure there is an empty one" << endl;
            break;
        case CHICKEN:
            for (int i = 0; i < _habitatsChicken.size(); i++) {
                if (_habitatsChicken[i]->Size() > 0) {
                    _habitatsChicken[i]->DisplayAnimals();
                    cout << "Enter the number of the animal you want to sell : ";
                    int number;
                    cin >> number;
                    cout << "You sold a chicken for $" << _habitatsChicken[i]->GetAnimalPrice(number) << endl;
                    _accounting->Sell(_habitatsChicken[i]->GetAnimalPrice(number));
                    _habitatsChicken[i]->RemoveAnimal(number);
                    return;
                }
            }
            cout << "No animal can be sold, make sure there is an empty one" << endl;
            break;
    }
}