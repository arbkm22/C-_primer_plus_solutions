#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char * s1, const char * s2, int n, double x) {
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d) {
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd() {
    selections = playtime = 0;
}
Cd::~Cd() {
    // default destructor
}
void Cd::Report() const {
    using std::cout;
    using std::endl;
    cout << "Name of performer: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}
Cd & Cd::operator=(const Cd & d) {
    if (this == &d)
        return *this;
    else {
        strcpy(performers, d.performers);
        strcpy(label, d.label);
        selections = d.selections;
        playtime = d.playtime;
        return * this;
    }
}
Classic::Classic(const char * ch, const char * s1, const char * s2, int n, double x) : Cd(s1, s2, n, x) {
    strcpy(details, ch);
}
Classic::Classic(const Cd & d, const char * ch) : Cd(d) {
    strcpy(details, ch);
}
Classic::Classic() {
}
