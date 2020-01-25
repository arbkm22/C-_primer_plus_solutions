#include <iostream>
using namespace std;
int main(void) {

    const int fnameSize = 20;
    const int lnameSize = 10;
    char lname[lnameSize], fname[fnameSize];
    cout << "What is your first name? ";
    cin.getline(fname, fnameSize);
    cout << "What is your last name? ";
    cin.getline(lname, lnameSize);
    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;
    grade = grade + 1;
    int age;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}