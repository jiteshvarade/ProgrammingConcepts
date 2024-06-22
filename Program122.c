#include <stdio.h>

char ConvertCapital(char cCharacter)
{
    return cCharacter -32;
}

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter character : ");
    scanf("%c",&ch);

    cRet = ConvertCapital(ch);

    printf("Converted capital value is : %c",cRet);

    return 0;
}