#include <iostream>
using namespace std;

typedef struct Node 
{
    int iData;
    struct Node * Next;
}NODE, *PNODE;

class SinglyLL
{
    private :
        PNODE First;
        int iCount;

    public :
        SinglyLL();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeletePos(int iPos);
        int CountNode();
        void Display();
};

SinglyLL :: SinglyLL()
{   
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE NewNode = new NODE;
    if(NewNode == NULL)
    {
        cout<<"Memory allocation failed\n";
    }
    else
    {
        NewNode->iData = iNo;
        NewNode->Next = NULL;

        NewNode->Next = First;
        First = NewNode;
        iCount++;
    }
}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE NewNode = new NODE;
    if(NewNode == NULL)
    {
        cout<<"Memory allocation failed\n";
    }
    else
    {
        NewNode->iData = iNo;
        NewNode->Next = NULL;

        if(First == NULL)
        {
            First = NewNode;
        }
        else
        {
            PNODE Temp = First;
            for(int iCnt = 1; iCnt < iCount; iCnt++)
            {
                Temp = Temp->Next;
            }
            Temp->Next = NewNode;
        }
        iCount++;
    }
}

void SinglyLL :: InsertPos(int iNo, int iPos)
{
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(iNo);
    }
    else if(iPos > (iCount + 1))
    {
        cout << "There are less elements in the linked list \n";
    }
    else
    {
        PNODE Temp = First;
        PNODE NewNode = new NODE;
        NewNode->iData = iNo;
        NewNode->Next = NULL;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            Temp = Temp->Next;
        }
        NewNode->Next = Temp->Next;
        Temp->Next = NewNode;
        iCount++;
    }
}

void SinglyLL :: DeleteFirst()
{
    PNODE Temp = First;
    if(First == NULL)
    {
        cout << "Linked list is empty cannot delete element\n";
    }
    else if(iCount == 1)
    {
        First = NULL;
    }
    else
    {
        First = Temp->Next;
        Temp->Next = NULL;
    }
    delete Temp;
    Temp = NULL;
    iCount--;
}

void SinglyLL :: DeleteLast()
{
    PNODE Temp = First;
    if(First == NULL)
    {
        cout << "Linked list is empty cannot delete element\n";
    }
    else if(iCount == 1)
    {
        First = NULL;
        delete Temp;
    }
    else
    {
        while(Temp->Next->Next != NULL)
        {
            Temp = Temp->Next;
        }
        delete Temp->Next;
        Temp->Next = NULL;
    }
    Temp = NULL;
    iCount--;
}

void SinglyLL :: DeletePos(int iPos)
{
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (iCount))
    {
        DeleteLast();
    }
    else if(iPos > (iCount))
    {
        cout << "There are less elements in the linked list \n";
    }
    else
    {
        PNODE Temp = First;
        PNODE ToDelete = NULL;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            Temp = Temp->Next;
        }
        ToDelete = Temp->Next;
        Temp->Next = ToDelete->Next;
        ToDelete->Next = NULL;
        delete ToDelete;
        ToDelete = NULL;
        Temp = NULL;

        iCount--;
    }
}

int SinglyLL :: CountNode()
{
    return iCount;
}

void SinglyLL :: Display()
{
    PNODE Temp = First;
    while(Temp != NULL)
    {
        cout<<"| "<<Temp->iData<<" | -> ";
        Temp = Temp->Next;
    }
    printf("NULL\n");
}

int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iLoc = 0;
    int iRet = 0;

    while(1)
    {   
        cout <<"---------Menu----------\n";
        cout <<"1.Insert at beggining\n2.Insert at end\n3.Insert at any position\n4.Delete from begining\n5.Delete from end\n6.Delete from any position\n7.Display elements from Linked List\n8.Number of elements in Linked List\n9.Exit\n";
        cout <<"Enter your choice : ";
        cin >> iChoice;

        switch(iChoice)
        {
            case 1 : 
                cout << "Enter element : ";
                cin >> iValue;
                obj.InsertFirst(iValue);
                break;
            case 2 :
                cout << "Enter element : ";
                cin >> iValue;
                obj.InsertLast(iValue);
                break;
            case 3 :
                cout << "Enter element : ";
                cin >> iValue;
                cout << "Enter position : ";
                cin >> iLoc;
                obj.InsertPos(iValue, iLoc);
                break;
            case 4 : 
                obj.DeleteFirst();
                break;
            case 5 : 
                obj.DeleteLast();
                break;
            case 6 :    
                cout << "Enter position : ";
                cin >> iLoc;
                obj.DeletePos(iLoc);
                break;
            case 7 :
                obj.Display();
                break;
            case 8 :
                iRet = obj.CountNode();
                cout << "Number of element in the linked list are : "<<iRet<<"\n";
                break;
            case 9 : 
                return 0;
            default : 
                cout << "Invalid choice! \n";
                break;
        }    
    }
}