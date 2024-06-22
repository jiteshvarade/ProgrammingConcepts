#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int iData;
    struct Node * Next;
    struct Node * Prev;
}

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Count()
{

}

void InsertFirst()
{

}

void InsertLast()
{

}

void InsertPos()
{

}

void DeleteFirst()
{

}

void DeleteLast()
{

}

void DeletePos()
{

}

void Display()
{

}

int main()
{
    int iChoice = 0;
    int iNo = 0;
    int iRet = 0;
    int iLoc = 0;

    while(1)
    {
        printf("---------------------------MENU--------------------------\n");
        printf("1.Insert element at first\n2.Insert element at last\n3.Insert element at any position\n4.Delete element from first\n5.Delete element from last\n6.Delete element from any position\n7.Display elements of linked list\n8.Count number of elements in linked list\n9.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&iChoice);

        switch()
    }
    return 0;
}