// take file name and display whole contents of the file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};

    int fd = 0;
    int iRet = 0;

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

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            printf("%s",Arr);
        }

        close(fd);
    }

    return 0;
}