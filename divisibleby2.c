//Program to check if a number is divisible by 2

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is divisible by 2.\n", number);
    }
    else
    {
        printf("%d is not divisible by 2.\n", number);
    }

    return 0;
}
