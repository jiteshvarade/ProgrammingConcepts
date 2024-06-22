#include <stdio.h>

void strlenX(char str[])
{
    printf("String is : %s\n",str);
}

int main()
{
    char Arr [20];

    printf("Enter the string : \n");
    scanf("%20[^'\n']",Arr);

    strlenX(Arr);

    return 0;
}