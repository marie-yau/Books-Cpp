#include <cstdlib>
#include <iostream>

using namespace std;

int Daphne(int originalBalance);
int Cleo(int currentBalance);

int main(int argc, char** argv) {
    int originalBalance = 100, daphneBalance = 100, cleoBalance = 100, count = 0;
    while(daphneBalance >= cleoBalance){
        daphneBalance += Daphne(originalBalance);
        cleoBalance += Cleo(cleoBalance);
        count++;
    }
    cout << "Cleo will have money more Daphne in " << count << " years.";

    return 0;
}

int Daphne(int originalBalance){
    int interest = originalBalance * 0.1;
    return interest;
}

int Cleo(int currentBalance){
    int interest = currentBalance * 0.05;
    return interest;
}
