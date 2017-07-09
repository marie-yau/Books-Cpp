#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string month [12] = {"January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"};
    int sales[12];
    int sum = 0;
    for(int i = 0; i < 12; i++){
        cout << "Enter number of sold books in " << month[i] <<": ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "This year you sold " << sum << " books.";

    return 0;
}

