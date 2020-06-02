#include <iostream>
#include "Stock.h"
#include <cstring>
Stock::Stock() {
    company = new char[1];
    company = NULL;
    shares = 0;
    share_val = 0;
    total_val = 0;
}
Stock::Stock(const char * nm, long n, double pr) {
    company = new char[strlen(nm) + 1];
    strcpy(this->company, nm);
    shares = n;
    share_val = pr;
    set_tot();
}
Stock::~Stock() {
    // destructor
    delete [] company;
}
void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction aborted:\n";
    }
    else {
        shares = num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
const Stock & Stock::topval(const Stock & s) const {
    if (s.total_val > total_val) 
        return s;
    else
        return * this;
}
ostream & operator<<(ostream & os, const Stock & st) {
    using std::ios_base;
    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    os << "Company: " << st.company << std::endl;
    os << "Shares: " << st.shares << std::endl;
    os << "Share Price: $" << st.share_val << std::endl;
    os.precision(2);
    os << "Total Worth: $" << st.total_val << std::endl;
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}
