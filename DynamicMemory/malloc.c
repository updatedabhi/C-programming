#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;
    printf("Enter the no of values: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(n));
    printf("Enter %d values: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Entered values:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    return 0;
}