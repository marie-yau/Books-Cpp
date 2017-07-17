#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct donors{
    string name;
    double donation;
};

int main(int argc, char** argv) {
    cout << "How many donors do you have? ";
    int numberDonors;
    cin >> numberDonors;
    donors *array = new donors[numberDonors];
    for(int i = 0; i < numberDonors; i++){
        cout << "Enter " << (i + 1) << "#'s name: ";
        cin >> array[i].name;
        cout << "Enter " << (i + 1) << "#'s donation: ";
        cin >> array[i].donation;
    }
    cout << "Those are your donors" << endl;
    for(int i = 0; i < numberDonors; i++){
        cout << array[i].name << "\t" << array[i].donation << endl;
    }
    cout << "Those donated 10 000$ or more" << endl;
    for(int i = 0; i < numberDonors; i++){
        if(array[i].donation >= 10000)
            cout << array[i].name << "\t" << array[i].donation << endl;
    }

    return 0;
}

