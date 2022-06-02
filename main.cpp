#include <iostream>
#include <vector>

#define MEAT 0
#define SEEDS 1

#define MALE 0
#define FEMALE 1

using namespace std;

class IAnimal {
    int _age;
    bool _sex;
    int _food;
    int _daysBeforeHunger;
    int _endOfReproduction;
    int _lengthOfLife;
    int _observation;
protected:
    int _price;
    float _foodByDay;
    int _pregnancy;
    int _sexualMaturity;
    float _infantMortality;
public:
    IAnimal(int age, bool sex, int food, int daysBeforeHunger,
            int endOfReproduction, int lengthOfLife,
            int observation);

    int Age();

    string Sex();
};

IAnimal::IAnimal(int age, bool sex, int food, int daysBeforeHunger,
                 int endOfReproduction, int lengthOfLife,
                 int observation) : _age(age), _sex(sex), _food(food),
                                    _daysBeforeHunger(daysBeforeHunger),
                                    _endOfReproduction(endOfReproduction),
                                    _lengthOfLife(lengthOfLife),
                                    _observation(observation) {
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
    Tiger(int age, bool sex, int observation);
};

Tiger::Tiger(int age, bool sex, int observation) :
        IAnimal(age, sex, MEAT, 2, 14, 25, observation) {
    switch (sex) {
        case MALE:
            _foodByDay = 12;
            _sexualMaturity = 72;
            _pregnancy = 0;
            _infantMortality = 0;
            break;
        case FEMALE:
            _foodByDay = 10;
            _sexualMaturity = 48;
            _pregnancy = 90;
            _infantMortality = 0.33;
            break;
    }
}


int main() {
    Tiger *t = new Tiger(0, MALE, 0);
    cout << "I am " << t->Age() << " months old, and I am a " << t->Sex() << endl;
    return 0;
}
