#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        // Logics

        void SelectionSort()
        {
            int iTemp = 0;
            int min_index = 0;
            int i = 0, j = 0;

            for(i = 0; i < iSize; i++)
            {
                min_index = i;
                for(j = i+1; j < iSize; j++)
                {
                    if(Arr[j] < Arr[min_index])
                    {
                        min_index = j;
                    }
                    iTemp = Arr[i];
                    Arr[j] = Arr[min_index];
                    Arr[min_index] = iTemp;
                }
            }
        }

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout << "After Selection sort :" << endl;
    aobj->SelectionSort();
    aobj->Display();

    delete aobj;

    return 0;
}