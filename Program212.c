#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int iData;
    struct Node * Next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

// void InsertFirst(PPNODE Head, int iNo)
void Push(PPNODE Head, int iNo)
{
    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    if(NewNode == NULL)
    {
        printf("Memory allocation falied\n");
    }
    else
    {
        NewNode->iData = iNo;
        NewNode->Next = NULL;

        if(*Head == NULL)
        {
            *Head = NewNode;
        }
        else
        {
            NewNode->Next = (*Head);
            (*Head) = NewNode;
        }
    }
}

// void DeleteFirst(PPNODE Head)
int Pop(PPNODE Head)
{
    int iNo = 0;
    PNODE Temp = NULL;
    if(*Head == NULL)
    {
        printf("Stack is empty cannot pop element\n");
    }
    else if((*Head)->Next == NULL)
    {
        Temp = (*Head);
        *Head = NULL;
        iNo = Temp->iData;
        free (Temp);
        Temp = NULL;
        return iNo;
    }
    else
    {
        Temp = (*Head);
        (*Head) = (*Head)->Next;
        Temp->Next = NULL;
        iNo = Temp->iData;
        free (Temp);
        Temp = NULL;
        return iNo;
    }
}

void Display(PNODE Head)
{
    printf("Elements of stack are  :\n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head->iData);
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iRet = 0;
    int iChoice = 0;

    while(1)
    {
        printf("---------Menu----------\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1 :
                printf("Enter element : ");
                scanf("%d",&iValue);
                Push(&First, iValue);
                break;
            case 2 :
                iRet = Pop(&First);
                break;
            case 3 :
                Display(First);
                break;
            case 4 : 
                return 0;
                break;
            default :
                printf("Invalid input \n");
                break;
        }
    }

    return 0;
}