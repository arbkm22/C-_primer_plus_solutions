#include <iostream>
#include <cstring>
using namespace std;
struct stringy {
    char * str;
    int ct;
};  
void set(stringy &a, char *b);
void show(const stringy &x, int n=1);
void show(const char c[], int m=1);
int main(void) {
    stringy beany;
    char testing[] = "Realty isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);

    return 0;
}
void set(stringy &a, char *b) {
    int len = strlen(b);
    char *boko = new char[len];
    boko = b;
    a.str = boko;
    a.ct = 5;

    delete [] boko;
}
void show(const stringy &x, int n) {
    for(int i=0; i<n; i++) {
        cout << x.str << endl;
        cout << x.ct << endl;
    }
}
void show(const char c[], int m) {
    int x = strlen(c);
    for (int i=0; i<m; i++) {
        for (int q=0; q<x; q++)
            cout << c[q];
        cout << endl;
    }
}
