#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int * p = new int [2];
    p[0] = 5;
    p[1] = 9;
    cout << "p[0] = " << p[0] << endl;
    p[0] *= 2;
    cout << "p[0] * 2 = " << p[0] << endl;
    delete [] p;

    return 0;
}

