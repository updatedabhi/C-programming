#include<stdio.h>

int main(){
    int c;
    float f;
    printf("Enter tempreture in celcius\n");
    scanf("%d", &c);
    f = c*(1.8)+32;
    printf("Tempreture in fahrenheit: %f", f);

    // Simple Interest finding by c programming
    int principal_amount, rate, duration, simple_interest;
    printf("\nEnter Principal, rate and duration\n");
    scanf("%d%d%d", &principal_amount, &rate, &duration);
    simple_interest = (principal_amount * rate * duration)/100;
    printf("simple interest is: %d", simple_interest);
    return 0;
}