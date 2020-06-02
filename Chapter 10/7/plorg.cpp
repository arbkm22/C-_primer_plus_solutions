#include <iostream>
#include "plorg.h"
#include <cstring>
Plorg::Plorg(int n, const char * fullname) {
    strcpy(name, fullname);
    ci = n;
}
void Plorg::changeCI(int n) {
    std::cout << "Passed value of CI = " << n << std::endl;
    this->ci = n;
}
void Plorg::report() const {
    std::cout << "Name of Plorg = " << this->name << std::endl;
    std::cout << "Value of CI = " << this->ci << std::endl;
}
