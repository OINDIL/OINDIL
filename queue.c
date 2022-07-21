#include<stdio.h>
#define size 100
int element;
int front = -1,rear = -1;
int queue[size];
void enqueue()
{
    if(rear == size - 1)
    {
        printf("\nQueue overflowed");
    }
    else if(front == -1)
    {
        front = 0;
        printf("Enter the element into the queue: ");
        scanf("%d", &element);
        rear += 1;
        queue[size] = element;

    }
}
void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("\nQueue is empty");
    }
    else
    {
        // element = queue[front];
        front += 1;
    }
}
void display()
{
    for(int i = front;i < rear;i++)
    {
        printf("%d\t", queue[i]);
    }
}
int main(){
    char choice = 'y';
    int choice_2;
    goBack:
    printf("\nEnter your choice\n-------------\nPress 1 to push\nPress 2 to pop\nPress 3 to display:");
    scanf("%d", &choice);
    switch(choice)
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
        default:
        printf("\n**INVALID INPUT**");
    }
    printf("\nDo you want to continue: ");
    scanf(" %c", &choice_2);
    if(choice_2 == 'y')
    {
        goto goBack;
    }
return 0;
}