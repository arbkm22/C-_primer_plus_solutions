#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

bool palindrome(std::string & s);
int main(void) {
    using namespace std;
    string pal;
    cout << "Enter a string to check for palindrome test: ";
    getline(cin, pal);
    while (pal != "0") {
        if (palindrome(pal))
            cout << pal << " is a palindrome\n";
        else
            cout << pal << " is not a palindrome\n";
        cout << "Enter next word (0 to quit): ";
        getline(cin, pal);
    }

    return 0;
}
bool palindrome(std::string & s) {
    std::string s1;
    for (unsigned int i=0; i < s.size(); i++) {
        if(isalpha(s[i]))
            s1.push_back(tolower(s[i]));
    }
    for (int i = 0, j = s1.size() - 1; i < j; i++, j--) {
        if (s1[i] != s1[j])
            return false;
    }
    return true;
}
