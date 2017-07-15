#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int number;
    cout << "How many tvarps do you have? ";
    while(!(cin >> number) || number <= 0){
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Try again: ";
    }   
    double afterTax = 0;
    
    if(number > 5000 && number <= 15000)
        afterTax = number * 0.1;
    else if(number > 15000 && number <= 35000)
        afterTax = (number - 15000) * 0.15 + 10000 * 0.1;
    else if(number > 35000)
        afterTax = 10000 * 0.1 + 20000 * 0.15 + (number - 35000) * 0.2;
    
    
    cout << "Your taxes are " << afterTax << ".";

    return 0;
}

