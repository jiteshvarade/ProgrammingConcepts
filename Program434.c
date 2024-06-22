#include <stdio.h>

void DisplayI()   // DisplayIteration
{
    int iCnt = 0;
    while(iCnt < 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;
    if(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}