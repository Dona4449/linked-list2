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

#include <stdio.h>
#include <stdlib.h>

// structure of a linked list
struct Node
{
    int data;
    struct Node *next;
};

/* ========================================================================================
                                Printing of a linked list
===========================================================================================*/
void displayLL(struct Node *ptr)
{
    system("clear");
    printf("\n=========================================================\n");
    if (ptr == NULL)
    {
        printf("\t\t(empty)");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
    }
}
//============================================================================================

/* ========================================================================================
                                Insertion of a node
===========================================================================================*/
struct Node *insertBeg(struct Node *head)
{
    struct Node *elem;
    elem = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the value to insert at beginning : ");
    scanf("%d", &(elem->data));
    elem->next = head;
    head = elem;
    return elem;
}

void insertEnd(struct Node *ptr)
{
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *elem;
    elem = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the value to insert at the end : ");
    scanf("%d", &(elem->data));
    ptr->next = elem;
    elem->next = NULL;
}

void insertn(struct Node *ptr)
{
    printf("Enter the index(starts from 1): ");
    int i;
    scanf("%d", &i);
    i = i - 1;
    while (--i)
    {
        ptr = ptr->next;
    }
    struct Node *elem;
    elem = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value to insert : ");
    scanf("%d", &(elem->data));
    elem->next = ptr->next;
    ptr->next = elem;
}

struct Node *insert(struct Node *head)
{
    printf("\n===========Insertion of a Node==========\n\n");
    printf("Where you want to insert a node? \n");
    printf("1. At beginning\n");
    printf("2. In the end\n");
    printf("3. At 'nth' index\n");
    printf("4. Main Menu\n");
    printf("Enter your choice : ");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        head = insertBeg(head);
        break;

    case 2:
        insertEnd(head);
        break;

    case 3:
        insertn(head);
        break;

    case 4:
        exit;
        break;

    default:
        printf("Wrong choice entered!!!\n\n");
        system("clear");
        exit;
    }
    return head;
}

//=========================================================================================

/* ========================================================================================
                                Deletion of a node
===========================================================================================*/

struct Node *deleteByValue(struct Node *head)
{
    struct Node *ptr;
    struct Node *prev;
    ptr = head;
    printf("Enter the value to delete : ");
    int val;
    scanf("%d", &val);
    while (ptr->data != val && prev->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        printf("Entered value not found!!!\n");
    }
    else if (ptr == head && ptr->data == val)
    {
        head = ptr->next;
    }
    else if (ptr->data == val)
    {
        prev->next = ptr->next;
        ptr->next = NULL;
        free(ptr);
    }
    return head;
}

struct Node *deleteByIndex(struct Node *head)
{
    struct Node *ptr, *prev;
    ptr = head;
    printf("Enter the index at which the node is to be deleted : ");
    int i;
    scanf("%d", &i);
    if(i==1)
    {
        head = ptr->next;
        free(ptr);
        return head;
    }
    while (--i)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    ptr->next = NULL;
    free(ptr);
    return head;
}

struct Node *delete (struct Node *head)
{
    printf("\n===========Deletion of a Node==========\n\n");
    printf("How you want to delete a node \n");
    printf("1. By VALUE\n");
    printf("2. By INDEX\n");
    printf("3. Main Menu\n");
    printf("Enter your choice : ");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        head = deleteByValue(head);
        break;

    case 2:
        head = deleteByIndex(head);
        break;

    case 3:
        exit;

    default:
        printf("Wrong choice entered!!!\n\n");
        system("clear");
        exit;
    }
    return head;
}

//=============================================================================================

/* ========================================================================================
                                Reversing a Linked List
===========================================================================================*/
struct Node* reverse(struct Node *head){
    struct Node *prev, *curr, *next;
    prev = NULL;
    next = NULL;
    curr = head;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}



//=============================================================================================



int main()
{

    struct Node *head;
    head = NULL;
    while (1)
    {
        displayLL(head);
        printf("\n======================[Linked List]======================\n\n");
        printf(" 1. CREATE a new Linked List\n");
        printf(" 2. INSERT element in a Linked List\n");
        printf(" 3. DELETE element in a Linked List\n");
        printf(" 4. REVERSE a Linked List\n");
        printf(" 5. CONCATENATE two Linked list\n");
        printf(" 6. EXIT\n");
        printf("Enter the choice you want to perform : ");
        int ch;
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            head = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter head elem : ");
            scanf("%d", &(head->data));
            head->next = NULL;
            break;

        case 2:
            head = insert(head);
            break;

        case 3:
            head = delete (head);
            break;

        case 4: 
            head = reverse(head);
            break;

            // case 5: concatenate();
            //         break;

        case 6:
            return 0;

        default:
            printf("No choice choosen");
        }
    }
    return 1;
}