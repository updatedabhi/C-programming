#include <stdio.h>
struct student
{
    int a;
    float f;
    char m;
} s1, s2, s3;

int main()
{
    printf("The size of structure %d\n", sizeof(s1));
    printf("A: %d\nF: %f\nM: %c\n ", s1.a, s1.f, s1.m);
    return 0;
}