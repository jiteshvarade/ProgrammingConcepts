#include <stdio.h>

float CalculatePercentage(float iMarks, float iTotal)
{
    auto float fPercentage = 0.0f;
    fPercentage =( (iMarks / iTotal)*100 );
    return fPercentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter your marks : ");
    scanf("%d",&iValue1);

    printf("Enter total marks : ");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue1,iValue2);

    printf("Your percentage is : %f\n",fRet);



    return 0;
}