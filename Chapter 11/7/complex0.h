#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class complex {
    private:
        int real;
        int img;
    public:
        complex();
        complex(int a, int b);
        ~complex();
    // operator overloading
        complex operator+(const complex & c) const;
        complex operator-(const complex & c) const;
        complex operator*(const complex & c) const;
    // friend function 
        friend complex operator*(int i, complex & c);
        friend std::ostream & operator<<(std::ostream & os, const complex & c);
        friend std::istream & operator>>(std::istream & input, complex & c);
        
};

#endif
