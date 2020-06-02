#include <iostream>
#include "bank.h"

int main(void) {
    {
        using std::cout;
        using std::cin;
        using std::endl;
        Bank bank1("Bhaskar Mahto", "1234567", 100.0);
        bank1.show();
        cout << "Enter amount you wish to deposit: ";
        double amt;
        cin >> amt;
        bank1.deposit(amt);
        cout << "Enter amount you wish to withdraw: ";
        cin >> amt;
        bank1.withdraw(amt);
        cout << "\nDone\n";
    }

    return 0;
}
