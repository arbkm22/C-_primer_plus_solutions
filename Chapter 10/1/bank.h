#ifndef BANK_H_
#define BANK_H_
#include <string>

class Bank {
    private:
        std::string depo_name;
        std::string ac_no;
        double bal;
    public:
        Bank(const std::string & str, const std::string & str2, double amnt);
        ~Bank();
        void show();
        void deposit(double amount);
        void withdraw(double ampunt);
};
#endif
