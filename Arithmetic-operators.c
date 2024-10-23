#include<stdio.h>

/*Operators: Operators are pre-defined instruction which are used to perform the operation
on operands(data)*/
int main(){
    // Arithmetic Operators:
    int a = 8, b = 4, y;
    // y = a * b; (Multiplication)
    // y = a / b; (Division)
    // y = a - b; (Subtraction)
    // y = a + b; (Addition)
    // y = a % b; (Mudualor Division)
    // printf("The output is: %d", y);
    printf("If we divide 5 by 3 it will give the remainder of %d\n", 5 % 3);
    int n = 2.1;
    // printf("%d", n);
    float n1 = 2.4;
    // printf("%f", n1);
    int add;
    add = n1 + n;
    // printf("%d", add);
    float sum;
    sum = n + n1;
    // printf("%f", sum);

    /* Manipulation of arithmetic operators accroding to his priority: */
    // 1. *, /, %
    // 2. +, -
    // 3. =
    int firstnum = 12, secondnum = 3, result;
    // result = firstnum + secondnum * firstnum;
    result = (firstnum + secondnum) * firstnum;
    // printf("result is %d", result);
    // Take a Quiz
    // int x; v = x; //Invalid case
    int x = 2;
    float v = x;
    // printf("%g", v);
    int g = 3 ^ 3;
    // printf("%d", g);
    char xy = '1';
    // printf("%c", xy);
    float yz;
    yz = 3.8/2 - 1;
    // printf("%f", yz);

    /* if a number is divided by any number then the modulor
    division will be zero */
    int gn, check;
    printf("Enter the number\n");
    scanf("%d", &gn);
    check = gn % 97;
    printf("%d", check);
    return 0;
}