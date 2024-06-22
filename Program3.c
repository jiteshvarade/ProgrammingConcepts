// Problem Statement : Accept two values from user and perform addition.

// Step 1 : Understadn the problem statement 
// Conclusion : e hae to accept two integers and perfomr its Addition

// Step 2 : Write  the alorithm 
/*
    START 
        Accept first number form user and store it into no1
        Accept second number form user and store it into no1        
        Create one variable to store the result named as Ans
        Perfomr Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user

    STOP
*/

// Step 3 : Decide the programming language (C/C++/Java/Python)
//We slect C programming

// Step 4 : Write the programm using C

#include <stdio.h>

int main()
{
    int i, j, k;
    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter second number ; \n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is : %d\n",k);

    return 0;
}