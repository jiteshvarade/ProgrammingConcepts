#include <stdio.h>

void Display()
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iCnt1 = 1;iCnt1 <= 3; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= 4; iCnt2++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{    
    Display();

    return 0;
}