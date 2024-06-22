import java.util.*;
import java.io.*;

class Program307
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

            boolean bret = false;

            bRet = fobj.exists();
            if(bRet == true)
            {
                System.out.println("File is present.");
            }
            else
            {
                System.out.println("There is no such file.");
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occered.");
        }

        sobj.close();
    }
}