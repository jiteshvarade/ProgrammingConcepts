#include <stdio.h>

int CountSpace(char str[])
{   
    int iCnt = 0;
    while(*str != '\0')
    {   
        if(((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')) || ((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')))
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

    iRet = CountSpace(Arr);

    printf("Frequency of vowels is : %d",iRet);
    
    return 0;
}