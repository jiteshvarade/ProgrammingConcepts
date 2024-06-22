#include <stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iCnt1 = 1;iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("1\t");
        }
        printf("\n\n");
    }
}

int main()
{    
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iNo1);

    printf("Enter number of column : \n");
    scanf("%d",&iNo2);
    
    Display(iNo1, iNo2);

    return 0;
}