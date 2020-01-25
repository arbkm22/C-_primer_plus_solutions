#include <iostream>
#include <array>

int main(void) {
    using namespace std;
    
    array<float, 3> dash;
    cout << "Enter three values for your 40m dash: ";
    cin >> dash[0] >> dash[1] >> dash[2];
    cout << "Your given values are: \n";
    cout << "1st value: " << dash[0] << endl;
    cout << "2nd value: " << dash[1] << endl;
    cout << "3rd value: " << dash[2] << endl;
    float average = (dash[0]+dash[1]+dash[2]) / 3;
    cout << "Average value is: " << average << endl;

    return 0;
}