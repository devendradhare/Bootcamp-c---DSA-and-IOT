// 1. Define a function to input variable length string and store it in an array withoutmemory wastage
#include <stdio.h>
#include <string.h>
int main()
{
    char *str, n, i = 0;
    str = (char *)malloc(sizeof(char) + 1);
    printf("\n\nEnter your name : ");
    n = getc(stdin);
    while (n != '\n')
    {
        str[i] = n;
        str = (char *)realloc(str, i * sizeof(char) + 1);
        n = getc(stdin);
        i++;
    }
    str[i] = '\0';
    printf("\n\nyou entered = %s\nlength = %d\n\n", str, strlen(str));

    return 0;
}