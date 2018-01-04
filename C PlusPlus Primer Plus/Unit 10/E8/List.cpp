#include "List.h"
#include <iostream>

List::List(){
    top = 0;
}
bool List::isempty(){
    if(top == 0)
        return true;
    else
        return false;
}
bool List::isfull(){
    if(MAX - 1 >= top)
        return true;
    else 
        return false;
}
bool List::addItem(int item){
    if(MAX - 1 > top){
        top++;
        list[top] = item;
        return true;
    }
    else{
        top++;
        std::cout << "List is full. Item can't be added" << std::endl;
        return false;
    }
}
int List::getItem(int index){
    return list[index];
}