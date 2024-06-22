import java.util.*;
import java.io.*;

class Program347
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

            String Str = Hstr.trim();  // to remove extra white spaces from the string

            String[] Tokens = Str.split(" "); // argument passed is space character // split method : ky ala ki string split kara

            System.out.println("Name of file : "+Tokens[0]);
            System.out.println("Size of file : "+Tokens[1]);
            
            
            
            fiobj.close();
        }
        catch(Exception eobj)
        {
            eobj.printStackTrace();
        }

        sobj.close();
    }
}