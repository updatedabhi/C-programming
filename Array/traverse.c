#include<stdio.h>

int main(){
    int n, a[10];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Your entered elements are:\n");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]");
    
    
    return 0;
}