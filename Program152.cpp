#include <iostream>
using namespace std;

class Array
{
    private :
        int *Arr;
        int iSize;

    public :
        Array(int x)                
        {
            iSize = x;
            Arr = new int[iSize];   
        }

        ~Array()
        {
            delete []Arr;   
        }

        void Acccept()                  
        {
            cout << "Please Enter the elements : " << endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()              
        {
            cout << "Elelmtns of the array are : " << endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << "\t";
            }
            cout<<endl;
        }

        int AdditionEven()
        {
            int iSum = 0;
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iSum += Arr[iCnt];
                }
            }

            return iSum;
        }
};          

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout << "Enterr the number of elemenets you want to store : " << endl;
    cin >> iLength;

    Array *aobj = new Array(iLength);

    aobj->Acccept();
    aobj->Display();

    iRet = aobj->AdditionEven();
    
    cout << "Addition of even elements from array is : " << iRet << endl;

    delete aobj;

    return 0;
}