#include <iostream>

int main(void)
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    long double world_population;
    cout << "Enter the world population: ";
    cin >> world_population;
    long double india_population;
    cout << "Enter India's population: ";
    cin >> india_population;
    double percentage = (india_population*100)/world_population;
    cout << "The population of India is " << percentage << "% of the world population." << endl;

    return 0;
}