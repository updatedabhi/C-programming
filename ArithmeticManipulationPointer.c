#include <stdio.h>

int main()
{
    printf("For integer\n");
    int i = 3;
    int *a = &i;
    printf("%u\n", a);
    a++;
    printf("%u\n", a);

    printf("For float\n");
    float f = 8.3;
    float *b = &f;
    printf("%u\n", b);
    b++;
    printf("%u\n", b);

    printf("For Chaacter\n");
    char c = 'a';
    char *p = &c;
    printf("%u\n", p);
    p++;
    printf("%u\n", p);


    // pointr arthmetic manipulation
    // int i = 7;
    // int *ptr;
    // ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // printf("The value of ptr is %d\n", *ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);
    // printf("The value of ptr is %d\n", *ptr);
    return 0;
}