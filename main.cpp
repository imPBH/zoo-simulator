#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true
#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*#include "Accounting.h"
#include "IAnimal.h"
#include "Tiger.h"
#include "Eagle.h"
#include "Chicken.h"
#include "Habitat.h"*/

#include "Zoo.h"

int main() {
    /*Tiger *t = new Tiger(0, MALE, false);
    Eagle *e = new Eagle(0, FEMALE, HONEST);
    Chicken *c = new Chicken(0, FEMALE, false);
    cout << "I am a " << t->Age() << " days old " << t->Species() << " and I am a " << t->Sex() << endl;
    cout << "I am a " << e->Age() << " days old " << e->Species() << " and I am a " << e->Sex() << endl;
    cout << "I am a " << c->Age() << " days old " << c->Species() << " and I am a " << c->Sex() << endl;
    Accounting *a = new Accounting(80000);
    Habitat *h = new Habitat(TIGER);
    Habitat *h1 = new Habitat(EAGLE);
    Habitat *h2 = new Habitat(CHICKEN);*/
    Zoo *z = new Zoo(80000);
    z->addHabitat(TIGER);
    return 0;
}