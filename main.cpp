#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "Accounting.h"
#include "IAnimal.h"
#include "Tiger.h"
#include "Eagle.h"
#include "Chicken.h"


int main() {
    Tiger *t = new Tiger(0, MALE, false);
    Eagle *e = new Eagle(0, FEMALE, HONEST);
    Chicken *c = new Chicken(0, FEMALE, false);
    cout << "I am a " << t->Age() << " days old " << t->Species() << " and I am a " << t->Sex() << endl;
    cout << "I am a " << e->Age() << " days old " << e->Species() << " and I am a " << e->Sex() << endl;
    cout << "I am a " << c->Age() << " days old " << c->Species() << " and I am a " << c->Sex() << endl;
    Accounting *a = new Accounting(80000);
    return 0;
}