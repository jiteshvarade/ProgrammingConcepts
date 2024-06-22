import java.util.*;
import java.io.*;

class Program307
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            String FileName = "";

            System.out.println("Enter the name of file : ");
            FileName = sobj.nextLine();

            File fobj = new File(FileName);

            boolean bRet = false;

            bRet = fobj.createNewFile();

            if(bRet == true)
            {
                System.out.println("File gets successfully created.");
            }
            else
            {
                System.out.println("Uable to create file.");
            }

            sobj.close();
        }
        catch(IOException io_obj)
        {
            System.out.println("Exception occered.");
        }
    }
}