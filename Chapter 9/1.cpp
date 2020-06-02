//This program left intentionally. Boring AF 
///and didn't understand any shit.

#include <iostream>
#include "golf.h"
using namespace std;

int main(void) {
    cout << "Enter the number of players\n";
    int x;
    cin >> x;
    int player_count = 0;
    golf stats[x];
    while(player_count < x && setgolf(stats[player_count]))
        player_count++;
    cout << "The player details are:\n";
    for (int i=0; i<player_count; i++)
        showgolf(stats[i]);


    return 0;
}
