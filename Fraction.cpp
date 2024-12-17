#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction() : numerator(0), denominator(1) 
{

}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom)
{
    if (denominator == 0) 
    {
        std::cout << "Denominator cannot be 0.\n";
        denominator = 1;
    }
    reduce();
}

void Fraction::reduce() 
{
    int a = numerator;
    int b = denominator;
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    numerator /= a;
    denominator /= a;
}

void Fraction::input(std::istream& in) 
{
    std::cout << "Enter numerator: ";
    in >> numerator;
    std::cout << "Enter denominator: ";
    in >> denominator;
    if (denominator == 0) 
    {
        std::cout << "Denominator cannot be 0.\n";
        denominator = 1;
    }
    reduce();
}

void Fraction::output(std::ostream& out) const 
{
    out << numerator << "/" << denominator;
}

Fraction Fraction::operator+(const Fraction& other) const 
{
    Fraction result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

Fraction Fraction::operator-(const Fraction& other) const 
{
    Fraction result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

Fraction Fraction::operator*(const Fraction& other) const 
{
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

Fraction Fraction::operator/(const Fraction& other) const 
{
    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    if (result.denominator == 0) 
    {
        std::cout << "Division by 0.\n";
        result.denominator = 1;
    }
    result.reduce();
    return result;
}
