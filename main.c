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

