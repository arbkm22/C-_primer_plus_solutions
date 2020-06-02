#include <iostream>
#include "golf.h"

int main(void) {
    Golf golf("Bhaskar", 10);
    int x = golf.SetGolf();
    std::cout << "Member function SetGolf called: " << x << std::endl;
    golf.Handicap(10);
    golf.ShowGolf();

    return 0;
}
