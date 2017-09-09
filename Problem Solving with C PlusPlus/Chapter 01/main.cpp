#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter 1st number: ";
    int number1, number2;
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    cout << "Product: " << number1 * number2 << endl;
    cout << "Summary: " << number1 + number2 << endl;

    return 0;
}