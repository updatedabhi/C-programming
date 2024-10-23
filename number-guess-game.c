#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guessNumber, numberOfGuess = 1;
    srand(time(0));
    number = rand() % 100 +1;
    printf("%d\n", number);
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guessNumber);
        if (number > guessNumber)
        {
            printf("Please higher number!\n");
        }
        else if (number < guessNumber)
        {
            printf("Please lower number\n");
        }
        else {
            printf("You guessed in %d attempt\n", numberOfGuess);
        }
        
        numberOfGuess++;
        
    } while (number != guessNumber);
    
    return 0;
}