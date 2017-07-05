#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    const int maxValue = 15;
    char name[maxValue], city[maxValue];
    cout << "What is your name? ";
    cin.getline(name, maxValue);
    cout << "What is your favorite city? ";
    cin.getline(city, maxValue);
    cout << name << " is now in " << city << ".";

    return 0;
}

