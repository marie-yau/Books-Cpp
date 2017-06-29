//convert furlongs to yards
#include <cstdlib>
#include <iostream>

using namespace std;

int convert(int);

int main(int argc, char** argv) {
    cout << "Enter distance in furlongs: ";
    int distance;
    cin >> distance;
    int yarns = convert(distance);
    cout << distance << " furlongs" << " = " << yarns << " yarns" << endl;

    return 0;
}

int convert(int furlongs){
    int yarns = furlongs * 220;
    return yarns;
}