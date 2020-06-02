#include <iostream>
#include <ctype.h>
using namespace std;
int fill_array(double arr[], int size);
void show_array(double arr[], int size);
void reverse_array(double arr[], int size);
void reverse_array2(double arr[], int size);
int main(void) {
    cout << "Enter the length of the array: ";
    int x;
    cin >> x;
    double *arr = new double [x];
    int y = fill_array(arr, x);
    cout << "The number of elements in array: " << y << endl;
    cout << "The contents of the array are: \n";
    show_array(arr, y);
    cout << "The contents of the reversed array are: \n";
    reverse_array(arr, y);
    cout << "Reversed array (except first and last elements): \n";
    reverse_array2(arr, y);
    delete[] arr;
    return 0;
}
int fill_array(double arr[], int size) {
    cout << "Enter the elements of the array: \n";
    int count=0;
    cout << "element #" << count+1 << ": ";
    while (count<size && cin >> arr[count]) {
        if (++count < size)
            cout << "element #" << count+1 << ": ";
    }

    return count;
}
void show_array(double arr[], int size) {
    for (int i=0; i<size; i++) 
        cout << "element #" << i+1 << ": " << arr[i] << endl;
}
void reverse_array(double arr2[], int size) {
    double temp;
    int x = size/2;
    for (int i=0; i<x; i++) {
        temp = arr2[i];
        arr2[i] = arr2[size-(i+1)];
        arr2[size-(i+1)] = temp;
    }
    show_array(arr2, size);
}
void reverse_array2(double arr3[], int size) { //The progrram works correctly. The last reversed array doesn't look right but it is. Look closely.
    double temp;
    int x = size/2;
    for (int i=1; i<x; i++) {
        temp = arr3[i];
        arr3[i] = arr3[size-(i+1)];
        arr3[size-(i+1)] = temp;
    }
    show_array(arr3, size);
}
