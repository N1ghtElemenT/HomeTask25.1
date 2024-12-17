#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction fraction1, fraction2;

    std::cout << "Enter the first fraction:\n";
    fraction1.input();

    std::cout << "Enter the second fraction:\n";
    fraction2.input();

    std::cout << "Results:\n";

    Fraction sum = fraction1 + fraction2;
    std::cout << "Sum: ";
    sum.output();
    std::cout << "\n";

    Fraction difference = fraction1 - fraction2;
    std::cout << "Subtract: ";
    difference.output();
    std::cout << "\n";

    Fraction product = fraction1 * fraction2;
    std::cout << "Multiply: ";
    product.output();
    std::cout << "\n";

    Fraction quotient = fraction1 / fraction2;
    std::cout << "Divide: ";
    quotient.output();
    std::cout << "\n";

    return 0;
}