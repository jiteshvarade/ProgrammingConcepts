#include <iostream>
using namespace std;

class  Pattern
{
    private :
        int iRow;
        int iCol;

    public :
        Pattern(int X, int Y)
        {
            iRow = X;
            iCol = Y;
        }

        void Display()
        {
            for(int iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
            {
                for(int iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
                {
                    if(((iCnt1 == 1) || (iCnt2 == 1) || (iCnt1 == iRow) || (iCnt2 == iCol)) && (iCnt1 != iCnt2))
                    {
                        cout << "*\t";
                    }
                    else if(iCnt1 == iCnt2)
                    {
                        cout << "$\t";
                    }
                    else if(iCnt1 > iCnt2)
                    {
                        cout << "0\t";
                    }
                    else if(iCnt1 < iCnt2)
                    {
                        cout << "1\t";
                    }
                }
                cout << "\n";
            }
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter no of rows : " << endl;
    cin >> iValue1;

    cout << "Enter o of columns : " << endl;
    cin >> iValue2;

    Pattern *pobj = new Pattern(iValue1, iValue2);

    pobj->Display();

    delete pobj;

    return 0;
}