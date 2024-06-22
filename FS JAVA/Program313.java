import java.util.*;
import java.io.*;

class Program313
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

            FileOutputStream fobj = new FileOutputStream(FileName, true);

            byte arr[] = Data.getBytes();

            fobj.write(arr);
            fobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occered.");
        }

        sobj.close();
    }
}