/*
 * =====================================================================================
 *
 *       Filename:  5.cpp
 *
 *    Description:  Chapter 6, exercise 5
 *
 *        Version:  1.0
 *        Created:  02/12/2020 03:00:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream>
#include <cctype>
const int base0 = 5000;
const int base1 = 10000;
const int base2 = 20000;
const int base3 = 35000;
const int tax0 = 0;
const float tax1 = 0.10;
const float tax2 = 0.15;
const float tax3 = 0.20;
const int area1 = base0+base1;
const int area2 = area1+base2;

int main(void) {
    using namespace std;

    double tvarp;
    double payable_tax=0;
    cout << "Enter your salary: ";
    while (cin >> tvarp) {
        if (tvarp <= base0) {
            payable_tax = tax0;
            cout << "Payable Tax = " << payable_tax << endl;
            cout << "Enter next value: ";
        }
        else if (tvarp <= area1) {
            payable_tax = (tvarp-base0)*tax1;
            cout << "Payable Tax = " << payable_tax << endl;
            cout << "Enter next value: ";
        }
        else if (tvarp <= area2) {
            payable_tax = base1*tax1 + (tvarp-area1)*tax2;
            cout << "Payable Tax = " << payable_tax << endl;
            cout << "Enter next value: ";
        }
        else {
            payable_tax = base1*tax1 + base2*tax2 + (tvarp-area2)*tax3;
            cout << "Payable Tax = " << payable_tax << endl;
            cout << "Enter next value: ";
        }
    }
    cout << "Program finished!\n";

    return 0;
}

