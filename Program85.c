#include <stdio.h>

void Display()
{
    for(int iCnt = 1;iCnt <= 6; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}