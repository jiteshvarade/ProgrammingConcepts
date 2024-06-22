import java.util.*;
import java.io.*;

class Program314
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file : ");
        String FileName = sobj.nextLine();

        try
        {
            FileInputStream fobj = new FileInputStream(FileName);
            byte Arr[] = new byte[100];

            fobj.read(Arr);
            String Str = new String(Arr);

            System.out.println(Str);

            fobj.close();

        }
        catch(Exception eobj)
        {
            System.out.println("Exception occered.");
        }

        sobj.close();
    }
}