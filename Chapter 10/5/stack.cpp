#include <iostream>
#include "stack.h"
#include <cstring>

Stack::Stack() {}
Stack::Stack(const char * name, double money) {
    std::strcpy(fullname, name);
    payment = money;
}
void Stack::Modify() {
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "Press A to add customer, and " 
            << "D to remove customer.\n";
    char ch;
    while (!(cin >> ch)) {
        cin.clear();
        cin.get();
        while (cin.get() != '\n')
            continue;
        cin.get();
    }
    switch(ch) {
        case 'A':
        case 'a': 
    }
}
