#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    cout << "What is your first name? ";
    string firstName;
    getline(cin, firstName);
    cout << "What is your last name? ";
    string lastName;
    getline(cin, lastName);
    enum grades {A, B, C};
    cout << "What letter grade do you deserve? ";
    grades deservedGrade;
    cin >> deservedGrade; 
    cout << "What is your age? ";
    int age;
    cin >> age;
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << deservedGrade + 1 << endl;
    cout << "Age: " << age << endl;

    return 0;
}

