#include <cstdlib>
#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char** argv) {
    int intNumber = INT_MAX;
    short shortNumber = SHRT_MAX;
    long longNumber = LONG_MAX;

    cout << "max int in decimal: " << INT_MAX << endl;
    cout << "max short in bytes: " << sizeof(short) << endl;
    cout << "max long in decimal: " << longNumber << endl;
    
    cout << "max int in decimal: " << INT_MIN << endl;

    return 0;
}

