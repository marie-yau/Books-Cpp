#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double * newPointer = new double;
    *newPointer = 12.4;
    cout << "newPointer value: " << *newPointer << endl;
    cout << "newPointer address: " << newPointer << endl;
    cout << "size of *newPointer: " << sizeof(*newPointer) << endl;
    cout << "size of newPointer: " << sizeof(newPointer) << endl;

    return 0;
}

