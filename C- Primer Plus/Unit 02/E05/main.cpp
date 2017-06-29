#include <cstdlib>
#include <iostream>

using namespace std;

double convert(double celsius);

int main(int argc, char** argv) {
    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << convert(celsius) << " degrees Fahrenheit.";

    return 0;
}

double convert(double celsius){
    double fahrenheit = 1.8 * celsius + 32;
    return fahrenheit;
}
