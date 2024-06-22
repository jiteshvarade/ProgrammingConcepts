#include <stdio.h>   // for printf and scanf
#include <stdlib.h>  // for malloc and free

int main()
{
    int iCount = 0;
    int *ptr = NULL;

    printf("Enter the numbers of elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
}