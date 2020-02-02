#include <iostream>
const int month = 12;
const int year = 3;
int main(void) {
    using namespace std;

    const char *months[month] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    const int years[year] = {2017, 2018, 2019};
    int sales[year][month];
    int total_sales[year] = {0, 0, 0};
    for (int i = 0; i < year; i++) {
        cout << "Enter the sales for the year " << years[i] << " :\n"; 
        for (int j = 0; j < month; j++) {
            cout << "Enter the sales for the month of " << months[j] << " : ";
            cin >> sales[i][j];
            total_sales[i] += sales[i][j];
        }
    }
    for (int i = 0; i < year; i++) 
        cout << "The annual sale for the year " << years[i] << " is: " << total_sales[i] << endl;    
    cout << "All done!\n";

    return 0;
}