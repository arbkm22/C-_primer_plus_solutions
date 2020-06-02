/*
 * =====================================================================================
 *
 *       Filename:  6.cpp
 *
 *    Description:  Chapter 6, exercise 6.
 *
 *        Version:  1.0
 *        Created:  02/12/2020 09:31:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

using namespace std;
const int limit = 10000;
struct donors {
    string name;
    double contribution;
};

int main(void) {
    int x;
    int * counter;
    cout << "Enter the number of total contributers: ";
    cin >> x;
    cin.get();
    counter = new int [x];
    donors * users = new donors [x];
    for (int i=0; i<x; i++) {
        cout << "Enter the details of donor #" << i+1 << endl;
        cout << "Name: ";
        getline(cin, users[i].name, '\n');
        cout << "Donation: ";
        cin >> users[i].contribution;
        cin.get();
    }
    for (int i=0; i<x; i++) {
        if (users[i].contribution >= limit) 
            counter[i] = 1;
        else 
            counter[i] = 0;
    }
    cout << "Grand Patrons\n";
    for (int i=0; i<x; i++) {    
        if (counter[i] == 1) 
            cout << users[i].name << "\t\t $" << users[i].contribution << endl;
        else 
            cout << "none\n";
    }
    cout << "\nPatrons\n";
    for (int i=0; i<x; i++) {
        if (counter[i] == 0)
            cout << users[i].name << "\t\t $" << users[i].contribution << endl;
        else
            cout << "none\n";
    }
    return 0;
}

