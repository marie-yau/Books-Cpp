#include <cstdlib>
#include <iostream>

using namespace std;

struct dog{
    string name;
    int weight;
};

int main(int argc, char** argv) {
    dog * p_myDog = new dog;
    cout << "Name of the dog: ";
    cin >> p_myDog->name;
    cout << "Weight of the dog: ";
    cin >> (*p_myDog).weight;
    cout << "Your dog is " << (*p_myDog).name << " and " 
            << p_myDog->weight << " kg.";

    return 0;
}

