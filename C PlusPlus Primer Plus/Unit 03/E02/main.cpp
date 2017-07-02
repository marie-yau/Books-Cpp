#include <cstdlib>
#include <iostream>

using namespace std;

int getFeet(int inputInches, int inchesToFeet);
int getInches(int inputInches, int inchesToFeet);

int main(int argc, char** argv) {
    const int inchesToFeet = 12;
    cout << "How many inches do you measure? ____ \b\b\b\b";
    int inputInches;
    cin >> inputInches;
    cout << "You measure " << getFeet(inputInches, inchesToFeet) << " feet and "
            << getInches(inputInches, inchesToFeet) << " inches.";

    return 0;
}

int getFeet(int inputInches, int inchesToFeet){
    int feet = inputInches / inchesToFeet;
    return feet;
}

int getInches(int inputInches, int inchesToFeet){
    int inches = inputInches % inchesToFeet;
    return inches;
}
