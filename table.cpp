//Program to print the tables of 5

#include <iostream>

int main()
{
    int num = 5;

    std::cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << num << " x " << i << " = " << (num * i) << std::endl;
    }

    return 0;
}
