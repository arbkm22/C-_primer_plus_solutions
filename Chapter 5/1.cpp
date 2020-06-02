#include <iostream>

int main(void) {
    using namespace std;

    int num1, num2;
    cout << "Enter two numbers(Smaller and then laregr): ";
    cin >> num1 >> num2;
    int sum = 0;
    for (int i=num1; i<=num2; i++) {
        sum += i;
    }
    cout << "The sum of all the integers between " << num1 << " and " << num2;
    cout << " is: " << sum << endl;

    return 0;
}
