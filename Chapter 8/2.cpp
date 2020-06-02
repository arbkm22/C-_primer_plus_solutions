//Incomplete

#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string brand;
    float weight;
    int calorie;
};
void fun_struct(CandyBar &a, string &b, float &c, int &d);
void fun_struct(CandyBar &w, string x="Millenium Munch", float y=2.85, int z=350);
void show_fun(CandyBar &x);
int main(void) {
    CandyBar kitkat;
    //fun_struct(kitkat, kitkat.brand, kitkat.weight, kitkat.calorie);
    fun_struct(kitkat);
    show_fun(kitkat);
    cout << "Done!\n";

    return 0;
}
void fun_struct(CandyBar &a, string &b, float &c, int &d) {
    b = "KitKat";
    c = 3.78;
    d = 450;
}
void fun_struct(CandyBar &w, string x, float y, int z) {
    ;
}
void show_fun(CandyBar &x) {
    cout << "Brand Name: " << x.brand << endl;
    cout << "Weight: " << x.weight << endl;
    cout << "Calorie: " << x.calorie << endl;
}

