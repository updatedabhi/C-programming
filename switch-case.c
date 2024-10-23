#include<stdio.h>

int main(){
    int n1, n2, result;
    char operator;
    printf("Enter your first number\n");
    scanf("%d", &n1);
    printf("Choose your Calculator operator\n");
    scanf(" %c", &operator);
    printf("Enter your second number\n");
    scanf("%d", &n2);
    switch (operator)
    {
    case '+':
        result = n1 + n2;
        printf("sum of %d and %d = %d\n", n1, n2, result);
        break;

    case '-':
        result = n1 - n2;
        printf("Subtract of %d and %d = %d\n", n1, n2, result);
        break;
    
    case '*':
        result = n1 * n2;
        printf("Multiple of %d and %d = %d\n", n1, n2, result);
        break;

    case '/':
        result = n1 / n2;
        printf("Division of %d and %d = %d\n", n1, n2, result);
        break;

    default:
        printf("Invalid input");
        break;
    }
    return 0;
}