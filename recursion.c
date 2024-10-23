#include <stdio.h>
#include <stdlib.h>
int natural(int n);
int main()
{
    int n;
    printf("Enter number\n");
    scanf("%d", &n);
    printf("= %d", natural(n));
    return 0;
}

int natural(int n)
{
    printf("%d * ", n);
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * natural(n - 1);
    }
}