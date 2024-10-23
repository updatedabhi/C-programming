#include<stdio.h>

int main(){
    int a[10], n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int p, item;
    printf("Enter the position of item which you want to delete\n");
    scanf("%d", &p);
    item = a[p - 1];
    for (int i = p - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("Your array after deletion\n");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
    printf("Item %d is deleted", item);
    
    
    return 0;
}