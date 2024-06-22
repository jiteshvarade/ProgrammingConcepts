#include <stdio.h>
#include <stdlib.h>

// Struture Declaration
struct node
{
    int data;              // 4 bytes 
    struct node * next;     // 8 bytes
};
// If padding consider kela tr object size 16 byte hote 

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // Step1 : Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    if(newn == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    // Step 3 : Initialise the node
    newn->data = No;
    newn->next = NULL;

    // Step 3 : Check whether Linked list is empty or not
    if(*Head == NULL)  // Linked list is empty
    {
        *Head = newn;
    }
    else  // Linded list contains at least 1 node in it
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{   
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{   
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;   // 8 bytes
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);

    printf("Number of nodes are : %d\n",iRet);

    return 0;
}