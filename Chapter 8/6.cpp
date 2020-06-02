#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T a[], int b) {
    T temp = a[0];
    for (int i=0; i<b; i++) {
        if (a[i] > temp) 
            temp = a[i];
    }
    return temp;
}
template <> const char * maxn(const char * ptc[], int n) {
    const char * new_str = "\0";
    for (int i=0; i<n; i++) {
        if (strlen(ptc[i]) > strlen(new_str))
            new_str = ptc[i];
    }
    cout << new_str << endl;
    return new_str;
}
int main(void) {
    int xin;
    double xdb;
    int arr_int[] = {12, 45, 67, 89, 90, 13};
    double arr_dbl[] = {23.4, 67.9, 76.9, 456.8};
    int len_int = sizeof(arr_int)/sizeof(*arr_int);
    int len_dbl = sizeof(arr_dbl)/sizeof(*arr_dbl);
    xin = maxn(arr_int, len_int);
    xdb = maxn(arr_dbl, len_dbl);
    cout << "Array of int: " << xin << endl;
    cout << "Array of double: " << xdb << endl;
    char char1[] = "Naruto Shippuden";
    char char2[] = "One Piece";
    char char3[] = "Bleach";
    char char4[] = "Gintama";
    char * baka[4] = {
        char1,
        char2,
        char3,
        char4
    };
    cout << "Array of strings: " << maxn(baka, 4) << endl;

    return 0;
}

