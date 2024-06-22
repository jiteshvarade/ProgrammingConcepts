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
    float iValue1 = 0;
    float iValue2 = 0;
    float fRet = 0;

    cin >> iValue1;
    cin >> iValue2;

    fRet = Addition(iValue1, iValue2);

    cout << "Addition is : " << fRet;

    return 0;
}