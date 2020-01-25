#include <iostream>
#include <string>

using namespace std;

struct Pizza {
    string name;
    int diameter;
    int weight;
}details;

int main(void) {
    cout << "Enter the name of the pizza company: ";
    getline(cin, details.name);
    cout << "Enter the diameter of the pizza: ";
    cin >> details.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> details.weight;
    cout << "The details you provided are: \n";
    cout << "Name: " << details.name << endl;
    cout << "Diameter: " << details.diameter << " cm" << endl;
    cout << "Weight: " << details.weight << " grams" << endl;

    return 0;
}