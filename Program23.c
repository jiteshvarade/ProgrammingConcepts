#include <stdio.h>

int CalculateLargestNumber(int iFirstNumber, int iSecondNumber)
{
   if( iFirstNumber > iSecondNumber)
   {
        return iFirstNumber;
   }
   else
   {
        return iSecondNumber;
   }
    
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iRet = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    iRet = CalculateLargestNumber(iValue1,iValue2);

    printf("Largest number is : %d\n",iRet);

    return 0;
}