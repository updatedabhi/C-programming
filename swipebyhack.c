#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;
    printf("Enter first number\n");
    scanf("%d", &firstNumber);
    printf("Enter second number\n");
    scanf("%d", &secondNumber);
    printf("Your swipe value %d%d", secondNumber, firstNumber);
    return 0;
}