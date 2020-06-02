#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

template <typename T>
int reduce(T ar[], int n) {
    using std::vector;
    using std::cout;
    using std::endl;
    
    vector<T> arr2(n);
    for (int i=0; i<n; i++)
        arr2[i] = ar[i];
    vector<T> temp_array(arr2.size());
    sort(temp_array.begin(), temp_array.end());
    cout << "\nThe sorted array is:\n";
    int o = arr2.size();
    for (int i=0; i<o; i++)
        cout << arr2[i];
    auto ip = temp_array.begin();
    ip = unique(temp_array.begin(), temp_array.end());
    temp_array.resize(std::distance(temp_array.begin(), ip));
    for (ip=temp_array.begin(); ip<temp_array.end(); ip++)
        cout << *ip << endl;

    return temp_array.size();
}
int main(void) {
    using namespace std;
    int x;
    cout << "Enter the size of the array: ";
    cin >> x;
    string * arr = new string[x];
    cout << "Enter the elements: \n";
    for (int i=0; i<x; i++) { 
        cin.clear();
        cin.ignore();
        cin >> arr[i];
    }
    cout << "The elements of the array before reducing: \n";
    for (int i=0; i<x; i++)
        cout << arr[i] << endl;
    int num = reduce(arr, x);
    cout << "Total Remainging elements: " << num << endl;
    
    delete [] arr;
    return 0;
}
