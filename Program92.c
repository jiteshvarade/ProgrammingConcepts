#include <stdio.h>

void Display(int iNo)
{
    char ch = 'a';
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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