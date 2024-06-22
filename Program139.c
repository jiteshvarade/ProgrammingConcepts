#include <stdio.h>

void CountSpace(char str[])
{   
    int iCnt = 0;
    while(*str != '\0')
    {   
        if(*str == 'a')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr [20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    CountSpace(Arr);

    printf("Updated string is : %s",Arr);
    
    return 0;
}