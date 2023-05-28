//Program to print the area of a triangle

#include <iostream>

int main()
{
    double base, height;
    
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    
    double area = 0.5 * base * height;
    
    std::cout << "The area of the triangle is: " << area << std::endl;
    
    return 0;
}
