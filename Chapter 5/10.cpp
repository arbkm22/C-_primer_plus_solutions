#include <iostream>
const char star = '*';
const char dot = '.';
int main(void) {
    using namespace std;

    int i, j, k;
    cout << "Enter the number of rows you want: ";
    int num_rows;
    cin >> num_rows;
    for (i = 0; i < num_rows; i++) {
        for (j = (num_rows-(i+1)); j > 0; j--) {
            cout << dot;   
        }
        for (k = j; k < (i+1); k++)
            cout << star;
        cout << endl;
    }

    return 0;
}