#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int side, Area;
    printf("Enter the side of Square");
    scanf("%d", &side);
    Area = pow(side, 2);
    printf("%d", Area);
    return 0;
}