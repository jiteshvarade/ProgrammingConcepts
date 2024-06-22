#include <stdio.h>
#include <stdlib.h>

int AdditionOfElements(int Arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)                 // TIME COMPLEXITY :  O(N)
    {
        iSum += Arr[iCnt];
    }
    return iSum;
}   

int main()
{
    int iCount = 0;
    int iRet = 0;
    printf("Enter number of elements you want to store : ");
    scanf("%d",&iCount);

    int *ptr = NULL;
    ptr = (int *)malloc(iCount*sizeof(int));
    printf("Dynamic memoery gets allocated successfully for %d elements\n",iCount);
    
    printf("Enter the %d values\n",iCount);
    int iCnt = 0;
    for(iCnt = 0; iCnt<iCount; iCnt++)                          
    {
        printf("\nEnter the number element no %d : ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = AdditionOfElements(ptr,iCount);
    printf("Sum of Elements : %d\n",iRet);

    free(ptr); 
    printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}