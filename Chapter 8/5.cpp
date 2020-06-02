#include <iostream>
using namespace std;

template <typename T>
T max5(T a[5]) {
    T temp;
    for (int i=0; i<5; i++) {
        if (a[i] > temp)
            temp = a[i];
    }
    return temp;
}
int main(void) {
    int a;
    double b;
    int arr_int[] = {1, 2, 3, 4, 5};
    double arr_db[] = {12.3, 45.6, 34.6, 432.9, 213.4};
    a = max5(arr_int);
    b = max5(arr_db);
    cout << "The largest int value in array: " << a << endl;
    cout << "The largest double value in array: " << b << endl;

    return 0;
}
