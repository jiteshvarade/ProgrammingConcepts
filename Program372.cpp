#include <iostream>
using namespace std;

template <class T>
class CustomArray
{
    private : 
        T* Arr;
        int Size;
    public :
        CustomArray(int A);
        ~CustomArray();
        void Accept();
        T Addition();
};

template <class T>
CustomArray<T>::CustomArray(int A)
{
    this->Size = A;
    this->Arr = new T[Size];
}

template <class T>
CustomArray<T> :: ~CustomArray()
{
    delete[] this->Arr;
}

template <class T>
void CustomArray<T>::Accept()
{
    cout << "Enter the elements : " << endl;
    int iCnt = 0;
    for(iCnt = 0; iCnt < this->Size; iCnt++)
    {
        cin >> this->Arr[iCnt];
    }
}

template <class T>
T CustomArray<T>::Addition()
{
    int iCnt = 0;
    T Sum = this->Arr[0];
    for(iCnt = 1; iCnt < Size; iCnt++)
    {
        Sum += this->Arr[iCnt];
    }

    return Sum;
}

int main()
{
    int Value = 0;
    int iCnt = 0;
    int iRet = 0;
    cout << "Enter the size of array : ";
    cin >> Value;

    CustomArray<float> caobj(Value);
    caobj.Accept();
    iRet = caobj.Addition();

    cout << "Sum of elements of array is : " << iRet << endl;

    return 0;
}