#ifndef SALES_H_
#define SALES_H_
const int QUARTERS = 4;
class SALES {
    private:
        double Sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        SALES(double d[], int n);
        void setSales();
        void showSales() const;
};
#endif
