// To check loop inside linked list
// means there are 5 nodes int he linked list and the last node points to the third node forming a loop in the linked list

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

bool LoopCheck(PNODE Head)
{
    PNODE Student = Head;
    PNODE Teacher = Head;
    bool bFalg = false;

    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Student = Student->next;
        Teacher = Teacher->next->next;

        if(Student == Teacher)
        {
            bFalg = true;
            break;
        }
    }
    return bFlag;
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

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
    
    PNODE ThirdNode = NULL;
    PNODE LsatNode = NULL;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    ThirdNode = First;
    LsatNode = First;
    ThirdNode = ThirdNode->next->next;
    LsatNode = LsatNode->next->next->next->next;
    LsatNode->next = ThirdNode;

    bool bRet = LoopCheck(First);

    if(bRet)
    {
        printf("Loop detected in the linked list\n");
    }
    else
    {
        printf("There is no loop in the linked list\n");
    }


    return 0;
}