#include <iostream>
using namespace std;

float Addition(float iNo1, float iNo2)
{
    float Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    float iValue1 = 0;
    float iValue2 = 0;
    float fRet = 0;

    cin >> iValue1;
    cin >> iValue2;

    fRet = Addition(iValue1, iValue2);

    cout << "Addition is : " << fRet;

    return 0;
}