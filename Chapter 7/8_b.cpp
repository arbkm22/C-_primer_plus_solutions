#include <iostream>
using namespace std;
const int size = 4;
const char seasons[4][10] = {"Spring", "Summer", "Fall", "Winter"};
struct season_expense {
    double expenses[size];
};
void fill(double arr[], int limit);
void show(double arr[], int limit);
int main(void) {
    season_expense s1;
    cout << "Enter the expenses for each seasons: \n";
    fill(s1.expenses, size);
    show(s1.expenses, size);

    return 0;
}
void fill(double arr[], int limit) {
    for (int i=0; i<limit; i++) {
        cout << "Enter the expense for " << seasons[i] << ": ";
        cin >> arr[i];
    }
}
void show(double arr[], int limit) {
    for (int i=0; i<limit; i++) 
        cout << seasons[i] << ": " << arr[i] << endl;
}
