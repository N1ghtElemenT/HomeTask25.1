#pragma once
#include <iostream>

class Fraction
{
private:
    int numerator;
    int denominator;

    void reduce();
public:
    Fraction();
    Fraction(int num, int denom);

    void input(std::istream& in = std::cin);
    void output(std::ostream& out = std::cout) const;

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
};

