//Program to generate fibonacci series using while loop

#include <stdio.h>

int main()
{
    int n, num1 = 0, num2 = 1, nextNum;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: %d, %d, ", num1, num2);
    
    int i = 2;
    while (i < n)
    {
        nextNum = num1 + num2;
        printf("%d, ", nextNum);
        
        num1 = num2;
        num2 = nextNum;
        
        i++;
    }
    
    printf("\n");
    
    return 0;
}