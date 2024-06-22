// check number is prime or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo1)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo1 < 0)        // UPDATER
    {
        iNo1 = -iNo1;
    }

    for (iCnt = 2; iCnt <= (iNo1 / 2); iCnt++)
    {
        if ((iNo1 % iCnt) == 0)
        {
           bFlag = false;
           break;
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = CheckPrime(iValue);

    if (iRet == true)
    {
        printf("%d is Prime number\n",iValue);
    }
    else
    {
        printf("%d is  not Prime number\n",iValue);
    }

    return 0;
}

// Time Complexity : O((N/2) - 1)
