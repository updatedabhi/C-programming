#include<stdio.h>
void swipe(int a, int b);

int main(){
    int n1, n2;
    printf("Enter any two number: \n");
    scanf("%d%d", &n1, &n2);
    printf("Number before swipe %d and %d\n", n1, n2);
    swipe(n1, n2);
    // it won't change
    printf("\nThe number after swipe %d and %d", n1, n2);

    return 0;
}
void swipe(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d, %d", a, b);
}
