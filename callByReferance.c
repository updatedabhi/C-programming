#include <stdio.h>
void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("after swap %d and %d", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("%d and %d\n", *a, *b);
}