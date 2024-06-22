#include <iostream>
using namespace std;

class Array
{
    private :
        int *Arr;
        int iSize;

    public :
        Array(int x)                // Parametrised Constructor
        {
            iSize = x;
            Arr = new int[iSize];   // Actual constructor which allocate resources!!
        }

        ~Array()// Hycha call object chi memory delete karchya adhi hoto         // Destructor
        {
            delete []Arr;   // Adhi square brackets nahi lehele ki to phakta pahila element la delete krto!
        }

        void Acccept()                  // Memeber Functions
        {
            cout << "Please Enter the elements : " << endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()              // Memeber Functions
        {
            cout << "Elelmtns of the array are : " << endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << "\t";
            }
            cout<<endl;
        }

        // Itar Logics
};          // End of class

int main()
{
    int iLength = 0;

    cout << "Enterr the number of elemenets you want to store : " << endl;
    cin >> iLength;

    Array aobj(iLength);

    aobj.Acccept();
    aobj.Display();

    return 0;
}