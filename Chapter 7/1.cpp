#include <iostream>
using namespace std;
double harmonic_mean(double a, double b);
int main(void) {
    double x, y;
    cout << "Enter two numbers(0 to quit): ";
    cin >> x >> y;
    while (x!=0 && y!=0) {
        cout << "Harmonic mean  = " << harmonic_mean(x, y) << endl;
        cout << "Enter two numbers(0 to quit): ";
        cin >> x >> y;
    }

    return 0;
}
double harmonic_mean(double a, double b) {
    double hm = 0;
    hm = (2.0 * (a * b))/(a + b);

    return hm;
}

