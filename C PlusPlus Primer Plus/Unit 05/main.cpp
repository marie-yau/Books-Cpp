#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter words (to stop write \"done\"): " << endl;
    string words;
    int count;
    for(count = 0; words != "done"; count++){
        cin >> words;
    }
    cout << "There are " << (count - 1) << " words.";

    return 0;
}

