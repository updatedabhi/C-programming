#include <stdio.h>

int main()
{
    int n = 1245;
    printf("%d\n", n / 10);
    printf("%d", n % 10);
    printf("\n%d", 1 % 10);
    printf("\n%d", 10000 / 10);

    /*
    char key;
    int age;
    printf("Enter a for checking\n");
    printf("Enter b for exit program\n");
    while (1)
    {
        printf("\nEnter your choice\n");
        scanf("%c", &key);
        switch (key)
        {
        case 'a':
            printf("Enter your age\n");
            scanf("%d", &age);
            if (age < 18)
            {
                printf("Sorry you're not eligable for vote");
            }
            else if (age >= 18)
            {
                printf("Welcome you're eligable for vote");
            }

            break;
        case 'b':
            return 0;
            break;

        default:
            break;
        }
    }*/
    return 0;
}