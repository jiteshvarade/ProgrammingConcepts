import java.util.*;
import java.io.*;

class Program311
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = "";

        System.out.println("Enter the name of file : ");
        FileName = sobj.nextLine();

        try
        {
            System.out.println("Enter the data you want to enter into file : ");
            String Data = sobj.nextLine();

            FileWriter fwobj = new FileWriter(FileName);
            fwobj.write(Data);
            fwobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occered.");
        }

        sobj.close();
    }
}