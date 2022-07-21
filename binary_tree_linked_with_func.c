#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* creatNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}
int main(){
    struct node *p = creatNode(2);
    struct node *p1 = creatNode(1);
    struct node *p2 = creatNode(4);
    // linking the nodes
    p -> left = p1;
    p -> right = p2;
    
return 0;
}