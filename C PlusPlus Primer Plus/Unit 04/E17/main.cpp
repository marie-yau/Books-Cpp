#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

struct CandyBar{
    string kind;
    int grams;
};

int main(int argc, char** argv) {
    CandyBar * p_array = new CandyBar;
    (*p_array).kind = "kitkat";
    (*p_array).grams = 340;
    
    (*(p_array + 1)).kind = "snickers";
    (*(p_array + 1)).grams = 200;
    
    cout << (*(p_array)).kind << ", " << (*(p_array)).grams << endl;
    cout << (*(p_array + 1)).kind << ", " << (*(p_array + 1)).grams;

    return 0;
}

