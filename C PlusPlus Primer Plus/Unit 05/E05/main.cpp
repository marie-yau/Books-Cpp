#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string month [12] = {"January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"};
    int sales [3][12];
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 12; j++){
            cout << "Enter sales in " << month[j] << " in year " << (i + 1) << ": ";
            cin >> sales[i][j];
            sum += sales[i][j];
        }
    }
    cout << "In 3 years you sold " << sum << " books.";

    return 0;
}

