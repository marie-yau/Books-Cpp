#include <cstdlib>
#include <iostream>
#include "BankAccount.h"

using std::cout;
using std::endl;

int main(int argc, char** argv) {
    BankAccount BankWest = BankAccount();
    BankWest.setAccountNumber(45423);
    BankWest.setBalance(2000);
    BankWest.setDepositorName("Jane Willson");
    BankWest.withdrawMoney(500);
   
    BankAccount BankAmerica = BankAccount("John Smith", 43245, 1000);
    BankAmerica.depositMoney(3000);
    
    cout << BankWest.getAccountNumber() << "   " << BankWest.getDepositorName() << 
            ": " << BankWest.getBalance() << endl;
    cout << BankAmerica.getAccountNumber() << "   " << BankAmerica.getDepositorName() << 
            ": " << BankAmerica.getBalance() << endl;

    return 0;
}

