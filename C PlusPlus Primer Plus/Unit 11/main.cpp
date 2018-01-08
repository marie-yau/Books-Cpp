#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Vector.h"

using namespace std;

int main(int argc, char** argv) {
    using VECTOR::Vector;
    
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    
    cout << "Enter target distance: ";
    cin >> target;
    cout << "Enter step length: ";
    cin >> dstep;
    
    cout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
    cout << steps << ": " << result;
    while(result.magval() < target){
        direction = rand() % 360;
        step.set(dstep, direction, 'p');
        result = result + step;
        steps++;
        cout << "\n" << steps << ": " << result;
    } 
    cout << "\nAfter " << steps << " steps, the subject has the following location: " << endl;
    cout << result;
    result.polar_mode();
    cout << result;    

    return 0;
}

