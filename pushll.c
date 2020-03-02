#include<stdlib.h>
#include<stdio.h>
struct Node{
    int data;
    struct Node * next;
};
void push(struct Node ** head_ref, int new_data)
{
    struct Node *new_node= (struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next= *head_ref;
    *head_ref=new_node;
}
void printll(struct Node * n)
{
    while (n!=NULL)
    {
        printf("%d ", n->data) ; 
        n=n->next;      /* code */
    }
    
}
int main()
{
   struct Node* head= NULL;
   push(&head, 3);
   push(&head,2);
   printll(head);
   return 0;
}