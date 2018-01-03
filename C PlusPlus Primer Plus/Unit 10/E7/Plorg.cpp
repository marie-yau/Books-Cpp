#include "Plorg.h"
#include <string>
#include <iostream>

Plorg::Plorg() {
    strcpy(name, "Plorga");
    ci = 50;
}

void Plorg::setCi(int c){
    ci = c;
}

void Plorg::showPlorg(){
    std::cout << name << ": " << ci << std::endl;
}