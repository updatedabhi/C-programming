#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode;
    head = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &(newnode->data));
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        head->next = newnode;
    }

    return 0;
}