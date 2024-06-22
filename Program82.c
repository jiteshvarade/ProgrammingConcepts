#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize, int iNum)
{
    int iCnt = 0;

    int iFrequency = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNum)
        {
            iFrequency++;
        }
    }
    return iFrequency;
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

    int iValue = 0;
    printf("Enter the Element  whose frequency you want to find : ");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iCount,iValue);

    printf(" Number %d repeats %d times\n",iValue,iRet);

    free(ptr); 
    printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}