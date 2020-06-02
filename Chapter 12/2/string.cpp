#include <iostream>
#include "string2.h"
#include <cstring>
#include <cctype>

int String::num_strings = 0;
int String::HowMany() {
    return num_strings;
}

String::String(const char * s) {
   str = new char[strlen(s) + 1];
   strcpy(str, s);
}
String::String() {
    // default constructor
    str = nullptr;
    len = 0;
    num_strings = 0;
}
String::String(const String & s) {
    str = new char[strlen(s.str) + 1];
    strcpy(str, s.str);
    len = s.len;
}
String::~String() {
    // default destructor
    delete [] str;
}
void String::stringlow(String & st) {
    for (int i=0; i<st.len; i++) {
        st.str[i] = tolower(st.str[i]);
    }
}
void String::stringup(String & st) {
    for (int i=0; i<st.len; i++) {
        st.str[i] = toupper(st.str[i]);
    }
}
int String::alpa_count(const String & st, char c) {
    int count = 0;
    for (int i=0; i<st.len; i++) {
        if (st.str[i] == c)
            count++;
    }
    return count;
}
String & String::operator=(const String & s) {
    if (this == & s)
        return *this;
    delete [] str;
    len = s.len;
    str = new char(len + 1);
    strcpy(str, s.str);
    return * this;
}
String & String::operator=(const char * nm) {
    delete [] str;
    len = strlen(nm);
    str = new char(len + 1);
    strcpy(str, nm);
    return * this;
}
char & String::operator[](int i) {
    return str[i];
}
const char & String::operator[](int i) const {
    return str[i];
}
char & String::operator+(char * str, String s1) {
    char * name = new char [this->len + s1.len + 1];
    strcpy(name, this->str);
    strcpy(name, s1.str);
    return *name;
}
char & operator+(char * str,  String & s1) {
    char * name = new char[strlen(str) + s1.len + 1];
    strcpy(name, str);
    strcpy(name, s1.str);
    return *name;
}
bool operator<(const String & st1, const String & st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String & st1, const String st2) {
    return st2 < st1;
}
bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}
ostream & operator<<(ostream & os, const String & st) {
    os << st.str;
    return os;
}
istream & operator>>(istream & is, String & st) {
    char temp[String::CINLIM];
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}
