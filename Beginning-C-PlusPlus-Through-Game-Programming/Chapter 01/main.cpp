#include <iostream>
using namespace std;

int main() {
    int score;
    double distance;
    char play;
    bool shieldsActive; 
    
    score = 0;
    distance = 1432.54;
    play = 'y';
    shieldsActive = true;
    
    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "play: " << play;
    
    int energy;
    cout << "\nHow much energy? ";
    cin >> energy;
    cout << "energy: " << energy << endl;
    
    //specify new type
    typedef unsigned short int newshort;
    newshort result = 10;
    cout << "\nresult: " << result << endl;
    
    return 0;
}

