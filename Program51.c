// check number is prime or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo1)
{
    int iCnt = 0;

    if(iNo1 < 0)        // UPDATER
    {
        iNo1 = -iNo1;
    }
    // int iSum = 0;

    for (iCnt = 2; iCnt <= (iNo1 / 2); iCnt++)
    {
        if ((iNo1 % iCnt) == 0)
        {
           // iSum = iSum + iCnt;
           return false;
        }
    }

    return true;

    // if (iSum == 1)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
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

// Time Complexity : O()
