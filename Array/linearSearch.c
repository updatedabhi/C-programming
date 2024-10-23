#include <stdio.h>

int main()
{
    int a[10], n, item, flag = 0;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the item which you want to search\n");
    scanf("%d", &item);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            printf("%d is at %d position", item, i + 1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is not found", item);
    }

    return 0;
}