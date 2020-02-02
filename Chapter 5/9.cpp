#include <iostream>
#include <string>

int main(void) {
    using namespace std;
    string word;
    int word_count = 0;
    cout << "Enter the words (to stop, type the word done): " << endl;
    cin >> word;
    while (word != "done") {
        word_count++;
        cin >> word;
    }
    cout << "You entered a total of " << word_count << " words\n";

    return 0;
}