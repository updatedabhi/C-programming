#include<stdio.h>

int main(){
    int array[40], size, i;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    printf("Enter the %d elements of array: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Your entered elements are: \n");
    printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");

    int p, i_num;
    printf("\nEnter the position of to be inserted element: \n");
    scanf("%d", &p);
    printf("Enter the number: \n");
    scanf("%d", &i_num);
    for (i = (size -1); i >= (p - 1); i--)
    {
        array[i + 1] = array[i];
    }
    array[p - 1] = i_num;
    size++;
    printf("After inseration your array's elements are: \n");
    printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");

    return 0;
}