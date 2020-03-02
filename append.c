#include<stdlib.h>
#include<stdio.h>
struct Node{
    int data;
    struct Node *next;
};
void append(struct Node **head_ref, int new_data)
{
    struct Node *new_node= (struct Node*) malloc(sizeof(struct Node));
    struct Node *last= *head_ref;
    new_node-> data=new_data;
    new_node->next= NULL;
    if(head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    while(last-> next!= NULL)
    {
        last= last->next;

    }
    last-> next= new_node;
    return ;

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
    append(&head,3);
    printll(head);
    return 0;
}
