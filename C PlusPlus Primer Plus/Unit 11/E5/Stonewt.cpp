#include "Stonewt.h"
#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::endl;
        
Stonewt::Stonewt(){
    stone = pounds = pds_left = 0;
}
    
Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt(double lbs){
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

Stonewt::~Stonewt(){
    
}

void Stonewt::setState(char s){
    if(s == 's'){
        cout << "State set to stone notation.\n";
        state = 's';
    }
    else if(s == 'p'){
        cout << "State set to pound notation.\n";
        state = 'p';
    }
    else{
        cout << "Invalid state.";
        state = 'i';
    }
}

Stonewt Stonewt::operator-(const Stonewt & t) const{
    Stonewt result;
    result.pounds = pounds - t.pounds;
    result.stone = result.pounds / Lbs_per_stn;
    result.pds_left = result.pounds - result.stone * Lbs_per_stn;
    return result;
}

Stonewt Stonewt::operator/(const Stonewt & t) const{
    Stonewt result;
    result.pounds = pounds / t.pounds;
    result.stone = result.pounds / Lbs_per_stn;
    result.pds_left = result.pounds - result.stone * Lbs_per_stn;
    return result;
}

Stonewt Stonewt::operator*(const Stonewt & t) const{
    Stonewt result;
    result.pounds = pounds * t.pounds;
    result.stone = result.pounds / Lbs_per_stn;
    result.pds_left = result.pounds - result.stone * Lbs_per_stn;
    return result;
}

Stonewt Stonewt::operator+(const Stonewt & t) const{
    Stonewt sum;
    sum.pds_left = pds_left + t.pds_left;
    sum.stone = stone + t.stone + sum.pds_left / Lbs_per_stn;
    sum.pounds = pounds + t.pounds;
    return sum;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s){
    if(s.state == 's')
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    else if(s.state == 'p')
        os << s.pounds << " pounds\n";
    else
        os << "Invalid state\n";
    return os; 
}