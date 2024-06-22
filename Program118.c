#include <stdio.h>
#include <stdbool.h>

bool ChkCapitalOrNot(char cCharacter)
{
    return ((cCharacter >= 65) && (cCharacter <= 90)) ? true:false;
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character : ");
    scanf("%c",&ch);

    bRet = ChkCapitalOrNot(ch);

    if(bRet == true)
    {
        printf("Character is capital.");
    }
    else
    {
        printf("Character is small.");
    }

    return 0;
}