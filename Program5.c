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

// Addition is function which accepts two parameters as integers and it return integer
int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number ; \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1, iValue2);
    
    printf("Addition is : %d\n",iAns);

    return 0;
}

// Step 5: Test the code

/*
Test case 1 :
Input : 10 11
Output : 21

Test case 2 :
Input : 10 0
Output : 10

Test case 3 : 
Input : 12 -6
Output : 6

Test case 4 :
Input : -6 -5
Output : -11
*/