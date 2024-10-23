#include <stdio.h>

int main()
{
    int a = 3, b = 5;
    float num = 7.8;
    char symbol = '&';
    char letter = 'a';
    printf("The value of integer is %d", a);
    printf("\n");
    printf("The value of float is %f\n", num);
    printf("The value of character is %c\n", symbol);
    printf("Sum of two interger is %d\n", a + b);

    // Addition of two numbers in c-programming

    int num1, num2, sum;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Addition of two numbers is %d", sum);
}