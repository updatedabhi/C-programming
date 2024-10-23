#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, n;
    printf("Enter the size of values: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\nEnter the size for resizing: ");
    scanf("%d", &n);
    int *ptr1 = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr1 + i));
    }
    printf("\nYour entered values after resizing:\n");
     for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n%d %d", &ptr, &ptr1);
    free(ptr1);
    
    return 0;
}