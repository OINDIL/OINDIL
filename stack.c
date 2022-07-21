// successfully running
#include <stdio.h>
#define size 50
int stack[size];
int top = -1;
void push()
{
    int element;
    if (top == size - 1)
    {
        printf("\nStack is full");
    }
    else
    {
        printf("\nEnter the element to be pushed in the stack: ");
        scanf("%d", &element);
        top += 1;
        stack[top] = element;
    }
}
void pop()
{
    int element;
    if (top == -1)
    {
        printf("\nStack is empty and you can't pop a element");
    }
    else
    {
        element = stack[top]; // it takes the element from stack[0] and stores in itself then the top value becomes -1
                              // and it pops the top most element       
        top -= 1;
    }
}
void display()
{
    if (top == -1)
    {
        printf("\n{Stack is empty}\n");
    }
    else
    {
        printf("The status of the stack is: \n");
        for (int i = top; i >= 0; i--) 
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int choice;
    char choice_2 = 'y';
goBack:
    printf("\nEnter your choice\n-------------\nPress 1 to push\nPress 2 to pop\nPress 3 to display:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    default:
        printf("\n[INVALID INPUT]");
    }
    printf("\nDo you want to continue?(y/n):");
    scanf(" %c", &choice_2);
    if (choice_2 == 'y')
    {
        goto goBack;
    }
    return 0;
}