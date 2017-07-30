#include <cstdlib>
#include <iostream>

using namespace std;

int averageNumber(int low, int high);

int main(int argc, char** argv) {
    int low, high;
    cout << "Enter lower number: ";
    cin >> low;
    cout << "Enter higher number: ";
    cin >> high;
    int average = averageNumber(low, high);
    cout << "Average: " << average << endl;

    return 0;
}

int averageNumber(int low, int high){
    return (low + high) / 2;
}