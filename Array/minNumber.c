#include <stdio.h>

int main()
{
    int a[10], n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[0] > a[i])
        {
            a[0] = a[i];
        }
    }
    printf("%d is smallest number", a[0]);

    return 0;
}