#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Pre-Placement Activity";

    fd = open("Marvellous.txt",O_RDWR);

    if (fd == -1)
    {
        printf("\e[0;31mUnable to open file\n\e[0m");
    }
    else
    {
        iRet = write(fd, Arr,22); // write(file_discriptor, address of array, size);
        printf("%d bytes get succesfully returned into the file\n",iRet);

        close(fd); // Don't forget to close the file descriptor
    }

    return 0;
}
