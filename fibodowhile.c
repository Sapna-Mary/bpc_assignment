//Program to generate fibonacci series using do while loop

#include <stdio.h>

int main()
{
    int limit;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &limit);
    
    int first = 0, second = 1, next;
    
    printf("Fibonacci series: ");
    
    printf("%d %d ", first, second); // Print the first two terms
    
    int count = 2; // Already printed 2 terms
    
    do {
        next = first + second;
        printf("%d ", next);
        
        first = second;
        second = next;
        
        count++;
    } while (count < limit);
    
    printf("\n");
    
    return 0;
}