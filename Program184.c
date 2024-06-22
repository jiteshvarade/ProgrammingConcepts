#include <stdio.h>
#include <unistd.h>  // For the sleep function

int main() {
    
    printf("\033[1;31m\n");
    sleep(2);
    printf(" _______________\n");
    sleep(2);
    printf("|_____    ______|\n");
    sleep(2);
    printf("      |  |      __       __        _________    _________    __     __\n");
    sleep(2);
    printf("      |  |     |__|   __|  |__    |   ___   |  |   ______|  |  |   |  |\n");
    sleep(2);
    printf("      |  |      __   |__    __|   |  |___|  |  |  |______   |  |___|  |\n");
    sleep(2);
    printf("      |  |     |  |     |  |      |   ______|  |______|  |  |   ___   |\n");
    sleep(2);
    printf(" _____|  |     |  |     |  |__    |  |______    ______|  |  |  |   |  |\n");
    sleep(2);
    printf("|________|     |__|     |_____|   |_________|  |_________|  |__|   |__|\n");
    sleep(2);
    printf("\033[0m\n");

    return 0;
}