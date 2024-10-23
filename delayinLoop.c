#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int j = 15; j >= 0; j--)
    {
        for (int i = 0; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}