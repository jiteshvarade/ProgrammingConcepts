#include <stdio.h>

int DigitsCal(int iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        iNo % 10;
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = DigitsCal(iValue);

    printf("Number of Digits in %d is : %d",iValue,iRet);

    return 0;
}