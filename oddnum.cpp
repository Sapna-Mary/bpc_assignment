//Program to generate odd numbers without using for loop

#include <iostream>

void generateOddNumbers(int n)
{
    if (n >= 1)
    {
        generateOddNumbers(n - 1);
        if (n % 2 != 0)
        {
            std::cout << n << " ";
        }
    }
}

int main()
{
    int count;

    std::cout << "Enter the count of odd numbers: ";
    std::cin >> count;

    std::cout << "Odd numbers: ";
    generateOddNumbers(count);

    return 0;
}
