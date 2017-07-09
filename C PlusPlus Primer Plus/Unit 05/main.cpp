#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int number = 0, sum = 0;
    do{
        cout << "Enter number: ";
        cin >> number;
        sum += number;
        cout << "Sum: " << sum << endl;
    }
    while(number != 0);

    return 0;
}

