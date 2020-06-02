#include <iostream>
#include "stonewt.h"

Stonewt::Stonewt(double lbs) {
    stone = int (lbs) / Lbs_per_stone;
    pds_left = int (lbs) % Lbs_per_stone + lbs - int (lbs);
    pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stone + lbs;
 }
Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt() {
    // default destructor
}
Stonewt Stonewt::operator+(const Stonewt & s) const {
    Stonewt new_stone;
    new_stone.stone = stone + s.stone;
    new_stone.pds_left = pds_left + s.pds_left;
    new_stone.pounds = pounds + s.pounds;
    return new_stone;
}
Stonewt Stonewt::operator-(const Stonewt & s) const {
    Stonewt stn;
    stn.stone = stone + s.stone;
    stn.pds_left = pds_left + s.pds_left;
    stn.pounds = pounds + s.pounds;
    return stn;
}
Stonewt operator*(double m, const Stonewt & s) {
    return (m * s);
}
std::ostream & operator<<(std::ostream & os, const Stonewt & s) {
    os << "Stone: " << s.stone << ", pounds: " << s.pounds
        << ", pounds left: " << s.pds_left;
    return os;
}
