#include <iostream>

int main(void) {
    using namespace std;

    int count = 1;
    int orig_bal_daphne = 100;
    int orig_bal_cleo = 100;
    float cur_bal_daphne = orig_bal_daphne;
    float cur_bal_cleo = orig_bal_cleo;
    while (cur_bal_cleo <= cur_bal_daphne) {
        float interest_daphne = (0.10 * orig_bal_daphne);
        cur_bal_daphne = (cur_bal_daphne + interest_daphne);
        float interest_cleo = (0.05 * cur_bal_cleo);
        cur_bal_cleo = (cur_bal_cleo + interest_cleo);
        count++;
    }
    cout << "Total value of Daphne after " << count << " years = $" << cur_bal_daphne << endl;
    cout << "Total value of Cleo after " << count << " years = $" << cur_bal_cleo << endl;
    cout << "It took " << count << " years for Cleo to overtake Daphne\n";

    return 0;
}