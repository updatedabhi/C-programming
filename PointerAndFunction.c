#include <stdio.h>
#include <stdlib.h>

/*
void change(void)
{
    int a = 5;
    printf("%d\n", a);
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

void sum(void)
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    c = a + b;
    printf("%d\n", c);
}
*/

int main(void)
{
    /*
    int a = 4;
    printf("value befoer change = %d\n", a);
    change();
    printf("The value of a afer change = %d", a);

    int x, y;
    printf("Enter No.1: ");
    scanf("%d", &x);
    printf("Enter No.2: ");
    scanf("%d", &y);
    int c = sum(x, y);
    printf("Sum = %d", c);

    // Function
    printf("\n");
    printf("What is a Function?\n");
    printf("Function is a set of prgoram\n");
    printf("\n");
    int key;
    printf("Press 1 for sum\nPress 2 for exit program\n");
    while (1)
    {
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            sum();
            break;
        case 2:
            return 0;
            break;

        default:
            break;
        }
    }

    // Null pointer
    int *ptr = NULL;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("%d", ptr);
    // void pointer
    int a = 5, x = 7;
    char c = 'a';
    void *ptr;
    ptr = &a;
    printf("%d\n", *(int *)ptr);
    printf("%d\n", ptr);
    ptr = &x;
    printf("%d\n", ptr);
    ptr = &c;
    printf("%d\n", ptr);
    printf("%c", *(char *)ptr);

    char str[] = "Abhishek is good boy";
    char *ptr;
    ptr = str;
    printf("%c\n", *ptr + 4);
    printf("%c\n", *(ptr++ + 1));
    printf("%c\n", *(++ptr + 1));
    printf("%c\n", *((ptr-- + 5) - 1) + 3);
    int age;
    int *p;
    printf("Enter age: ");
    scanf("%d", &age);
    p = &age;
    if (*p > 19)
    {
        printf("Hello and Welcome to my world");
    }
    else
    {
        printf("Go back to me");
    }
    */
    return 0;
}