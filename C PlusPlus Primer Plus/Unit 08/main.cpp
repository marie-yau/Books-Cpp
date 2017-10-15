#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

struct stringy{     
    char * str;        // points to a string
    int ct;            // length of string (not counting '\0')     
};

void show(char sentence[], int n);
void show(char sentence[]);

int main(int argc, char** argv) {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    
    show(beany); // prints member string once
    show(beany, 2); // prints member string twice     
    testing[0] = 'D';     
    testing[1] = 'u';
    show(testing);    
    show(testing, 3);      
    show("Done!");     
    
    return 0;
}

void show(char sentence[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < strlen(sentence); j++){
            cout << sentence[j];
        }
    }
}

void show(char sentence[]){
    for(int j = 0; j < strlen(sentence); j++){
        cout << sentence[j];
    }
}