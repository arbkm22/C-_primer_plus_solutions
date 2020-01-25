#include <iostream>
void function_1(void);
void function_2(void);
int main(void)
{
    using namespace std;
    function_1();
    function_1();
    function_2();
    function_2();

    return 0;
}
void function_1(void)
{
    using namespace std;
    cout << "Three blind mice." << endl;
}
void function_2(void)
{
    using namespace std;
    cout <<"See how they run." << endl;
}