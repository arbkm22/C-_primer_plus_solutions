/*
 * =====================================================================================
 *
 *       Filename:  3.cpp
 *
 *    Description:  Chapter 7, exercise 7
 *
 *        Version:  1.0
 *        Created:  02/25/2020 08:42:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhaskar Mahto   
 *   Organization:  Yoruzuya
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void volume(box *x);
void display(box x);
int main(void) {
 
    box ikea_101;
    cout << "Enter the maker: ";
    cin.getline(ikea_101.maker, 40);
    cout << "Enter the height: ";
    cin >> ikea_101.height;
    cout << "Enter the width: ";
    cin >> ikea_101.width;
    cout << "Enter the length: ";
    cin >> ikea_101.length;
    display(ikea_101);
    volume(&ikea_101);
    return 0;
}
void display(box x) {
    cout << "Maker: " << x.maker << endl;
    cout << "Height: " << x.height << " cm" << endl;
    cout << "Width: " << x.width << " cm" << endl;
    cout << "Length: " << x.length << " cm" << endl;
}
void volume(box *x) {
    x->volume = (x->height * x->width * x->length);
    cout << "The volume of the box is: " << x->volume << endl;
}
