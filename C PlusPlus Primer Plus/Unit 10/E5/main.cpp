#include <cstdlib>
#include <iostream>

#include "Stack.h"

using namespace std;

void addC(Stack & customerStack);
void deleteC(Stack & customerStack);

int main(int argc, char** argv) {
    Stack customerStack;
    char ch;
    bool getNew = true;
    
    while(getNew){
        cout << "Enter A to add, D to delete, Q to quit: ";
        cin >> ch;
        switch(ch){
            case 'A':
                addC(customerStack);
                break;
            case 'D':
                deleteC(customerStack);
                break;
            case 'Q':
                getNew = false;
                break;
            default:
                cout << "Invalid" << endl;
                break;
        }
    }

    return 0;
}

void deleteC(Stack & customerStack){
    customer newCustomer;
    
    if(customerStack.isempty())
        cout << "Stack is already empty." << endl;
    else{
        customerStack.pop(newCustomer);
        cout << "Customer with name " << newCustomer.fullname << " and " << newCustomer.payment << " was deleted.\n";
        cout << "Your total is " << customerStack.getTotal() << ".\n\n";
    }
}

void addC(Stack & customerStack){
    customer newCustomer;
    cout << "Enter name: ";
    cin >> newCustomer.fullname;
    cout << "Enter payment: ";
    cin >> newCustomer.payment;
    
    if(customerStack.isfull())
        cout << "Stack is already full." << endl;
    else{
        customerStack.push(newCustomer);
        cout << "Your total is " << customerStack.getTotal() << ".\n\n";
    }    
}