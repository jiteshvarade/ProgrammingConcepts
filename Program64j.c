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

void Display(int *NewPtr, int *ArrSize)
{
    printf("ELements are : \n");
    for(int iCnt = 0; iCnt < (*ArrSize); iCnt++)
    {
        printf("%d\t",NewPtr[iCnt]);
    }
    printf("\n");
}

void NewElement(int *Arr , int *ArrSize)
{
    int iNum = 0;
    printf("Enter new element : ");
    scanf("%d",&iNum);

    *ArrSize += 1; 
    Arr = (int *)realloc(Arr,(*ArrSize) * (sizeof(int)));
    Arr[*ArrSize - 1] = iNum;
}

int main()
{
    int iNo = 0;
    printf("Enter how many elements you want enter : ");
    scanf("%d",&iNo);

    int *ptr = NULL;
    ptr = (int *)malloc(iNo*sizeof(int));

    Insert(ptr,iNo);
    Display(ptr,&iNo);
    NewElement(ptr,&iNo);
    Display(ptr,&iNo);
    
    free (ptr);

    return 0;
}