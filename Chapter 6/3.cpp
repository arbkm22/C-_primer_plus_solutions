/*
 * =====================================================================================
 *
 *       Filename:  3.cpp
 *
 *    Description: Chapter 6, exerices 3
 *
 *        Version:  1.0
 *        Created:  02/11/2020 12:15:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream>
void menu();

int main(void) {
    using namespace std;
    
    menu();
    char c;
    while (c != '#') {
        switch(c) {
            case 'c': 
                cout << "Cats are cute\n";
                break;
            case 't':
                cout << "tigeress is strong\n";
                break;
            case 'p': 
                cout << "I want to be a panda\n";
                break;
            case 'g':
                cout << "giraffe are tall\n";
                break;
            default:
                cout << "enter the given choice only\n";
        }
        menu();
        cin >> c;
    }
    cout << "Program finished\n";
    
    return 0;
}

void menu() {
    using namespace std;

    cout << "Enter one of the following choices(# to quit):\n";
    cout << "c) cat\t\t p) panda\n";
    cout << "t) tiger\t g) giraffe\n";
}
