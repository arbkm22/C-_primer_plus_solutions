#include <iostream>
#include "move.h"

Move::Move(double a, double b) {
    x = a;
    y = b;
}
void Move::showmove() const {
    std::cout << "Value of x = " << this->x << std::endl;
    std::cout << "Value of y = " << this->y << std::endl;
}
Move Move::add(const Move & m) const {
    double temp_x = this->x + m.x;
    double temp_y = this->y + m.y;
    Move new_move(temp_x, temp_y);
    return new_move;
}
void Move::reset(double a, double b) {
    this->x = a;
    this->y = b;
}
