#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int item;
struct node *head, *newptr;

void traversing(struct node *head)
{
    if (head == NULL)
    {
        printf("Space is not available in memory");
    }
    while (head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
}

int main()
{
    head = (struct node *)malloc(sizeof(struct node));

    printf("Enter the first value\n");
    scanf("%d", &item);

    head->data = item;

    head->next = NULL;

    newptr = (struct node *)malloc(sizeof(struct node));

    printf("Enter the second value\n");
    scanf("%d", &item);

    newptr->data = item;

    newptr->next = NULL;

    head->next = newptr;

    newptr = (struct node *)malloc(sizeof(struct node));

    head->next->next = newptr;

    printf("Enter the third value\n");
    scanf("%d", &item);

    newptr->next = NULL;

    traversing(head);
}
