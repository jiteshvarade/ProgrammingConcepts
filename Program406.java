
class node       // struct node
{
    public int data;
    public node next;   // struct node *next

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;
    private int Count;

    public SinglyLL()
    {
        this.first = null;
        this.Count = 0;
    }

    // functions
    
}

class Program406
{
    public static void main(String arg[])
    {
        SinglyLL obj = new SinglyLL();
    }
}