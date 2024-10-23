#include<stdio.h>
void change(int *p) {
    *p = *p + 5;
    printf("*p = %d", p);
}
int main(){
    int n = 10;
    printf("Value of n before calling = %d\n", n);
    change(&n);
    printf("\nValue of n after calling = %d", n);
    // int i = 5;
    // int *j;
    // int **k;
    // k = &j;
    // printf("%d\n", *k);
    // j = &i;
    // printf("%d\n", j);
    // printf("%d\n", &i);
    // printf("%d\n", *j);
    // int n = 8;
    // int z = 36;
    // int t = 23, a = n;
    // // 
    
    // printf("%d\n", &n);
    // printf("%d\n", &z);
    // printf("%d\n", &t);
    // printf("%d\n", &a);
    // int arr[5];
    // for (int i = 0; i <= 4; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("array address:\n");
    // for (int i = 0; i <= 4; i++)
    // {
    //     printf("%d ", &arr[i]);
    // }
    return 0;
}