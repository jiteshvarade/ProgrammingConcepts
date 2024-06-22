#include <iostream>
using namespace std;

template <class T>
class CustomArray
{
    private : 
        T* Arr;
        int Size;
    public :
        CustomArray(T* A, int B);

        T Addition();
};

template <class T>
CustomArray<T>::CustomArray(T* A, int B)
{
    Arr = A;
    Size = B;
}

template <class T>
T CustomArray<T>::Addition()
{
    int iCnt = 0;
    T Sum = Arr[0];
    for(iCnt = 1; iCnt < Size; iCnt++)
    {
        Sum += Arr[iCnt];
    }

    return Sum;
}

int main()
{

    // int ///////////////////////////////////////////////////
    int Value = 0;
    int iCnt = 0;
    int iRet = 0;
    cout << "Enter the size of array : ";
    cin >> Value;

    int* array = new int[Value];
    cout << "Enter the numbers of array : " << endl;
    for(iCnt = 0; iCnt < Value; iCnt++)
    {
        cin >> array[iCnt];
    }

    CustomArray<int> caobj(array, Value);
    iRet = caobj.Addition();

    cout << "Sum of elements of array is : " << iRet << endl;


    // float///////////////////////////////////////////////////
    cout << "Enter the size of array : ";
    cin >> Value;

    float* array1 = new float[Value];
    cout << "Enter the numbers of array : " << endl;
    for(iCnt = 0; iCnt < Value; iCnt++)
    {
        cin >> array1[iCnt];
    }

    CustomArray<float> caobj1(array1, Value);
    float fRet = caobj1.Addition();

    cout << "Sum of elements of array is : " << fRet << endl;

    delete []array;

    return 0;
}