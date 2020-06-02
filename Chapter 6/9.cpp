/*
 * =====================================================================================
 *
 *       Filename:  9.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/19/2020 03:57:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream> 
#include <fstream>
#include <string>

struct donors {
    std::string name;
    double contribution;
};

int main (void) {
    using namespace std;

    ofstream fout;
    ifstream fin;
    int x;

    fin.open("9.txt");
    fin >> x;
    donors * users = new donors [x];
    for (int i=0; i<x; i++) {
        fin.get();
        getline(fin, users[i].name, '\n');
        fin >> users[i].contribution;
    }
    cout << "Grand Patrons\n";
    for (int i=0; i<x; i++) {
        if (users[i].contribution >= 10000)
            cout << users[i].name << " $" << users[i].contribution << endl;
    }
    cout << "\nPatrons\n";
    for (int i=0; i<x; i++) {
        if (users[i].contribution < 10000) 
            cout << users[i].name << " $" << users[i].contribution << endl;
    }
    fin.close();

    return 0;
}

