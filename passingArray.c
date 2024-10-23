#include <stdio.h>
int result(int a[23])
{
    int c, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    c = (sum / 5);
    return c;
}

int main()
{
    printf("array passing as an argument\n\n");
    int a[34];
    printf("Enter Your marks\n");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &a[j]);
    }
    printf("sceince\tMath  Sanskrit Hindi\tSocial\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", a[j]);
    }

    int r = result(a);
    printf("\nYou got %d percentage", r);

    printf("\n");
    return 0;
}