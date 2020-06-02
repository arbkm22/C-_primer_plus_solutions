#include <iostream>
#include <algorithm>
#include <memory>
#include <vector>
#include <iterator>

int reduce(long ar[], int n);
int main(void) {
    using namespace std;
    int x;
    cout << "Enter the size of the array: ";
    cin >> x;
    long * arr = new long[x];
    cout << "Enter the elements of the array:\n";
    for (int i=0; i<x; i++) {
        while (!(cin >> arr[i])) {
            cin.clear();
            cin.ignore();
            cout << "Please entr an integer: ";
            continue;
        }
    }
    cout << "The elements of the array before reducing: \n";
    for (int i=0; i<x; i++) 
        cout << arr[i] << endl;
    int num = reduce(arr, x);
    cout << "The remaiining number of elements: " << num << endl;

    delete [] arr;
    return 0;
}
int reduce(long ar[], int n) {
    using std::cout;
    using std::endl;
    std::vector<long> arr2(n);
    for (int i=0; i<n; i++)
        arr2[i] = ar[i];
    std::vector<long> temp_array(n);
    std::vector<long>::iterator itr;
    temp_array = arr2;
    sort(temp_array.begin(), temp_array.end());
    cout << "\nThe members of the array after sorting: \n";
    int a = temp_array.size();
    for (int i=0; i<a; i++) 
        cout << temp_array[i] << endl;
    cout << "The members of the array after removing the duplicates: \n";
    itr = unique(temp_array.begin(), temp_array.end());
    temp_array.resize(std::distance(temp_array.begin(), itr));
    int b = temp_array.size();
    for (itr = temp_array.begin(); itr < temp_array.end(); itr++)
        cout << *itr << endl;

    return b;
}
