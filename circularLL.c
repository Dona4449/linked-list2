#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *insert(struct Node *head){
    struct Node *node, *ptr;
    node = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value of node to enter : ");
    scanf("%d", &node->data);
    node->next = NULL;
    system("clear");
    printf("Where do you want to add this node???\n");
    printf(" 1. BEGINNING\n");
    printf(" 2. END\n");
    printf(" 3. At 'nth' INDEX\n");
    printf(" 4. Exit\n");
    printf("Enter your choice : ");
    int c;
    scanf("%d", &c);
    switch(c){
        case 1: head->next = node;
                node->next = head;
                break;

        case 2: 
                ptr = head;
                while(ptr->next != head){
                    ptr = ptr->next;
                }
                ptr->next = node;
                node->next = head;
                break;

        case 3: printf("Enter the INDEX 'n' : ");
                int i;
                scanf("%d",&i);
                ptr = head;
                i = i-1;
                while(--i){
                    ptr = ptr->next;
                }
                node->next = ptr->next;
                ptr->next = node;
                break;

        case 4: return head;
                break;

        default: printf("Wrong choice entered!!!\n");

    }
    return head;
}

void *print(struct Node *head){
    struct Node *ptr;
    ptr = head;
    printf("=====================================================\n");
    while(ptr->next != head){
        printf("%d -> ",ptr->data);
    }
    printf("\n");
}

int main(){
    struct Node *head;
    head->next = NULL;
    printf("Enter the first element of the list : ");
    scanf("%d", &head->data);

    while(1){
        // print(head);
        printf("===================[Circular Linked List]===================\n");
        printf(" 1. INSERT a node\n");
        printf(" 2. PRINT CLL\n");
        printf(" 3. Exit\n");
        printf("Enter your choice : ");
        int ch;
        scanf("%d", &ch);
        switch (ch){
            case 1:
                head = insert(head);
                break;
            
            case 2:
                head = print(head);
                break;

            case 3: 
                return 0;

            default:
                printf("Wrong choice entered!!!\n\n");
        }

    }

    return 0;
}