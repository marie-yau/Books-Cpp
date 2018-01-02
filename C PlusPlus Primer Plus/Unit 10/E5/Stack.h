#ifndef STACK_H
#define STACK_H

struct customer{
    char fullname[35];
    double payment;
};

class Stack {
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const customer & myCustomer);
    bool pop(customer & myCustomer);
    double getTotal();
private:
    double total;
    const static int MAX = 10;
    customer arrayCustomers[MAX];
    int top;
};

#endif /* STACK_H */

