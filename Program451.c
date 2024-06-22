#include <stdio.h>

int Sum(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum += Arr[iCnt];
        iCnt++;
        Sum(Arr, iSize);
    }
    return iSum;
}

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};

    int iRet = Sum(Arr, 5);
    printf("Sum of elments of the array is : %d\n",iRet);

    return 0;
}