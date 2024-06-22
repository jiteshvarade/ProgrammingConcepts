import java.util.*;
import java.io.*;

class Program329
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of packed file that you to unpack : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);

        try
        {
            FileInputStream fiobj = new FileInputStream(fobj);
            
            byte[] Header = new byte[100];

            fiobj.read(Header, 0 ,100);

            String Hstr = new String(Header);

            System.out.println(Hstr);

            fiobj.close();
        }
        catch(Exception eobj)
        {
            eobj.printStackTrace();
        }

        sobj.close();
    }
}