// take user from number, display factors of that numbers

#include <stdio.h>

int CalculateFactors(int iNo1)
{   
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo1/2); iCnt++)
    {
        if(( iNo1 % iCnt ) == 0)
        {
            printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
        
    }

    printf("Sum of Factors is : %d",iSum);
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);
    printf("==================================================================================================================================\n");

    CalculateFactors(iValue);

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