#include <stdio.h>

long int CalculateCube(int iNumber)
{
    long int iAns = 0;
    iAns = iNumber*iNumber*iNumber;
    return iAns;
}

int main()
{
    auto int iValue = 0;
    auto long int iCube = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iCube = CalculateCube(iValue);

    printf("Cube of number is : %ld\n",iCube);

    return 0;
}