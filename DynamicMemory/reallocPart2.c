#include<stdio.h>
#include<stdlib.h>
int *display() {
    int *ptr;
    ptr = (int*)malloc(5 * sizeof(int));
    printf("Enter 5 values:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    return ptr;
    
}
int main(){
    int *s = display();
    
    return 0;
}