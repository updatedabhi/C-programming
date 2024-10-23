#include<stdio.h>
void wrongSwap(int *x, int *y);
// void swap(int *x, int *y);

int main(){
    int a = 4;
    int b = 6;
    // swap(&a, &b);
    wrongSwap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}


void wrongSwap(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

/*
void swap(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
*/