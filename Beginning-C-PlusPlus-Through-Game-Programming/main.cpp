#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void createSentence(string &name, string &object, string &verb, int &number);

int main(int argc, char** argv) {
    string name, object, verb;
    int number;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter object: ";
    getline(cin, object);
    cout << "Enter verb: ";
    getline(cin, verb);
    cout << "Enter number: ";
    cin >> number;
    cout << "Your magic sentence: ";
    createSentence(name, object, verb, number);

    return 0;
}

void createSentence(string &name, string &object, string &verb, int &number){
    cout << name << " " << verb << "s " << number << " " << object << "s." << endl;
}