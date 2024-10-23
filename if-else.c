#include<stdio.h>

int main(){
    int n, n1;
    // // printf("Enter any Number\n");
    // scanf("%d", &n);
    // if (n % 2 == 0)
    // {
    //     // printf("%d is Even number\n", n);
    // }
    // else {
    //     // printf("%d is Odd number\n", n);
    // }

    // if (n >= 18)
    // {
    //     // printf("Welcome you are eligable for vote");
    // }
    // else {
    //     // printf("Sorry! you're not eligable for vote");
    // }

    // int x;
    // // printf("Have you any promo code\n");
    // scanf("%d", &x);
    // if ((n <= 100 && n >= 50) || !(x == 5))
    // {
    //     // printf("You're between 100 and 50");
    // }
    // else {
    //     // printf("You're out of range");
    // }

    // Ladder of if/if-else
    printf("Enter your Roll no:\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Abhishek you can go to the classroom");
    }
    else if (n == 2)
    {
        printf("Pramod you can go to the classroom");
    }
    else if (n == 3)
    {
        printf("Sunil you can go to the classroom");
    }
    else {
        printf("Student is not recognized");
    }
    
    
    
    


    
    
    return 0;
}