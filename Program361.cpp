#include <iostream>
using namespace std;

template <typename T>

void Swap(T &Value1, T &Value2)
{
    T Temp;
    Temp = Value1;
    Value1 = Value2;
    Value2 = Temp;
}

int main()
{
    int iValue1 = 10, iValue2 = 20;
    float fValue1 = 10.5f, fValue2 = 20.7f;
    double dValue1 = 10.9999, dValue2 = 33.5;

    cout << "Before Swapping : " << endl;
    cout << "Value of iValue1 is : " << iValue1 << endl;
    cout << "Value of iValue2 is : " << iValue2 << endl;

    cout << "Value of fValue1 is : " << fValue1 << endl;
    cout << "Value of fValue2 is : " << fValue2 << endl;

    cout << "Value of dValue1 is : " << dValue1 << endl;
    cout << "Value of dValue2 is : " << dValue2 << endl;

    Swap(iValue1, iValue2);
    Swap(fValue1, fValue2);
    Swap(dValue1, dValue2);

    cout << "After Swapping : " << endl;
    cout << "Value of iValue1 is : " << iValue1 << endl;
    cout << "Value of iValue2 is : " << iValue2 << endl;

    cout << "Value of fValue1 is : " << fValue1 << endl;
    cout << "Value of fValue2 is : " << fValue2 << endl;

    cout << "Value of dValue1 is : " << dValue1 << endl;
    cout << "Value of dValue2 is : " << dValue2 << endl;

    return 0;
}