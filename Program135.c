#include <stdio.h>
#include <stdbool.h>

int ChkVowel(char str[])
{   
    while(*str != '\0')
    {   
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char Arr [20];
    bool bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Vowel is present in string");
    }
    else
    {
        printf("Vowel is not present inside string");
    }
    
    return 0;
}