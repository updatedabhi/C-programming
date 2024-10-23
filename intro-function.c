#include<stdio.h>
// void sum();
// int add();
// void sum(int a, int b);
int add(int a, int b);

int main(){
    int c, a, b;
    // argument and return value
    c = add(a, b);
    printf("addition of two number = %d", c);

    // argument and no return value:
    // sum(a, b);


    // no arguments but return value:
    // c = add();
    // printf("%d", c);

    // no arguments no return :
    // sum();
    return 0;
}
int add(int a, int b) {
    int c;
    printf("Enter two number:\n");
    scanf("%d\n%d", &a, &b);
    return c = a + b;
}
/*
void sum(int a, int b) {
    int c;
    printf("Enter two numbers:\n");
    scanf("%d\n%d", &a, &b);
    c = a + b;
    printf("%d", c);
}
int add() {
    int a, b, c;
    printf("Enter two number:\n");
    scanf("%d\n%d", &b, &c);
    return a = b + c;
}
void sum() {
    int a, b, c;
    printf("Enter the value of two numbers:\n");
    scanf("%d\n%d", &a, &b);
    c = a + b;
    printf("%d + %d = %d", a, b, c);
}
*/