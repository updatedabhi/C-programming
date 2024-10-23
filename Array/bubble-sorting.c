#include <stdio.h>

int main()
{
    printf("\t\tC Programming| array sorting\n\n");
    int a[10], n, temp;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Plase entered array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;

        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = 1;
            }
            if (flag == 0)
            {
                break;
            }
        }
    }

    printf("Your sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}