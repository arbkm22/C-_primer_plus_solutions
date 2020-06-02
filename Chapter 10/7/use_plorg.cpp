#include <iostream>
#include "plorg.h"

int main(void) {
    Plorg panda(45);
    panda.report();
    panda.changeCI(75);
    panda.report();
    Plorg tiger(89, "Tigress");
    tiger.report();

    return 0;
}
