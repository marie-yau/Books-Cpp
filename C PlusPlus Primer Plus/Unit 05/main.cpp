#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

struct car{
    string sign;
    int yearMade;
};

int main(int argc, char** argv) {
    cout << "How many cars should be in the catalog?" << endl;
    int carNumber;
    cin >> carNumber;
    car * p_catalog = new car[carNumber];
    for(int i = 0; i < carNumber; i++){
        cout << "Car " << (i + 1) << "#" << endl;
        cout << "Enter sign of the car: ";
        cin >> (p_catalog + i)->sign;
        cout << "Enter the year made: ";
        cin >> (p_catalog + i)->yearMade;
    }
    cout << "Car catalog" << endl;
    for(int i = 0; i < carNumber; i++){
        cout << (p_catalog + i)->sign << "\t" << (p_catalog + i)->yearMade << endl;
    }

    return 0;
}

