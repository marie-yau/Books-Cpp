#include <cstdlib>
#include <iostream>

using namespace std;


int plusThree(int number);

int main(int argc, char** argv) {
    int magicNumber = plusThree(5);
    cout << "Magic number: " << magicNumber;

    return 0;
}

int plusThree(int number){
    int threeMore = number + 3; 
    return threeMore;
}
