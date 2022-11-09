#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("elements: %d\n", ptr->data);
        ptr=ptr->next;
    }
    
}

struct Node *InsertAtEnd(struct Node *head, int data)
{
    struct Node* new= (struct Node*)malloc(sizeof(struct Node));
    new->next=NULL;
    new->data=data;
    struct Node* ptr;
    ptr=head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    return head;
}

