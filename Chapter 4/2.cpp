#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string fname;
    string lname;
    char grade;
    int age;
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: ";
    cin >> lname;
    cout << "Enter your grade: ";
    cin >> grade;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl;
    grade = grade + 1;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}