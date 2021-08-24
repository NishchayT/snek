#include <stdio.h>
#include "functions.c"

int main()
{

    char appName[] = "Snake";

    for (int i = 0; i < 20; i++)
    {
        printf("=");
    }

    
    printf("\nSnake\n");

    padString(4, "Snake");

    return 0;
}

char *padString(char *str, int len)
{
    size_t stringLength = sizeof(str)/sizeof(str[0]);

    printf("Got string \"%s\" with length %d", str, stringLength);
}