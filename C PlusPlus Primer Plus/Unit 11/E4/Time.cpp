#include "Time.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m){
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}    

void Time::AddHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}

Time operator+(const Time & t1, const Time & t2){
    Time result;
    result.minutes = t1.minutes + t2.minutes;
    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes %= 60;
    return result;
}

Time operator-(const Time & t1, const Time & t2){
    Time result;
    if(t1.minutes >= t2.minutes){
        result.minutes = t1.minutes - t2.minutes;
        result.hours = t1.hours - t2.hours;
    }
    else{
        if(t1.hours > t2.hours){
            result.minutes = t1.minutes + 60 - t2.minutes;
            result.hours = t1.hours - 1 - t2.hours;
        }  
        else if(t1.hours == t2.hours){
            result.hours = 0;
            result.minutes = t1.minutes - t2.minutes;
        }
        else{
            result.minutes = - t1.minutes - 60 + t2.minutes;
            result.hours = - t1.hours + 1 + t2.hours;
        }    
    }
    return result;
}

Time operator*(const Time & t, double m){
    Time result;
    int minutes = (60 * t.hours + t.minutes) * m;
    result.minutes = minutes % 60;
    result.hours = minutes / 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t){
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}