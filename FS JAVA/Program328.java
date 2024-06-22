import java.util.*;
import java.io.*;

class Program328
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

            System.out.println(Header);

            fiobj.close();
        }
        catch(Exception eobj)
        {
            eobj.printStackTrace();
        }

        sobj.close();
    }
}