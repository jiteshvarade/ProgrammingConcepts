// Accept number from user and check whether the number is even or odd

#include <stdio.h>

void EvenOrOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("Number is even \n");  //Never write input and output activity in the user defined function
    }
    else 
    {
        printf("Number is odd \n");   // Never write input and output activity in the user defined function
    }
}

int main()
{   
     auto int iNo = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    EvenOrOdd(iNo);

    return 0;
}