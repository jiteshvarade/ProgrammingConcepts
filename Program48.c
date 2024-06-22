// take user from number, display sum of factors 

#include <stdio.h>

int SumFactors(int iNo1)
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

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);
    printf("==================================================================================================================================\n");

    iRet = SumFactors(iValue);

    printf("Sum of Factors is : %d",iRet);

    return 0;
}

// Time Complexity : O(N/2)
// O Big o
// Order of big o

/*
    Time COmplexity      Input      Iteration Count
    O(N)                 100        100
    O(2N)                100        200
    O(N^2)               100        10000
    O(N^3)               100        100000
    O(N/2)               100        50
    O(N/4)               100        25
*/