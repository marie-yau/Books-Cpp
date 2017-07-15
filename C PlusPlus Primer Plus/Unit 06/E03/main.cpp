#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "When were you born?\n";
    cout << "a) Summer \t b) Autumn\n";
    cout << "c) Winter \t d) Spring\n";
    char choice;
    cout << "Choose a, b, c, d: "; 
    cin >> choice;
    while(!(choice <= 'd' && choice >= 'a')){
        cout << "Try again: ";
        cin >> choice;
    }
    switch(choice){
        case 'a': cout << "Oh... summer baby";
            break;  
        case 'b': cout << "Oh... autumn baby";
            break; 
        case 'c': cout << "Oh... winter baby";
            break;
        case 'd': cout << "Oh... spring baby";
            break;
    }

    return 0;
}

