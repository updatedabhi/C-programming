#include <stdio.h>

int main()
{
    int a[34] = {4, 8, 2, 1, 9}, item, flag = 0;
    printf("Enter the item which you want to delete: ");
    scanf("%d", &item);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == item)
        {
            printf("Your item is %d position", i + 1);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("item is not found\n");
    }

    return 0;
}
/*#include<stdio.h>

int main(){
    int a[10], n;
    printf("Enter the size\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int p, item;
    printf("Enter the position\n");
    scanf("%d", &p);
    printf("Enter the item which you want to insert\n");
    scanf("%d", &item);
    for (int i = n - 1; i >= p - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[p - 1] = item;
    n = n + 1;
    printf("Your array after inserted\n");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]");

    return 0;
}
*/