#include <cstdlib>

#include "golf.h"

using namespace std;

int main(int argc, char** argv) {
    golf first = golf();
    golf second = golf("Game1", 4);
    golf third = golf();
    
    third.setgolf();
    
    first.showgolf();
    second.showgolf();
    third.showgolf();

    return 0;
}

