#include <iostream>

int main(void)
{
    using namespace std;

    const float ft_to_in = 12;
    const float lbs_to_kg = 2.2;
    const float in_to_mtrs = 0.0254;
    int ht_ft;
    cout << "Enter your height in feets: ";
    cin >> ht_ft;
    int ht_in;
    cout << "Enter your height in inches: ";
    cin >> ht_in;
    int weight;
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    float height = ((ft_to_in*ht_ft) + ht_in) * in_to_mtrs;
    float weight2 = weight/lbs_to_kg;
    float bmi = weight2/(height * height);
    cout << "Your BMI is: " << bmi << endl;

    return 0;
}