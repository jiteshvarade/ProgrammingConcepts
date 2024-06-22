#include <stdio.h>

int DigitsCal(int iNo)
{
    int iCount = 0;

    //Joparyanta iNo zero hot nahi toprant
    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
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

    printf("NUmber of DIgits in %d is : %d",iValue,iRet);

    return 0;
}