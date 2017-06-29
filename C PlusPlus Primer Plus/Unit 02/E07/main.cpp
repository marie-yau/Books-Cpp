#include <cstdlib>
#include <iostream>

using namespace std;

void displayTime(int hour, int minute);

int main(int argc, char** argv) {
    cout << "Enter the number of hours: ";
    int hour;
    cin >> hour;
    cout << "Enter the number of minutes: ";
    int minute;
    cin >> minute;
    displayTime(hour, minute);

    return 0;
}

void displayTime(int hour, int minute){
    cout << "Time: " << hour << ":" << minute;
}
