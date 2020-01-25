#include <iostream>

using namespace std;

void time(int a, int b);
int main(void)
{
    cout << "Enter the time in hours: ";
    int hour;
    cin >> hour;
    cout << "Enter the time in minutes: ";
    int minutes;
    cin >> minutes;
    time(hour, minutes);

    return 0;
}
void time(int a, int b)
{
    cout << "Time: " << a << ":" << b << endl;
}