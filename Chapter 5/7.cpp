#include <iostream>
#include <string>

using namespace std;

struct car {
    string car_name;
    int model_year;
};

int main(void) {
    int item;
    cout << "How many cars to catalog? ";
    cin >> item;
    car * car_det = new car [item];
    for (int i = 0; i < item; i++) {
        cout << "Car #" << (i+1) << endl;
        cout << "Enter the make: ";
        cin.get();
        getline(cin, car_det[i].car_name);
        cout << "Enter the year: ";
        cin >> car_det[i].model_year;     
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < item; i++) 
        cout << car_det[i].model_year << " " << car_det[i].car_name << endl;
    
    delete [] car_det;
    return 0;
}