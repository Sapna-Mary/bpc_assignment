//Program to generate prime numbers between 1 to 30 using while loop

#include <stdio.h>

int isPrime(int number)
{
    if (number <= 1)
    {
        return 0; // Not prime
    }
    
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0; // Not prime
        }
    }
    
    return 1; // Prime
}

int main()
{
    int start = 1;
    int end = 30;
    
    printf("Prime numbers between %d and %d are: ", start, end);
    
    while (start <= end)
    {
        if (isPrime(start))
        {
            printf("%d ", start);
        }
        start++;
    }
    
    printf("\n");
    
    return 0;
}
