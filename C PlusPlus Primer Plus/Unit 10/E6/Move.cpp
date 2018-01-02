#include "Move.h"
#include <iostream>

Move::Move(double a, double b) {
    x = a;
    y = b;
}
void Move::showmove() const{
    std::cout << "x = " << x << ", y = " << y << std::endl;
}
Move Move::add(const Move & m) const{
    Move newM;
    newM.x = this->x + m.x;
    newM.y = this->y + m.y;
    return newM;
}
void Move::resets(double a, double b){
    x = a;
    y = b;
}