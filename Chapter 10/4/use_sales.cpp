#include <iostream>
#include "sales.h"

int main(void) {
    double ar[4] = {12.3, 23.5, 78.9, 34.0};
    SALES new_sale(ar, 4);
    new_sale.showSales();
    new_sale.setSales();
    new_sale.showSales();

    return 0;
}
