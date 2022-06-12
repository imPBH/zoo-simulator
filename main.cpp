#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true
#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include <vector>
#include "iostream"

using namespace std;

#include "Zoo.h"

int main() {
    Zoo *z = new Zoo(80000);
    z->AddHabitat(TIGER);
    z->AddHabitat(TIGER);
    z->AddHabitat(EAGLE);
    z->AddHabitat(CHICKEN);
    z->AddHabitat(CHICKEN);

    z->AddAnimal(new Tiger(0, MALE, false));
    z->AddAnimal(new Tiger(0, FEMALE, false));
    z->AddAnimal(new Tiger(0, MALE, false));
    z->AddAnimal(new Tiger(0, FEMALE, false));

    z->AddAnimal(new Eagle(0, MALE, true));
    z->AddAnimal(new Eagle(0, FEMALE, true));
    z->AddAnimal(new Eagle(0, MALE, true));
    z->AddAnimal(new Eagle(0, FEMALE, true));

    z->AddAnimal(new Chicken(0, MALE, false));

    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));

    z->DisplayHabitats();
    z->BuyMeat(15);
    z->BuySeed(20);
    cout << "Budget : " << z->Budget() << endl;
    return 0;
}