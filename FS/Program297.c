#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[50];
    char Arr[100] = {'\0'};
    char Brr[100] = {'\0'};
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

        iRet = read(fd, Arr, 10);

        printf("%d bytes gets successffully read from the file\n",iRet);

        printf("Data from the file is : %s\n",Arr);

        iRet = read(fd, Brr, 12);

        printf("%d bytes gets successffully read from the file\n",iRet);

        printf("Data from the file is : %s\n",Brr);

        close(fd);
    }

    return 0;
}