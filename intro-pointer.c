#include <stdio.h>

int main()
{
    int a = 5, *ptr, **p;
    ptr = &a;
    p = &ptr;
    printf("%d\n", a); //5
    printf("%d\n", &a); //Address of a
    printf("%u\n", ptr); //Address of a
    printf("%u\n", *ptr); //5
    printf("%d\n", &ptr); //Address of pointer ptr

    printf("%u\n", p); //Address of pointer ptr
    printf("%u\n", *p); //Address of a
    printf("%u\n", **p); //5
    printf("%d\n", &p); //Address of pointer p
    // arithmetic operations with pointer:
    // 2.Address - Address = Number
    // int *ptr;
    // printf("%u\n", &ptr);
    // int *p;
    // printf("%u\n", &p);
    // p = ptr;
    // printf("%u", p);
    // ptr = ptr + 6;
    // printf("%u\n%u\n", ptr, p);
    // printf("%d", ptr - p);
    // 1.Address + Number = Address

    // VERY IMPORTAN POINT
    // int *p = NULL;
    // int *ptr = 0;
    // printf("%u\n", p);
    // printf("%u", ptr);

    // float *ptr;
    // printf("%u\n", ptr);
    // ptr = ptr + 3;
    // printf("%u", ptr);


    // int *ptr;
    // printf("%u\n", ptr);
    // ptr = ptr + 1;
    // printf("%u", ptr);

    // int n;
    // printf("Enter number ");
    // scanf("%d", &n);
    // int *ptr;
    // printf("%u\n", ptr);
    // ptr = ptr + n;
    // printf("%u\n", ptr);
    // int *p;
    // p = ptr + n;
    // printf("%u", p);

    // int n, value;
    // int *ptr;
    // ptr = &n;
    // printf("%u\n", ptr);
    // // *ptr = value;
    // // printf("%d", value);
    // printf("%u", *ptr);
    // return 0;
}