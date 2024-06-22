#include <stdio.h>

int SumFactorsR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;
    if(iCnt <= (iNo/2))
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
        iCnt++;
        SumFactorsR(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    int iRet = SumFactorsR(iValue);
    printf("Sum of factors of the nunumber %d is  : %d",iValue, iRet);

    return 0;
}