#include <stdio.h>

int DisplayDigitsR(int iNo)
{
    int iDigit = 0;
    static int SumDigit = 0;

    if(iNo != 0)
    {
        iDigit = (iNo % 10);
        SumDigit += iDigit;
        iNo = (iNo / 10);
        DisplayDigitsR(iNo);
    }

    return SumDigit;
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    int iRet = DisplayDigitsR(iValue);
    printf("Sum of digits is : %d",iRet);

    return 0;
}