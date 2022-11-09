#include<stdio.h>
#include<stdlib.h>

// this creates the container
struct Node
{
    int data;
    struct Node *next;
};

struct Node *reverse(struct Node *head)
{
    struct Node *curr, *next, *prev;
    curr=head;
    next=NULL;
    prev=NULL;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
    
}

void LinkedListtraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr=ptr->next;
    }
    
}

main()
{
    struct Node *head= (struct Node*)malloc(sizeof(struct Node));
    struct Node *second= (struct Node*)malloc(sizeof(struct Node));
    struct Node *third= (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth= (struct Node*)malloc(sizeof(struct Node));

    head->data=3;
    head->next=second;

    second->data=8;
    second->next=third;

     third->data=9;
    third->next=fourth;

     fourth->data=10;
    fourth->next=NULL;

    printf("old list:\n");
    LinkedListtraversal(head);

    struct Node *newHead;
    newHead=reverse(head);

    printf("new list:\n");
    LinkedListtraversal(newHead);
}