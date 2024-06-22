// Factorial

#include <iostream>
using namespace std;

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Factorial is : "<<iRet<<endl;

    return 0;
}