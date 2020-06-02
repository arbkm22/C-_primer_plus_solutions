/*
 * =====================================================================================
 *
 *       Filename:  structure.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/11/2020 05:56:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

struct details {
    string name;
    string address;
    int age;
} hellking;

int main(void) {
    
    hellking = {
        "Bhaskar Mahto",
        "Soul Society",
        20
    };

    cout << "Name: " << hellking.name << endl;
    cout << "Address: " << hellking.address << endl;
    cout << "Age: " << hellking.age << endl;

    return 0;
}

