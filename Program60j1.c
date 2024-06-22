#include <stdio.h>

int DigitsCal(int iNo)
{
    int iSum = 0;

    //Joparyanta iNo zero hot nahi toprant
    while(iNo != 0)
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