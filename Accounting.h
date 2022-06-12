//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_ACCOUNTING_H
#define TP_ZOO_CPP_ACCOUNTING_H


class Accounting {
    float _budget;
    float _seedPrice;
    float _meatPrice;
    int _seedCount;
    int _meatCount;
    int _adultTicketPrice;
    int _childTicketPrice;
    int _subventionForEagle;
    int _subventionForTiger;
public:
    Accounting(int budget);
    void BuySeed(int seedCount);
    void BuyMeat(int meatCount);
    float Budget();
};


#endif //TP_ZOO_CPP_ACCOUNTING_H
