// Singly circular linked list

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
    PNODE Temp = Head;
    if(Temp == NULL)
    {
        return 0;
    }
    else
    {
        while(Temp->Next != Head)
        {
            iCount++;
            Temp = Temp->Next;
        }
        iCount++; // For the last element to count
    }

    return iCount;
}

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE Temp = *Head;
    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    if(NewNode == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    NewNode->iData = iNo;
    NewNode->Next = NULL;

    if(*Head == NULL) // if Linked List is empty
    {
        *Head = NewNode;
        NewNode->Next = NewNode;
    }
    else // If linked is not empty
    {
        while(Temp->Next != (*Head))
        {
            Temp = Temp->Next;
        }
        NewNode->Next = *Head;
        *Head = NewNode;
        Temp->Next = *Head;
        Temp = NULL;
    }
}

void InsertLast(PPNODE Head, int iNo)
{
    PNODE Temp = *Head;
    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    if(NewNode == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    NewNode->iData = iNo;
    NewNode->Next = NULL;

    if(*Head == NULL) // if Linked List is empty
    {
        *Head = NewNode;
        NewNode->Next = NewNode;
    }
    else // If linked is not empty
    {
        while(Temp->Next != (*Head))
        {
            Temp = Temp->Next;
        }
        NewNode->Next = *Head;
        Temp->Next = NewNode;
        Temp = NULL;
    }
}

void InsertAtPos(PPNODE Head, int iNo, int iLoc)
{

}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    
    if(*Head == NULL)
    {
        printf("Cannot delete element as thier are no elements int the linked list\n");
        return;
    }
    else
    {   
        
    }
}

void DeleteLast(PPNODE Head)
{

}

void DeleteAtPos(PPNODE Head, int iLoc)
{

}

void Display(PNODE Head)
{
    int iCount = Count(Head);
    PNODE Temp = Head;
    if(Temp == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }
    else
    {
        while(Temp->Next != Head)
        {
            printf("| %d | -> ",Temp->iData);
            Temp = Temp->Next;
        }
        printf("| %d | -> ",Temp->iData); // For the last element to print
    }
    printf("\n");

    if(iCount == 1)
    {
        printf("^________^\n");
    }
    else
    {
        printf("^_________");
        for(int iCnt = 1; iCnt <= iCount - 2; iCnt++)
        {
            printf("__________");
        }
        printf("_________\n");
    }

}

// As this code is for only coding practices so we write Dealloacte memory for LInked List code 
// For industrail purpose we dont write Deallocate memory funciton as we want to preserve that linked list after the code gets executed
void DeallocateMemory(PPNODE Head)
{

}

int main()
{
    PNODE First = NULL;
    int iChoice = 0;
    int iValue = 0;
    int iLoc = 0;
    int iRet = 0;
    //Menu driven main function
    while(1)
    {
        printf("------------------------------------MENU-------------------------------------\n");
        printf("1.Insert at first position\n2.Insert at end\n3.Insert at any position\n4.Delete the first node\n5.Delete the last node\n6.Delete a node at any position\n7.Display the linked list\n8.Count the number of elements in the linked list\n9.Exit\n");
        printf("Enter your Choice : ");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1 :
                printf("Enter element you want to enter : ");
                scanf("%d",&iValue);
                InsertFirst(&First, iValue);
                break;
            case 2 : 
                printf("Enter element you want to enter : ");
                scanf("%d",&iValue);
                InsertLast(&First, iValue);
                break;
            case 3 :
                printf("Enter element you want to enter : ");
                scanf("%d",&iValue);
                printf("Enter the position you want to enter the element : ");
                scanf("%d",&iLoc);
                InsertAtPos(&First, iValue, iLoc);
                break;
            case 4 :
                DeleteFirst(&First);
                break;
            case 5 : 
                DeleteLast(&First);
                break;
            case 6 :
                printf("Enter the position you want to delete the node : ");
                scanf("%d",&iLoc);
                DeleteAtPos(&First, iLoc);
                break;
            case 7 :
                Display(First);
                break;
            case 8 : 
                iRet = Count(First);
                printf("Number of elements in the circular Linked list are : %d",iRet);
                break;
            case 9 : 
                DeallocateMemory(&First);
                exit(0); // Ends the program directly without going to return 0 statement
                break;
            default :
                printf("Invalid Choice!\n");
                break;
        }
        printf("\n\n");
    }

    return 0;
}

// Finally i am now happy in my life............................