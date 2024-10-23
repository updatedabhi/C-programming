#include <stdio.h>

int main()
{
    int i = 0, r = 3, j;
    char character = 'A';
    while (i < r)
    {
        while (j <= i)
        {
            printf("%c ", character);
            j++;
            character++;
        }
        printf("\n");
        j = 1;
        i++;
    }

    return 0;
}