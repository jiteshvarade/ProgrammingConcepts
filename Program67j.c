#include <stdio.h>
#include <stdlib.h>

void Insert(int *NewPtr, int iSize)
{
    printf("Enter elements: \n");
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &NewPtr[iCnt]);
    }
}

void Display(int *NewPtr, int iSize)
{
    printf("Elements are: \n");
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", NewPtr[iCnt]);
    }
    printf("\n");
}

void NewElement(int **NewPtr, int *iSize)
{
    int iNewElement = 0;
    printf("\nEnter new element to add to the array: ");
    scanf("%d", &iNewElement);

    *iSize = (*iSize) + 1;
    *NewPtr = (int *)realloc(*NewPtr, ((*iSize) * sizeof(int)));

    if (*NewPtr == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    (*NewPtr)[*iSize - 1] = iNewElement;
}

int main()
{
    int iNo = 0;
    printf("Enter how many elements you want to enter: ");
    scanf("%d", &iNo);

    int *ptr = NULL;
    ptr = (int *)malloc(iNo * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    Insert(ptr, iNo);
    Display(ptr, iNo);
    NewElement(&ptr, &iNo);
    Display(ptr, iNo);

    free(ptr);

    return 0;
}
