#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *p;
    printf("Enter the size of value: ");
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    printf("\nEnter the resizing value: ");
    scanf("%d", &n);
    int *ptr = (int*)realloc(p, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("Your entered values: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);
    printf("\nEnter the calloc values: \n");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    
    
    return 0;
}