#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String {
    private:
        char * str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
    // constructor and other methods
        String(const char * s);
        String ();
        String(const String & s);
        ~String();
        int length() const {
            return len;
        }
        void stringlow(String & st);
        void stringup(String & st);
        int alpa_count(const String & st, char c);
    // overloaded functions
        String & operator=(const String & s);
        String & operator=(const char * nm);
        char & operator[](int i);
        const char & operator[](int i) const;
        char & operator+(const String s1) const;
    // overloaded operator friends
        friend char & operator+(char * str, String & s1);
        friend bool operator<(const String & st, const String & st2);
        friend bool operator>(const String & st1, const String & st2);
        friend bool operator==(const String & st, const String & st2);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);
    // static functions 
        static int HowMany();
};
#endif
