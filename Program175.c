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
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First, 121);
    InsertLast(&First, 151);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&First);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&First);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}