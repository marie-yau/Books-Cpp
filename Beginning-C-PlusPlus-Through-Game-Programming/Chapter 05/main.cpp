#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool isRight(char guessedLetter, char theLetter, int n);
char getGuess();

int main(int argc, char** argv) {
    srand(time(NULL));
    int score = 0;
    string array[3] = {"blanket", "house", "kitten"};
    int number = rand() % 3;
    for(int j = 0; j < array[number].size(); ){
        char guessedLetter = getGuess();
        char theLetter = (array[number])[j];
        if(isRight(guessedLetter, theLetter, j)){
            score += 2;
            j++;
        }
        else
            score--;
    }
    cout << "Your score: " << score << endl;
    cout << "Magic word: " << array[number] << endl;

    return 0;
}

bool isRight(char guessedLetter, char theLetter, int n){
    if(guessedLetter == theLetter){
        cout << "Right. Letter #" << (n+1) << ": " << guessedLetter << endl;
        return true;
    }
    else{
        cout << "Try again." << endl;
        return false;
    }
}

char getGuess(){
    char letter;
    cout << "Enter your guess: ";
    cin >> letter;
    return letter;
}