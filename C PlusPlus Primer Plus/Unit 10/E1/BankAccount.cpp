#include "BankAccount.h"
#include <string>

BankAccount::BankAccount(){
    strcpy(depositorsName, "Unknown");
    accountNumber = 11111;
    balance = 0;    
}
BankAccount::BankAccount(char* dN, int aN, double b){
    strcpy(depositorsName, dN);
    accountNumber = aN;
    balance = b;
}
char* BankAccount::getDepositorName(){
    return depositorsName;
}
int BankAccount::getAccountNumber(){
    return accountNumber;
}
double BankAccount::getBalance(){
    return balance;
}
void BankAccount::setDepositorName(char* dN){
    strcpy(depositorsName, dN);
}
void BankAccount::setAccountNumber(int aN){
    accountNumber = aN;
}
void BankAccount::setBalance(double b){
    balance = b;
}
void BankAccount::depositMoney(double amount){
    balance += amount;
}
void BankAccount::withdrawMoney(double amount){
    balance -= amount;
}
BankAccount::~BankAccount(){
    
}