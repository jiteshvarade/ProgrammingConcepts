#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int iData;
    struct Node * Next;
    struct Node * Prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head->Next;
    }

    return iCount;
}

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    if(NewNode == NULL)
    {
        printf("Memory allocation failed!\n");
    }
    else
    {
        NewNode->iData = iNo;
        NewNode->Next = NULL;
        NewNode->Prev = NULL;
        if((*Head) == NULL)
        {
            printf("Linked was empty\nElement inserted\n");
            *Head = NewNode;
        }
        else
        {
            NewNode->Next = (*Head);
            (*Head)->Prev = NewNode;
            *Head = NewNode;
            printf("Element inserted at first\n");
        }
    }
}

void InsertLast(PPNODE Head, int iNo)
{
    PNODE Temp = (*Head);

    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    if(NewNode == NULL)
    {
        printf("Memory allocation failed!\n");
    }
    else
    {
        NewNode->iData = iNo;
        NewNode->Next = NULL;
        NewNode->Prev = NULL;
        if((*Head) == NULL)
        {
            printf("Linked was empty\nElement inserted\n");
            *Head = NewNode;
        }
        else
        {
            while(Temp->Next != NULL)
            {
                Temp = Temp->Next;
            }

            Temp->Next = NewNode;
            NewNode->Prev = Temp;
            Temp = NULL;
            printf("Element inserted at last\n");
        }
    }
}

void InsertPos(PPNODE Head, int iNo, int iPos)
{
    int iNoElements = Count(*Head);
    PNODE Temp = (*Head);

    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    if(NewNode == NULL)
    {
        printf("Memory allocation failed!\n");
    }
    else
    {
        NewNode->iData = iNo;
        NewNode->Next = NULL;
        NewNode->Prev = NULL;
        
        if(iPos == 1)
        {
            InsertFirst(Head, iNo);
        }
        else if(iPos == (iNoElements + 1))
        {
            InsertLast(Head, iNo);
        }
        else if(iPos > (iNoElements + 1))
        {
            printf("Cannot insert element as there are less element in the linked list!\n");
        }
        else
        {
            for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
            {
                Temp = Temp->Next;
            }

            NewNode->Next = Temp->Next;
            NewNode->Prev = Temp;
            NewNode->Next->Prev = NewNode;
            Temp->Next = NewNode;
            Temp = NULL;
            printf("Element inserted at position : %d\n",iPos);
        }
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = (*Head);

    if((*Head) == NULL)
    {
        printf("Cannot delete elment as linked list is empty\n");
    }
    else if((*Head)->Next == NULL) // LL contians one element
    {
        (*Head) = NULL;
        free (Temp);
        Temp = NULL;
        printf("Element deleted and Linked List is Now emepty as previously there was only one element in the Linked List\n");
    }
    else
    {
        (*Head) = (*Head)->Next;
        (*Head)->Prev = NULL;
        Temp->Next = NULL;
        free (Temp);
        Temp = NULL;
        printf("Element deleted from First\n");
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = (*Head);

    if((*Head) == NULL)
    {
        printf("Cannot delete elment as linked list is empty\n");
    }
    else if((*Head)->Next == NULL) // LL contians one element
    {
        (*Head) = NULL;
        free (Temp);
        Temp = NULL;
        printf("Element deleted and Linked List is Now emepty as previously there was only one element in the Linked List\n");
    }
    else
    {
        while(Temp->Next != NULL)
        {
            Temp = Temp->Next;
        }

        Temp->Prev->Next = NULL;
        Temp->Prev = NULL;
        free (NULL);
        Temp = NULL;
        printf("Element deleted from last\n");
    }
}

void DeletePos(PPNODE Head, int iPos)
{
    int iNoElements = Count(*Head);
    PNODE Temp = (*Head);
    PNODE ToDelete = NULL;
    
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iNoElements)
    {
        DeleteLast(Head);
    }
    else if(iPos > iNoElements)
    {
        printf("Cannot delete element as there are less element in the linked list!\n");
    }
    else
    {
        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->Next;
        }

        ToDelete = Temp->Next;
        ToDelete->Next->Prev = Temp;
        ToDelete->Prev->Next = ToDelete->Next;
        ToDelete->Next = NULL;
        ToDelete->Prev = NULL;
        free (ToDelete);
        ToDelete = NULL;
        Temp = NULL;
        printf("Element deleted from position : %d\n",iPos);
    }
    
}

void Display(PNODE Head)
{
    if(Head == NULL)
    {
        printf("Linked List is empty!\n");
    }
    else
    {
        printf("Linked list is : \n");
        printf("\033[0;94m");
        printf("NULL <=> ");
        while(Head != NULL)
        {
            printf("| %d | <=> ",Head->iData);
            Head = Head->Next;
        }
        printf("NULL\n");
        printf("\033[0m\n");
    }
}

int main()
{
    printf("\n\033[0;94m\n");
    printf(" __ \n");
    printf("|  |\n");
    printf("|  |\n");
    printf("|  |            __\n");
    printf("|  |           |  |\n");
    printf("|  |           |  |\n");
    printf("|  |           |  |\n");         
    printf("|  |________   |  |_____\n");
    printf("|___________|  |________|\n");
    printf("\033[0m\n");
    PNODE First = NULL;
    int iChoice = 0;
    int iValue = 0;
    int iLoc = 0;
    int iRet = 0;

    while(1)
    {   
        printf("\033[0;31m---------Menu----------\033[0m\n");
        printf("1.Insert at beggining\n2.Insert at end\n3.Insert at any position\n4.Delete from begining\n5.Delete from end\n6.Delete from any position\n7.Display elements from Linked List\n8.Number of elements in Linked List\n9.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1 : 
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("Enter element : ");
                scanf("%d",&iValue);
                InsertFirst(&First, iValue);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 2 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("Enter element : ");
                scanf("%d",&iValue);
                InsertLast(&First, iValue);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 3 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("Enter element : ");
                scanf("%d",&iValue);
                printf("Enter position : ");
                scanf("%d",&iLoc);
                InsertPos(&First, iValue, iLoc);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 4 : 
                printf("---------------------------------------------------------------------------------------------------------\n");
                DeleteFirst(&First);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 5 : 
                printf("---------------------------------------------------------------------------------------------------------\n");
                DeleteLast(&First);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 6 :    
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("Enter position : ");
                scanf("%d",&iLoc);
                DeletePos(&First, iLoc);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 7 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                Display(First);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 8 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                iRet = Count(First);
                printf("Number of elements in Linked List : %d\n",iRet);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 9 : 
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("\e[0;31m Thankyou!\033[0m\n");
                printf("---------------------------------------------------------------------------------------------------------\n");
                return 0;
            default : 
                printf("Invlaid Choice!\n");
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
        }    
    }
}