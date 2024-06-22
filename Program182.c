#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int iData;
    struct Node * Next;
}NODE, *PNODE, **PPNODE;

int Count(PNODE Head, PNODE Tail)
{
    int iCount = 0;
    if(Head == NULL && Tail == NULL)
    {
        return 0;
    }
    else
    {
        PNODE Temp = Head;
        while(Temp->Next != Head)
        {
            iCount++;
            Temp = Temp->Next;
        }
        iCount++;
    }

    return iCount;
}

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
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

        if(((*Head) == NULL) && ((*Tail) == NULL)) // LL is empty
        {   
            (*Head) = NewNode;
            NewNode->Next = (*Head);
            (*Tail) = NewNode;
            printf("Linked list was empty\nElement inserted\n");
        }
        else // LL is not empty
        {
            NewNode->Next = (*Head);
            (*Tail)->Next = NewNode;
            (*Head) = NewNode;
            printf("Element inserted at first\n");
        }
    }
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
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

        if(((*Head) == NULL) && ((*Tail) == NULL)) // LL is empty
        {   
            (*Head) = NewNode;
            NewNode->Next = (*Head);
            (*Tail) = NewNode;
            printf("Linked list was empty\nElement inserted\n");
        }
        else // LL is not empty
        {
            (*Tail)->Next = NewNode;
            NewNode->Next = (*Head);
            (*Tail) = NewNode;
            printf("Element inserted at Last\n");
        }
    }
}

void InsertPos(PPNODE Head, PPNODE Tail, int iNo, int iPos)
{   
    int iNoElements = Count(*Head, *Tail);
    PNODE Temp = (*Head);

    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    if(NewNode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        if(iPos == 1)
        {
            InsertFirst(Head, Tail, iNo);
        }
        else if(iPos == iNoElements + 1)
        {
            InsertLast(Head, Tail, iNo);
        }
        else if((iPos > iNoElements + 1) || (iPos < 1))
        {
            free (NewNode);
            NewNode = NULL;
            printf("Cannot insert element as there are less elements in the Linked list\n");
        }
        else
        {
            NewNode->iData = iNo;
            NewNode->Next = NULL;
            for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
            {
                Temp = Temp->Next;
            }

            NewNode->Next = Temp->Next;
            Temp->Next = NewNode;
            Temp = NULL;
            printf("Element inserted at position %d\n",iPos);
        }
    }
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    PNODE Temp = NULL;
    if(((*Head) == NULL) && ((*Tail) == NULL))
    {
        printf("Cannot delete element from first as Linked List is empty\n");
    }
    else if((*Head)->Next == (*Head))
    {
        Temp = (*Head);
        (*Head) = NULL;
        (*Tail) = NULL;
        Temp->Next = NULL;
        free (Temp);
        Temp = NULL;
        printf("Element deleted from first\nLinked List is now empty as there was only one element present in the Linked List\n");
    }
    else
    {
        Temp = (*Head);
        (*Head) = Temp->Next;
        (*Tail)->Next = (*Head);
        Temp->Next = NULL;
        free (Temp);
        Temp == NULL;
        printf("Element deleted from first\n");
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE Temp = NULL;
    if(((*Head) == NULL) && ((*Tail) == NULL))
    {
        printf("Cannot delete element from first as Linked List is empty\n");
    }
    else if((*Head)->Next == (*Head))
    {
        Temp = (*Tail);
        (*Head) = NULL;
        (*Tail) = NULL;
        Temp->Next = NULL;
        free (Temp);
        Temp = NULL;
        printf("Element deleted from first\nLinked List is now empty as there was only one element present in the Linked List\n");
    }
    else
    {
        Temp = (*Head);
        while(Temp->Next != (*Tail))
        {
            Temp = Temp->Next;
        }
        (*Tail) = Temp;
        Temp = Temp->Next;
        Temp->Next = NULL;
        (*Tail)->Next = (*Head);
        free (Temp);
        Temp = NULL;
        printf("Element deleted from last\n");
    }
}

void DeletePos(PPNODE Head, PPNODE Tail, int iPos)
{
    int iNoElements = Count(*Head, *Tail);
    PNODE ToDelete = NULL;
    PNODE Temp = (*Head);
    
    if(iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(iPos == iNoElements)
    {
        DeleteLast(Head, Tail);
    }
    else if((iPos > iNoElements) || (iPos < 1))
    {
        printf("Cannot delete element as there are less elements in the Linked list\n");
    }
    else
    {
        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->Next;
        }

        ToDelete = Temp->Next;
        Temp->Next = ToDelete->Next;
        ToDelete->Next = NULL;
        free (ToDelete);
        ToDelete = NULL;

        printf("Element deleted from position %d\n",iPos);
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if(Head == NULL && Tail == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        printf("Circular Linked List is : \n");
        printf("\033[1;34m\n");
        int iNoElements = Count(Head, Tail);
        PNODE Temp = Head;
        printf("-> ");
        while(Temp->Next != Head)
        {
            printf("| %d | -> ",Temp->iData);
            Temp = Temp->Next;
        }
        printf("| %d | -> ",Temp->iData);
        Temp = NULL;
        printf("\n");
        ///////////////////////////////////////////////
        if(Head->Next == Head)
        {
            printf("|__________|\n");
        }
        else if(Head->Next->Next == Head)
        {
            printf("|___________________|\n");
        }
        else
        {
            printf("|___________");
            for(int iCnt = 1; iCnt <= iNoElements - 2; iCnt++)
            {
                printf("_________");
            }
            printf("________|");
        }
        printf("\033[0m\n");
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
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
                InsertFirst(&First, &Last, iValue);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 2 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("Enter element : ");
                scanf("%d",&iValue);
                InsertLast(&First, &Last, iValue);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 3 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("Enter element : ");
                scanf("%d",&iValue);
                printf("Enter position : ");
                scanf("%d",&iLoc);
                InsertPos(&First, &Last, iValue, iLoc);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 4 : 
                printf("---------------------------------------------------------------------------------------------------------\n");
                DeleteFirst(&First, &Last);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 5 : 
                printf("---------------------------------------------------------------------------------------------------------\n");
                DeleteLast(&First, &Last);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 6 :    
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("Enter position : ");
                scanf("%d",&iLoc);
                DeletePos(&First, &Last, iLoc);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 7 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                Display(First, Last);
                printf("---------------------------------------------------------------------------------------------------------\n");
                break;
            case 8 :
                printf("---------------------------------------------------------------------------------------------------------\n");
                iRet = Count(First, Last);
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