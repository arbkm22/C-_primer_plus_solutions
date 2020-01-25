#include <iostream>

int main(void)
{
    using namespace std;
    int age;
    cout << "Enter your age(in years): ";
    cin >> age;
    cout << "Your age in months is " << age*12 << endl;

    return 0;
}