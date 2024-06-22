#include <stdio.h>
#include <stdbool.h>

bool ChkSmall(char cCharacter)
{
    return ((cCharacter >= 'a') && (cCharacter <= 'z')) ? true:false;
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character : ");
    scanf("%c",&ch);

    bRet = ChkSmall(ch);

    if(bRet == true)
    {
        printf("Character is small.");
    }
    else
    {
        printf("Character is capital.");
    }

    return 0;
}