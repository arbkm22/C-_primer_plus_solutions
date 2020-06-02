#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt {
    private:
        enum {Lbs_per_stone = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt();
    // operator overloading
        Stonewt operator+(const Stonewt & s) const;
        Stonewt operator-(const Stonewt & s) const;
    // friend functions
        friend Stonewt operator*(double m, const Stonewt & s);
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};

#endif
