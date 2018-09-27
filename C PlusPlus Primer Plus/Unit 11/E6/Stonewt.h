#ifndef STONEWT_H
#define STONEWT_H

#include <iostream>


class Stonewt {
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    // <, >, <=, >=, ==, !
    bool operator<(const Stonewt & s) const;
    bool operator>(const Stonewt & s) const;
    bool operator<=(const Stonewt & s) const;
    bool operator>=(const Stonewt & s) const;
    bool operator==(const Stonewt & s) const;
    bool operator!=(const Stonewt & s) const;
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
private:
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
};

#endif /* STONEWT_H */

