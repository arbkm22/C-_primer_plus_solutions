#include <iostream>
using namespace std;

void string_toupper(string & str);
int main(void) {
    string name;
    cout << "Enter a string (q to quit): ";
    getline(cin, name);
    while (name != "q") {
        string_toupper(name);
        cout << name << endl;
        cout << "Enter another string (q to quit): ";
        getline(cin, name);
    }
    cout << "bye!\n";

    return 0;
}
void string_toupper(string & str) {
    int x = str.size();
    for(int i=0; i<x; i++) 
        str[i] = toupper(str[i]);
}
