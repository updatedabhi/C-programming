#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};


int main(){
    int item;
    struct node *head, *newptr;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter the first item\n");
    scanf("%d", &item);
    head -> data = item;
    head -> next = NULL;
    newptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the second item\n");
    scanf("%d", &item);
    newptr -> data = item;
    newptr -> next = NULL;
    head -> next = newptr;
    head -> next -> next = newptr;
    printf("Enter the third item\n");
    scanf("%d", &item);
    newptr -> data = item;
    newptr -> next = NULL;
    return 0;
}