#include <stdio.h>
#include <stdbool.h>

bool ReverseNum(int iNo)
{   
    int iCopy = iNo;          // Xerox kadli
    int iRev = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10 ) + iDigit;
    }

    if(iRev == iCopy)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ReverseNum(iValue);

    if(bRet == true)
    {
        printf("Number is palindrom!\n");
    }
    else
    {
        printf("Number is not a Palindrom!!\n");
    }

    return 0;
}