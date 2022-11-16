#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

//traversal

void cllTraversal(struct Node *head){
        struct Node *ptr=head;
        printf("The elements are:\n");
    do{
        printf(" %d\n", ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);

}

//insertion at the beginning

struct Node * InsertAtBeg(int data, struct Node *head ){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }

    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
    
}

//insertion in between


//creation

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    
    head->data= 10;
    head->next= second;
    
    second->data= 20;
    second->next= third;

    third->data= 30;
    third->next= fourth;

    fourth->data= 40;
    fourth->next= head;

    // return 0;

    printf("List before insertion:\n ");
    cllTraversal(head);

    head=InsertAtBeg(50, head);

    printf("List after insertion:\n");
    cllTraversal(head);



}


