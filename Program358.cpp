#include <iostream>
using namespace std;

double Addition(double iNo1, double iNo2)
{
    double Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    double iValue1 = 0;
    double iValue2 = 0;
    double fRet = 0;

    cin >> iValue1;
    cin >> iValue2;

    fRet = Addition(iValue1, iValue2);

    cout << "Addition is : " << fRet;

    return 0;
}