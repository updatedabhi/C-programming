#include<stdio.h>

int main(){
    // Programme of area of rectangle
    int width, length, Area;
    printf("Enter the Width of Rectangle\n");
    scanf("%d", &width);
    printf("Enter the length of Rectangle\n");
    scanf("%d", &length);
    printf("Area of Rectangle is %d", width * length);

    printf("\n");

    // Programme of area of circle
    #define PI 3.142
    int radius;
    float area;
    printf("Enter the radius of circle\n");
    scanf("%d", &radius);
    area = 2*PI*radius*radius;
    printf("Area of circle is %f", area);
    return 0;
}