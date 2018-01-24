#include <cstdlib>
#include <iostream>
#include "Stonewt.h"

using namespace std;

int main(int argc, char** argv) {
    Stonewt s1 = Stonewt(1, 2);
    Stonewt s2 = Stonewt(5, 3);
    Stonewt s3 = Stonewt(43);
    Stonewt s4 = Stonewt();
    
    cout << s1;
    cout << s2;
    s3.setState('p');
    cout << s3 << endl;
    
    s4 = s2 * s1;
    cout << "s2 * s1 = " << s4;
    s4 = s2 - s1;
    cout << "s2 - s1 = " << s4;
    s4 = s2 / s1;
    cout << "s2 / s1 = " << s4;
    s4 = s2 + s1;
    cout << "s2 + s1 = " << s4;

    return 0;
}

