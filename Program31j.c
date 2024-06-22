#include <stdio.h>

void Display(int iNo1)
{   
    char sInsert[90];
    printf("Enter what you display : \n");
    scanf(" %[^\n]s",sInsert);

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("%s\n",sInsert);
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