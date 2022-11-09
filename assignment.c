// assignment
// DS LAB ASSIGNMENT FOR NEXT DAY
// write a menu based program on Linked list performing 
// 1. CREATION
// 2. INSERTION
// 3. DELETION
// 4. PRINT
// 5. REVERSE
// 6. CONCATENATION OF LIST
// 7. CIRCULAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

//structure of a linked list
struct Node{
        int data;
        struct Node *next;
};

// struct Node* create(){
    
//     return head;
// }

void displayLL(struct Node *ptr){
        system("cls");
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("\nEnter any key and enter to continue...");
    char ch;
    scanf("%c",&ch);
}

struct Node* insertBeg(struct Node *head){
    struct Node *elem;
    elem = (struct Node*) malloc (sizeof(struct Node));
    printf("\nEnter the value to insert at beginning : ");
    scanf("%d",&(elem->data));
    elem->next = head;
    head = elem;
    return elem;
}

int insertEnd(){
    return 2;
}

int insertN(){
    return 3;
}

struct Node* insert(struct Node *head){
    system("cls");
    printf("\t===========Insertion of a Node==========\n\n");
    printf("Where you want to insert a node? \n");
    printf("\t1. At beginning\n");
    printf("\t2. In the end\n");
    printf("\t3. At a position 'n'\n");
    printf("\t4. Main Menu\n");
    printf("\n\t Enter your choice : ");
    int ch;
    scanf("%d", &ch);
    switch(ch){
        case 1: head = insertBeg(head);
                break;
                
        case 2: insertEnd();
                break;
                
        case 3: insertN();
                break;
                
        case 4: exit;
                break;
        
        default: printf("Wrong choice entered!!!\n\n");
                system("cls");
                exit;
    }
    return head;
}

main(){

        struct Node *head;
     while(1){
        // printf("\t\t==============DS LAB Asignment================\n\n");
        printf("===========Linked List==========\n\n");
        printf("\t1. Create a new Linked List\n");
        printf("\t2. Insert element in a Linked List\n");
        printf("\t3. Delete element in a Linked List\n");
        printf("\t4. Display the Linked list\n");
        printf("\t5. Reverse a Linked List\n");
        printf("\t6. Concatenate two Linked list\n");
        printf("\t7. Circular Linked List\n");
        printf("\t8. Exit\n");
        printf("\t\tEnter the choice you want to perform : ");
        int ch;
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:     head=(struct Node*)malloc(sizeof(struct Node));
                        printf("Enter head elem : ");
                        scanf("%d",&(head->data));
                        head->next = NULL;
                        displayLL(head);
                        break;


            case 2: head = insert(head);
                    break;

            // case 3: delete();
            //         break;

            case 4: displayLL(head);
                    break;

            // case 5: reverse();
            //         break;

            // case 6: concatenate();
            //         break;

            // case 7: circularLL();
            //         break;

            case 8: exit;

            default: printf("No choice choosen");

        }
    }
}