#include <cstdlib>
#include <iostream>

using namespace std;

template <typename myType>
myType sumArray (myType arr[], int n);

template <typename myType>
myType sumArray (myType * arr[], int n);

struct debts{
    char name[50];
    double amount;
};

int main(int argc, char** argv) {
    int things[6] = {13,31,103,301,310,130};
    struct debts arrayDebt[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    return 0;
}

