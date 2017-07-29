#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    enum choice {easy, medium, hard};
    int myChoice;
    cout << "Choose difficulty level [0/1/2]: ";
    cin >> myChoice;
    switch(choice(myChoice)){
        case easy: cout << "Easy.";
            break;
        case medium: cout << "Medium.";
            break;
        case hard: cout << "Hard.";
            break;
    }

    return 0;
}
