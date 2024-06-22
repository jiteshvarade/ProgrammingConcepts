#include <stdio.h>

int DigitsCal(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <=;iCnt++)
    {
        iSum += (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = DigitsCal(iValue);

    printf("NUmber of DIgits in %d is : %d",iValue,iRet);

    return 0;
}