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

    fd = open(FileName, O_CREAT, 0777); // 0 because 0777 is octal number

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets created successfully with the file descriptor %d\n",FileName,fd);
        close(fd);
    }

    return 0;
}