#include <iostream>
#include "sales.h"
SALES::SALES(double d[], int n) {
    for (int i=0; i<n; i++) {
        Sales[i] = d[i];
    }
    double temp_average = 0;
    double temp_sum = 0; 
    double temp_max = 0;
    double temp_min = Sales[0];
    for (int i=0; i<n; i++) {
       temp_sum += Sales[i];
    }
    temp_average = temp_sum/n;
    for (int i=0; i<n; i++) {
        if (Sales[i] > temp_max)
            temp_max = Sales[i];
    }
    for (int i=0; i<n; i++) {
        if (Sales[i] < temp_min)
            temp_min = Sales[i];
    }
    average = temp_average;
    max = temp_max;
    min = temp_min;
    //std::cout << "Average Sale = " << average << std::endl;
    //std::cout << "Max Sale = " << max << std::endl;
    //std::cout << "Min Sale = " << min << std::endl;
}
void SALES::setSales() {
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "Enter 4 Quarterly Sales: ";
    double temp_sales[QUARTERS];
    for (int i=0; i<QUARTERS; i++) {
        while (!(cin >> temp_sales[i])) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Try again: ";
        }
        cin.get();
    }
    SALES new_sale(temp_sales, QUARTERS);
    *this = new_sale;
}
void SALES::showSales() const {
    using std::cout;
    using std::endl;
    cout << "The value of the arrays are: \n";
    for (int i=0; i<QUARTERS; i++) {
        cout << "Quarterly Sale #" << (i+1) << " " << this->Sales[i] << endl;
    }
    cout << "Average Sales = " << this->average << endl;
    cout << "Max Sale = " << this->max << endl;
    cout << "Min Sale = " << this->min << endl;
}
