#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    ofstream textFile;
    cout << "Enter name of file: ";
    char filename[10];
    cin >> filename;
    textFile.open(filename);
    
    string name;
    int donation;
    int numberDonors;
    cout << "Number of donors: ";
    cin >> numberDonors;
    string * names = new string[numberDonors];
    int * donations = new int[numberDonors];
    for(int i = 0; i < numberDonors; i++){
        cout << (i+1) << "# donor: ";
        cin >> name;
        textFile << name << endl;
        names[i] = name;
        cout << (i+1) << "# donation: ";
        cin >> donation;
        donations[i] = donation;
        textFile << donation << endl;
    }
    textFile << "\n10000 or more" << endl;
    for(int j = 0; j < numberDonors; j++){
        if(donations[j] >= 10000){
            textFile << names[j] << endl;
            textFile << donations[j] << endl;
        }
    }
    textFile.close();

    return 0;
}

