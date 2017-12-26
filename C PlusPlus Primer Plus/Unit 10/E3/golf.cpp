#include "golf.h"
#include <iostream>
#include <string>

golf::golf(){
    strcpy(g.fullname, "Empty");
    g.handicap = 0;
}
golf::golf(const char *name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}
void golf::setgolf(){
    char n[40];
    int h;
    
    std::cout << "Name: ";
    std::cin >> n;
    std::cout << "Handicap: ";
    std::cin >> h;
    
    golf temp = golf(n, h);
    *this = temp;
}
void golf::handicap(int hc){
    g.handicap = hc;
}
void golf::showgolf(){
    std::cout << g.fullname << ": " << g.handicap << std::endl;
}
