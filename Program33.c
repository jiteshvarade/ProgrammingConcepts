#include <stdio.h>

void Display(int iNo1)
{   
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("%d\n",iCnt);
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