#include <cstdlib>
#include <iostream>

using namespace std;

double computeMean(int number1, int number2);

int main(int argc, char** argv) {
    int number1, number2;
    do{
        cout << "Enter 2 numbers: ";
        while(!(cin >> number1 >> number2)){
            cin.clear();
            while(cin.get() != '\n')
                continue; 
            cout << "Try again: ";
        }
        cout << "Harmonic mean: " << computeMean(number1, number2) << endl;
    }
    while(number1 != 0 && number2 != 0);
    cout << "Bye";

    return 0;
}

double computeMean(int number1, int number2){
    double mean = 2.0 * number1 * number2 / (number1 + number2);
    return mean;
}
