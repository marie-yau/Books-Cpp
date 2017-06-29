#include <cstdlib>
#include <iostream>

using namespace std;

void blindMice();
void run();

int main(int argc, char** argv) {
    blindMice();
    blindMice();
    run();
    run();

    return 0;
}

void blindMice(){
    cout << "Three blind mice" << endl;
}

void run(){
    cout << "See how they run" << endl;
}