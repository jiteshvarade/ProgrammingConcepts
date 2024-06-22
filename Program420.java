// Customised Database Management System

class node
{
    public int Rno;
    public String Name;
    public String City;
    public int Marks;
    
    public node next;

    public node(int A, String B, String C, int D)
    {
        this.Rno = A;
        this.Name = B;
        this.City = C;
        this.Marks = D;
    }
}

class DBMS
{
    private node first;
    private int Count;

    public DBMS()
    {
        this.first = null;
        this.Count = 0;
        System.out.println("DBMS initialised successfully");
        System.out.println("Student Table gets created successfully...");
    }

    // InsertLast()
    // Query : insert into table student values(1, "amit", 'pune0, 78')
    public void InsertIntoTable(int Rno, String Name, String City, int Marks)  
    {
        node newn = new node(Rno, Name, City, Marks);

        if(first == null)
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
        }

        System.out.println("One record gets inserted successfully...");
    }

    // Display
    // select * from student
    public void SelectStarFrom()
    {
        System.out.println("Data from the student table is : ");

        node temp = first;

        System.out.println("----------------------------------------------------------------------");
        while(temp != null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        System.out.println("----------------------------------------------------------------------");
    }
}

class Program420
{
    public static void main(String arg[])
    {
        DBMS obj = new DBMS();

        obj.InsertIntoTable(1, "Amit", "Pune", 89);
        obj.InsertIntoTable(2, "Pooja", "Mumbai", 95);
        obj.InsertIntoTable(3, "Rahul", "Satara", 80);
        obj.InsertIntoTable(4, "Neha", "Pune", 78);

        obj.SelectStarFrom();
    }
}