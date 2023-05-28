//Program to print the square root of a number without using math.h

#include <stdio.h>

float squareRoot(float n)
{
    float x = n;
    float y = 1;
    float precision = 0.00001;
    
    while (x - y > precision)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    
    return x;
}

int main()
{
    float num;
    
    printf("Enter a number: ");
    scanf("%f", &num);
    
    if (num < 0)
    {
        printf("Square root of a negative number is undefined.\n");
    }
    else
    {
        float sqrt = squareRoot(num);
        printf("Square root of %.2f is %.2f\n", num, sqrt);
    }
    
    return 0;
}