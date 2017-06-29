#include <cstdlib>
#include <iostream>

using namespace std;

double convert(double lightYears);

int main(int argc, char** argv) {
    cout << "Enter the number of light years: ";
    double lightYears;
    cin >> lightYears;
    double astroUnits = convert(lightYears);
    cout << lightYears << " light years = " << astroUnits << " astronomical units.";

    return 0;
}

double convert(double lightYears){
    int astroUnits = lightYears * 63240;
    return astroUnits;
}