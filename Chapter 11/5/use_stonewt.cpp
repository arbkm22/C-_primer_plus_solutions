#include <iostream>
#include "stonewt.h"

int main(void) {
    using std::cout;
    using std::endl;
    Stonewt panda(275);
    Stonewt tiger(21, 8);
    cout << "Stonewt: Panda = " << panda << endl;
    cout << "Stonewt: Tiger = " << tiger << endl;
    Stonewt lion;
    lion = tiger + panda;
    cout << "Stonewt: Lion = " << lion << endl;

    return 0;
}
