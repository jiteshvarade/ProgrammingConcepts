#include <stdio.h>

void Display(int iNo)
{
    int Ascii_a = 97;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",Ascii_a);
        Ascii_a++;
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