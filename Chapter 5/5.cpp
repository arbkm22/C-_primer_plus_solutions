#include <iostream>
const int month = 12;
int main(void) {
    using namespace std;
    int sales[month];
    int total_sales = 0;
    const char * months[month] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    cout << "Enter the sales for each month: \n";
    for (int i = 0; i < month; i++) {
        cout << months[i] << ": ";
        cin >> sales[i];
        total_sales += sales[i];
    }
    for(int i = 0; i < month; i++) 
        cout  << "The sale for the month of " << months[i] << " is = " << sales[i] << endl;
    cout << "The total sales of the book \"C++ for fools\" for the year 2019 is: " << total_sales << endl;

    return 0;
}