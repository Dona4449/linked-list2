// traversal of a linked list

#include<stdio.h>
#include<stdlib.h>

// this creates the container
struct Node
{
    int data;
    struct Node *next;
};

//function to print the data. Here the head is a node of pointer type.   
void LinkedListtraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr=ptr->next;
    }
    
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

     second->data=8;
    second->next=third;

     third->data=9;
    third->next=fourth;

     fourth->data=10;
    fourth->next=NULL;

    LinkedListtraversal(head);
}
