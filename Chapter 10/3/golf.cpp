#include <iostream>
#include "golf.h"
#include <cstring>

Golf::Golf() {
}
Golf::Golf(const char * name, int hc) {
    if (name[0] == '\0')
        return;
    else {
        std::strcpy(this->fullname, name);
        this->handicap = hc;
    }
}
int Golf::SetGolf() {
   using std::cout;
   using std::cin;

   cout << "Enter name: ";
   char fullname[50];
   int handicap;
   cin.get(fullname, 50);
   if (fullname[0] == '\0') {
       cin.clear();
       cin.get();
       return 0;
   }
   else {
       while (cin.get() != '\n')
           continue;
       cout << "Enter handicap value: ";
       while (!(cin >> handicap)) {
           cin.clear();
           while (cin.get() != '\n')
               continue;
           cout << "Enter a number: ";
       }
       cin.get();
       Golf golf(fullname, handicap);
       *this = golf;

       return 1;
   }
}
void Golf::Handicap(int hc) {
    this->handicap = hc;
}
void Golf::ShowGolf() const {
    using std::cout;
    using std::endl;
    cout << "Name = " << this->fullname << endl;
    cout << "Handicap: " << this->handicap << endl;
}
