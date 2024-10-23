#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *link;
    int item;
};
void traverse(struct node *head) {
    if (head == NULL)
    {
        printf("Memory is not empty");
    }
    else {
        printf("Congratulation your linklist is created:\n");
        printf("[");
        while (head != NULL)
        {
            printf("[");
            printf("%d ", head -> item);
            printf("]");
        }
        printf("]");
        
    }
    
}

struct node *head = NULL, *p = NULL, *ptr = NULL;
int data;

int main(){
    head = (struct node*)malloc(sizeof(struct node));
    head -> link = NULL;
    printf("Etner the first element in the node\n");
    scanf("%d", &data);
    head -> item = data;
    p = (struct node*)malloc(sizeof(struct node));
    p -> link = NULL;
    printf("Enter the second element in the node\n");
    scanf("%d", &data);
    p -> item = data;
    head -> link = p;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> link = NULL;
    printf("Enter the third element of node\n");
    scanf("%d", &data);
    ptr -> item = data;
    p -> link = ptr;
    traverse(head);

    return 0;
}




// #include <stdio.h>
// int add();
// // function type pointer:
// int main()
// {
//     int (*p)(), c;
//     p = add;
//     c = p();
//     printf("The addition is %d", c);
//     return 0;
// }

// int add()
// {
//     int a, b;
//     printf("Enter any two number: \n");
//     scanf("%d %d", &a, &b);
//     return a + b;
// }