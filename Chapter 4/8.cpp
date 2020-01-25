#include <iostream>
#include <string>

using namespace std;

struct pizza {
    string name;
    int diameter;
    int weight;
};

int main(void) {
    pizza * pie = new pizza;
    cout << "Enter the diameter of the pizza: ";
    cin >> pie->diameter;
    cin.get();

    cout << "Enter the name of the pizza company: ";
    getline(cin, pie->name);

    cout << "Enter the weight of the pizza: ";
    cin >> pie->weight;

    cout << "The details provided are: \n";
    cout << "Name: " << pie->name << endl;
    cout << "Diameter: " << pie->diameter << " cm\n";
    cout << "Weight: " << pie->weight << " grams\n";

    delete pie;

    return 0;
}
