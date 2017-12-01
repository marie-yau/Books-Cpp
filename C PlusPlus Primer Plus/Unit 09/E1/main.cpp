#include <cstdlib>
#include <iostream>
#include "golf.h"

using namespace std;

int main(int argc, char** argv) {
    struct golf player1;
    struct golf player2 = {"Anna", 5};
    
    setgolf(player1, "Peter", 9);
    setgolf(player2);
    
    showgolf(player1);
    showgolf(player2);
    
    handicap(player2, 7);
    
    showgolf(player1);
    showgolf(player2);    

    return 0;
}

