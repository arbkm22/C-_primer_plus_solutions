#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
        string name;
        float weight;
        int calories;
};

int main(void) {
    CandyBar snack[3];
    snack[0] = {
        "Diary Milk Silk",
        78, 
        200
    };
    snack[1] = {
        "Amul Dark Chocolate",
        50,
        150
    };
    snack[2] = {
        "KitKat",
        75,
        200
    };
    cout << "Enter the number of the candy bars for which you want to see the details(0, 1 or 2): ";
    int x;
    cin >> x;
    cout << "The deatils of the candy bar is: \n";
    cout << "Name: " << snack[x].name << endl;
    cout << "Weight: " << snack[x].weight << " g" << endl;
    cout << "Calories: " << snack[x].calories << " kcal" << endl;

    return 0;
}