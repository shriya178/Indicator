#include <stdio.h>

int length(char *str)
{
    int count = 0;

    while (*str)
    {
        count++;
        str++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);

    printf("The length of a string is: %d", length(str));

    return 0;
}