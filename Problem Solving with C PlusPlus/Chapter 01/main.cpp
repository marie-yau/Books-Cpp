#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter time in seconds: ";
    int time, distance;
    cin >> time;
    distance = (32 * time * time) / 2;
    cout << "It fell from " << distance << " feet.";

    return 0;
}

