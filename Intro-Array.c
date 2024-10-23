#include <stdio.h>
int Array(int *ptr, int n) {
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d(%u), ", *(ptr + i), (ptr + i));
    }
    printf("}");
    
}

int main()
{
    int marks[] = {1, 3, 5, 8};
    Array(marks, 4);
    // int marks[4];
    // int *ptr;
    // ptr = &marks[0];
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the marks of %d student: \n", i + 1);
    //     scanf("%u", ptr);
    //     ptr = ptr + 1;
    // }
    // printf("[");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d ", marks[i]);
    // }
    // printf("]");
    
    
    // we can easily manipulate elements of array using loop:

    // for loop"
    // int i = 0, num[5], size = 4;
    // for (i = 0; i < size; i++)
    // {
    //     scanf("%d", &num[i]);
    // }

    // do while loop:
    // do
    // {
    //     scanf("%d", &num[i]);
    //     i++;
    // } while (i < size);
    
    // while loop:
    // printf("Enter the element of array:\n");
    // while (i < size)
    // {
    //     printf("Enter %d element value: \n", i + 1);
    //     scanf("%d", &num[i]);
    //     i++;
    // }
    
    // this is how a array work
    // int marks[5];
    // printf("Enter the marks of first student: ");
    // scanf("%d", &marks[0]);
    // printf("Enter the marks of secod student: ");
    // scanf("%d", &marks[1]);
    // printf("Enter the marks of third student: ");
    // scanf("%d", &marks[2]);
    // printf("Enter the marks of fourth student: ");
    // scanf("%d", &marks[3]);
    // printf("Enter the marks of fifth student: ");
    // scanf("%d", &marks[4]);
    // printf("your marks are:\n");
    // printf("[%d %d %d %d %d]", marks[0], marks[1], marks[2], marks[3], marks[4]);

    // marks[0] = 78;
    // marks[1] = 56;
    // marks[2] = 89;
    // marks[3] = 67;
    // marks[4] = 23;
    // printf("%d", marks[7]);
    return 0;
}