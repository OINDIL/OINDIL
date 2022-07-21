#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void display(struct node *ptr)
{
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }
}
void search(struct node *ptr)
{
    int element,flag = 1, loc = 1;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &element);
    while(ptr != NULL){
    if(ptr->data == element)
        {
            printf("%d element found at %d", element,loc);
            flag = 0;
        }
        ptr = ptr -> next;
        loc++;
    }
    if(flag) printf("\nElement not found");
}
int main(){
    struct node *first, *second,*third,*fourth;
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    first -> data = 10;
    first -> next = second;
    second -> data = 20;
    second -> next = third;
    third -> data = 30;
    third -> next = fourth;
    fourth -> data = 40;
    fourth -> next = NULL;
    display(first);
    search(first);
return 0;
}
