#include "Vector.h"
#include <cmath>
#include <iostream>
#include <fstream>
using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR{
    const double Rad_to_deg = 57.29577;
    
    void Vector::set_x(double mag, double ang){
        x = mag * cos(ang);
    }
    
    void Vector::set_y(double mag, double ang){
        y = mag * sin(ang);
    }
    
    Vector::Vector(){
        x = y = 0.0;
        mode = 'r';
    }
    
    Vector::Vector(double n1, double n2, char form){
        mode = form;
        if(form == 'r'){
            x = n1;
            y = n2;
        }
        else if(form == 'p'){
            double mag = n1;
            double ang = n2 / Rad_to_deg;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else{
            cout << "Incorrect 3rd argument to Vector()...";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = 'r';
        }
    }

    double Vector::magval() const{
        double mag = sqrt(x * x + y * y);
        return mag;
    }
    
    double Vector::angval() const{
        double ang;
        if(x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y,x);
        return ang;
    }    
    
    void Vector::set(double n1, double n2, char form){
        mode = form;
        if(form == 'r'){
            x = n1;
            y = n2;
        }
        else if(form == 'p'){
            double mag = n1;
            double ang = n2 / Rad_to_deg;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else{
            cout << "Incorrect 3rd argument to Vector()...";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = 'r';
        }
    }
    
    Vector::~Vector(){
        
    }
    
    void Vector::polar_mode(){
        mode = 'p';
    }
    
    void Vector::rect_mode(){
        mode = 'r';
    }
    
    Vector Vector::operator+(const Vector & b) const{
        return Vector(x + b.x, y + b.y);
    }
    
    Vector Vector::operator-(const Vector &b) const{
        return Vector(x - b.x, y - b.y);
    }
    
    Vector Vector::operator-() const{
        return Vector(-x, -y);
    }
    
    Vector Vector::operator*(double n) const{
        return Vector(n * x, n * y);
    }
    
    Vector operator*(double n, const Vector &a){
        return a * n;
    }
    
    std::ostream & operator<<(std::ostream & os, const Vector & v){
        if(v.mode == 'r')
            os << "(x,y) = (" << v.x << "," << v.y << ")";
        else if(v.mode == 'p')
            os << "(m,a) = (" << v.magval() << "," << v.angval() * Rad_to_deg << ")";
        else
            os << "Vector object mode is invalid";
        return os;
    }
}    
    