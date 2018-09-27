#include "Stonewt.h"
Stonewt::Stonewt(double lbs){
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;    
}
Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;    
}
Stonewt::Stonewt(){
    stone = pounds = pds_left = 0;    
}
Stonewt::~Stonewt(){
    
}
bool Stonewt::operator<(const Stonewt & s) const{
    if(pounds < s.pounds)
        return true;
    else 
        return false;
}
bool Stonewt::operator>(const Stonewt & s) const{
    if(pounds > s.pounds)
        return true;
    else 
        return false;    
}
bool Stonewt::operator<=(const Stonewt & s) const{
    if(pounds <= s.pounds)
        return true;
    else 
        return false;    
}
bool Stonewt::operator>=(const Stonewt & s) const{
    if(pounds >= s.pounds)
        return true;
    else 
        return false;    
}
bool Stonewt::operator==(const Stonewt & s) const{
    if(pounds == s.pounds)
        return true;
    else 
        return false;    
}
bool Stonewt::operator!=(const Stonewt & s) const{
    if(pounds != s.pounds)
        return true;
    else 
        return false;    
}
std::ostream & operator<<(std::ostream & os, const Stonewt & s){
    os << s.pounds << " pounds\n";
    return os;     
}