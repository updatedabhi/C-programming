#include<stdio.h>

int main(){
    int k = 0;
    int number;
    scanf("%d", &number);
    do
    {
        printf("%d\n", k);
        k++;
    } while (k < number);
    
    return 0;
}