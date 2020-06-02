#include <iostream>
#include <string>
#include "bank.h"

Bank::Bank(const std::string & str, const std::string & str2, double amnt) {
    depo_name = str;
    ac_no = str2;
    if (amnt < 0) 
        std::cout << "Balance can't be negative\n";
    else 
        bal = amnt;
}
Bank::~Bank() {
    std::cout << "Destructor called\n";
}
void Bank::show() {
    std::cout << "Account holder name: " << Bank::depo_name << std::endl;
    std::cout << "Account number: " << Bank::ac_no << std::endl;
    std::cout << "Balance: $" << Bank::bal << std::endl;
}
void Bank::deposit(double amount) {
    if (amount < 0) {
        std::cout << "Depositing amount can't be negative.\n";
        std::cout << "Transaction terminated\n";
    }
    else {
        bal += amount;
        std::cout << "Updated balance is: $" << bal << std::endl;
    }
}
void Bank::withdraw(double amount) {
    if (amount < 0 && amount > bal) 
        std::cout << "Transaction failed.\n";
    else {
        bal -= amount;
        std::cout << "Updated balance is: $" << bal << std::endl;
    }
}
