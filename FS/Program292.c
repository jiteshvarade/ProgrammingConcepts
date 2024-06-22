#include <stdio.h>
#include <stdlib.h>
#include <uniStd.h>
#include <fcntl.h>

int main()
{
    char FileName[50];
    int fd = 0;

    printf("Enter the name of file that you want to open from current directory : ");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets oppened successfully with the file descriptor %d\n",FileName,fd);
        close(fd);
    }

    return 0;
}