#include <stdio.h>

void CalculateGreaterNumber(int iFirstNumber, int iSecondNumber)
{
   if( iFirstNumber > iSecondNumber)
   {
        printf("%d is greater \n",iFirstNumber);
   }
   else
   {
        printf("%d is greater \n",iSecondNumber);
   }
    
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    CalculateGreaterNumber(iValue1,iValue2);

    return 0;
}