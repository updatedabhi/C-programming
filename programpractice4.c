#include <stdio.h>
#include <stdlib.h>

// binary conversion

int main()
{

    /*
    int num = 0, bit = 0;
    printf("Enter Decimal No. :");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0");
        exit(0);
    }
    printf("Binary equivalent: \n");
    while (num != 0)
    {
        bit = num % 2;
        printf("%d\n", bit);
        num = num / 2;
    }


    int a = 0, b = 1, c = 0, max = 0;
    printf("Enter the max: ");
    scanf("%d", &max);
    printf("Fabonacci series: 0 1");
    c = a + b;
    while (c <= max)
    {
        printf(" %d", c);
        a = b;
        b = c;
        c = a + b;
    }

    */

    system("cls");

    int num = 0, rev = 0, rem, temp;
    printf("Enter the num: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("%d", rev);
    if (temp == rev)
    {
        printf("\n%d is palindrom", rev);
    }
    else
    {
        printf("\nNot palindrom");
    }

    return 0;
}