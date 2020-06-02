#include <iostream>
#include "cow.h"

int main(void) {
    Cow c0("Name", "Hobby", 26);
    c0.ShowCow();
    Cow c1;
    c1 = c0;
    c1.ShowCow();

    return 0;
}
