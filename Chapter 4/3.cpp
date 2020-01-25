#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void) {
    //string fname, lname;
    char name[30];
    char lname[10];
    char fname[10];
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: ";
    cin >> lname;
    strcpy(name, lname);
    int size_lname = strlen(lname);
    int size_fname = strlen(fname);
    int lnamesize = strlen(lname);
    strcpy(name, lname);
    name[lnamesize] = ',';
    name[lnamesize+1] = ' ';
    strcat(name, fname);
    cout << name << endl;

    return 0;
}