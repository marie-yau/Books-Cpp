#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct pizza{
    string company;
    int diameter;
    double weight;
};

int main(int argc, char** argv) {
    pizza * p_myPizza = new pizza;
    cout << "Enter diameter: ";
    cin >> p_myPizza->diameter;
    cin.get();
    cout << "Enter company: ";
    getline(cin, (p_myPizza->company));
    cout << p_myPizza->company;
    cout << "Enter weight: ";
    cin >> p_myPizza->weight;
    
    cout << p_myPizza->company << ", " << (*p_myPizza).diameter << ", " << (*p_myPizza).weight;

    return 0;
}

