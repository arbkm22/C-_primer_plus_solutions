#include <iostream>
#include <string>

using namespace std;

void menu() {
    
    cout << "Enter your choice.\n";
    cout << "a. display by name\t\t b. display by title\n";
    cout << "c. display by bopname\t\t d. display by preference\n";
    cout << "q. quit\n";
}

struct bop {
    string fullname;
    string title;
    string bopname;
    int preference;
};

int main(void) {

    menu();
    bop * users = new bop [3];
    users[0] = {
        "Uzumaki Naruto",
        "Hokage",
        "foxy_kid",
        7
    };
    users[1] = {
        "Monkey D. Luffy",
        "Pirate",
        "devil_fruit_kid",
        2
    };
    users[2] = {
        "Sakata Gintoki",
        "Yoruzuya",
        "gag_senpai",
        22
    };
    char ch;
    cin >> ch;
    while (ch != 'q') {
        switch (ch) {
            case 'a':
                for (int i=0; i<3; i++)
                    cout << users[i].fullname << endl;
                break;
            case 'b':
                for (int i=0; i<3; i++)
                    cout << users[i].title << endl;
                break;
            case 'c':
                for (int i=0; i<3; i++)
                    cout << users[i].bopname << endl;
                break;
            case 'd':
                int pref;
                cout << "Enter Preference number(between 0 and 2): ";
                cin >> pref;
                if (pref == 0) {
                    cout << users[pref].fullname << endl;
                    cout << users[pref].title << endl;
                    cout << users[pref].bopname << endl;
                }
                else if (pref == 1) { 
                    cout << users[pref].fullname << endl;
                    cout << users[pref].title << endl;
                    cout << users[pref].bopname << endl;
                }
                else if (pref == 2) { 
                    cout << users[pref].fullname << endl;
                    cout << users[pref].title << endl;
                    cout << users[pref].bopname << endl;
                }
                else 
                    cout << "Invalid option\n";
            break;
        }
        cout << "Enter next choice: ";
        cin >> ch;
    }
    cout << "Program finished\n";

    return 0;
}
