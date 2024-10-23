#include<stdio.h>

int main(){
    /* ternary operators: A short hand if else can be written
    using ternary operators (we use ternary operator in c to run
    code when the one condition is true and another condition is false) 
    syntax:- condition ? expression: expression if-false */
    int number;
    printf("Enter any number\n");
    scanf("%d", &number);
    (number % 2 == 0)? printf("%d is Even number", number): printf("%d is Odd number", number);
    return 0;
}