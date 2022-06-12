//
// Created by Alexis on 10/06/2022.
//
#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true

#include <iostream>

using namespace std;

#include "Accounting.h"

Accounting::Accounting(int budget) {
    _budget = budget;
    _seedPrice = 2.5;
    _meatPrice = 5;
    _seedCount = 0;
    _meatCount = 0;
    _adultTicketPrice = 17;
    _childTicketPrice = 13;
    _subventionForEagle = 2190;
    _subventionForTiger = 43800;
    cout << "Budget: " << _budget << endl;
    cout << "Seed price: " << _seedPrice << endl;
    cout << "Meat price: " << _meatPrice << endl;
    cout << "Adult ticket price: " << _adultTicketPrice << endl;
    cout << "Child ticket price: " << _childTicketPrice << endl;
    cout << "Subvention for Eagle: " << _subventionForEagle << endl;
    cout << "Subvention for Tiger: " << _subventionForTiger << endl;
}

void Accounting::BuySeed(float seedCount) {
    if ((seedCount * _seedPrice) > _budget) {
        cout << "Not enough money" << endl;
        return;
    }
    _seedCount += seedCount;
    _budget -= seedCount * _seedPrice;
    cout << "Buyed " << seedCount << "kg of seeds, " << "seed count: " << _seedCount << endl;
}

void Accounting::BuyMeat(float meatCount) {
    if ((meatCount * _meatPrice) > _budget) {
        cout << "Not enough money" << endl;
        return;
    }
    _meatCount += meatCount;
    _budget -= meatCount * _meatPrice;
    cout << "Buyed " << meatCount << "kg of meat, " << "meat count: " << _meatCount << endl;
}

float Accounting::Budget() {
    return _budget;
}

float Accounting::SeedCount() {
    return _seedCount;
}

float Accounting::MeatCount() {
    return _meatCount;
}

void Accounting::RemoveMeat(float meatCount) {
    _meatCount -= meatCount;
}

void Accounting::RemoveSeed(float seedCount) {
    _seedCount -= seedCount;
}

void Accounting::Buy(float price) {
    _budget -= price;
}

void Accounting::Sell(float price) {
    _budget += price;
}