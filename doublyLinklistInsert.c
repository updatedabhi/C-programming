#include <stdio.h>
#include <stdlib.h>
void beginingInsert(int);
struct node
{
    int value;
    struct node *next;
    struct node *prev;
};
struct node *head;
void main()
{
    int choice, item;
    do
    {
        printf("\nEnter the item which you want to insert?\n");
        scanf("%d", &item);
        beginingInsert(item);
        printf("\nPress 0 to insert more ?\n");
        scanf("%d", &choice);
    } while (choice == 0);
}
void beginingInsert(int item)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->value = item;
            head = ptr;
        }
        else
        {
            ptr->value = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
    }