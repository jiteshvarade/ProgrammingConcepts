import java.util.*;
import java.io.*;

class Program315
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter file name whose data you want to copy : ");
        String FileName1 = sobj.nextLine();

        System.out.println("Enter file name where you want to copy data : ");
        String FileName2 = sobj.nextLine();

        try
        {
            File fobj1 = new File(FileName1);
            if(fobj1.exists())
            {
                System.out.println("Source file is not existing...");
                sobj.close();
                return;
            }

            File fobj2 = new File(FileName2);
            fobj2.createNewFile();

            FileOutputStream fiobj1 = new FileOutputStream(FileName1);
            FileInputStream fiobj2 = new FileInputStream(FileName2);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fiobj2.read(Buffer)) != 1)
            {
                fiobj1.write(Buffer,0,iRet);
            }

            fiobj1.close();
            fiobj2.close();
        }
        catch(Exception eobj)
        {

        }

        sobj.close();
    }
}