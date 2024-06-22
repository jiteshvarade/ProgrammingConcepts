#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private :
        T No1;
        T No2;

    public :
        Arithmetic(T A, T B);

        T Addition();
        T Subtraction();
};

template <class T>
Arithmetic<T> :: Arithmetic(T A, T B)
{
    this->No1 = A;
    this->No2 = B;
}

template <class T>
T Arithmetic<T> :: Addition()
{
    T Ans;
    Ans = this->No1 + this->No2;
    return Ans;
}

template <class T>
T Arithmetic<T> :: Subtraction()
{
    T Ans;
    Ans = this->No1 - this->No2;
    return Ans;
}

int main()
{
    Arithmetic<int> aobj1(10,20);
    Arithmetic<float> aobj2(10.5f,20.33f);
    Arithmetic<double> aobj3(60.5,24.5555555);

    cout << "Addition of numbers is : " << aobj1.Addition() << endl;
    cout << "Addition of numbers is : " << aobj2.Addition() << endl;
    cout << "Addition of numbers is : " << aobj3.Addition() << endl;

    cout << "Addition of numbers is : " << aobj1.Subtraction() << endl;
    cout << "Addition of numbers is : " << aobj2.Subtraction() << endl;
    cout << "Addition of numbers is : " << aobj3.Subtraction() << endl;

    return 0;
}