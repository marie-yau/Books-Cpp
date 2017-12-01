#include <iostream>
#include "golf.h"
#include <string>

using std::cin;
using std::cout;
using std::endl;

void setgolf(golf & g, const char name[], int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf & gc){
    cout << "Enter full name: ";
    cin >> gc.fullname;
    cout << "Enter handicap: ";
    cin >> gc.handicap;
    if(strncmp(gc.fullname, "", 1) == 0)
        return 0;
    else 
        return 1;
    return 2;
}
void handicap(golf & g, int hc){
    g.handicap = hc;
}
void showgolf(const golf & g){
    cout << "Full name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}