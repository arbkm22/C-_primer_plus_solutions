/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  Chapter 6, Exercise 1
 *
 *        Version:  1.0
 *        Created:  02/08/2020 01:22:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto 
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream>
#include <cctype>

int main(void) {
    using namespace std;

    int digit = 0;
    char sentence;
    cout << "Enter your preferred sentece (type @ to quit): ";
    cin.get(sentence);
    while (sentence != '@') {
        if (isdigit(sentence)) {
           cin.clear();
           cin.get(sentence);
           continue;
        }
        else if (islower(sentence)) 
            cout << (char)toupper(sentence);
        else if (isupper(sentence))
            cout << (char)tolower(sentence);
        else 
            cout << sentence;
        cin.get(sentence);
    }
    cout << "Program finished\n";

    return 0;
}
