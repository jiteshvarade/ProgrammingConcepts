#include <stdio.h>

char Convert(char cCharacter)
{
    return ((cCharacter >= 'a') && (cCharacter <= 'z')) ? (cCharacter -32):(cCharacter + 32);   // pudchya la kalala paheje tu ky lehelay so  ashe code wapru naye
}

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter character : ");
    scanf("%c",&ch);

    cRet = Convert(ch);

    printf("%c",cRet);

    return 0;
}