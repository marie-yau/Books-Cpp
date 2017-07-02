#include <cstdlib>
#include <iostream>

using namespace std;

int calculateBMI(double meters, double kilograms);
double convertPoundsToKilograms(double pounds);
double convertFeetToInches(double feet, double inches);
double convertInchesToMeters(double heightInches);

int main(int argc, char** argv) {
    double feet, inches, pounds;
    cout << "How many feet and inches do you measure? \nEnter feet: " << endl;
    cin >> feet;
    cout << "Enter inches: " << endl;
    cin >> inches;
    cout << "Enter weight in pounds: " << endl;
    cin >> pounds;
    
    double kilograms = convertPoundsToKilograms(pounds);
    double heightInches = convertFeetToInches(feet, inches);
    double meters = convertInchesToMeters(heightInches);
    int BMI = calculateBMI(meters, kilograms);
    cout << "Your BMI is " << BMI << ".";

    return 0;
}

int calculateBMI(double meters, double kilograms){
    int BMI = meters / (kilograms * kilograms);
    return BMI;
}

double convertPoundsToKilograms(double pounds){
    const double poundsToKilograms = 0.4536;
    double kilograms = poundsToKilograms * pounds;
    return kilograms;
}

double convertFeetToInches(double feet, double inches){
    const int feetToInches = 12;
    double heightInches = feetToInches * feet + inches;
    return heightInches;
}

double convertInchesToMeters(double heightInches){
    const double inchesToMeters = 0.0254;
    double meters = inchesToMeters * heightInches;
    return meters;
}
