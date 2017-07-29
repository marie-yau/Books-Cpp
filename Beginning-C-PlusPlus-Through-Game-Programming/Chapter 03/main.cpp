#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string phrase = "Hello";
    for (int i = 0; i < phrase.size(); i++){ 
        cout << "Character at position " << i << " is: " << phrase[ i] << endl;
    }

    return 0;
}

