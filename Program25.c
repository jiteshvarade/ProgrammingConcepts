#include <stdio.h>

float CalculateAverage(int iFirstNumber, int iSecondNumber, int iThirdNumber)
{
    float fAverage = 0.0f;
    fAverage = (((float)iFirstNumber + (float)iSecondNumber + (float)iThirdNumber) / 3 );
    return fAverage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto float iRet = 0.0f;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    printf("Enter third number : ");
    scanf("%d",&iValue3);

    iRet = CalculateAverage(iValue1,iValue2,iValue3);

    printf("Average  is : %f\n",iRet);

    return 0;
}