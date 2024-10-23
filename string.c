#include <stdio.h>

int main()
{
    int num;
    char str[34];
    printf("Enter number: ");
    scanf("%d", &num); // Reading input from STDIN
    printf("Enter your string: ");
    scanf("%s", &str);
    printf("Input number is %d\n", 2 * num);
    printf("%s", str); // Writing output to STDOUT
}