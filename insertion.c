#include<stdio.h>
#include<stdlib.h>

// here we created the cast
struct Node
{
    int data;
    struct Node *next;
};

//  function to print the data
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

// insertion
struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;   
}

// driver code
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

printf("Linked list before insertion: \n");
LinkedListTraversal(head);

head=InsertAtFirst(head,99);

printf("Linked list after insertion: \n");
LinkedListTraversal(head);

return 0;

}

