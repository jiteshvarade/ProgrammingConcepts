#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)                             // TIME COMPLEXITY :  O(N)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    printf("\n");
    return iEvenCnt;
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

    iRet = Frequency(ptr,iCount);

    printf("Number of even numbers : %d\n",iRet);

    free(ptr); 
    printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}