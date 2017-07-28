#include <cstdlib>
#include <iostream>

using namespace std;

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
double calculate(double number1, double number2, double (*p_function)(double, double));

int main(int argc, char** argv) {
    cout << "Enter 2 numbers: ";
    double number1, number2;
    cin >> number1 >> number2;
    
    cout << "Add: " << calculate(number1, number2, add) << endl;
    cout << "Subtract: " << calculate(number1, number2, subtract) << endl;
    cout << "Multiply: " << calculate(number1, number2, multiply) << endl;
    cout << "Divide: " << calculate(number1, number2, divide) << endl;

    return 0;
}

double calculate(double number1, double number2, double (*p_function)(double, double)){
    return (*p_function)(number1, number2);
}

double add(double number1, double number2){
    return number1 + number2;
}

double subtract(double number1, double number2){
    return number1 - number2;
}

double multiply(double number1, double number2){
    return number1 * number2;
}

double divide(double number1, double number2){
    return number1 / number2;
}