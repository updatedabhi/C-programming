#include<stdio.h>

int main(){
    int *p, *q, *r, a, b, c;
    printf("Enter two number: \n");
    scanf("%d%d",&a, &b);

    p = &a;
    q = &b;
    r = &c;
    *r = *p + *q;
    printf("The sum of %d and %d is %d", a, b, *r);

    // you can also direct print result in c variale without giving the address of r pointer
    // c = *p + *q;
    // printf("%d", c);
    

    return 0;
}