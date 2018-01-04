#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

int main(int argc, char** argv) {
    List l;
    int item;
    
    while(l.isfull()){
        std::cout << "Enter item: ";
        cin >> item;
        l.addItem(item);
    }
    
    std::cout << l.getItem(5) << std::endl;
    std::cout << l.getItem(8) << std::endl;

    return 0;
}

