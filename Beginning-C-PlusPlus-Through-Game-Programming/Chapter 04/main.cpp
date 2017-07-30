#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    vector <int> scores;
    vector <int>:: iterator iter; 
    scores.push_back(3);
    scores.push_back(6);
    scores.push_back(1);
    for(iter = scores.begin(); iter != scores.end(); iter++){ 
        (*iter)++; 
        cout << (*iter) << endl;
    }

    return 0;
}