#include <stdio.h>
#include <stdlib.h>

void Insert(int *NewPtr,int iSize)
{
    printf("Enter elements : \n");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&NewPtr[iCnt]);
    }
}

void Display(int *NewPtr, int iSize)
{
    printf("ELements are : \n");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",NewPtr[iCnt]);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter how many elements you want enter : ");
    scanf("%d",&iNo);

    int *ptr = NULL;
    ptr = (int *)malloc(iNo*sizeof(int));

    Insert(ptr,iNo);
    Display(ptr,iNo);
    

    free (ptr);

    return 0;
}