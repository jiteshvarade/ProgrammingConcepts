// take user from number, display factors of that numbers

#include <stdio.h>

int CalculateFactors(int iNo1)
{   
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo1; iCnt++)
    {
        if(( iNo1 % iCnt ) == 0)
        {
            printf("%d\n",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    CalculateFactors(iValue);

    return 0;
}

// Time Complexity : O(N)
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