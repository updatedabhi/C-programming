#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int multiple(int a, int b);
int div(int a, int b);
int eORo(int n1);

int main() {
    int c, a, b;
    printf("Enter a, b: \n");
    scanf("%d %d",&a, &b );
    c = add(a, b);
    int s = sub(a, b);
    int m = multiple(a, b);
    int d = div(a, b);
    printf("Your add, sub, multiple and div are: %d %d %d %d", c, s, m, d);
    printf("\nEnter only first number");
    scanf("%d", &a);
    printf("%d", a);
    eORo(a);
    return 0;
}

int add(int a, int b) {
    int c = a + b;
    return c;
}

int sub(int a, int b) {
    int s = a - b;
    return s;
}

int multiple(int a, int b) {
    int m = a * b;
    return m;
}

int div(int a, int b) {
    int d = a / b;
    return d;
}

int eORo(int n1) {
    if((n1 % 2) == 0) {
        return printf(" is even number");
    }
    else{
        return printf(" is odd number");
    }
}