#include "sales.h"
#include <iostream>
using namespace SALES;

sales::sales() {
    min = 0;
    max = 0;
    for(int i = 0; i < QUARTERS; i++){
        sale[i] = 0;
    }
}

sales::sales(double s[]) {
    for(int i = 0; i < QUARTERS; i++){
        sale[i] = s[i];
        if(i == 0){
            max = s[0];
            min = s[0];
        }            
        if(max < s[i])
            max = s[i];
        else if(min > s[i])
            min = s[i];
    }
}

void sales::setSales(double s[]) {
    for(int i = 0; i < QUARTERS; i++){
        std::cout << "Enter sale: ";
        std::cin >> s[i];
    }
    sales S1 = sales(s);
    *this = S1;
}

void sales::showSales(){
    for(int i = 0; i < QUARTERS; i++){
        std::cout << sale[i] << " ";
    }
    std::cout << "\t";
    std::cout << "min: " << min << ", max: " << max << std::endl;
}