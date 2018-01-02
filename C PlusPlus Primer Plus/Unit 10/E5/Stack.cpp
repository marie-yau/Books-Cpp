#include "Stack.h"
#include <string>

Stack::Stack(){
    top = 0;
    total = 0;
}
bool Stack::isempty() const{
    if(top == 0)
        return true;
    else
        return false;
}
bool Stack::isfull() const{
    if(top == MAX)
        return true;
    else
        return false;
}
bool Stack::push(const customer & myCustomer){
    if(top < MAX){
       strcpy(arrayCustomers[top + 1].fullname, myCustomer.fullname);
       arrayCustomers[top + 1].payment = myCustomer.payment; 
       total += arrayCustomers[top + 1].payment;
       top++;
       return true;
    }
    else
        return false;
}
bool Stack::pop(customer & myCustomer){
    if(top > 0){
        strcpy(myCustomer.fullname, arrayCustomers[top].fullname);
        myCustomer.payment = arrayCustomers[top].payment;
        total -= myCustomer.payment;
        top--;
        return true;
    }
    else 
        return false;
}
double Stack::getTotal(){
    return total;
}