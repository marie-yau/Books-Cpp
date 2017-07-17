#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    ifstream myFile;
    myFile.open("text.txt");
    int sum = 0;
    char ch;
    while(true){
        myFile >> ch;
        if(myFile.eof())
            break;
        if(ch != ' ' || ch != '\n' || ch != '\t'){
            sum += 1;
        }    
    }
    cout << "There are " << sum << " characters in your file.";
    myFile.close();

    return 0;
}

