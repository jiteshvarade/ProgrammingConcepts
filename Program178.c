#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

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

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    if(newn == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)  // Linked List is empty
    {
        *Head = newn;
    }
    else // Linked contains at least one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int iNo)
{   
    PNODE Temp = *Head;
    PNODE newn= NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    if(newn == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL) // Linked List is empty
    {
        *Head = newn;
    }
    else  // Linked List contains atleast one node
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

void InsertAtPos(PPNODE Head, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;
    int iSize = Count(*Head);
    int iCnt = 0;

    // Case 1 : Invalid Position
    if((iPos < 1) || (iPos > iSize + 1))
    {
        printf("Invalid Position!\n");
        return;
    }
    // Case 2 : First Position
    else if(iPos == 1)
    {
        InsertFirst(Head, iNo);
    }
    // Case 3 : Last Position
    else if(iPos == iSize + 1)
    {
        InsertLast(Head, iNo);
    }
    // Case 4 : Psoition is in betwwen First and Last
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        if(newn == NULL)
        {
            printf("Memory allocation Falied!");
            return;
        }

        newn->data = iNo;
        newn->next = NULL;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->next;
        }

        newn->next = Temp->next;
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) // Case 1
    {
        return;
    }
    else if((*Head)->next == NULL) // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else // Case 3
    {
        *Head = (*Head) -> next;
        Temp->next = NULL;
        free (Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) // Case 1
    {
        return;
    }
    else if((*Head)->next == NULL) // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else // Case 3
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free (Temp->next);
        Temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iSize = Count(*Head);
    PNODE Temp = *Head;
    PNODE TargetedNode = NULL;
    int iCnt = 0;

    // Case 1 : Invalid Position
    if((iPos < 1) || (iPos > iSize))
    {
        printf("Invalid Position!\n");
        return;
    }
    // Case 2 : First Position
    else if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    // Case 3 : Last Position
    else if(iPos == iSize)
    {
        DeleteLast(Head);
    }
    // Case 4 : Psoition is in betwwen First and Last
    else
    {
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->next;
        }

        TargetedNode = Temp->next;
        Temp->next = TargetedNode->next;
        TargetedNode->next = NULL;
        free (TargetedNode);
        TargetedNode = NULL;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertLast(&First, 121);

    InsertAtPos(&First, 105, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteAtPos(&First, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}