#include <iostream>
using namespace std;
const int season_type = 4;
const char seasons[season_type][10] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double arr[], int size);
void show(double arr[], int size);
int main(void) {
    cout << "Enter the expenses of each season\n";
    double expense[season_type];
    fill(expense, season_type);

    return 0;
}
void fill(double arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << "Enter " << seasons[i] << " expense: ";
        cin >> arr[i];
    }
    show(arr, size);
}
void show(double arr[], int size) {
    cout << "The expenses for each season are: \n";
    for (int i=0; i<size; i++) 
        cout << seasons[i] << ": " << arr[i] << endl;
}
