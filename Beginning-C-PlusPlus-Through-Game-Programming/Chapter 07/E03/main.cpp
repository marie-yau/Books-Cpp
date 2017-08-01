#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a = 10; 
    // b is reference to a
    int &b = a; 
    // *c is address of b
    int *c = &b; 
    // same addresses
    cout << &a << endl; 
    cout << &b << endl; 
    cout << &(*c) << endl;

    return 0;
}
