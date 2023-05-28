//Program to perform multiplication of two float numbers

#include <stdio.h>

int main()
{
    float num1, num2, product;

    printf("Enter the first float value: ");
    scanf("%f", &num1);

    printf("Enter the second float value: ");
    scanf("%f", &num2);

    product = num1 * num2;

    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);

    return 0;
}
