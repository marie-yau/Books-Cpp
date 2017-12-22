#include "Person.h"
#include <iostream>
#include <string>

Person::Person(const std::string& ln, const char* fn){
    lname = ln;
    strcpy(fname, fn);
}
void Person::Show() const{
    std::cout << lname << " - " << fname << std::endl;
}
void Person::FormalShow() const{
    std::cout << "Last name: " << lname << "   First name: " << fname << std::endl;
}