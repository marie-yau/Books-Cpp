#include <cstdlib>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

void addGame();
void removeGame(int n);
void listGame();

vector<string> games;
vector<string>::iterator iter;

int main(int argc, char** argv) {
    bool stop = false; 
    char answer;
    int number;
    while(!stop){
        cout << "Add game [y/n]? ";
        cin >> answer;
        if(answer == 'y')
            addGame();
        cout << "Remove game [y/n]? ";
        cin >> answer;
        if(answer == 'y'){
            listGame();
            cout << "Enter number of the element to be removed: ";
            cin >> number;
            removeGame(number);
        }
        cout << "Display games [y/n]? ";
        cin >> answer;
        if(answer == 'y')
            listGame();
        cout << "Continue [y/n]? ";
        cin >> answer;
        if(answer == 'n')
            stop = true;
    }
    cout << "\n" << endl;
    listGame();

    return 0;
}

void addGame(){
    string newGame;
    cin >> newGame;
    games.push_back(newGame);
}

void removeGame(int number){
    games.erase(games.begin() + number);
}

void listGame(){
    cout << "Your games:" << endl;
    for(iter = games.begin(); iter != games.end(); iter++)
        cout << "- " << (*iter) << endl;
}
