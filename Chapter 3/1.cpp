#include <iostream>

int main(void)
{
    using namespace std;

    int height;
    cout << "Enter your height in integers: ____ \b\b\b\b\b";
    cin >> height;
    int ht_ft = height/12;
    int ht_in = height%12;
    cout << "Your height in feets and inches is: " << ht_ft << " ft " << ht_in <<" in" << endl;

    return 0;
}