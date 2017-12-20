#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
public:
    BankAccount();
    BankAccount(char* dN, int aN, double b);
    char* getDepositorName();
    int getAccountNumber();
    double getBalance();
    void setDepositorName(char* dN);
    void setAccountNumber(int aN);
    void setBalance(double b);
    void depositMoney(double amount);
    void withdrawMoney(double amount);
    ~BankAccount();
private:
    char depositorsName[20];
    int accountNumber;
    double balance;
};

#endif

