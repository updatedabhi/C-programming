#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter no1: ");
    scanf("%d", &n1);
    printf("Enter no2: ");
    scanf("%d", &n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("%d%d", n1, n2);
    return 0;
}