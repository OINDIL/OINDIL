#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next; 
};
struct node *head;
void beginsert(){
    struct node *ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node*)); // Udhar jitna mangta idhar utna deta
    if(ptr == NULL)
    {
        printf("\nOverflow");
    }
    else{
        printf("\nEnter the value: ");
        scanf("%d", &item);
        ptr -> data = item;
        ptr -> next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}
void lastinsert(){
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOverflow");
    }
    else{
        printf("Enter value: ");
        scanf("%d", &item);
        ptr -> data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");
        }
    }
}
void display(){
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nNothing to print");
    }
    else{
        printf("\nPrinting values: ");
        while (ptr != NULL)
        {
            printf("%d", ptr -> data);
            ptr = ptr -> next;
        }
        
    }
}
void begdelete(){
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nList is empty");
    }
    else{
        ptr = head;
        head = ptr -> next;
        free(ptr);
        printf("\n**Node deleted from the beginning**");
    }
}
int main(){
    char choice_2 = 'y';
    int choice;
goBack:
    printf("\nEnter your choice: ");
    printf("\nPress 1 to begin insert\nPress 2 to last insert\nPress 3 to begin delete\nPress 4 to display: "); 
    scanf("%d", &choice);
    switch(choice){
        case 1: 
        beginsert();
        break;
        case 2:
        lastinsert();
        break;
        case 3:
        begdelete();
        break;
        case 4:
        display();
        break;
        default:
        printf("**INVALID INPUT**");
    }
    printf("\nDo you want to continue?(y/n):");
    scanf(" %c", &choice_2);
    if(choice_2 == 'y')
    {
        goto goBack;
    }
    return 0;
}