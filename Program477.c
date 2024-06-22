#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL) // Bst is empty
    {
        *Head = newn;
    }
    else // Bst contains alteast one node
    {
        while(1)  // unconditional loop
        {
            if(no == temp->data)
            {
                printf("Unable to insert as data is already present\n");
                free(newn);
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(no < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\t",Head->data);
    }
}

bool Search(PNODE Head, int no)
{
    bool flag = false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
    }

    while(Head != NULL)
    {
        if(no == Head->data)
        {
            flag = true;
            break;
        }
        else if(no > Head->data)
        {
            Head = Head->rchild;
        }
        else if(no < Head->data)
        {
            Head = Head->lchild;
        }
    }
    return flag;
}

int Count(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }

    return iCnt;
}

int CountLeaf(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) && (Head->rchild == NULL))
        {
            iCnt++;
        }
        CountLeaf(Head->lchild);
        CountLeaf(Head->rchild);
    }

    return iCnt;
}

int CountParent(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild != NULL) || (Head->rchild != NULL))
        {
            iCnt++;
        }
        CountParent(Head->lchild);
        CountParent(Head->rchild);
    }

    return iCnt;
}

int Sum(PNODE Head)
{
    static int iSum = 0;

    if(Head != NULL)
    {
        iSum = iSum + (Head->data);
        Sum(Head->lchild);
        Sum(Head->rchild);
    }

    return iSum;
}

int CountEven(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->data % 2) == 0)
        {
            iCnt++;
        }
        CountEven(Head->lchild);
        CountEven(Head->rchild);
    }

    return iCnt;
}

int CountOdd(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->data % 2) != 0)
        {
            iCnt++;
        }
        CountOdd(Head->lchild);
        CountOdd(Head->rchild);
    }

    return iCnt;
}

int main()
{
    bool bRet = false;
    int iRet = 0;
    int iValue = 0;
    PNODE first = NULL;
    
    Insert(&first, 21),
    Insert(&first, 11);
    Insert(&first, 17);
    Insert(&first, 45);
    Insert(&first, 10);
    Insert(&first, 78);
    Insert(&first, 30);
    Insert(&first, 5);
    Insert(&first, 11);

    printf("\nInorder : \n");
    Inorder(first);
    printf("\nPreorder : \n");
    Preorder(first);
    printf("\nPostorder : \n");
    Postorder(first);
    printf("\n");

    printf("Enter the value you want to search : ");
    scanf("%d",&iValue);
    bRet = Search(first, iValue);
    if(bRet == true)
    {
        printf("Element is present in the BST\n");
    }
    else
    {
        printf("Element is not present in the BST\n");
    }

    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    iRet = CountLeaf(first);
    printf("Number of leaf nodes are : %d\n",iRet);

    iRet = CountParent(first);
    printf("Number of parent nodes are : %d\n",iRet);

    iRet = Sum(first);
    printf("Summation of all elments is : %d\n",iRet);

    iRet = CountEven(first);
    printf("Number of even elements are : %d\n",iRet);

    iRet = CountOdd(first);
    printf("Number of odd elements are : %d\n",iRet);

    return 0;
}