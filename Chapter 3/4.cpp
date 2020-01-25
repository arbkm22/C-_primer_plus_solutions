#include <iostream>

int main(void)
{
    using namespace std;
    
    const int sday = 86400;
    const int shour = 3600;
    const int sminute = 60;

    cout << "Please enter the number of seconds: ";
    long long int seconds;
    cin >> seconds;
    long int day = seconds/sday;
    int hour = (seconds%day)/shour;
    int minutes = (seconds%hour)/sminute;
    int second = (seconds%minutes)/sminute;
    cout << seconds << "seconds = " << day <<" days, " << hour <<" hours, " << minutes <<" minutes, " << second <<" seconds." << endl;

    return 0;
}