#include<stdio.h>

int main(){
    int i, n, A[20], p, valueI;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the element of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter position for insertion\n");
    scanf("%d", &p);
    printf("Enter the value\n");
    scanf("%d", &valueI);
    for (i = n - 1; i >= p - 1; i--)
    {
        A[i + 1] = A[i];
        
    }
    A[p - 1] = valueI;
    n++;
    printf("Your Elements after isertion\n");
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("]");
    
    return 0;
}