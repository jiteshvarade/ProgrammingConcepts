#include <iostream>
using namespace std;

class Factorail
{
private:
    int iNo;

public:
    Factorail(int iNum)
    {
        iNo = iNum;
    }

    int Fact()
    {
        int iCnt = 0;
        int iFact = 0;
        iFact = 1;

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact *= iCnt;
        }
        return iFact;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number : " << endl;
    cin >> iValue;

    Factorail fobj(iValue);
    iRet = fobj.Fact();

    cout << "Factorial is : " << iRet << endl;

    return 0;
}