#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Logic Building with Industrial Project Development";

    fd = open("Marvellous.txt",O_RDWR);

    if (fd == -1)
    {
        perror("\e[0;31mUnable to open file\n\e[0m");
    }
    else
    {
        printf("File is successfully created with fd: %d\n", fd);
        iRet = write(fd, Arr,14); // write(file_discriptor, address of array, size);
        printf("%d bytes get succesfully returned into the file\n",iRet);

        close(fd); // Don't forget to close the file descriptor
    }

    return 0;
}
