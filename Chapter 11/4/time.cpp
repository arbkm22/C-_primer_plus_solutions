#include <iostream>
#include "time0.h"

Time::Time() {
    hours = minutes = 0;
}
Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}
void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time::AddHr(int h) {
    hours += h;
}
void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}
// friend functions with operator overloading
Time operator+(const Time & t1, const Time & t2) {
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
Time operator-(const Time & t1, const Time & t2) {
    Time diff;
    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours - diff.minutes / 60;
    diff.minutes %= 60;
    return diff;
}
std::ostream & operator<<(std::ostream & os, const Time & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
