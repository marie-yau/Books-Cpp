#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void printString(string *myString);
void printString(string *myString, int n);

int k = 1;

int main(int argc, char** argv) {
    string dog = "Dog";
    string *p_dog = &dog;
    printString(p_dog);
    printString(p_dog, 2);
    printString(p_dog, 0);
    printString(p_dog);
    printString(p_dog, 8);

    return 0;
}

void printString(string *myString){
    cout << "Basic function: " << endl;
    cout << "- " << *myString << endl;
    k++;
}

void printString(string *myString, int n){
    cout << "Upgraded function: " << endl;
    if(n != 0){
        for(int i = 0; i < k; i++)
            cout << "- " << *myString << endl;
        k++;
    }    
}