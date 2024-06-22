// take user from number, display factors of that numbers

#include <stdio.h>

int CalculateFactors(int iNo1)
{   
    int iCnt = 0;
    ////////////////////////////////////////////////////////
    //   filter
    // int iCnt2 = 0;

    // for(iCnt2 = 2; iCnt2 < iNo1; iCnt2++)
    // {
    //     if(( iNo1 % iCnt2 ) == 0)
    //     {
    //         printf("Number if not a prime number\n");
    //         break;
    //     } 

        // {
        //     if((((iNo1) % iNo1 - 1) == 0 ) )
        //     {
        //         printf("Number if not a prime number\n");
        //         break;
        //     }
        //     else{
        //         printf("NUmber is prime number");
        //     }
        // }
        
    //}
    ////////////////////////////////////////////////////////
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