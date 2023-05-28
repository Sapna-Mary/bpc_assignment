//Program to generate numbers divisible by 2 and divisible by 3, but if the number is divisible by both 2 and 3, print the message "pass"

#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Numbers divisible by 2 and 3, with 'pass' if divisible by both:\n");
    for (int num = start; num <= end; num++)
    {
        if (num % 2 == 0 && num % 3 == 0)
        {
            printf("pass\n");
        }
        else if (num % 2 == 0)
        {
            printf("%d (divisible by 2)\n", num);
        }
        else if (num % 3 == 0)
        {
            printf("%d (divisible by 3)\n", num);
        }
    }

    return 0;
}
