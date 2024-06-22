// check number is prime or not

#include <stdio.h>
#include <stdbool.h>

bool ChkPrime(int iNo1)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= (iNo1 / 2); iCnt++)
    {
        if ((iNo1 % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == 1)
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
    bool iRet = false;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = ChkPrime(iValue);

    if (iRet == true)
    {
        printf("%d is Prime\n",iValue);
    }
    else
    {
        printf("%d Number is  not Prime\n",iValue);
    }

    return 0;
}

// Time Complexity : O(N/2)
