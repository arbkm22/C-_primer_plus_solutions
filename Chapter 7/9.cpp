#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);
int main(void) {
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i=0; i<entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    cout << "Done\n";

    delete [] ptr_stu;
    return 0;
}
int getinfo(student pa[], int n) {
    int i;
    cout << "Enter the details: \n";
    for (i=0; i<n; i++) {
        cout << "Name: ";
        cin >> pa[i].fullname;
        while (cin.get() != '\n')
            continue;
        cout << "Hobby: ";
        cin >> pa[i].hobby;
        cout << "OOPlevel: ";
        cin >> pa[i].ooplevel;
    }

    return i;
}
void display1(student st) {
    cout << "\n\nDisplay1: \n";
    cout << "Name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOPlevel: " << st.ooplevel << endl;
}
void display2(const student *ps) {
    cout << "\n\nDisplay2: \n";
    cout << "Name: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "OOPlevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n) {
    cout << "\n\nDisplay3\n";
    for (int i=0; i<n; i++) {
        cout << "Name: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "OOPlevel: " << pa[i].ooplevel << endl;
    }
}
