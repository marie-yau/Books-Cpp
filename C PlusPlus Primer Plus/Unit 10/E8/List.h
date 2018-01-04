#ifndef LIST_H
#define LIST_H

class List {
public:
    List();
    bool isempty();
    bool isfull();
    bool addItem(int item);
    int getItem(int index);
private:
    const static int MAX = 10;
    int list[MAX];
    int top;
};

#endif /* LIST_H */

