#include <stdio.h>

void Display(int iNo)
{
    int Ascii_A = 65;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",Ascii_A);
        Ascii_A++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}