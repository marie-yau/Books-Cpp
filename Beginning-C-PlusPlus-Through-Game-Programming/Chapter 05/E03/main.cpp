#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class Tem>
Tem returnNumber(Tem number = 2);

int main(int argc, char** argv) {
    double number;
    cout << "Enter number: ";
    cin >> number;
    double n = returnNumber(number);
    cout << "You entered " << n << "." << endl;

    return 0;
}

template <class Tem>
Tem returnNumber(Tem number){
    cout << "Number was passed to the method." << endl;
    return number;
}
