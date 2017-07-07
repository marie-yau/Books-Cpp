#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "What is your first name? ";
    char firstName[20];
    cin.getline(firstName, 20);
    cout << "What is your last name? ";
    char lastName[20];
    cin.getline(lastName, 20);
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

