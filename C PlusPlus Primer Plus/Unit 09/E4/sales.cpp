#include "sales.h"
#include <iostream>
#include <iomanip>
using std::setw;
using std::cout;
using std::endl;
using std::cin;

void SALES::setSales(SALES::Sales & s, const double ar[], int n){
    s.max = ar[0];
    s.min = ar[0];
    s.average = 0;
    for(int i = 0; i < n; i++){
        s.sales[i] = ar[i];
        s.average += s.sales[i];
        if(s.min > s.sales[i])
            s.min = s.sales[i];
        else if(s.max < s.sales[i])
            s.max = s.sales[i];
    }
    s.average /= n;
}
void SALES::setSales(SALES::Sales & s){
    double sale;
    s.average = 0;
    for(int i = 0; i < 4; i++){
        cout << "Enter sale: ";
        cin >> sale;
        s.sales[i] = sale;
        if(i == 0){
            s.max = s.sales[0];
            s.min = s.sales[0];            
        }
        if(s.min > sale)
            s.min = sale;
        if(s.max < sale)
            s.max = sale;
        s.average += sale;
    }           
    s.average /= 4;
}
void SALES::showSales(const SALES::Sales & s){
    for(int i = 0; i < SALES::QUARTERS; i++)
        cout << setw(10) << s.sales[i];
    cout << setw(10) << s.average << setw(10) << s.max << setw(10) << s.min << endl;
}