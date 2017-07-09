#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter lower bound number: ";
    int lowerNumber;
    cin >> lowerNumber;
    cout << "Enter higher bound number: ";
    int higherNumber;
    cin >> higherNumber;
    int sum = 0;
    
    for(int j = 0; j <= (higherNumber - lowerNumber); j++){
        sum += (lowerNumber + j);
    }
    cout << sum;

    return 0;
}

