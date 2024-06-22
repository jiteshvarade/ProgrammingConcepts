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

// void InserLast(PPNODE Head, int iNo)
void Enqueue(PPNODE Head, int iNo)
{
    PNODE Temp = NULL;
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
            Temp = (*Head);
            while(Temp->Next != NULL)
            {
                Temp = Temp->Next;
            }
            Temp->Next = NewNode;
            Temp = NULL;
        }
    }
}

// void DeleteFirst(PPNODE Head)
int Dequeue(PPNODE Head)
{
    int iNo = 0;
    PNODE Temp = NULL;
    if(*Head == NULL)
    {
        printf("Queue is empty cannot pop element\n");
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
    printf("Elements of Queue are  :\n");

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
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1 :
                printf("Enter element : ");
                scanf("%d",&iValue);
                Enqueue(&First, iValue);
                break;
            case 2 :
                iRet = Dequeue(&First);
                printf("Removed element from the queue is : %d\n",iRet);
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