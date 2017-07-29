#include <cstdlib>
#include <iostream>

using namespace std;

int computeGuess(int number1, int number2);

int main(int argc, char** argv) {
    int number1, number2;
    cout << "Enter bounds: ";
    cin >> number1 >> number2;
    int secretNumber = rand() % number2 + number1;
    while(true){
        int guessedNumber = computeGuess(number1, number2);
        if(secretNumber == guessedNumber){
            cout << "You won... " << guessedNumber << endl;
            break;
        }    
        else
            cout << "Try again..." << guessedNumber << endl;
    }        

    return 0;
}

int computeGuess(int number1, int number2){
    int n = rand() % number2 + number1;
    return n;
}
