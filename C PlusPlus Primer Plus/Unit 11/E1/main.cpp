#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>

#include "Vector.h"

using namespace std;

int main(int argc, char** argv) {
    using namespace std;
    using VECTOR::Vector;
    
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream myfile("randomWalk.txt", fstream::out);
    
    if(!myfile.is_open())
        cout << "File could not be opened." << endl;
    
    cout << "Enter target distance: ";
    cin >> target;
    cout << "Enter step length: ";
    cin >> dstep;
    
    myfile << "Target Distance: " << target << ", Step Size: " << dstep << endl;
    myfile << steps << ": " << result;
    while(result.magval() < target){
        direction = rand() % 360;
        step.set(dstep, direction, 'p');
        result = result + step;
        steps++;
        myfile << "\n" << steps << ": " << result;
    } 
    myfile << "\nAfter " << steps << " steps, the subject has the following location: " << endl;
    myfile << result;
    result.polar_mode();
    myfile << result;
    
    myfile.close();

    return 0;
}