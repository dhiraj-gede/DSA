//needs debugging

#include<stdlib.h>
#include<stdio.h>
struct Node {
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data)
{
    struct Node *new_node= (struct Node*) malloc(sizeof(struct Node));
    new_node->data= new_data;
    new_node->next= *head_ref;
    *head_ref=new_node;
    
}
void insertafter( struct Node* prev_node, int new_data)
{
  /*  if (prev_node == NULL) 
    { 
      printf("the given previous node cannot be NULL"); 
      return; 
    } */
    struct Node *new_node= (struct Node*) malloc(sizeof(struct Node));
    new_node-> data= new_data;
    new_node-> next= prev_node-> next;
    prev_node->next= new_node;
}
void append(struct Node** head_ref, int new_data)
{
    struct Node *new_node= (struct Node*) malloc(sizeof(struct Node));
    struct Node *last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if (head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    while (last->next!= NULL)
    {
        last= last->next;
    }
    last->next=new_node;
    return;
}
void printlst(struct Node* n)
{
    while(n!=NULL)
    {
        printf(" %d ",n->data);
        n=n->next;
    }
}
int main()
{
    struct Node *head= NULL;
    push(&head,1);
     push(&head,2);
     append(&head,3);
    insertafter(head, 4);
    insertafter(head->next->next, 4);
    insertafter(head->next->next->next->next, 4);
    append(&head,6);
    printlst(head);
    return 0;
}