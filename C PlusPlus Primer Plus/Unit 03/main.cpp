#include <cstdlib>
#include <iostream>

using namespace std;

double convertToDegrees(double degrees, double minutes, double seconds);

int main(int argc, char** argv) {
    cout << "Enter latitude in degrees, minutes, and seconds." << endl;
    double degrees, minutes, seconds;
    cout << "Degrees: ";
    cin >> degrees;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;
    double latitude = convertToDegrees(degrees, minutes, seconds);
    cout << "That is " << latitude << " degrees.";

    return 0;
}

double convertToDegrees(double degrees, double minutes, double seconds){
    const double rate = 0.0167;
    double latitude = degrees + (minutes + seconds * rate) * rate;
    return latitude;
}