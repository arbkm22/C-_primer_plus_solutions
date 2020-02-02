#include <iostream>
#include <array>
const int size = 100;

int main(void) {
    using namespace std;

    array<long double, size> factorial;
    factorial[0] = factorial[1] = 1;
    for (int i = 2; i <= (size); i++) 
        factorial[i] = i * factorial[i-1];
    for (int i = 0; i <= size; i++) 
        cout << i << "! = " << factorial[i] << endl;

    return 0;
}