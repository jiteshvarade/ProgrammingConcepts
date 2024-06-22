import java.util.*;
import java.io.*;

class Program310
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = "";

        System.out.println("Enter the name of file : ");
        FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bRet = false;
            bRet = fobj.exists();
            if(bRet)
            {
                System.out.println("Name of file is : "+fobj.getName());
                System.out.println("Absolute path of file is : "+fobj.getAbsolutePath());
                System.out.println("File size is : "+fobj.length());
                System.out.println("We can read from file "+fobj.canRead());
                System.out.println("We can write from file "+fobj.canWrite());
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occered.");
        }

        sobj.close();
    }
}