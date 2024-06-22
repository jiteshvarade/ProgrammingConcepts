#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    printf("\nEntered elements are : \n");
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)                 // TIME COMPLEXITY :  O(N)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
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

    Display(ptr,iCount);

    free(ptr); 
    printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}