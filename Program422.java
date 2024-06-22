// Customised Database Management System

class node
{
    private static int Counter = 1;
    public int Rno;
    
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(String A, String B, int C)
    {
        Rno = Counter;
        Counter++;

        Name = A;
        City = B;
        Marks = C;
        next = null;
    }
}

class DBMS
{
    private node first;

    public DBMS()
    {
        first = null;
        System.out.println("DBMS initailised succesfully...");
        System.out.println("Student Table gets created succesfully...");
    }

    // InsertLast
    // insert into table student values(1,'Amit','Pune',89);
    public void InsertIntoTable(String Name, String City, int Marks)
    {
        node newn = new node(Name,City,Marks);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        System.out.println("One record gets inserted succesfully...");
    }

    // Display
    // select * from student
    public void SelectStarFrom()
    {
        System.out.println("Data from the student table is : ");

        node temp = first;

        System.out.println("--------------------------------------------------------------");
        while(temp != null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        System.out.println("--------------------------------------------------------------");
    }

    // select * from student where City = 'Pune';
    public void SelectStarFromWhereCity(String str)
    {
        System.out.println("Data from the student table where City is : "+str);

        node temp = first;

        System.out.println("--------------------------------------------------------------");
        while(temp != null)
        {
            if(temp.City.equals(str))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
        System.out.println("--------------------------------------------------------------");
    }

    // select Count(Marks) from student;
    public void SelectCount()
    {
        node temp = first;
        int iCnt = 0;

        while(temp != null)
        {
            temp = temp.next;
            iCnt++;
        }

        System.out.println("Number of records in the table : "+iCnt);
    }

    // select Sum(Marks) from student
    public void SelectSum()
    {
        node temp = first;
        int iSum = 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp.next;
        }

        System.out.println("Number of records in the table : "+iSum);
    }

    // select Avg(Marks) from student
    public void SelectAvg()
    {
        node temp = first;
        int iSum = 0;
        int iCnt = 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            iCnt++;
            temp = temp.next;
        }

        System.out.println("Average of Marks column is : "+(float)((float)iSum/(float)iCnt));
    }

    // select Min(Marks) from student
    public void SelectMin()
    {
        node temp = first;
        int iMin = 0;

        if(temp != null)
        {
            iMin = temp.Marks;
        }

        while(temp != null)
        {
            if(temp.Marks < iMin)
            {
                iMin = temp.Marks;
            }
            temp = temp.next;
        }

        System.out.println("Minimum of Marks column is : "+iMin);
    }

    // select Max(Marks) from student
    public void SelectMax()
    {
        node temp = first;
        int iMax = 0;

        if(temp != null)
        {
            iMax = temp.Marks;
        }

        while(temp != null)
        {
            if(temp.Marks > iMax)
            {
                iMax = temp.Marks;
            }
            temp = temp.next;
        }

        System.out.println("Maximum of Marks column is : "+iMax);
    }

    // select * from student where Name = '______';
    public void SelectStarFromWhereName(String str)
    {
        System.out.println("Data from the student table where Name is : "+str);

        node temp = first;

        System.out.println("--------------------------------------------------------------");
        while(temp != null)
        {
            if(temp.Name.equals(str))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
        System.out.println("--------------------------------------------------------------");
    }

    // update student set City = "____" where Rno = ___;
    public void UpdateCity(int no, String Str)
    {
        node temp = first;

        while(temp != null) 
        {
            if(temp.Rno == no)
            {
                temp.City = Str;
                break;
            }
            temp = temp.next;
        }

        System.out.println("Record gets updated");
    }

    // delete from student where Rno = ____;
    public void DeleteFrom(int no)
    {
        node temp = first;

        // Database is empty
        if(temp == null)
        {
            return;
        }

        // if first node is the targeted node
        if(temp.Rno == no)
        {   
            first = first.next;
        }

        while (temp.next != null) 
        {
            if(temp.next.Rno == no)
            {
                temp.next = temp.next.next;
                break;
            }   
            temp = temp.next; 
        }



        System.out.println("Record gets Deleted");
    }
}

class Program422
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();

        obj.InsertIntoTable("Amit","Pune",89);
        obj.InsertIntoTable("Pooja","Mumbai",95);
        obj.InsertIntoTable("Gauri","Pune",90);
        obj.InsertIntoTable("Amit","Nagar",81);
        obj.InsertIntoTable("Rahul","Satara",80);
        obj.InsertIntoTable("Neha","Pune",78);

        obj.SelectStarFrom();

        obj.SelectStarFromWhereCity("Pune");

        obj.SelectCount();

        obj.SelectSum();

        obj.SelectAvg();

        obj.SelectMin();

        obj.SelectMax();

        obj.SelectStarFromWhereName("Amit");

        obj.UpdateCity( 3, "Nashik");
        obj.SelectStarFrom();

        obj.DeleteFrom(5);
        obj.SelectStarFrom();

        obj.InsertIntoTable("Rukmini","Kolhapur",77);
        obj.SelectStarFrom();
    }
}

/*
Supported Queries

1: insert into student values('Amit','Pune',78);
2: select * from student;
3: select * from student where City = '_______';
4: select count(Marks) from student;
5: select sum(Marks) from student;
6: select avg(Marks) from student;
7: select min(Marks) from student;
8: select max(Marks) from student;
9: select * from student where Name = '________';
10: update student set City = "____" where Rno = ___;
11: delete from student where Rno = ____;
*/

