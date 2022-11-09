#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *concat(struct Node *h1, struct Node *h2){
    struct Node *ptr;
    ptr=h1;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;

    }
    ptr->next=h2;
    return h1;
    
}

void LinkedListtraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d -", ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    
}

main()
{

    //linked list 1
    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth1 =(struct Node*)malloc(sizeof(struct Node));

    head1->data = 2;
    head1->next = second1;

    second1->data = 4;
    second1->next = third1;

    third1->data = 6;
    third1->next = fourth1;

    fourth1->data = 8;
    fourth1->next = NULL;

    printf("Linked list 1:\n");
    LinkedListtraversal(head1);

    //linked list 2
    struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth2 =(struct Node*)malloc(sizeof(struct Node));

    head2->data = 10;
    head2->next = second2;

    second2->data = 20;
    second2->next = third2;

    third2->data = 30;
    third2->next = fourth2;

    fourth2->data = 40;
    fourth2->next = NULL;

    printf("Linked list 2:\n");
    LinkedListtraversal(head2);

    struct Node *newHead;
    newHead = concat(head1,head2);
    printf("New Linked list 1:\n");
    LinkedListtraversal(newHead);
}
