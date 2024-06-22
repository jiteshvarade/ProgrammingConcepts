#include <stdio.h>

int CalculateLargest(int iFirstNumber, int iSecondNumber, int iThirdNumber)
{
    if((iFirstNumber >= iSecondNumber) && (iFirstNumber >= iSecondNumber))
    {
        return iFirstNumber;
    }
    else if((iSecondNumber >= iFirstNumber) && (iSecondNumber >= iThirdNumber))
    {
        return iSecondNumber;
    }
    else
    {
        return iThirdNumber;
    }
    
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto int iRet = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    printf("Enter third number : ");
    scanf("%d",&iValue3);

    iRet = CalculateLargest(iValue1,iValue2,iValue3);

    printf("Largest number is : %d\n",iRet);

    return 0;
}