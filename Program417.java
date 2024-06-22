//Doubly Linear Linked list in java

class node       // struct node
{
    public int data;
    public node next;
    public node prev;   // struct node *next

    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null; // #
    }
}

class DoublyLL
{
    private node first;
    private int Count;

    public DoublyLL()
    {
        this.first = null;
        this.Count = 0;
    }

    // functions
    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            newn.next = this.first;
            this.first.prev = newn; // #
            this.first = newn;
        }
        this.Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            node temp = this.first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp; //#
        }
        this.Count++;
    }

    public void InsertAtPos(int no, int ipos)
    {
        node newn = new node(no);

        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == (Count + 1))
        {
            InsertLast(no);
        }
        else if(ipos > (Count + 1))
        {
            System.out.println("There are less elements in the Linked List");
        }
        else 
        {
            node temp = this.first;

            for(int iCnt = 1; iCnt < (ipos - 1); iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn; // #
            temp.next = newn;
            newn.prev = temp; // #
            this.Count++;
        }
    }

    public void DeleteFirst()
    {
        if(this.first == null)
        {
            System.out.println("Linked list is empty can not delete first element");
        }
        else if(this.first.next == null)
        {
            node temp = this.first;
            this.first = null;
            temp = null;
            this.Count--;

        }
        else
        {
            node temp = this.first;
            this.first = this.first.next;
            this.first.prev = null; // #
            temp.next = null;
            temp = null;
            this.Count--;
        }
    }

    public void DeleteLast()
    {
        if(this.first == null)
        {
            System.out.println("Linked list is empty can not delete first element");
        }
        else if(this.first.next == null)
        {
            node temp = this.first;
            this.first = null;
            temp = null;
            this.Count--;
        }
        else
        {
            node temp = this.first;
            node target = null;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            target = temp.next;
            temp.next = null;
            temp = null;
            target.prev = null; // #
            target = null;
            this.Count--;
        }
    }

    public void DeleteAtPos(int ipos)
    {
        if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == this.Count)
        {
            DeleteLast();
        }
        else if(ipos > this.Count)
        {
            System.out.println("There are less elements in the Linked List");
        }
        else
        {
            node temp = this.first;
            node target = null;

            for(int iCnt = 1; iCnt < (ipos - 1); iCnt++)
            {
                temp = temp.next;
            }

            target = temp.next;
            temp.next = target.next;

            target.next.prev = temp; // #

            target.next = null;
            target.prev = null;  // #
            target = null;
            temp = null;
            this.Count--;
        }
    }

    public void Display()
    {
        node temp = this.first;

        if(temp == null)
        {
            System.out.println("Linked list is empty");
        }
        else
        {
            System.out.println("null <=>");
            while(temp != null)
            {
                System.out.print("| " +temp.data+ " | <=>");
                temp = temp.next;
            }
            System.out.println("null");
        }
        temp = null;
    }

    public int Count(){return Count;}
}

class Program417
{
    public static void main(String arg[])
    {
        DoublyLL obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        int iRet = obj.Count();
        System.out.println("Count of elements in Linked List : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Count of elements in Linked List : "+iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Count of elements in Linked List : "+iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Count of elements in Linked List : "+iRet);

        obj.InsertAtPos(99, 3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Count of elements in Linked List : "+iRet);

        obj.DeleteAtPos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Count of elements in Linked List : "+iRet);
    }
}