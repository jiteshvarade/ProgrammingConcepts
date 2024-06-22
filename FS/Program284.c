#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // universal standard header file
#include <fcntl.h> // file control header file // for macros for O_RDONLY, O_WRONLY, O_RDWR

int main()
{
    int fd = 0; // File discriptor
    fd = open("C:/Users/jites/Desktop/college/BOOM.c", O_RDONLY);
    if(fd == -1)
    {
        printf("\e[0;31mUnable to open file\n\e[0m");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n", fd);
    }

    return 0;
}