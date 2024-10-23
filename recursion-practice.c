#include<stdio.h>
int naturalNum(int n);

// print n natural number using recursion

int main(){
    int a, number;
    printf("Enter number to print counting");
    scanf("%d", &a);
    naturalNum(a);
    return 0;
}

int naturalNum(int n) {
    if (n)
    {
       naturalNum(n - 1);
    }
    else {
        return 0;
    }
    printf("%d\n", n);
}