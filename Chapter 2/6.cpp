#include <iostream>

using namespace std;

void fun(double);
int main(void)
{
    cout << "Enter the distance is light years: ";
    double light;
    cin >> light;
    fun(light);

    return 0;
}
void fun(double x)
{
    double astro = 63240 * x;
    cout << x << " light years is " << astro << " astronomical units" << endl;
}