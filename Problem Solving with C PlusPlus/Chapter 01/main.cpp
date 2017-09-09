#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int quarter, dime, nickel;
    cout << "Number of quarters: ";
    cin >> quarter;
    cout << "Number of dimes: ";
    cin >> dime;
    cout << "Number of nickels: ";
    cin >> nickel;
    cout << "That is " << quarter * 25 + dime * 10 + nickel * 5 << " cents.\n";

    return 0;
}

