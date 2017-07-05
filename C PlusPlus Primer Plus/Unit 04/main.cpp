#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int magicNumber = 5;
    cout << "Magic number: " << magicNumber << endl;
    cout << "Its address: " << &magicNumber;

    return 0;
}

