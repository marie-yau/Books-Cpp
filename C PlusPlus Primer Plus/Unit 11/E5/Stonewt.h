#ifndef STONEWT_H
#define STONEWT_H
#include <iostream>

class Stonewt {
public:
    Stonewt();
    Stonewt(int stn, double lbs);
    Stonewt(double lbs);
    ~Stonewt();
    void setState(char s);
    Stonewt operator+(const Stonewt & t) const;
    Stonewt operator-(const Stonewt & t) const;
    Stonewt operator/(const Stonewt & t) const;
    Stonewt operator*(const Stonewt & t) const;
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    char state = 's';
};

#endif 