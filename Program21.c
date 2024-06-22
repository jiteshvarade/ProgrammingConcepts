#include <stdio.h>

void DisplayExamTiming(int iStandard)
{
    switch(iStandard)
    {
        case 1 :
            printf("Your Timing is 8 a.m \n");
            break;
        case 2 :
            printf("Your Timing is 9 a.m\n");
            break;
        case 3 :
            printf("Your Timing is 10 a.m\n");
            break;
        case 4 :
            printf("Your Timing is 11 a.m\n");
            break;
        case 5 :
            printf("Your Timing is 12 NOON\n");
            break;
        default :
            printf("Wrong input ..\n");
        
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