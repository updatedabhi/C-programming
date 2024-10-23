#include <stdio.h>
int *returnPointer(int[]);

int main()
{
    int *p, a[34] = {67, 79, 34, 90};
    p = returnPointer(a);
    printf("%d", *p);
    return 0;
}

int *returnPointer(int a[34])
{
    int s;
    for (int i = 0; i < 4; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    return a[0];
}