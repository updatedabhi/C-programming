#include<stdio.h>

int main(){
    int a;
    printf("Enter the initial number: ");
    scanf("%d", &a);
    while (a <= 10)
    {
        printf("%d\n", a);
        a++;
    }
    
    return 0;
}