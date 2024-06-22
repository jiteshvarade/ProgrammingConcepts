#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[50] = {'\0'};  // rekama swacha array

    fd = open("Marvellous.txt",O_RDWR);  

    if (fd == -1)
    {
        perror("\e[0;31mUnable to open file\n\e[0m");
    }
    else
    {
        iRet = read(fd, Arr,22); // read(file_discriptor, address of array, size);
        printf("%d bytes get succesfully read from the file\n",iRet);

        printf("%s\n",Arr);

        close(fd); // Don't forget to close the file descriptor
    }

    return 0;
}
