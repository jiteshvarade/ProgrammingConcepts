// take user from number, check whether number is perfect number or not

#include <stdio.h>
#include <stdbool.h>

/*
ALGORITHM FOR ChkPerfect function

START 
    1.create integer variable iCnt and initialize it with zero
    2.create integer variable iSum and initialize it with zero
    3.reinitialize iCnt = 1
    4.Run step 5 until iCnt <= (iNo1/2)
    5.IF (iNo1 % iCnt) == 0
        SET iSum = iSum + iCnt
    6.IF iSum == iNo1
        return true
      ELSE return false
STOP
*/
bool ChkPerfect(int iNo1)
{   
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo1/2); iCnt++)
    {
        if(( iNo1 % iCnt ) == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }

    if(iSum == iNo1)
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

    iRet = ChkPerfect(iValue);

    if(iRet == true)
    {
        printf("Number is Perfect\n");
    }
    else
    {
        printf("Number is  not Perfect\n");
    }

    return 0;
}

// Time Complexity : O(N/2)
