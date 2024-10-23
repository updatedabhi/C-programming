#include<stdio.h>
float average(float a, float b, float c);

int main(){
    float a, b, c;
    printf("Enter any three number: \n");
    scanf("%f\n%f\n%f", &a, &b, &c);
    printf("Average of %f, %f and %f is: %f", a, b, c, average(a, b, c));
    
    return 0;
}

float average(float a, float b, float c) {
    float result;
    result = (a + b + c) / 3;
    return result;
}