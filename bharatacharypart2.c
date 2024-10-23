#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

printf("Hello World\n\n");
    int num = 0, sum = 0;
    printf("Enter No: ");
    scanf("%d", &num);
    while (num <= 20)
    {
        if (num % 2 == 0)
        {
            sum = sum + num;
            printf("Result: for %d, %d\n", num, sum);
        }
        num++;
    }
    printf("\nKya bhai kya kar rhe ho number less than 20 dalo");


    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("square = %d", num * num);
    while (num != 0)
    {
        printf("\nEnter another number(0 for exit): ");
        scanf("%d", &num);
        if (num != 0)
            printf("square = %d", num * num);
    }



    printf("Enter No: ");
    scanf("%d");
    printf("Choose operation: ");
    scanf("%c ", &o);
    printf("Enter No: ");
    scanf("%d", &num2);
    if (o == '+')
    {
        printf("(%d)", num1 + num2);
    }
    */

    int num1, num2, r, repeat = 1;
    char o;

    while (repeat != 0)
    {
        system("cls");
        printf("Enter num: ");
        scanf("%d", &num1);
        printf("Enter operator: ");
        scanf(" %c", &o);
        printf("Enter num: ");
        scanf("%d", &num2);
        switch (o)
        {
        case '+':
            r = num1 + num2;
            break;
        case '-':
            r = num1 - num2;
            break;
        case '*':
            r = num1 * num2;
            break;
        case '/':
            r = num1 / num2;
            break;
        case 'x':
            exit(0);
            break;

        default:
            printf("Mujhe bakchodi pasand nhi h");
            exit(0);
            break;
        }

        printf("Press '=' button: ");
        scanf(" %c", &o);
        if (o == '=')
        {
            printf("Result = %d", r);
        }
        printf("\nPress 1 for repeat or 0 for exit: ");
        scanf("%d", &repeat);
    }

    return 0;
}