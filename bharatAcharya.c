#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    system("clear");
    printf("\n");
    printf("|Switch-Case\n");
    printf("\nBy BharatAcharya:\n");
    printf("______________________\n\n");
    int n1, n2, r, sum, o;
    printf("Enter first no: ");
    scanf("%d", &n1);
    printf("Enter second no: ");
    scanf("%d", &n2);
    printf("Enter Operation: ");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        sum = n1 + n1;
        printf("resutl: %d", sum);
        break;
    case 2:
        r = n1 - n1;
        printf("resutl: %d", r);
        break;
    case 3:
        r = n1 * n1;
        printf("resutl: %d", r);
        break;
    case 4:
        r = n1 / n1;
        printf("resutl: %d", r);
        break;
    case 5:
        exit(0);
        break;

    default:
        printf("Invalid input");
        break;
    }

    /*
    int a, b, result, key;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Menu Options...\n");
    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Multiply\n");
    printf("4: Divide\n");
    printf("5: Exit\n");
    printf("Choose Your Option: ");
    scanf("%d", &key);
    if (key == 1)
    {
        result = a + b;
        printf("a + b = %d", result);
    }
    else if (key == 2)
    {
        result = a - b;
        printf("a - b = %d", result);
    }
    else if (key == 3)
    {
        result = a * b;
        printf("a * b = %d", result);
    }
    else if (key == 4)
    {
        result = a / b;
        printf("a / b = %d", result);
    }
    else if (key == 5)
    {
        printf("Thank you");
    }
    else
    {
        printf("Invalid Input");
    }

    // Check the year is leap year or not:
    ((a % 4 == 0 || a % 400 == 0) && a % 100 != 0) ? printf("Leap Year!") : printf("Not a Leap year!");

    (a > 0) ? printf("Positive") : (a < 0) ? printf("Negative")
                                           : printf("Zero");
    if (a > 0)
    {
        printf("Positive");
    }
    else if (a < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    // Ternary if statement:
    int max = (a > b) ? a : b;
    printf("%d is max", max);
    // (a % 2 == 0) ? printf("Even") : printf("Odd");

    if ((a > 100) && (a % 2 == 0))
    {
        printf("a>100 and even");
    }
    else if ((a < 100) && (a % 2 == 0))
    {
        printf("a<100 and even");
    }
    else if (a == 100)
    {
        printf("a = 100");
    }
    else
    {
        printf("a is odd");
    }

    printf("It returns %d", (a == b));

    if (a == b)
        printf("\na == b is true");
    if (a != b)
        printf("\na != b is true");
    if (a > b)
        printf("\na > b is true");
    if (a >= b)
        printf("\na >= b is true");
    if (a < b)
        printf("\na < b is true");
    if (a <= b)
        printf("\na <= b is true");

    if (a > b)
    {
        printf("'a' is BIGGER");
    }
    else if (a < b)
    {
        printf("'a' is SMALLER");
    }
    else
    {
        printf("They are EQUAL");
    }

    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is EVEN", a);
    }
    else
    {
        printf("%d is ODD", a);
    }


    float p, n, r, si, tds, final;
    printf("Enter Principal: \t| ");
    scanf("%f", &p);
    printf("Enter No of Years: \t| ");
    scanf("%f", &n);
    printf("Enter Rate of Int: \t| ");
    scanf("%f", &r);

    si = (p * n * r) / 100;
    tds = 0.1 * si;
    final = p + si - tds;

    printf("\nSimple Interest \t| %8.0f", si);
    printf("\nTDS ten of Interest: \t| %8.0f", tds);
    printf("\nInterest after Tax: \t| %8.0f", (si - tds));
    printf("\nMaturity Amount: \t| %8.0f", (p + si - tds));

    float r, d, c, a;
    const float pi = 3.142;
    printf("1.Circle Calculaltions\n\n");
    printf("Enter radius: ");
    scanf("%f", &r);

    d = 2 * r;
    c = 2 * pi * r;
    a = pi * r * r;

    printf("\nDiameter: %.2f", d);
    printf("\nCircumference: %.2f", c);
    printf("\nArea: %.2f", a);

    int marks, totalMarks;
    printf("Marks: ");
    scanf("%d", &marks);
    printf("Total: ");
    scanf("%d", &totalMarks);
    float percentage;
    percentage = (float)marks / totalMarks * 100;
    printf("Percentage = %.3f", percentage);

    float fa;
    double da;
    printf("Enter da: ");
    scanf("%lf", &da);
    // da = da * da;
    printf("da = %.2lf\n", da);
    int a = round(da);
    printf("round = %d\n", a);
    int b = floor(da);
    printf("floar = %d\n", b);
    int c = ceil(da);
    printf("ceil = %d\n", c);

    float a = 785.103475;
    // printf("%4.2f", a);
    // printf("%.3f\n", a);
    printf("a = %g\n", a);
    printf("a = %.3f\n", a);
    printf("a = %8g\n", a);
    printf("a = %8.2f", a);

    printf("\nQuestions:\n");
    printf("1.) Sum and Average.\n");
    printf("2.) Exchange using temp\n");
    printf("3.) Reverse a number\n");
    printf("\n\n");
    printf("Solutions:\n");
    printf("3.) Reverse a number\n");
    int number, rem, rev = 0;
    printf("Enter five digit number: ");
    scanf("%d", &number);
    rem = number % 10;
    rev = rev + rem * 10000;
    number = number / 10;
    // printf("so far: %d\n", rev);

    rem = number % 10;
    rev = rev + rem * 1000;
    number = number / 10;
    // printf("so far: %d\n", rev);

    rem = number % 10;
    rev = rev + rem * 100;
    number = number / 10;
    // printf("so far: %d\n", rev);

    rem = number % 10;
    rev = rev + rem * 10;
    number = number / 10;
    // printf("so far: %d\n", rev);

    rem = number % 10;
    rev = rev + rem * 1;
    number = number / 10;
    // printf("so far: %d\n", rev);

    printf("\nResult: %d", rev);
    int number, rem, rev = 0, i = 1, factorial = 10000;
    printf("Enter any five digit Number: ");
    scanf("%d", &number);
    while (i == 4)
    {
        rem = number % 10;
        rev = rev + rem * factorial;
        number = number / 10;
        factorial = factorial / 10;
        i++;
    }
    printf("%d", rev);

    printf("2.) Exchange using temp\n");

    int num1, num2, temp;
    printf("Etner No.1: ");
    scanf("%d", &num1);
    printf("Enter No.2: ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter Exchange....\n");
    printf("No.1 = %d\n", num1);
    printf("No.2 = %d\n", num2);

    printf("Solutions:\n");
    printf("1.) Sum and Average\n");
    int num1, num2, num3, sum, avg;
    printf("Enter No.1: ");
    scanf("%d", &num1);
    printf("Enter No.2: ");
    scanf("%d", &num2);
    printf("Enter No.3: ");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;

    printf("\nSum = %d", sum);
    printf("\nAvg = %d", avg);
    */
    printf("\n\n");

    return 0;
}