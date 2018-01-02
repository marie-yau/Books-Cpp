#include <cstdlib>

#include "Move.h"

using namespace std;

int main(int argc, char** argv) {
    Move m1 = Move(4, 5);
    Move m2 = Move();
    Move m3 = Move(1, 3);
    
    m1.showmove();
    m2.showmove();
    
    Move m4 = m3.add(m1);
    m4.showmove();
    m4.resets();
    m4.showmove();

    return 0;
}

