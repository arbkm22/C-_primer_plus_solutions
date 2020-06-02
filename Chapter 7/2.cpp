/*
 * =====================================================================================
 *
 *       Filename:  2.cpp
 *
 *    Description:  Chapter 7, exercise 2
 *
 *        Version:  1.0
 *        Created:  02/25/2020 06:24:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto 
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream> 
using namespace std;
const int count = 10;
void get_scores();
void display(int arr[], int);
void average(int arr[], int);

int main(void) {
    cout << "Enter 10 golf scores(0 to quit): " << endl;
    get_scores();

    return 0;
}
void get_scores() {
    int score[count];
    int x=0;
    for (int i=0; i<count; i++) {
        cin >> score[i];
        if (score[i] == 0)
            break;
        x++;
    }
    display(score, x);
    average(score, x);
}
void display(int arr[], int x) {
    for (int i=0; i<x; i++)
        cout << "Score #" << i+1 << " = " << arr[i] << endl;
}
void average(int arr[], int x) {
    double avr = 0;
    for (int i=0; i<x; i++)
        avr += arr[i];
    cout << "Average: " << avr/10 << endl;
}

