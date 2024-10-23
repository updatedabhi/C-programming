#include <stdio.h>

int main()
{
    // this process is called traveral of array
    int n[10], i;
    printf("Enter the Elements of the Array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("[");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", n[i]);
    }
    printf("]");
    return 0;
}