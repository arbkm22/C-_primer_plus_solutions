#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Enter your car mileage(litres per 100 km): ";
    double mileage;
    cin >> mileage;
    const float km_to_miles = 62.14;
    const float ga_to_ltr = 3.875;
    double mileage_us = km_to_miles / (mileage*3.875);
    cout << "Your mileage in US standards is " << mileage_us << " mpg." << endl;

    return 0;
}