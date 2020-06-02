/*
 * =====================================================================================
 *
 *       Filename:  5.cpp
 *
 *    Description:  Chapter 7, exricse 5
 *
 *        Version:  1.0
 *        Created:  02/25/2020 10:38:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
using namespace std;
long long int factorial(int a);
int main(void) {
    int x;
    double result = 0;
    cout << "Enter an integer(0 to quit): ";
    cin >> x;
    while (x != 0) {
        result = factorial(x);
        cout << "Factorial of " << x << " is = " << setprecision(10) << result << endl;
        cout << "Enter an integer(0 to quit): ";
        cin >> x;
    }

    return 0;
}
long long int factorial(int a) {
    long long int y;
    if (a>=1)
        y = a * factorial(a-1);
    else 
        return 1;
    return y;
}
