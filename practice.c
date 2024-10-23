#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

int main()
{
    /*
    int n;
    // scanf("%d", &n);
    // if (n > 0 && (n < 18))
    // {
    //     printf("You cannot drive");
    // }
    // else if (n < 99 || (n == 100))
    // {
    //     printf("You can drive car, Tempu,etc");
    // }

    int weeknumber;
    // printf("Enter the week number:\n");
    // scanf("%d", &weeknumber);
    switch (weeknumber)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        // printf("Invalid Input");
        break;
    }

    int science, math, physics, total;
    // printf("Enter your science marks\n");
    // scanf("%d", &science);
    // printf("Enter your Math marks\n");
    // scanf("%d", &math);
    // printf("Enter your physics marks\n");
    // scanf("%d", &physics);
    // total = science + math + physics;

    // if ((total < 90) || (physics < 30) || (math < 30) || (science < 30))
    // {
    //     printf("Your obtained marks: %d and you're fail\n", total);
    // }
    // else if ((total >= 90 ) && (total < 180))
    // {
    //     printf("your obtained marks: %d and you're second division\n", total);
    // }
    // else {
    //     // printf("your obtianed marks: %d and you're first division", total);
    // }

    // int n = 10;
    // if(n = 12) {
    //     printf("Successful");
    // }
    // else {
    //     printf("Try again");
    // }

// write a program to printf sum number between 0 to 20

    int i;
    printf("Enter the initial value");
    scanf("%d", &i);
    while (i < 20)
    {
        printf("%d\n", i);
        i += 2;
    }


   int number;
   printf("Enter any number");
   scanf("%d", &number);
   while (number > 0)
   {
    printf("%d\n", number);
    number--;
   }


    int i;
    scanf("%d", &i);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 100);


    int number;

    srand(time(0));
    number = rand() % 10 + 1;           // printf("%d\n", 9 % 6);
    printf("%d\n", number);

    // Generating random number between two number


    int number;
    int firstNumber = 5;
    int secondNumber = 10;
    srand(time(0));
    number = (rand() % (secondNumber - firstNumber)) + firstNumber;
    printf("%d\n", number);
    int i, j;

        for (j = 0; j <= 10; j++)
        {
            printf("%d\n", j);
            j++;
        }

    // Array traversal in c
    int array[20], size, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements in array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Your entered elements: \n");
    printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");



   int array[50], size, i;
   printf("Enter the size of array: \n");
   scanf("%d", &size);
   printf("Enter the elements of array: \n");
   for (i = 0; i < size; i++)
   {
        scanf("%d", &array[i]);
   }

    printf("your entered elements: \n");

   for (i = 0; i < size; i++)
   {
        printf("%d ", array[i]);
   }

   int p, n;
   printf("Enter the position of new element: \n");
   scanf("%d", &p);
   printf("Enter the new element: \n");
   scanf("%d", &n);
   for (i = (size - 1); i >= (p - 1); i--)
   {
        array[i + 1] = array[i];
   }
   size = size + 1;
   printf("after insertion your elements are: \n");

   for (i = 0; i < size; i++)
   {
        printf("%d ", array[i]);
   }

    printf("%d", 4%3);

    int a = 5;
    printf("%d %d %d\n", a, a++, ++a);
    int a = 5;
    a = a + 5;
    printf("%d", a);
   int i,a[10];
   printf("Enter the element:\n");
   for (i = 0; i < 5; i++)
   {
    scanf("%d", &a[i]);
   }
   printf("The value of a[0] n time:\n");
   for (i = 0; i < 5; i++)
   {
        printf("he value of a[0] %d\n", a[0]);
        printf("the value of a[i] %d\n", a[i]);

   }
//    printf("\n%d", a[0]);


   int NUMBER[40], item, n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    printf("Enter the elements of array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&NUMBER[i]);
    }
    printf("Enter the item which you want to search: ");
    scanf("%d", &item);
    for(int i = 0; i < n; i++) {
        if(NUMBER[i] == item) {
            printf("%d", (i + 1));
        }
    }
    int n, *ptr;
    printf("Ente the size of values ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(n));
    if (ptr == NULL)
    {
        exit(1);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        printf("your entered values:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(ptr + i));
        }
    }

    int c, a[45] = {3, 34, 78, 89, 24}, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    // c = (a[0] / 500) * 100;
    printf("%d", sum);
    */
    return 0;
}