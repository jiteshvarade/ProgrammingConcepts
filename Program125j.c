#include <stdio.h>

int main()
{
    char Arr [20];

    printf("Enter the string : \n");
    scanf("%19[^'\n']",Arr);

    printf("Entered string is : %s\n",Arr);

    return 0;
}