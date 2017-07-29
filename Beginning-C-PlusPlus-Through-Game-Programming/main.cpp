#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string jumble(string randomWord);

int main(int argc, char** argv) {
    srand(static_cast < unsigned int >(time(0)));
    int score = 0;
    cout << "Lets jumble some words!" << endl;
    cout << "To get hint write \"hint\".\n" << endl;
    
    int size = 3, i = 0;
    string words[3] = {"hello", "blanket", "house"};
    int chooseWord = rand() % 3;
    string jumbledWord = jumble(words[chooseWord]);
    string guess;
    while(true){
        cout << "Guess word: " << jumbledWord << endl;
        cin >> guess;
        if(!guess.compare(words[chooseWord])){
            cout << "You won: " << words[chooseWord] << endl;
            score += 10;
            break;
        }
        else if(guess == "hint"){
            cout << "Your #" << (i+1) << " hint: " << (words[chooseWord])[i] << endl;
            i++;
            score -= 2;
        }
        else{
            cout << "It is something else than: " << guess << endl;
            score--;
        }
    }
    cout << "Your score: " << score << endl;
    
    return 0;
}

string jumble(string randomWord){
    int size = randomWord.size();
    int number1, number2;
    for(int i = 0; i < size; i++){
        number1 = rand() % size;
        number2 = rand() % size;
        char letter = randomWord[number1];
        randomWord[number1] = randomWord[number2];
        randomWord[number2] = letter;
    } 
    return randomWord;
}