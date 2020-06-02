#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

std::vector<int> lotto(int x, int y);
int main(void) {
    using namespace std;
    int spots, tot_spots;
    cout << "Enter the number of spots: ";
    while (!(cin >> spots)) {
        cin.clear();
        cin.ignore();
        cout << "Please enter a number, try again: ";
        continue;
    }
    cout << "Enter the number of winners: ";
    while (!(cin >> tot_spots)) {
        cin.clear();
        cin.ignore();
        cout << "Enter an integer, try again: ";
        continue;
    }
    vector<int> winners;
    vector<int>::iterator ip;
    winners = lotto(spots, tot_spots);
    cout << "The selected winners are: \n";
    for (ip=winners.begin(); ip<winners.end(); ip++) {
        cout << "Winner #" << *ip << endl; 
    }
    return 0;
}
std::vector<int> lotto(int x, int y) {
    using namespace std;
    if (x < 0 || y < 0) {
        cout << "The value of spots or winner list cant be 0\n";
        cout << "Program aborted.\n";
        exit(EXIT_FAILURE);
    }
    if (x < y) {
        cout << "First argument cant be less than second argument\n";
        cout << "Program aborted.\n";
        exit(EXIT_FAILURE);
    }
    vector<int> v;
    for (int i=1; i<x+1; i++) 
        v.push_back(i);
    random_shuffle(v.begin(), v.end());
    vector<int> picks;
    for (int i=0; i<y; i++)
        picks.push_back(v[i]);

    return picks;
}
