#include <iostream>
using namespace std;

template <typename T>

T Addition(T iNo1, T iNo2)
{
    T Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    int iValue1 = 11, iValue2 = 21, iRet = 0;
    float fValue1 = 11.1f, fValue2 = 21.34f, fRet = 0.0f;
    double dValue1 = 11.999999, dValue2 = 21.32342, dRet = 0.0;

    iRet = Addition(iValue1, iValue2);
    fRet = Addition(fValue1, fValue2);
    dRet = Addition(dValue1, dValue2);

    cout << "Addition is : " << iRet << endl;
    cout << "Addition is : " << fRet << endl;
    cout << "Addition is : " << dRet << endl;

    return 0;
}