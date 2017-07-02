#include <cstdlib>
#include <iostream>

using namespace std;

double convert(double litersKilometers);

int main(int argc, char** argv) {
    cout << "Enter liters per 100 km: ";
    double literKilometer;
    cin >> literKilometer;
    
    cout << "That is " << convert(literKilometer) << " mpg.";

    return 0;
}

double convert(double litersKilometers){
    double kilometersLiter = 100 / litersKilometers;
    double kilometersGalon = kilometersLiter * 3.875;
    double milesGalon = kilometersGalon * 0.621;
    return milesGalon;
    
}