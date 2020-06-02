#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

void mat(std::vector<std::string> & name, int x);
void pat(std::vector<std::string> & name, int y);
void mat_pat(std::vector<std::string> & ab, std::vector<std::string> & a, std::vector<std::string> & b);
int main(void) {
    using namespace std;
    cout << "Enter the number of Mat's friends: ";
    int x_mat;
    cin >> x_mat;
    cout << "Enter the number of Pat's friends: ";
    int y_pat;
    cin >> y_pat;
    vector<string> mat_friend;
    vector<string> pat_friend;
    vector<string> friend_list;
    mat(mat_friend, x_mat);
    pat(pat_friend, y_pat);
    mat_pat(friend_list, mat_friend, pat_friend);

    return 0;
}
void mat(std::vector<std::string> & name, int x) {
    using namespace std;
    cout << "Enter the names of Mat's friends: ";
    string s;
    for (int i=0; i<x; i++) {
        cin.clear();
        cin.ignore();
        getline(cin, s);
        name.push_back(s);
    }
    cout << "Mat's friends that are coming to the party: \n";
    sort(name.begin(), name.end());
    for (int i=0; i<x; i++) 
        cout << name[i] << endl;
}
void pat(std::vector<std::string> & name, int y) {
    using namespace std;
    cout << "Enter the names of Pat's friends: ";
    string s;
    for (int i=0; i<y; i++) {
        cin.clear();
        getline(cin, s);
        name.push_back(s);
    }
    sort(name.begin(), name.end());
    cout << "Pat's friends that are coming to the party: \n";
    for (int i=0; i<y; i++)
        cout << name[i] << endl;
}
void mat_pat(std::vector<std::string> & friend_list, std::vector<std::string> & a, std::vector<std::string> & b) {
    using namespace std;
    friend_list.reserve(a.size() + b.size());
    friend_list.insert(friend_list.end(), a.begin(), a.end());
    friend_list.insert(friend_list.end(), b.begin(), b.end());
    vector<string>::iterator ip;
    ip = unique(friend_list.begin(), friend_list.end());
    friend_list.resize(std::distance(friend_list.begin(), ip));
    cout << "All the names of friends that are coming: \n";
    for (ip = friend_list.begin(); ip < friend_list.end(); ip++) 
        cout << *ip << endl;
}
