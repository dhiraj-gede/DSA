#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int new_data;
    struct Node* next;  
};
void printll(struct Node* n)
{
    while (n!=NULL){
        printf("%d ", n->new_data);
        n=n->next;
    }  
    
}
int main()
{
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->new_data=3;
    head->next=second;
    second->new_data=2;
    second->next=third;
    third->new_data=1;
    third->next=NULL;
    printll(head);
    return 0;
}
