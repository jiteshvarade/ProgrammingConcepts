#include <iostream>
using namespace std;

int Addition(int iNo1, int iNo2)
{
    int Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cin >> iValue1;
    cin >> iValue2;

    iRet = Addition(iValue1, iValue2);

    cout << "Addition is : " << iRet;

    return 0;
}