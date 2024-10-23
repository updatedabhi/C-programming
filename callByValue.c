#include <stdio.h>

// Call by reference
void value(int *a, int *b)
{
    *a = 68;
    *b = 99;
    printf("call by reference: a = %d b = %d\n", *a, *b);
}
int main(void)
{
    int a = 5, b = 7;
    printf("Before call by reference: a = %d b = %d\n", a, b);
    value(&a, &b);
    printf("After call by reference: a = %d b = %d", a, b);
    return 0;
}
/*
// Call by value
void value(int a, int b)
{
    a = 5;
    b = 7;
    printf("a = %d and b = %d\n", a, b);
}
int main()
{
    int a, b;
    a = 7;
    b = 5;
    printf("a = %d and b = %d\n", a, b);
    printf("Above is before function calling\n");
    value(a, b);
    printf("Below is after function calling\n");
    printf("a = %d and b = %d\n", a, b);
    return 0;
}
*/