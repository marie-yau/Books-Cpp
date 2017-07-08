#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    struct CandyBar{
        string brand;
        double weight;
        int calories;
    };
    
    CandyBar kitKat = {"Kit Kat", 126, 280};
    cout << kitKat.brand << ", " << kitKat.weight << ", " << kitKat.calories;

    return 0;
}

