#include <iostream>
using namespace std;
const int Max = 5;
int fill_array(double arr[], int x);
int main(void) {
    double properties[Max];
    int size = fill_array(properties, Max);
    cout << size;

    return 0;
}
int fill_array(double arr[], int x) {
    double temp;
    int i;
    for (i=0; i<x; i++) {
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input, process terminated\n";
            break;
        }
        else if (temp < 0)
            break;
        arr[i] = temp;
    }
    return i;
}

