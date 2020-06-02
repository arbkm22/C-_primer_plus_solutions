#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf (golf & g, const char * name, int hc) {
    std::strcpy (g.fullname, name);
    g.handicap = hc;
}

int setgolf (golf & g) {
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "Enter the name of the player\n";
    cin.get(g.fullname, Len);
    if (g.fullname[0] == '0') {
        cin.clear();
        cin.get();
        return 0;
    }
    else {
        while (cin.get() != '\n')
            continue;
        cout << "Enter the player's handicap\n";
        cin >> g.handicap;
        cin.get();
        return 1;
    }
}

void handicap (golf & g, int hc) {
    g.handicap = hc;
}

void showgolf (const golf & g) {
    using std::cout;
    using std::endl;
    cout << "Player's Name: " << g.fullname << endl;
    cout << "Player's handicap: " << g.handicap << endl;
}
