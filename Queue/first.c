#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5

int q[max], front = -1, rear = -1;
void enqueue();
void dequeue();
void display();

int main()
{
    int key;
    printf("Press 1 for insertion\n");
    printf("Press 2 for deletion\n");
    printf("Press 3 for display\n");
    printf("Press 0 for exit\n");
    while (1)
    {
        printf("\nEnter your choice");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
            break;

        default:
            printf("Ivalid key");
            break;
        }
    }

    return 0;
}

void enqueue()
{
    int data;
    if (rear == max - 1)
    {
        printf("Overflow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("\nEnter the element:");
        scanf("%d", &data);
        rear = rear + 1;
        q[rear] = data;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nDequeue: %d", q[front]);
        front++;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nElements:");
        for (i = front; i <= rear; i++)
        {
            printf("\n%d", q[i]);
        }
    }
}
