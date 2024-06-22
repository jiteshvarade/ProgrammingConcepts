#include <stdio.h>

void DisplayExamTiming(int iStandard)
{
    if((iStandard < 1) || (iStandard > 5))      // Filter
    {
        printf("Invalid Standard\n");
    }

    if(iStandard == 1)
    {
        printf("Your Timing is 8 a.m \n");
    }
    else if(iStandard == 2)
    {
        printf("Your Timing is 9 a.m \n");
    }
    else if(iStandard == 3)
    {
        printf("Your Timing is 10 a.m \n");
    }
    else if(iStandard == 4)
    {
        printf("Your Timing is 11 a.m \n");
    }
    else if(iStandard == 5)
    {
        printf("Your Timing is 12 NOON \n");
    }
    
}

int main()
{
    auto int iValue = 0;
    printf("Enter your Standard : ");
    scanf("%d",&iValue);

    DisplayExamTiming(iValue);

    return 0;
}