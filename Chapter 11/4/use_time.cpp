#include <iostream>
#include "time0.h"

int main(void) {
    using std::cout;
    using std::endl;

    Time luffy(3, 35);
    Time ichigo(2, 48);
    Time temp;
    cout << "Luffy and Ichigo:\n";
    cout << luffy << ": " << ichigo << endl;
    temp = luffy + ichigo;
    cout << "Luffy + Ichigo: " << temp << endl;
    temp = luffy - ichigo;
    cout << "Luffy - Ichigo: " << temp << endl;
    temp = luffy * 1.17;
    cout << "Luffy * 1.17: " << temp << endl;
}
