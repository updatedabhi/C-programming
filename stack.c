#include <stdio.h>
#include<stdlib.h>
void push(char element, int stack[], int *top, int stackSize)
{
  if (*top == -1)
  {
    stack[stackSize - 1] = element;
    *top = stackSize - 1;
  }
  else if (*top == 0)
  {
    printf("The stack is already full. \n");
  }
  else
  {
    stack[(*top) - 1] = element;
    (*top)--;
  }
}
void pop(char stack[], int *top, int stackSize)
{
  if (*top == -1)
  {
    printf("The stack is empty. \n");
  }
  else
  {
    printf("Element popped: %c \n", stack[(*top)]);
    if ((*top) == stackSize - 1)
    {
      (*top) = -1;
    }
    else
    {
      (*top)++;
    }
  }
}
int main()
{
  int stackSize = 4;
  int item1, item2, item3, item4;
  char stack[stackSize];
  int top = -1;
  printf("Enter thej first element which you want to push\n");
  scanf("%d", &item1);
  push(item1, stack, &top, stackSize);
  printf("Element on top: %c\n", stack[top]);
  printf("Enter the second element which you want to push\n");
  scanf("%d", item2);
  push('b', stack, &top, stackSize);
  printf("Element on top: %c\n", stack[top]);
  pop(stack, &top, stackSize);
  printf("Element on top: %c\n", stack[top]);
  pop(stack, &top, stackSize);
  printf("Top: %d\n", top);
  pop(stack, &top, stackSize);
  return 0;
}