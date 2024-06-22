#include <stdio.h>

int Counta(char str[])
{   
    int iCnt = 0;
    while(*str != '\0')
    {   
        if((*str >= 'a') && (*str <= 'z'))
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
    scanf("%[^'\n']s",Arr);

    iRet = Counta(Arr);

    printf("Frquency of small letters is : %d\n",iRet);
    
    return 0;
}