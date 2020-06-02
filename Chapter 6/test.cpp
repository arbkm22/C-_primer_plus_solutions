/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2020 12:19:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

int main(void) {
    using namespace std;
    
    string name, name2, name3;
    cin >> name;
    cout << "Name #1: " << name;
    cin >> name2;
    cout << "Name #2: " << name2;
    getline (cin, name3);
    cout << "Name #3: " <<  name3;

    return 0;
}

