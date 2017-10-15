#include <cstdlib>
#include <iostream>
#include <string>
#include <locale>

using namespace std;

void createUppercase(string &sentence);

int main(int argc, char** argv) {
    string sentence;
    while(true){
        cout << "Enter sentence (s to stop): ";
        getline(cin, sentence);
        if(!sentence.compare("s"))
            break;
        createUppercase(sentence);
    }    

    return 0;
}

void createUppercase(string &sentence){
    int length = sentence.length();
    locale settings;
    for(int i = 0; i < length; i++){
        cout << toupper(sentence[i], settings);
    }
    cout << endl;
}