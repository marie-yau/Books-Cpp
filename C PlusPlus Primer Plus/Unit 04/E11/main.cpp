#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter your first name: ";
    char firstName[10];
    cin.getline(firstName, 10);
    cout << "Enter your last name: ";
    char lastName[10];
    cin.getline(lastName, 10);
    char name [20];
    strcat(name, lastName);
    strcat(name, ", ");
    strcat(name, firstName);
    cout << "Here is the information in a single string: " << name;

    return 0;
}

