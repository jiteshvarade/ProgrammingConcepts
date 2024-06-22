#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Angular Web Development";

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);  // O_APPEND to move cursor to the ned of the file

    if (fd == -1)
    {
        perror("\e[0;31mUnable to open file\n\e[0m");
    }
    else
    {
        iRet = write(fd, Arr,23); // write(file_discriptor, address of array, size);
        printf("%d bytes get succesfully written into the file\n",iRet);

        close(fd); // Don't forget to close the file descriptor
    }

    return 0;
}
