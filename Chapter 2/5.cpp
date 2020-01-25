#include <iostream>

using namespace std;

void fahrenheit(int);
int main(void)
{
    int celcius;
    cout << "Enter the temperature: ";
    cin >> celcius;
    fahrenheit(celcius);

    return 0;
}
void fahrenheit(int x)
{
    double temp = (1.8 * x) + 32.0;
    cout << x << " celcius is " << temp << " fahrenheit" << endl;
}