#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber {
public:
    ComplexNumber();
    ComplexNumber operator+(const ComplexNumber & c) const;
    ComplexNumber operator-(const ComplexNumber & c) const;
    ComplexNumber operator*(const ComplexNumber & c) const;
    ComplexNumber operator*(const double n) const;
    ComplexNumber operator~() const;
    friend ComplexNumber operator*(double n, ComplexNumber & c)
        {return c * n;}
    friend std::ostream & operator<<(std::ostream & os, const ComplexNumber & c);
    //friend std::istream & operator>>(std::istream & is, const ComplexNumber & c);
    bool operator>>(const ComplexNumber & c);
private:
    double real;
    double imaginary;
};

#endif /* COMPLEXNUMBER_H */

