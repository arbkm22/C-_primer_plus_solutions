#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome(string & st);
int main(void) {
    string pal;
    cout << "Enter a string to check if it's " <<
        "palindrome or not (0 to quit): ";
    cin >> pal;
    while (pal != "0") {
        cout << boolalpha;
        cout << palindrome(pal) << endl;
        cout << "Ente another word (0 to quit): ";
        cin >> pal;
    }

    return 0;
}
bool palindrome(string & st) {
    string st2;
    st2 = st;
    reverse(st.begin(), st.end());
    if (st2 == st) 
        return true;
    else 
        return false;
}
