#include <stdio.h>

int FactorialR(int iNo)
{
    static int iCnt = 1;
    static int iFact = 1;

    if(iCnt <= iNo)
    {
        iFact = (iFact * iCnt);
        iCnt++;
        FactorialR(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    int iRet = FactorialR(iValue);
    printf("Factorial of number is : %d",iRet);

    return 0;
}