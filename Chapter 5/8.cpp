#include <iostream>
#include <cstring>
const int length = 50;

int main(void) {
    using namespace std;

    char words[length]; 
    int word_count = 0;
    cout << "Enter the words (to stop, type the word done): ";
    cin >> words;
    while(strcmp(words, "done")) { 
        word_count++;
        cin >> words;
    }
    cout << "You entered a total of " << word_count << " words.\n";
    
    return 0;
}