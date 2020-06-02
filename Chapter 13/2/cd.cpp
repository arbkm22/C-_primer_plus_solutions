#include <iostream>
#include "cd.h"
#include <cstring>

Cd::Cd(const char * s1, const char * s2, int n, double x) {
    performers = new char [strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char [strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d) {
    performers = new char [strlen(d.performers) + 1];
    label = new char [strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd() {
    performers = new char [1];
    performers = nullptr;
    label = new char [1];
    label = nullptr;
    selections = playtime = 0;
}
Cd::~Cd() {
    delete [] performers;
    delete [] label;
}
void Cd::report() const {
    using std::cout;
    using std::endl;
    cout << "Performer: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}
Cd & Cd::operator=(const Cd & d) {
    if (this == &d)
        return * this;
    performers = new char [strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char [strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return * this;
}
// Classic member functions
Classic::Classic() {
    delete [] performers;
    delete [] label;
    delete [] details;
    performers = new char[1];
    performers = nullptr;
    label = new char[1];
    label = nullptr;
    details = new char [1];
    details = nullptr;
}
Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x) : Cd(s2, s3, n, x) {
    delete [] details;
    details = new char [strlen(s1) + 1];
    strcpy(details, s1);
}
Classic::Classic(const Classic & cl, const char * s) : Cd(cl) {
    delete [] details;
    details = new char [strlen(s) + 1];
    strcpy(details, s);
}
Classic::~Classic() {
    delete [] performers;
    delete [] label;
    delete [] details;
}
void Classic::report() const {
    using std::cout;
    using std::endl;
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
    cout << "Details: " << details << endl;
}
Classic & Classic::operator=(const Classic & cl) {
    if (this == &cl)
        return *this;
    Cd::operator=(cl);
    delete [] details;
    details = new char [strlen(cl.details) + 1];
    strcpy(details, cl.details);
    return * this;
}
