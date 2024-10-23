#include <stdio.h>
void summy(int a, int b, int *sum, float *Avg)
{
    *sum = a + b;
    *Avg = (float)(*sum) / 2;
}
// void check(int a);

int main()
{
    int i = 5;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("%d", **ptr_ptr);
    /*
    int n1 = 3, n2 = 6, sum;
    float Avg;
    summy(n1, n2, &sum, &Avg);
    printf("The sum is %d\n", sum);
    printf("The average is %f", Avg);
    return 0;
    // firsr program:
    int a;
    printf("Enter the value of a ");
    scanf("%d", &a);
    int *p;
    p = &a;
    printf("\nthe address of %d is ", p);
    printf("\nthe value of a varaible %d is ", *p);
    int i;
    printf("%d\n", &i);
    check(i);
    */
}

// void check(int a) {
//     printf("%u", &a);
// }