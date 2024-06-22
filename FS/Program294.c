#include <stdio.h>
#include <stdlib.h>
#include <uniStd.h>
#include <fcntl.h>

int main()
{
    char FileName[50];
    int fd = 0;

    printf("Enter the name of file that you want to create into current directory : ");
    scanf("%s",FileName);

    unlink(FileName);

    return 0;
}