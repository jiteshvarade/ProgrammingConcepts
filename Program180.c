#include <stdio.h>

struct Node
{
    int iData;
    struct Node * Left;
    struct Node * Right;
};

void PreOrder(struct Node * Tree)
{
    if(Tree != NULL)
    {
        printf("%d",Tree->iData);
        PreOrder(Tree->Left);
        PreOrder(Tree->Right);
    }
}

void InOrder(struct Node * Tree)
{
    if(Tree != NULL)
    {
        InOrder(Tree->Left);
        printf("%d",Tree->iData);
        InOrder(Tree->Right);
    }
}

void PostOrder(struct Node * Tree)
{
    if(Tree != NULL)
    {
        PostOrder(Tree->Left);
        PostOrder(Tree->Right);
        printf("%d",Tree->iData);
    }
}

int main()
{
    struct Node obj1,obj2,obj3,obj4,obj5;

    obj1.iData = 1;
    obj2.iData = 2;
    obj3.iData = 3;
    obj4.iData = 4;
    obj5.iData = 5;

    struct Node * Root = &obj1;

    obj1.Left = &obj2;
    obj1.Right = &obj3;
    obj2.Left = &obj4;
    obj2.Right = &obj5;
    obj3.Left = NULL;
    obj3.Right = NULL;
    obj4.Left = NULL;
    obj4.Right = NULL;
    obj5.Left = NULL;
    obj5.Right = NULL;
    printf("PreOrder : \n");
    PreOrder(Root);
    printf("\n");
    printf("InOrder : ");
    InOrder(Root);
    printf("\n");
    printf("PostOrder : ");
    PostOrder(Root);
    printf("\n");

    return 0;
}