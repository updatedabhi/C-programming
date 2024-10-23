#include<stdio.h>

int main(){
    int array[40], size, i;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    printf("Enter the elements of array: \n");
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
    int j, temp;
    for (i = 1; i < (size - 1); i++)
    {
        for (j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        printf("\n");
        printf("your array after bubble sorting: \n");
        printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");
    }
    
    return 0;
}