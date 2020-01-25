#include <iostream>

int main(void)
{
    using namespace std;
    
    double miles, gallon;
    cout << "Distance travelled: ";
    cin >> miles;
    cout << "Petrol used(in gallons): ";
    cin >> gallon;
    double mileage = miles/gallon;
    cout << "your mileage is: " << mileage << " miles per gallon." << endl;

    return 0;
}