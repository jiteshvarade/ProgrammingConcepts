#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    fd = open("Marvellous.txt", O_CREAT, 0777);

    if (fd == -1)
    {
        perror("\e[0;31mUnable to create file\n\e[0m");
    }
    else
    {
        printf("File is successfully created with fd: %d\n", fd);
    }

    close(fd); // Don't forget to close the file descriptor

    return 0;
}
