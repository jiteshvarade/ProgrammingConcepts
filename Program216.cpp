#include <iostream>
using namespace std;

typedef struct Node 
{
    int iData;
    struct Node * Next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    public :
        PNODE First;
        int Count;

        SinglyLL()
        {
            First = NULL;
            Count = 0;
        }

        void InsertFirst(int iNo);

        void InsertLast(int iNo);

        void InsertPos(int iNo, int iPos);

        void DeleteFirst();

        void DeleteLast();

        void DeletePos(int iPos);

        void Display();
};

int main()
{
    SinglyLL obj();

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    return 0;
}