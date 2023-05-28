//Program to print the power of a number without using math.h

#include <iostream>

double power(double base, int exponent)
{
    double result = 1.0;

    if (exponent > 0)
    {
        for (int i = 0; i < exponent; ++i)
        {
            result *= base;
        }
    }
    else if (exponent < 0)
    {
        for (int i = 0; i > exponent; --i)
        {
            result /= base;
        }
    }

    return result;
}

int main()
{
    double base;
    int exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    double result = power(base, exponent);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}
