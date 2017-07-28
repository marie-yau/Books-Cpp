#include <iostream>
using namespace std;

int main() {
    unsigned int score = 400;
    cout << "score: " << score << endl;
    
    score = score + 200;
    cout << "score + 200: " << score << endl;
    
    score = 400;
    score += 100;
    cout << "score += 100: " << score << endl;
    
    //pre
    score = 400;
    score = ++score * 10;
    cout << "++score * 10: " << score << endl;
    
    //post
    score = 400;
    score = score++ * 10;
    cout << "score++ * 10: " << score << endl;
    
    const int MAX_SCORE = 6000;
    cout << "You can't have more points than " << MAX_SCORE << "." << endl;
    
    return 0;
}

