/*
 * =====================================================================================
 *
 *       Filename:  2.cpp
 *
 *    Description:  Chapter 6, Exercise 2
 *
 *        Version:  1.0
 *        Created:  02/08/2020 02:52:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto 
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream>
const int size = 10;
int main(void) {
    using namespace std;
    
    double donations[size];
    int i = 0;
    cout << "Enter 10 donations, (or any alphabet to quit): \n";
    cout << "donation #1: ";
    while (i<size && cin >> donations[i]) {
        if (++i < size)
            cout << "donation #" << i+1 << ": ";
    }
    double total = 0;
    for (int j=0; j<i; j++) 
        total += donations[j];
    double average = 0.0;
    average =  total/i;
    cout << "Total donation = " << total << endl;
    cout << "Average of " << i <<" donations is = " << average << endl;
    int count=0;
    for (int k=0; k<i; k++) {
        if (donations[k] > average) 
            count++;
        else
            continue;
    }
    cout << "There are " << count << " donations larger than average.\n";

    return 0;
}

