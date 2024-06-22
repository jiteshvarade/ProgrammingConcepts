import java.util.*;
import java.io.*;

class Program330
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

            System.out.println("Length of Header String is : "+Hstr.length());

            String Str = Hstr.trim();  // to remove extra white spaces from the string

            System.out.println("Length of final string is : "+Str.length());

            fiobj.close();
        }
        catch(Exception eobj)
        {
            eobj.printStackTrace();
        }

        sobj.close();
    }
}