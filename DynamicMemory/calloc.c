#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr;
    printf("Enter the number of blocks ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(n));
    printf("\nEnter the values:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("Your entered elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
     
    return 0;
}