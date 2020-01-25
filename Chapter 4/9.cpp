#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    int weight;
    int calories;
};

int main(void) {
    using namespace std;

    CandyBar * snack = new CandyBar [3];

    snack[0] = {
        "Diary Milk Silk",
        175,
        450
    };
    snack[1] = {
        "KitKat",
        150,
        300
    };
    snack[2] = {
        "Amul Dark Chocolate", 
        200,
        250
    };

    int x;
    cout << "Enter 0, 1 or 2 to view the details of the bars: ";
    cin >> x;
    cout << "The details of the bar is: ";
    cout << "Name: " << snack[x].name << endl;
    cout << "Weight: " << snack[x].weight << " grams\n";
    cout << "Calories: " << snack[x].calories << " kcal\n";

    delete [] snack;

    return 0;
}