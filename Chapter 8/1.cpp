#include <iostream>
const int Max = 20;
void fun1(const char *str, int n=0);
int main(void) {
    using namespace std;
    cout << "Enter your string: ";
    char str[Max];
    cin.get(str, Max);
    fun1(str);
    fun1(str, 2);

    return 0;
}
void fun1(const char *str, int n) {
    using namespace std;
    if (n > 0) {
        n--;
        fun1(str, n);
    }
    cout << str << endl;
}
