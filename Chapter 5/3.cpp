#include <iostream>

int main(void) {
    using namespace std;

    cout << "Type the number of your choice; 0 to terminate: " << endl;
    int num;
    int sum = 0;
    cin >> num;
    while (num != 0) {
        sum += num;
        cout << "The commulative sum is: " << sum << endl;
        cin >> num;
    }

    return 0;
}