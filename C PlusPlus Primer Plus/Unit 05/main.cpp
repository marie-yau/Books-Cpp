#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter words (type \"done\" to stop)" << endl;
    char words[10];
    int count;
    for(count = 0; strcmp(words, "done"); count++){
        cin >> words;
    }
    cout << "There were " << (count - 1) << " words.";

    return 0;
}

