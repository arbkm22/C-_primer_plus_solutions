#include <iostream>
#include "person.h"
#include <string>
#include <cstring>

using std::string;

Person::Person(const string & ln, const char * fn) {
    Person::lname = ln;
    std::strncpy(Person::fname, fn, sizeof(fname));
}
void Person::Show() const {
    std::cout << "Last name: " << Person::lname << std:: endl;
    std::cout << "First name: " << Person::fname << std::endl;
}
void Person::FormalShow() const {
    std::cout << "First name: " << Person::fname << std:: endl;
    std::cout << "Last name: " << Person::lname << std::endl;
}
