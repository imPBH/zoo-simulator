#include <iostream>
#include <vector>

using namespace std;

class IAnimal {
    int _age;
    int _price;
    bool _sex;
    int _food;
    float _foodByDay;
    int _daysBeforeHunger;
    int _sexualMaturity;
    int _pregnancy;
    int _endOfReproduction;
    float _infantMortality;
    int _lengthOfLife;
    int _observation;
public:
    IAnimal(int age, int price, bool sex, int food, float foodByDay, int daysBeforeHunger, int sexualMaturity,
            int pregnancy, int endOfReproduction, float infantMortality, int lengthOfLife, int observation);
};

IAnimal::IAnimal(int age, int price, bool sex, int food, float foodByDay, int daysBeforeHunger,
                 int sexualMaturity, int pregnancy, int endOfReproduction, float infantMortality, int lengthOfLife,
                 int observation) : _age(age), _price(price), _sex(sex), _food(food), _foodByDay(foodByDay),
                                    _daysBeforeHunger(daysBeforeHunger), _sexualMaturity(sexualMaturity),
                                    _pregnancy(pregnancy),
                                    _endOfReproduction(endOfReproduction), _infantMortality(infantMortality),
                                    _lengthOfLife(lengthOfLife),
                                    _observation(observation) {

}

int main() {
    return 0;
}
