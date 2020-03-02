#include<stdlib.h>
#include<stdio.h>
struct Node {
    int data;
    struct Node* next;
};
void insertafter( struct Node* prev_node, int new_data)
{
    struct Node *new_node= (struct Node*) malloc(sizeof(struct Node));
    new_node-> data= new_data;
    new_node-> next= prev_node-> next;
    prev_node= new_node;
}
void printll(struct Node *n)
{
    while (n!=NULL)
    {
        printf("%d ", n->data);
        n= n-> next;
    }
   
}
int main(){
    struct Node *head=NULL;
    insertafter(&head,3);
    printll(head);
    return 0;
}
