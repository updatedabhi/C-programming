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
    int item, p;
    printf("Enter the itme\n");
    scanf("%d", &item);
    printf("Enter the position\n");
    scanf("%d", &p);
    for (int i = (n - 1); i >= (p - 1); i--)
    {
        a[i + 1] = a[i];
    }
    a[p - 1] = item;
    n = n + 1;
    printf("Your elements after insertion:\n");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]");

    return 0;
}