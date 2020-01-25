#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Enter distance in furlong: ";
    int furlong;
    cin >> furlong;
    int yards;
    yards = 220 * furlong;
    cout << furlong << " furlongs = " << yards << " yards" << endl;

    return 0;
}