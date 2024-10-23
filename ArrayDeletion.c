#include <stdio.h>

int main()
{
    int array[40], size, n, p;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the position of element which you want to delete");
    scanf("%d", &p);
    for (int i = (p - 1); i < (size - 1); i++)
    {
        array[i + 1] = array[i];
    }
    printf("Now your rest of elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}