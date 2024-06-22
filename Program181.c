#include <stdio.h>
#include <stdlib.h>

void TransposeMatrix(int **Arr, int iRows, int iColumns)
{
    for(int iCnt1 = 0; iCnt1 < iColumns; iCnt1++)
    {
        for(int iCnt2 = 0; iCnt2 < iRows; iCnt2++)
        {
            printf("%d\t",Arr[iCnt2][iCnt1]);
        }
        printf("\n");
    }
}       

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int **array = NULL;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);
    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    array = (int **)malloc(iValue1 * sizeof(int *));
    if(array == NULL)
    {
        printf("Memory allocation falied!!");
        return 0;
    }

    for(int iCnt = 0; iCnt < iValue1; iCnt++)
    {
        array[iCnt] = (int *)malloc(iValue2 * sizeof(int));
    }

    // Entering elements in the array
    for(int iCnt1 = 0; iCnt1 < iValue1; iCnt1++)
    {
        printf("Enter %d row of %d elments : \n",iCnt1 + 1, iValue2);
        for(int iCnt2 = 0; iCnt2 < iValue2; iCnt2++)
        {
            scanf("%d",&array[iCnt1][iCnt2]);
        }
    }

    printf("Entered elements of the array are : \n");
    for(int iCnt1 = 0; iCnt1 < iValue1; iCnt1++)
    {
        for(int iCnt2 = 0; iCnt2 < iValue2; iCnt2++)
        {
            printf("%d\t",array[iCnt1][iCnt2]);
        }
        printf("\n");
    }

    printf("Transpose of matrix is : \n");
    TransposeMatrix(array, iValue1, iValue2);

    return 0;
}