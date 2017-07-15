#include <cstdlib>
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter sentence (to stop enter @): ";
    char sentence[80];
    cin.getline(sentence, 80);
    int i = 0;
    while(sentence[i] != '@'){
        if(islower(sentence[i]))
            cout << char(toupper(sentence[i]));
        else
            cout << char(tolower(sentence[i]));
        i++;
    }

    return 0;
}

