#include <iostream>
using namespace std;

class Arithmetic
{
    private :
        int No1;
        int No2;

    public :
        Arithmetic(int A, int B)
        {
            this->No1 = A;
            this->No2 = B;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithmetic aobj1(10,20);

    cout << "Addition of numbers is : " << aobj1.Addition();

    return 0;
}