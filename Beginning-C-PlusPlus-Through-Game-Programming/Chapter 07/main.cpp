#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void createSentence(string *p_name, string *p_object, string *p_verb, int *p_number);

int main(int argc, char** argv) {
    string *p_name = new string(), *p_object = new string(), *p_verb = new string();
    int *p_number = new int();
    cout << "Enter name: ";
    cin >> *p_name;
    cout << "Enter object: ";
    cin >> *p_object;
    cout << "Enter verb: ";
    cin >> *p_verb;
    cout << "Enter number: ";
    cin >> *p_number;
    createSentence(p_name, p_object, p_verb, p_number);

    return 0;
}

void createSentence(string *p_name, string *p_object, string *p_verb, int *p_number){
    cout << (*p_name) << " " << (*p_verb) << "s " << (*p_number) << " " << (*p_object) << "s." << endl;
}