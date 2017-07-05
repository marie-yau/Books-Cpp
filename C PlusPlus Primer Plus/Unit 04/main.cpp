#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int myNumber = 5;
    int * p_myNumber;
    
    p_myNumber = &myNumber;
    
    cout << "myNumber = " << myNumber << endl;
    cout << "p_myNumber = " << p_myNumber << endl;
    cout << "&myNumber = " << &myNumber << endl;
    
    *p_myNumber += 1;
    cout << "*p_myNumber += 1: " << myNumber << endl;

    return 0;
}

