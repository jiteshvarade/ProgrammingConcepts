#include <stdio.h>

int Counta(char str[],char cCharacter)
{   
    int iCnt = 0;
    while(*str != '\0')
    {   
        if(*str == cCharacter)
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
    char ch = '\0';

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the letter whose frequency you want to find : ");
    scanf("%c",&ch); // problrm due to buffer enter

    iRet = Counta(Arr,ch);

    printf("Frquency of %c is : %d\n",ch,iRet);
    
    return 0;
}