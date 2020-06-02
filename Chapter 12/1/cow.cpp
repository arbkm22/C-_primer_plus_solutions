#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow() {
    name[20] = '\0';
    hobby = nullptr;
    weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt) {
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}
Cow::Cow(const Cow & c) {
   strcpy(name, c.name);
   hobby = new char[strlen(c.hobby) + 1];
   strcpy(hobby, c.hobby);
   weight = c.weight;
}
Cow::~Cow() {
    // default destructor
    delete [] hobby;
}
Cow & Cow::operator=(const Cow & c) {
    strcpy(this->name, c.name);
    hobby = new char(strlen(c.hobby) + 1);
    strcpy(this->hobby, c.hobby);
    this->weight = c.weight;
    return *this;
}
void Cow::ShowCow() const {
    using std::cout;
    using std::endl;
    cout << "Name: " << name << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Weight: " << weight << endl;
}
