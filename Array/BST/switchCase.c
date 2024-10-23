#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, r, sum, o;
    printf("Enter first no: ");
    scanf("%d", &n1);
    printf("Enter second no: ");
    scanf("%d", &n2);
    printf("Enter Operation: ");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        sum = n1 + n1;
        printf("resutl: %d", sum);
        break;
    case 2:
        r = n1 - n1;
        printf("resutl: %d", r);
        break;
    case 3:
        r = n1 * n1;
        printf("resutl: %d", r);
        break;
    case 4:
        r = n1 / n1;
        printf("resutl: %d", r);
        break;
    case 5:
        exit(0);
        break;

    default:
        printf("Invalid input");
        break;
    }
    return 0;
}