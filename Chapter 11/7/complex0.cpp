#include <iostream>
#include "complex0.h"

complex::complex() {
    real = img = 0;
}
complex::complex(int a, int b) {
    real = a;
    img = b;
}
complex::~complex() {
    // default destructor
}
//operator overloading
complex complex::operator+(const complex & c) const {
    complex new_comp;
    new_comp.real = real + c.real;
    new_comp.img = img + c.img;
    return new_comp;
}
complex complex::operator-(const complex & c) const {
    complex new_comp2;
    new_comp2.real = real + c.real;
    new_comp2.img = img + c.img;
    return new_comp2;
}
complex complex::operator*(const complex & c) const {
    complex new_comp3;
    new_comp3.real = (real * c.real) - (img * c.img);
    new_comp3.img = (real * c.img) + (img * c.real);
    return new_comp3;
}
// friend functions
complex operator*(int i, complex & c) {
    c.real = i * c.real;
    c.img = i * c.img;
    return c;
}
std::ostream & operator<<(std::ostream & os, const complex & c) {
    os << "(" << c.real << "," << c.img << "i)";
    return os;
}
std::istream & operator>>(std::istream & input, complex & c) {
    std::cout << "real: ";
    if (input >> c.real) {
        std::cout << "imaginary: ";
        input >> c.img;
    }
    return input;
}
