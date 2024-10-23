#include <stdio.h>

int main()
{
    int i, item, n, array[45];
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nYour entered elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter the item which you want to search\n");
    scanf("%d", &item);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == item)
        {
            printf("your item is at %d position\n", (i + 1));
            break;
        }
    }

    return 0;
}