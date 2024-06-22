#include <stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo1 -1; iCnt++)
    {
        printf("Jay Ganesh...%d\n",iCnt);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}

/*
int iCnt = 0;   // iCnt integer counter
for(iCnt  = 1; iCnt<=5; iCnt++)
{
    printf("Jay Ganesh...\n");
}
*/