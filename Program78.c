#include <stdio.h>
#include <stdlib.h>

float AerageofElements(int Arr[], int iSize)
{
    float fAvg = 0.0f;
    int iCnt = 0;
    for(;iCnt < iSize; iCnt++)
    {
        fAvg += (float)Arr[iCnt];
    }
    return (fAvg / (float)iSize); 
}

int main()
{
    int iCount = 0;
    float fRet = 0.0f;
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

    fRet = AerageofElements(ptr,iCount);
    printf("Average of elements is : %.1f\n",fRet);

    free(ptr); 
    printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}