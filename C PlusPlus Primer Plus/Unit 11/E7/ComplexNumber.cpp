#include <iostream>
#include "ComplexNumber.h"

std::ostream & operator<<(std::ostream & os, const ComplexNumber & c){
    os << "(" << c.real << "," << c.imaginary << ")" << std::endl;
    return os;
}

/*std::istream & operator>>(std::istream & is, const ComplexNumber & c){
    is >> c.real >> c.imaginary;
    return is;
}*/

bool ComplexNumber::operator>>(const ComplexNumber & c){
    std::cout << "real: ";
    if(std::cin >> c.real)
        return false;
    std::cout << "imaginary: ";
    std::cin >> c.imaginary;
    return true;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber & c) const{
    ComplexNumber result;
    result.real = real + c.real;
    result.imaginary = imaginary + c.imaginary;
    return result;
}
ComplexNumber ComplexNumber::operator-(const ComplexNumber & c) const{
    ComplexNumber result;
    result.real = real - c.real;
    result.imaginary = imaginary - c.imaginary;
    return result;
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber & c) const{
    ComplexNumber result;
    result.real = real * c.real - imaginary * c.imaginary;
    result.imaginary = real * c.imaginary + imaginary * c.real;
    return result;
}
ComplexNumber ComplexNumber::operator*(const double n) const{
    ComplexNumber result;
    result.real = n * real;
    result.imaginary = n * imaginary;
    return result;
}
ComplexNumber ComplexNumber::operator~() const{
    ComplexNumber result;
    result.real = real;
    result.imaginary = - imaginary;
}