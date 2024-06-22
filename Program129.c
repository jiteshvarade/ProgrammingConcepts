#include <stdio.h>

int Counta(char str[])
{   
    int iCnt = 0;
    while(*str != '\0')
    {   
        if(*str == 'a')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr [20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%20[^'\n']",Arr);

    iRet = Counta(Arr);

    printf("Frquency of a is : %d\n",iRet);
    
    return 0;
}