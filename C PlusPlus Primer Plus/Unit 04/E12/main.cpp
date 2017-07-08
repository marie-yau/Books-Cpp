#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter your first name: ";
    string firstName;
    getline(cin, firstName);
    cout << "Enter your last name: ";
    string lastName;
    getline(cin, lastName);
    string name = lastName + ", " + firstName;
    cout << "Here is the information in a single string: " << name;

    return 0;
}
