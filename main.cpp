#include <iostream>
#include <vector>

#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true
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

class Tiger : public IAnimal {
public:
    Tiger(int age, int sex, bool faithful);

    string Species();
};

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

class Eagle : public IAnimal {
public:
    Eagle(int age, int sex, bool faithful);

    string Species();
};

Eagle::Eagle(int age, int sex, bool faithful) :
        IAnimal(age, sex, MEAT, 14, 25, faithful) {
    switch (sex) {
        case MALE:
            _foodByDay = 0.25;
            _daysBeforeHunger = 10;
            _sexualMaturity = 48;
            _pregnancy = 0;
            _infantMortality = 0;
            break;
        case FEMALE:
            _foodByDay = 0.3;
            _daysBeforeHunger = 10;
            _sexualMaturity = 48;
            _pregnancy = 45;
            _infantMortality = 0.5;
            break;
    }
}

string Eagle::Species() {
    return "eagle";
}

class Chicken : public IAnimal {
public:
    Chicken(int age, int sex, bool faithful);

    string Species();
};

Chicken::Chicken(int age, int sex, bool faithful) :
        IAnimal(age, sex, SEEDS, 8, 15, faithful) {
    switch (sex) {
        case MALE:
            _foodByDay = 0.18;
            _daysBeforeHunger = 2;
            _sexualMaturity = 6;
            _pregnancy = 0;
            _infantMortality = 0;
            break;
        case FEMALE:
            _foodByDay = 0.15;
            _daysBeforeHunger = 1;
            _sexualMaturity = 6;
            _pregnancy = 42;
            _infantMortality = 0.5;
            break;
    }
}

string Chicken::Species() {
    return "chicken";
}

int main() {
    Tiger *t = new Tiger(0, MALE, false);
    Eagle *e = new Eagle(0, FEMALE, HONEST);
    Chicken *c = new Chicken(0, FEMALE, false);
    cout << "I am a " << t->Age() << " days old " << t->Species() << " and I am a " << t->Sex() << endl;
    cout << "I am a " << e->Age() << " days old " << e->Species() << " and I am a " << e->Sex() << endl;
    cout << "I am a " << c->Age() << " days old " << c->Species() << " and I am a " << c->Sex() << endl;
    return 0;
}