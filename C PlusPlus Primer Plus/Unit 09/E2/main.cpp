#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

const int sizeArr = 20;

void strcount(const string arr);

int main(int argc, char** argv) {
    string input;
    bool next = true;
    
    cout << "Enter line: ";
    getline(cin, input);
    strcount(input);
    while(next){
        cout << "Enter next line (q to quit): ";
        getline(cin, input);
        if(input == "q"){
            next = false;
            break;
        }    
        strcount(input);
    }

    return 0;
}

void strcount(const string arr){
    int count = arr.size();
    static int total;
    total += count;
    cout << "Total characters: " << total << endl;
    cout << "Characters in string: " << count << endl;
}
