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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    if(newn == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    newn->data = No;
    newn->next = NULL;
}

int main()
{
    PNODE First = NULL;   // 8 bytes

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    return 0;
}