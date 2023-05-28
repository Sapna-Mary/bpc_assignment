//Program to check whether a given name is valid or invalid based on a condition
#include <stdio.h>
#include <string.h>

int isValidName(const char *name)
{
    int length = strlen(name);
    
    if (length >= 3)
    {
        return 1; // Name is valid
    }
    
    return 0; // Name is invalid
}

int main()
{
    char name[100];
    
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove the trailing newline character
    if (name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }
    
    if (isValidName(name))
    {
        printf("The name '%s' is valid.\n", name);
    }
    else
    {
        printf("The name '%s' is invalid.\n", name);
    }
    
    return 0;
}