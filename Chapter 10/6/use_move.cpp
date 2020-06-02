#include <iostream>
#include "move.h"

int main(void) {
    double a = 12.4;
    double b = 45.6;
    Move panda(a, b);
    panda.showmove();
    Move kangaroo(75.7, 34.5);
    Move bear;
    bear = panda.add(kangaroo);
    bear.showmove();
    panda.reset(89.8, 78.9);
    panda.showmove();
    
    return 0;
}
